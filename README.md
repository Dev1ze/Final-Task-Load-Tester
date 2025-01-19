# Нагрузочное тестирование Advantage Shopping

## Описание

Advantage Shopping — это тестовая платформа, созданная компанией Micro Focus, имитирующая полноценный интернет-магазин по продаже техники. Сайт предназначен для проведения нагрузочного тестирования, позволяя моделировать реальные пользовательские сценарии, такие как поиск товаров, добавление в корзину и оформление заказов.

![Advantage.png](https://github.com/user-attachments/assets/ee22dca8-211e-4bc0-9e51-228591c940f4)

## Цели проекта

- Разработка скриптов для моделирования пользовательского поведения с использованием программы Virtual User Generator поддерживающая язык C.
- Формулировка критериев, которым должен соответствовать тестируемый сайт.
- Определение максимальной производительности системы путем нагрузки виртуальными пользователями в Controller.
- Оценка стабильности работы системы при различных уровнях нагрузки.
- Сбор данных о времени отклика сервера и использовании ресурсов процессора и памяти.
- Подготовка итогового отчета по результатам тестирования.

## Разработка скриптов

| Название пользовательского поведение | Название скрипта |
| --- | --- |
| Покупка товара | UC5_BuyingProduct |
| Логин | UC2_LoginLogout |
| Регистрация новых пользователей | UC1_RandomUserRegistration |
| Удаление товара | UC6_DeleteProduct |
| Поиск товара | UC7_SeachProduct |
| Добавление товара в корзину | UC4_AddToCart |

### Несколько отрывков из скриптов

1. Создания json-тела для оплаты товаров

```c
for (i = 1; i <= productCount; i++) 
{
    totalPrice = totalPrice + atoi(lr_paramarr_idx("price", i));
    sprintf(temp, "{\"hexColor\":\"%s\",\"productId\":%s,\"quantity\":%s,\"hasWarranty\":%s}",
    lr_paramarr_idx("UpdatedColorCode", i),
    lr_paramarr_idx("UpdatedProductId", i),
    lr_paramarr_idx("UpdatedQuantity", i),
    lr_paramarr_idx("hasWarranty", i));
    if (i > 1) 
    {
        strcat(body, ",");
    }
    strcat(body, temp);
}
web_custom_request("{UserID}",
    "URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{UserID}",
    "Method=POST",
    ...
    ...
    "Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"{UserID}\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":{number},\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"{password}\",\"Transaction_SafePay_UserName\":\"{userName}\",\"Transaction_TransactionDate\":\"{currentDate}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{street}\",\"Shipping_Address_City\":\"{city}\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"{firstName} {lastName}\",\"Shipping_Address_CustomerPhone\":{number},\"Shipping_Address_PostalCode\":{code},\"Shipping_Address_State\":\"{state}\",\"Shipping_Cost\":{strTotalPrice},\"Shipping_NumberOfProducts\":{strProductCount},\"Shipping_T"
        "rackingNumber\":0},\"purchasedProducts\":[{body}]}",
```

Пример json-тела для оплаты

```json
{
    "orderPaymentInformation":
        {
            "Transaction_AccountNumber":"{UserID}",
            "Transaction_Currency":"USD",
            "Transaction_CustomerPhone":{number},
            "Transaction_MasterCredit_CVVNumber":"",
            "Transaction_MasterCredit_CardNumber":"4886",
            "Transaction_MasterCredit_CustomerName":"",
            "Transaction_MasterCredit_ExpirationDate":"122027",
            "Transaction_PaymentMethod":"SafePay",
            "Transaction_ReferenceNumber":0,
            "Transaction_SafePay_Password":"{password}",
            "Transaction_SafePay_UserName":"{userName}",
            "Transaction_TransactionDate":"{currentDate}",
            "Transaction_Type":"PAYMENT"
        },
    "orderShippingInformation":
        {
            "Shipping_Address_Address":"{street}",
            "Shipping_Address_City":"{city}",
            "Shipping_Address_CountryCode":236,
            "Shipping_Address_CustomerName":"{firstName} {lastName}",
            "Shipping_Address_CustomerPhone":{number},
            "Shipping_Address_PostalCode":{code},
            "Shipping_Address_State":"{state}",
            "Shipping_Cost":{strTotalPrice},
            "Shipping_NumberOfProducts":{strProductCount},
            "Shipping_T"
            "rackingNumber":0
        },
        "purchasedProducts":[
            {
                "hexColor":"414141",
                "productId":21,
                "quantity":1,
                "hasWarranty":false
            },
            {
                "hexColor":"3683D1",
                "productId":27,
                "quantity":1,
                "hasWarranty":false
            }]}
```

1. Генерация уникальных пользовательских данных для регистрации

```c
for (j = 0; j < 5; j ++) 
    {
        randomLength = (rand() % (maxLength - minLength + 1)) + minLength;
        for (i = 0; i < randomLength; i++) randomString[i] = (char)('a' + rand() % 26);
        randomString[randomLength] = '\0'; 
        strcpy(userDatas[j], randomString);
        lr_save_string(userDatas[j], "userData");
    }
    for (i = 0; i < 3; i++) 
    {
        userDatas[6][0] = '\0'; // Обнуляем строку перед генерацией нового пароля
        passwordPart[i] = (char)('a' + rand() % 26); // Генерация пароля
    }
    strcat(userDatas[6], passwordPart);
    for (i = 0; i < 3; i++) passwordPart[i] = (char)('A' + rand() % 26); 
    strcat(userDatas[6], passwordPart);
    randomNumber = rand() % 1000;
    sprintf(numberStr, "%d", randomNumber);
    strcat(userDatas[6], numberStr);
    strcat(userDatas[1], "@mail.ru");	// Mail
    userDatas[5][0] = '\0';  // Number
    randomNumber = rand() % 1000;
    sprintf(numberStr, "%d", randomNumber);
    strcat(userDatas[5], numberStr);
    userDatas[7][0] = '\0';
    randomNumber = rand() % 1000;
    sprintf(numberStr, "%d", randomNumber);
    strcat(userDatas[7], numberStr);
```

> *Пример: 
username - wtvqltexr, password - ytfPMD162, email - kuletxq@mail.ru
firstName - nblklwkjz, lastName - azaakikvv, address1 - pxijijs*
> 

### Критерии успешности теста

- Время отклика 90% операций в транзакции не должны превышать 13 сек.
- Количество ошибок каждой транзакции не должно превышать 5% от общего количества транзакций
- Отклонение фактической нагрузки от профиля в каждой транзакции не должно превышать 5% в меньшую сторону

    | Запрос | Интенсивность в час |
    | --- | --- |
    | Главная страница | 520 |
    | Вход в систему | 320 |
    | Проверка пользовательских данных перед покупкой | 55 |
    | Добавление товара в корзину | 186 |
    | Выбор категории товаров | 317 |
    | Оплата | 55 |
    | Переход в корзину | 95 |
    | Удаление продукта | 41 |
    | Выход из системы | 200 |
    | Страница регистрации | 70 |
    | Регистрация пользователя | 70 |
    | Поиск продукта | 130 |
    | Переход на страницу продукта | 186 |

## Запуск теста поиска максимума и результаты

5 ступеней нагрузки с количеством пользователей на каждой ступени 10, 20, 30, 40, 50 виртуальных пользователей

![Running Vusers.jpeg](https://github.com/user-attachments/assets/b5c4581b-3d2a-4000-91ed-0a16b710fd4c)
График 1 - Количество пользователей

### Выводы
Определена максимальная производительность системы на уровне нагрузки *4635* операций в час, и *53019* запросов в час или *200%* от уровня нагрузки. Так как следующие уровни нагрузки не соответствовали критериям успешности: время отклика 90-го перцентиля стало больше 13 секунд. 

| **Цель** | **Результат** |
| --- | --- |
| Определение максимальной производительности  | Максимальная производительность составляет *4635* операций в час. |
| Подтверждение максимальной производительности | Подтвержден максимум производительности при нагрузке в *4495* операций в час. |

![Average Transaction Response Time.jpeg](https://github.com/user-attachments/assets/e0ffa06d-f1ea-4656-8f5c-b53960c74ba0)
График 2 - Времена отклика по транзакциям  

## Утилизация ресурсов

В процессе анализа выявлены потенциальные узкие места, связанные с работой диска. На 3-й ступени наблюдается пик времени отклика, выходящий за пределы SLA (13 секунд), а на 5-й ступени более выраженный пик. Эти всплески коррелируют с увеличением показателей % Disk Time и Avg Disk Queue Length. Они отражают процент времени, когда диск был занят обработкой операций ввода-вывода, и на среднее количество операций ввода-вывода, ожидающих обработки, что означает задержки в обработке запросов. Для компьютера такие нагрузки можно считать нормальными. Но при масштабировании системы, диск может стать потенциальным узким местом

![Correlate DiskQueueLength_AddToCart.jpeg](https://github.com/user-attachments/assets/a190fa5a-658d-417a-b067-11c3bd80c67f)

![Correlate DiskQueueLength_AddToCart (legend).png](https://github.com/user-attachments/assets/587388dc-a575-4a7f-b3a9-b3c619ef813b)
График 3 - Сравнение времени отклика и утилизации диска


![](https://github.com/user-attachments/assets/4e5b0073-e623-445b-984a-fb9a908761ae)
График 4 - Утилизация процессора

![](https://github.com/user-attachments/assets/17ed7f01-39bf-45b2-ac3f-c29a48f945bb)
График 5 - Утилизация RAM
