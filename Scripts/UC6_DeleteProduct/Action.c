Action()
{
	char body[1024] = "";
	char temp[256];
	char rndProductId[256];
	char rndColorId[256];
	int productCount, i, rndIndex;
	srand(time(NULL)); // Инициализация генератора случайных чисел
	
	lr_start_transaction("UC6_DeleteProduct");

	web_websocket_send("ID=0", "Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1736208065177\\\"\"},\"use_webpush\":true}", "IsBinary=0", LAST);
	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("OpenLandingPage");

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1736250110.16.1.1736251220.0.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga=GA1.1.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.1.1736250573.52.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_gid=GA1.2.927332362.1736195425; DOMAIN=www.advantageonlineshopping.com");
	web_add_auto_header("Sec-Fetch-Dest", "document");
	web_add_auto_header("Sec-Fetch-Mode", "navigate");
	web_add_auto_header("Sec-Fetch-Site", "none");
	web_add_auto_header("Priority", "u=0, i");
	web_revert_auto_header("Priority");
	web_add_header("Sec-Fetch-User", "?1");
	web_add_header("Upgrade-Insecure-Requests", "1");
	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);
	web_concurrent_start(NULL);
	web_url("Roboto-Regular-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t137.inf", 
		LAST);
	web_url("main.min.js", 
		"URL=https://www.advantageonlineshopping.com/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t138.inf", 
		LAST);
	web_url("services.properties", 
		"URL=https://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t139.inf", 
		LAST);
	web_url("Roboto-Light-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t140.inf", 
		LAST);
	web_concurrent_end(NULL);
	web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);
	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t142.inf", 
		LAST);
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
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736253081.15.0.1736253081.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	
	web_reg_find("Text=\"categoryId\":1,\"categoryName\":\"LAPTOPS\"", LAST); // Проверка на успешный вход на страницу
	
	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);
	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		LAST);
	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t146.inf", 
		LAST);
	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736253081.15.1.1736253084.57.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_concurrent_start(NULL);
	web_url("Roboto-Bold-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t148.inf", 
		LAST);
	web_url("Roboto-Thin-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t149.inf", 
		LAST);
	web_concurrent_end(NULL);

	lr_end_transaction("OpenLandingPage",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("Login");

	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	/*Correlation comment - Do not change!  Original value='121954944' Name ='UserID' Type ='Manual'*/
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
		"Snapshot=t150.inf", 
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
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736253081.15.1.1736253118.23.0.0; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t151.inf",
		"Mode=HTML",
		LAST);
	lr_set_debug_message(LR_MSG_CLASS_EXTENDED_LOG | LR_MSG_CLASS_RESULT_DATA, LR_SWITCH_OFF);

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
		"Snapshot=t152.inf",
		"Mode=HTML",
		"Body=[{body}]",
		LAST);

	lr_end_transaction("Login",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("OpenCart");
	
	rndIndex = (rand() % (productCount - 1 + 1)) + 1;
	lr_output_message("Рандомный индекс - %d", rndIndex);
	sprintf(rndProductId, lr_paramarr_idx("productId", rndIndex));
	sprintf(rndColorId, lr_paramarr_idx("hexColor", rndIndex));
	lr_save_string(rndProductId, "rndProductId");
	lr_save_string(rndColorId, "rndColorId");
	lr_output_message("Рандомный продукт - %s", rndProductId);
	lr_output_message("Его цвет - %s", rndColorId);
	
	web_reg_save_param_json(
	    "ParamName=hexColor",
	    "QueryString=$.productsInCart[*].color.code",
	    "SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	
	web_reg_find("Text=productId\":{rndProductId}", LAST); // Проверка на существование продукта в корзине
	
	web_add_header("Priority", "u=0");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_url("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t153.inf",
		"Mode=HTML",
		LAST);
	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("OpenCart",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("DeleteProduct");
	
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736253081.15.1.1736253139.2.0.0; DOMAIN=www.advantageonlineshopping.com");
	
	web_reg_find("Text=productId\":\"{rndProductId}\"","Fail=Found", LAST); // Проверка на отсутствие продукта в корзине
	
	web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_auto_header("Priority", "u=0");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_custom_request("{rndColorId}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}/product/{rndProductId}/color/{rndColorId}",
		"Method=DELETE",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t155.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("DeleteProduct",LR_AUTO);

	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("Logout");
	
	web_reg_find("Text=<ns2:reason>Logout Successful</ns2:reason>", LAST); // Проверка на успешный выход из аккаунта

	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLogoutRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("AccountLogoutRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t156.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{UserID}</loginUser><base64Token>Basic {CorrelationParameter}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>",
		LAST);

	lr_end_transaction("Logout",LR_AUTO);
	
	lr_end_transaction("UC6_DeleteProduct", LR_AUTO);


	return 0;
}