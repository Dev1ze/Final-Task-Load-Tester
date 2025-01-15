Action()
{
//	char userNameBuffer[256];
//	char passwordBuffer[256];
//	char firtNameBuffer[256];
//	char lastNameBuffer[256];
//	char address1Buffer[256];
//	char address2Buffer[256];
//	char codeBuffer[256];
//	char numberBuffer[256];
//	char emailBuffer[256];
	
	char *filename = "../../data/Users.dat";
	int countLines = 0;
	int iteration = 1;
	char buffer[2048];
	FILE *file = fopen(filename, "r");
	if (!file) 
	{
    	lr_output_message("Ошибка: не удалось открыть файл");
	}
	while (fgets(buffer, sizeof(buffer), file))
	{
	    countLines++;
	}
	lr_output_message("Колличество %d", countLines-1);
	
	while(iteration < countLines) 
	{
//		strcpy(userNameBuffer, lr_eval_string(""));
//		lr_save_string(userNameBuffer, "userNameBuffer");
//		strcpy(passwordBuffer, lr_eval_string(""));
//		lr_save_string(passwordBuffer, "passwordBuffer");
//		strcpy(firtNameBuffer, lr_eval_string(""));
//		lr_save_string(firtNameBuffer, "firtNameBuffer");
//		strcpy(lastNameBuffer, lr_eval_string(""));
//		lr_save_string(lastNameBuffer, "lastNameBuffer");
//		strcpy(address1Buffer, lr_eval_string(""));
//		lr_save_string(address1Buffer, "address1Buffer");
//		strcpy(address2Buffer, lr_eval_string(""));
//		lr_save_string(address2Buffer, "address2Buffer");
//		strcpy(codeBuffer, lr_eval_string(""));
//		lr_save_string(codeBuffer, "codeBuffer");
//		strcpy(numberBuffer, lr_eval_string(""));
//		lr_save_string(numberBuffer, "numberBuffer");
//		strcpy(emailBuffer, lr_eval_string(""));
//		lr_save_string(emailBuffer, "emailBuffer");
		
//		lr_output_message("userNameBuffer - %s", userNameBuffer)
		
		web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1735931141663\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

		/*Connection ID 0 received buffer WebSocketReceive0*/
		lr_start_transaction("OpenLandingPage");
	
		web_set_sockets_option("SSL_VERSION", "AUTO");
		web_add_cookie("_ga_TBPYED8WSW=GS1.1.1735930644.6.1.1735931988.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
		web_add_cookie("_gid=GA1.2.392134552.1735813298; DOMAIN=www.advantageonlineshopping.com");
		web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735930674.8.1.1735930782.59.0.0; DOMAIN=www.advantageonlineshopping.com");
		web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
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
			"Snapshot=t1.inf", 
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
			"Snapshot=t6.inf", 
			LAST);
		web_add_header("Sec-Fetch-Dest", "font");
		web_add_header("Sec-Fetch-Mode", "cors");
		web_add_header("Sec-Fetch-Site", "same-origin");
		web_url("Roboto-Regular-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t10.inf", 
			LAST);
		web_add_header("Sec-Fetch-Dest", "script");
		web_add_header("Sec-Fetch-Mode", "no-cors");
		web_add_header("Sec-Fetch-Site", "same-origin");
		web_url("main.min.js", 
			"URL=https://www.advantageonlineshopping.com/main.min.js", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t11.inf", 
			LAST);
		web_add_header("Sec-Fetch-Dest", "image");
		web_add_header("Sec-Fetch-Mode", "no-cors");
		web_add_header("Sec-Fetch-Site", "same-origin");
		web_add_header("Priority", "u=6");
		web_url("favicon.ico", 
			"URL=https://www.advantageonlineshopping.com/css/images/favicon.ico", 
			"TargetFrame=", 
			"Resource=1", 
			"RecContentType=image/x-icon", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t12.inf", 
			LAST);
		web_add_header("Sec-Fetch-Dest", "empty");
		web_add_header("Sec-Fetch-Mode", "cors");
		web_add_header("Sec-Fetch-Site", "same-origin");
		web_url("services.properties", 
			"URL=https://www.advantageonlineshopping.com/services.properties", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t13.inf", 
			LAST);
		web_add_header("Sec-Fetch-Dest", "font");
		web_add_header("Sec-Fetch-Mode", "cors");
		web_add_header("Sec-Fetch-Site", "same-origin");
		web_url("Roboto-Light-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t19.inf", 
			LAST);
		web_add_header("Sec-Fetch-Dest", "font");
		web_add_header("Sec-Fetch-Mode", "cors");
		web_add_header("Sec-Fetch-Site", "same-origin");
		web_url("Roboto-Medium-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t20.inf", 
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
			"Snapshot=t21.inf", 
			"Mode=HTML", 
			LAST);
		web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735930674.8.1.1735932096.60.0.0; DOMAIN=www.advantageonlineshopping.com");
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
			"Snapshot=t22.inf", 
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
			"Snapshot=t23.inf", 
			"Mode=HTML", 
			LAST);
		web_url("search", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t24.inf", 
			"Mode=HTML", 
			LAST);
		web_url("popularProducts.json", 
			"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t25.inf", 
			LAST);
		web_url("home-page.html", 
			"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
			"TargetFrame=", 
			"Resource=0", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t26.inf", 
			"Mode=HTML", 
			LAST);
		web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735930674.8.1.1735932098.58.0.0; DOMAIN=www.advantageonlineshopping.com");
		web_concurrent_start(NULL);
		web_url("Roboto-Bold-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t27.inf", 
			LAST);
	
		web_url("Roboto-Thin-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
			"TargetFrame=", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t28.inf", 
			LAST);
		web_concurrent_end(NULL);
	
		lr_end_transaction("OpenLandingPage",LR_AUTO);
	
		
		
		
		
		
		lr_start_transaction("OpenRegistrationpage");
		
		web_add_header("Priority", "u=0");
		web_url("register-page.html", 
			"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
			"TargetFrame=", 
			"Resource=0", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t29.inf", 
			"Mode=HTML", 
			LAST);
		web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735930674.8.1.1735932119.37.0.0; DOMAIN=www.advantageonlineshopping.com");
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
			"Snapshot=t30.inf", 
			"Mode=HTML", 
			"EncType=text/xml; charset=UTF-8", 
			"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
			LAST);
	
		lr_end_transaction("OpenRegistrationpage",LR_AUTO);
		
		
		
		
	
		lr_start_transaction("UserRegistered");
		
		web_reg_find("Text=<ns2:reason>New user created successfully.</ns2:reason>", LAST); // Проверка на успешную регистрацию
		web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountCreateRequest");
		web_add_header("Priority", "u=0");
		/*Correlation comment - Do not change!  Original value='345072304' Name ='loginUser' Type ='Manual'*/
		web_reg_save_param_xpath(
			"ParamName=loginUser",
			"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountCreateResponse/ns2:StatusMessage/ns2:userId/text()",
			SEARCH_FILTERS,
			"Scope=Body",
			"IgnoreRedirections=No",
			LAST);
		web_custom_request("AccountCreateRequest", 
			"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
			"Method=POST", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=text/xml", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t31.inf", 
			"Mode=HTML", 
			"EncType=text/xml; charset=UTF-8", 
			"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\">" 
			"<accountType>USER</accountType>" 
			"<address>{street}</address>" 
			"<allowOffersPromotion>true</allowOffersPromotion>" 
			"<cityName>{city}</cityName>" 
			"<countryId>Russia,ru</countryId>" 
			"<email>{email}</email>"
			"<firstName>{firstName}</firstName>" 
			"<lastName>{lastName}</lastName>" 
			"<loginName>{userName}</loginName>" 
			"<password>{password}</password>" 
			"<phoneNumber>{number}</phoneNumber>"	
			"<stateProvince>{state}</stateProvince>" 
			"<zipcode>{code}</zipcode>" 
			"</AccountCreateRequest></soap:Body></soap:Envelope>",
			LAST);
		lr_end_transaction("UserRegistered", LR_AUTO);
		iteration++;
	}


	return 0;
}