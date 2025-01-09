Action()
{
	int i,j;
	char randomString[10]; 
	int randomLength;
	int minLength = 7;
	int maxLength = 10; 
	char userDatas[8][21]; //userDatas[username][password][firstname][lastname][address1][address2]. [12] - максимальное число сиволов слова
	int vuserId, randomNumber;
	char passwordPart[3];
	char numberStr[3];
	lr_whoami(&vuserId, NULL, NULL);

	// Инициализация генератора случайных чисел с уникальным seed
	srand(time(NULL) + vuserId); 
	
	for (j = 0; j < 5; j ++) 
	{
		randomLength = (rand() % (maxLength - minLength + 1)) + minLength;
		//lr_output_message("Рандоное число %d", randomLength);
		for (i = 0; i < randomLength; i++) randomString[i] = (char)('a' + rand() % 26); //Начинаю с числа 65 (символ 'A') и делю его на случайное число от 0 до 25
		randomString[randomLength] = '\0'; 
		strcpy(userDatas[j], randomString);
		lr_save_string(userDatas[j], "userData");
		lr_output_message("Valuse %d - %s", j, lr_eval_string("{userData}"));
	}
	
	for (i = 0; i < 3; i++) passwordPart[i] = (char)('a' + rand() % 26); // Генерация пароля
	strcat(userDatas[6], passwordPart);									 //
	for (i = 0; i < 3; i++) passwordPart[i] = (char)('A' + rand() % 26); //
	strcat(userDatas[6], passwordPart);									 //
	randomNumber = rand() % 1000;										 //
	sprintf(numberStr, "%d", randomNumber);								 //
	strcat(userDatas[6], numberStr);									 //
	
	strcat(userDatas[1], "@mail.ru");									 // Mail
	
	randomNumber = rand() % 1000;										 // Number
	sprintf(numberStr, "%d", randomNumber);								 //
	strcat(userDatas[5], numberStr);									 //
	
	randomNumber = rand() % 1000;										 // Code
	sprintf(numberStr, "%d", randomNumber);								 //
	strcat(userDatas[7], numberStr);
	
	lr_start_transaction("UC1_RandomUserRegistration");
	
	lr_save_string(userDatas[0], "userName");
	lr_output_message("userName - %s", lr_eval_string("{userName}"));
	lr_save_string(userDatas[1], "email");
	lr_output_message("email - %s", lr_eval_string("{email}"));
	lr_save_string(userDatas[2], "firstName");
	lr_output_message("firstName - %s", lr_eval_string("{firstName}"));
	lr_save_string(userDatas[3], "lastName");
	lr_output_message("lastName - %s", lr_eval_string("{lastName}"));
	lr_save_string(userDatas[4], "address1");
	lr_output_message("address1 - %s", lr_eval_string("{address1}"));
	lr_save_string(userDatas[5], "number");
	lr_output_message("number - %s", lr_eval_string("{number}"));
	lr_save_string(userDatas[6], "password");
	lr_output_message("password - %s", lr_eval_string("{password}"));
	lr_save_string(userDatas[7], "Code");
	lr_output_message("Code - %s", lr_eval_string("{Code}"));
	
	web_websocket_send("ID=0", "Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1735816816500\\\"\"},\"use_webpush\":true}", "IsBinary=0", LAST);



	lr_start_transaction("OpenLandingPage");

	//web_add_cookie("_ga_TBPYED8WSW=GS1.1.1735831776.3.1.1735831936.0.0.0; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_gid=GA1.2.392134552.1735813298; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735831932.3.1.1735831934.58.0.0; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Sec-Fetch-Dest", "document");
	web_add_header("Sec-Fetch-Mode", "navigate");
	web_add_header("Sec-Fetch-Site", "none");
	web_add_header("Priority", "u=0, i");
	web_add_header("Sec-Fetch-User", "?1");
	web_add_header("Upgrade-Insecure-Requests", "1");
	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);
	//web_add_cookie("userCart={userCart}; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Sec-Fetch-Dest", "font");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_concurrent_start(NULL);
	web_url("Roboto-Regular-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t79.inf", 
		LAST);
	
	web_add_header("Sec-Fetch-Dest", "empty");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("services.properties", 
		"URL=https://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t80.inf", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "font");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("Roboto-Light-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t81.inf", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "font");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t82.inf", 
		LAST);
	web_concurrent_end(NULL);
	web_add_auto_header("Sec-Fetch-Dest", "empty");
	web_add_auto_header("Sec-Fetch-Mode", "cors");
	web_add_auto_header("Sec-Fetch-Site", "same-origin");
	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735831932.3.1.1735831987.5.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountConfigurationRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	web_reg_find("Text=\"categoryId\":1,\"categoryName\":\"LAPTOPS\"", LAST); // Проверка на успешный вход на страницу
	
	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);
	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);
	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t87.inf", 
		LAST);
	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735831932.3.1.1735831989.3.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_concurrent_start(NULL);
	web_url("Roboto-Bold-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t89.inf", 
		LAST);
	web_url("Roboto-Thin-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t90.inf", 
		LAST);
	web_concurrent_end(NULL);

	lr_end_transaction("OpenLandingPage",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("OpenRegistrationPage");

	web_add_header("Priority", "u=0");
	
	web_reg_find("Text=CREATE_ACCOUNT", LAST); // Проверка на открытие страницы создания аккаунта
	
	web_url("register-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735831932.3.1.1735832024.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetCountriesRequest");
	web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_auto_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_end_transaction("OpenRegistrationPage",LR_AUTO);
	
	
	
	lr_think_time(5);

	
	
	lr_start_transaction("UserRegistered");
	
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountCreateRequest");
	web_add_header("Priority", "u=0");
	/*Correlation comment - Do not change!  Original value='990424858' Name ='loginUser' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=loginUser",
		"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountCreateResponse/ns2:StatusMessage/ns2:userId/text()",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	web_reg_find("Text=<ns2:reason>New user created successfully.</ns2:reason>", LAST); // Проверка на успешную регистрацию

	web_custom_request("AccountCreateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>Rahman</address><allowOffersPromotion>true</allowOffersPromotion><cityName>Penza</cityName><countryId>Russia,ru</countryId><email>swdqedq@mail.ru</email>"
		"<firstName>{firstName}</firstName>" 
		"<lastName>{lastName}</lastName>" 
		"<loginName>{userName}</loginName>" 
		"<password>{password}</password>" 
		"<phoneNumber>{number}</phoneNumber>" 
		"<stateProvince>{address2}</stateProvince>" 
		"<zipcode>{Code}</zipcode>" 
		"</AccountCreateRequest></soap:Body></soap:Envelope>",
		LAST);
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735831932.3.1.1735832114.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
	/*Correlation comment - Do not change!  Original value='YXJ0ZW0xMjM0OkFBYWExMQ==' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=CorrelationParameter",
		"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountLoginResponse/ns2:StatusMessage/ns2:t_authorization/text()",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<email>{email}</email>" 
		"<loginPassword>{password}</loginPassword>" 
		"<loginUser>{userName}</loginUser>" 
		"</AccountLoginRequest></soap:Body></soap:Envelope>",
		LAST);
	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	web_revert_auto_header("Origin");
	web_revert_auto_header("X-Requested-With");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_url("{loginUser}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{loginUser}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t95.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("UserRegistered",LR_AUTO);
	
	
	lr_think_time(5);

	
	lr_start_transaction("Logout");
	
	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLogoutRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	
	web_reg_find("Text=<ns2:reason>Logout Successful</ns2:reason>", LAST); // Проверка на успешную авторизацию
	
	web_custom_request("AccountLogoutRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t96.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{loginUser}</loginUser><base64Token>Basic {CorrelationParameter}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>",
		LAST);
	
	lr_end_transaction("Logout",LR_AUTO);
	
	lr_end_transaction("UC1_RandomUserRegistration", LR_AUTO);
	
	return 0;
}