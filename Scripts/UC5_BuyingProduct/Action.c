Action()
{
	int productCount, colorCount, i, totalPrice;
	char strProductCount[256];
	int rndIndex;
	char rndProductId[256];
	char rndColorId[256];
	char categoryIdx[256];
	char body[1024] = "";
	char temp[256];
	char strTotalPrice[256];
    srand(time(NULL)); // Инициализация генератора случайных чисел
	
	lr_start_transaction("UC5_BuyingProduct");
	
	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1736075416551\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	lr_start_transaction("OpenLandingPage");

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1736113660.13.0.1736113660.0.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736098478.12.1.1736098479.59.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
	web_add_auto_header("Sec-Fetch-Dest", "document");
	web_add_auto_header("Sec-Fetch-Mode", "navigate");
	web_add_auto_header("Sec-Fetch-Site", "none");
	web_add_auto_header("Priority", "u=0, i");
	web_revert_auto_header("Priority");
	web_add_header("Sec-Fetch-User", "?1");
	web_add_header("Upgrade-Insecure-Requests", "1");

/*Correlation comment - Do not change!  Original value='4886' Name ='CardNumber' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=CardNumber",
		"RegExp=content:\"(.*?)\";bottom:10px",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/main.min.css*",
		LAST);

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	web_concurrent_start(NULL);
	web_url("Roboto-Regular-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t2.inf", 
		LAST);
	web_url("main.min.js", 
		"URL=https://www.advantageonlineshopping.com/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		LAST);
	web_url("services.properties", 
		"URL=https://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		LAST);
	web_url("Roboto-Light-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t5.inf", 
		LAST);
	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t6.inf", 
		LAST);
	web_concurrent_end(NULL);
	web_add_cookie("_gid=GA1.2.927332362.1736195425; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
	web_add_auto_header("Sec-Fetch-Dest", "empty");
	web_add_auto_header("Sec-Fetch-Mode", "cors");
	web_add_auto_header("Sec-Fetch-Site", "same-origin");
	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.0.1736195426.60.0.0; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t8.inf", 
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
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML",
		LAST);
	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.1.1736195428.58.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Priority", "u=4, i");
	web_concurrent_start(NULL);
	web_url("arrow_right.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/arrow_right.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t54.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=speakers", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t55.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=tablets", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		LAST);
	web_url("Roboto-Bold-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t57.inf", 
		LAST);
	web_url("Roboto-Thin-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t14.inf", 
		LAST);
	web_concurrent_end(NULL);
	
	lr_end_transaction("OpenLandingPage", LR_AUTO);


	
	lr_think_time(5);
	
	
	
	lr_start_transaction("Login");

	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	/*Correlation comment - Do not change!  Original value='990424858' Name ='UserID' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=UserID",
		"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountLoginResponse/ns2:StatusMessage/ns2:userId/text()",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	/*Correlation comment - Do not change!  Original value='YXJ0ZW0xMjM0OkFBYWExMQ==' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=CorrelationParameter",
		"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountLoginResponse/ns2:StatusMessage/ns2:t_authorization/text()",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	web_reg_find("Text=<ns2:reason>Login Successful</ns2:reason>", LAST); // Проверка на успешную авторизацию

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<email>{email}</email>" 
		"<loginPassword>{password}</loginPassword>" 
		"<loginUser>{userName}</loginUser>" 
		"</AccountLoginRequest></soap:Body></soap:Envelope>",
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.1.1736195448.38.0.0; DOMAIN=www.advantageonlineshopping.com");
	/*Correlation comment - Do not change!  Original value='005D9FE091A6779EAD527891ECD939A3' Name ='sessionId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=sessionId",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);
	web_reg_save_param_json(
	    "ParamName=productId",
	    "QueryString=$.productsInCart[*].productId",
	    "SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_reg_save_param_json(
	    "ParamName=hexColor",
	    "QueryString=$.productsInCart[*].color.code",
	    "SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_reg_save_param_json(
	    "ParamName=quantity",
	    "QueryString=$.productsInCart[*].quantity",
	    "SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_url("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t16.inf",
		"Mode=HTML",
		LAST);
	
	productCount = lr_paramarr_len("productId");
	
	for (i = 1; i <= productCount; i++) 
	{
		sprintf(temp, "{\"hexColor\":\"%s\",\"productId\":%s,\"quantity\":%s}",
            lr_paramarr_idx("hexColor", i),
            lr_paramarr_idx("productId", i),
            lr_paramarr_idx("quantity", i));
		
		if (i > 1) 
		{
        	strcat(body, ",");
    	}
		strcat(body, temp);
	}
	lr_output_message("Тело - %s", body);
	lr_save_string(body, "body");
	
	web_add_header("Priority", "u=5, i");
	web_url("fetchImage", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=11100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		LAST);
	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Content-Type", "application/json;charset=utf-8");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_custom_request("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t18.inf",
		"Mode=HTML",
		"Body=[{body}]",
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("ChooseCategory");
	web_reg_find("Text=\"categoryId\":{category},\"", LAST); // Проверка на соответствие сгенерированной id категории с переходом на категорию
	web_reg_save_param_json(
		"ParamName=productId",
		"QueryString=$..productId",
		"SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_add_header("Priority", "u=0");
	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{category}/products", //Продукты в категории X
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);
	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", //Филтры для каждой категории
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);
	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736065316.10.1.1736065363.13.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Priority", "u=5, i");
	web_concurrent_start(NULL);
	web_url("Filter.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Filter.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t65.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_3", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t66.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_4", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5100", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t67.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_5", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t68.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_6", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5900", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t69.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_7", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5600", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t70.inf", 
		LAST);
	web_concurrent_end(NULL);
	lr_output_message("Категории - %s", lr_eval_string("{category}"));
	lr_save_string(rndProductId, "rndProductId");
	productCount = lr_paramarr_len("productId");
	sprintf(strProductCount, "%d", productCount);
	lr_save_string(strProductCount, "strProductCount");
	lr_output_message("Количество продуктов в категории - %d", productCount);
	rndIndex = (rand() % (productCount - 1 + 1)) + 1;
	lr_output_message("Рандомный индекс - %d", rndIndex);
	sprintf(rndProductId, lr_paramarr_idx("productId", rndIndex));
	lr_output_message("Рандомный продукт - %s", rndProductId);
	lr_save_string(rndProductId, "rndProductId");
	for(i = 1; i <= productCount; i++)
	{
		lr_output_message("Продукт - %s", lr_paramarr_idx("productId",i));
	}

	lr_end_transaction("ChooseCategory",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("ChooseProduct");
	
	web_reg_find("Text=\"productId\":{rndProductId},\"categoryId\":{category}", LAST); // Проверка на наличие рандомного продукта в ответе от сервера
	web_reg_save_param_json(
		"ParamName=colorCode",
		"QueryString=$..code",
		"SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_add_auto_header("Priority", "u=0");
	web_url("{rndProductId}", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{rndProductId}", //Конкретный продукт 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);
	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", //Все продукты во всех категориях
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);
	web_revert_auto_header("Priority");
	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/5/products", //Все продукты в категории X
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);
	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);
	colorCount = lr_paramarr_len("colorCode");
	lr_output_message("Количество цветов у продукта - %d", colorCount);
	rndIndex = (rand() % (colorCount - 1 + 1)) + 1;
	lr_output_message("Рандомный индекс - %d", rndIndex);
	sprintf(rndColorId, lr_paramarr_idx("colorCode", rndIndex));
	lr_output_message("Рандомный цвет - %s", rndColorId);
	lr_save_string(rndColorId, "rndColorId");
	for(i = 1; i <= colorCount; i++)
	{
		lr_output_message("Цвет - %s", lr_paramarr_idx("colorCode",i));
	}
	
	lr_end_transaction("ChooseProduct",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("AddToCart");
	
	//web_reg_find("Text=\"productId\":{rndProductId}", LAST); // Проверка на наличие id продукта в ответе запроса добавление в корзину
	web_reg_save_param_json(
		"ParamName=UpdatedProductId",
		"QueryString=$..productId",
		"SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_reg_save_param_json(
		"ParamName=UpdatedColorCode",
		"QueryString=$..code",
		"SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_reg_save_param_json(
		"ParamName=hasWarranty",
		"QueryString=$..hasWarranty",
		"SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_reg_save_param_json(
	    "ParamName=UpdatedQuantity",
	    "QueryString=$..quantity",
	    "SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_reg_save_param_json(
	    "ParamName=price",
	    "QueryString=$..price",
	    "SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736065316.10.1.1736065395.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_submit_data("{rndColorId}",
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}/product/{rndProductId}/color/{rndColorId}?quantity=1",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t75.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST);
	
	productCount = lr_paramarr_len("UpdatedProductId");
	memset(body, 0, sizeof(body));
	
	for (i = 1; i <= productCount; i++) 
	{
		totalPrice = totalPrice + atoi(lr_paramarr_idx("price", i)); // Скалдываем итоговую цену
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
	lr_output_message("Тело - %s", body);
	lr_save_string(body, "body");
	sprintf(strTotalPrice, "%d", totalPrice);
	lr_save_string(strTotalPrice, "strTotalPrice");
	lr_output_message("Итог - %s", strTotalPrice);

	lr_end_transaction("AddToCart",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("OpenCart");

	web_add_header("Priority", "u=0");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_url("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t19.inf",
		"Mode=HTML",
		LAST);
	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("OpenCart",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("CheckoutUserData");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.1.1736195483.3.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountByIdRequest");
	web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_auto_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("GetAccountByIdRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {CorrelationParameter}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>",
		LAST);
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountByIdNewRequest");
	web_custom_request("GetAccountByIdNewRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t22.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {CorrelationParameter}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>",
		LAST);
	web_revert_auto_header("Origin");
	web_revert_auto_header("X-Requested-With");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_url("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t23.inf",
		"Mode=HTML",
		LAST);
	web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
	web_custom_request("shippingcost", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"{street}\",\"addressLine2\":\"\",\"city\":\"{city}\",\"country\":\"uz\",\"postalCode\":{code},\"state\":\"{state}\"},\"secustomerName\":\"{firstName} {lastName}\",\"secustomerPhone\":{number},\"senumberOfProducts\":{strProductCount},\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}", 
		LAST);
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("GetAccountPaymentPreferencesRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic YXJ0ZW0xMjM0OkFBYWExMQ==</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>",
		LAST);
	web_revert_auto_header("Origin");
	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.1.1736195512.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Priority", "u=4, i");
	web_url("Bell.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Bell.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t27.inf", 
		LAST);
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
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("CheckoutUserData",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("Payment");
	web_add_auto_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceUpdateSafePayMethodRequest");
	web_custom_request("UpdateSafePayMethodRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/UpdateSafePayMethodRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t29.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>{UserID}</userId><safePayUsername>gfrtregf</safePayUsername><safePayPassword>A43245345hfg</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic YXJ0ZW0xMjM0OkFBYWExMQ==</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>",
		LAST);
	web_revert_auto_header("X-Requested-With");
	web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_custom_request("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{UserID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"{UserID}\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":{number},\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"{password}\",\"Transaction_SafePay_UserName\":\"{userName}\",\"Transaction_TransactionDate\":\"{currentDate}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{street}\",\"Shipping_Address_City\":\"{city}\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"{firstName} {lastName}\",\"Shipping_Address_CustomerPhone\":{number},\"Shipping_Address_PostalCode\":{code},\"Shipping_Address_State\":\"{state}\",\"Shipping_Cost\":{strTotalPrice},\"Shipping_NumberOfProducts\":{strProductCount},\"Shipping_T"
		"rackingNumber\":0},\"purchasedProducts\":[{body}]}",
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.1.1736195617.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_revert_auto_header("Priority");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_custom_request("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"Method=DELETE",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t31.inf",
		"Mode=HTML",
		LAST);
	lr_end_transaction("Payment",LR_AUTO);
	
	lr_end_transaction("UC5_BuyingProduct", LR_AUTO);
	

	return 0;
}