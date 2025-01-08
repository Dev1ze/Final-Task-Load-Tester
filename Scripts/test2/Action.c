Action()
{
	char body[1024] = "";
	char temp[256];
	char image[256];
	char iteration[256];
	char fetchImageName[50];
	int productCount, i, rndIndex;
		
	web_websocket_send("ID=0", "Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1736333829396\\\"\"},\"use_webpush\":true}", "IsBinary=0", LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("OpenLandingPage");

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1736342290.19.1.1736342937.0.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736342291.16.1.1736342522.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_gid=GA1.2.1663440098.1736342291; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "script");
	web_add_header("Sec-Fetch-Mode", "no-cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_concurrent_start(NULL);
	web_url("require.js", 
		"URL=https://www.advantageonlineshopping.com/vendor/requirejs/require.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t113.inf", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "font");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("Roboto-Regular-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t114.inf", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "script");
	web_add_header("Sec-Fetch-Mode", "no-cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("main.min.js", 
		"URL=https://www.advantageonlineshopping.com/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t115.inf", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "empty");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("services.properties", 
		"URL=https://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t116.inf", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "font");
	web_add_header("Sec-Fetch-Mode", "cors");
	web_add_header("Sec-Fetch-Site", "same-origin");
	web_url("Roboto-Light-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t117.inf", 
		LAST);
	web_concurrent_end(NULL);
	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Sec-Fetch-Dest", "empty");
	web_add_auto_header("Sec-Fetch-Mode", "cors");
	web_add_auto_header("Sec-Fetch-Site", "same-origin");
	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);
	web_add_header("Sec-Fetch-Dest", "font");
	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t119.inf", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736342291.16.1.1736342956.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountConfigurationRequest");
	web_add_auto_header("Sec-Fetch-Dest", "empty");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);
	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);
	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);
	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);
	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736342291.16.1.1736342959.57.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Priority", "u=4, i");
	web_concurrent_start(NULL);
	web_url("arrow_right.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/arrow_right.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t125.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=speakers", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t126.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=tablets", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t127.inf", 
		LAST);
	web_url("Roboto-Bold-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t128.inf", 
		LAST);
	web_url("Roboto-Thin-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t129.inf", 
		LAST);
	web_concurrent_end(NULL);

	lr_end_transaction("OpenLandingPage",LR_AUTO);
	
	
	
	
	
	
	
	

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
		"Snapshot=t130.inf", 
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
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736342291.16.1.1736342989.27.0.0; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t131.inf",
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
	
	
	
	
	
	
	

	lr_start_transaction("EnterKeyWord");

	web_reg_save_param_json(
		"ParamName=imageUrl",
		"QueryString=$..imageUrl",
		"SelectAll=Yes",
	    "NotFound=Warning",
	    LAST);
	
	web_add_auto_header("Priority", "u=0");
	web_url("search_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/search?name=Speaker&quantityPerEachCategory=10", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);
	
	//lr_output_message("Искомое слово - %s", lr_eval_string("{keyWord}"));
	productCount = lr_paramarr_len("imageUrl");
	for(i = 1; i <= productCount; i++)
	{
		lr_output_message("imageUrl - %s", lr_paramarr_idx("imageUrl", i));
	}
	
	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);
	web_concurrent_start(NULL);
	
	for(i = 1; i <= productCount; i++) // Загружаем все картинки продуктов найденные по ключевому слову
	{
		sprintf(fetchImageName, "fetchImage_%d", i); 
		strcpy(image, lr_paramarr_idx("imageUrl", i));
		lr_output_message("Загружаем картинку - %s", lr_paramarr_idx("imageUrl", i));
		lr_output_message("Ссылка - https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=%s", image);
		lr_save_string(image, "image");
		
		web_reg_find("Text=Error", "Fail=Found", LAST); // Проверка на успешную загрузку картинки
			
		web_url(fetchImageName, 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id={image}", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		LAST);
	}
	web_concurrent_end(NULL);
	lr_end_transaction("EnterKeyWord",LR_AUTO);
	
	
	
	
	
	

	lr_start_transaction("Seach");

	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("AccountLoginRequest_2", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>WAkanda2024</loginPassword><loginUser>blkPanther</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);
	web_url("search-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/search-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736342291.16.1.1736343069.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_revert_auto_header("Priority");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_url("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t138.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("Seach",LR_AUTO);

	return 0;
}