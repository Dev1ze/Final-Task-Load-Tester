Action()
{
	lr_start_transaction("UC2_LoginLogout");

	//web_websocket_send("ID=0", "Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1735902616993\\\"\"},\"use_webpush\":true}", "IsBinary=0", LAST); /*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("OpenLandingPage");

	web_set_sockets_option("SSL_VERSION", "AUTO");
	//web_add_cookie("_ga_TBPYED8WSW=GS1.1.1735831776.3.1.1735831986.0.0.0; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_gid=GA1.2.392134552.1735813298; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735909643.6.1.1735909660.43.0.0; DOMAIN=www.advantageonlineshopping.com");
	//web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A27%2C%22imageUrl%22%3A%225200%22%2C%22productName%22%3A%22HP%20Z3600%20Wireless%20Mouse%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A1189%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A15.99%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");
	web_add_auto_header("Sec-Fetch-Dest", "document");
	web_add_auto_header("Sec-Fetch-Mode", "navigate");
	web_add_auto_header("Sec-Fetch-Site", "none");
	web_add_auto_header("Priority", "u=0, i");
	web_add_header("Sec-Fetch-User", "?1");
	web_add_header("Upgrade-Insecure-Requests", "1");
	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	web_revert_auto_header("Priority");
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
	web_concurrent_end(NULL);
	//web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
	web_add_auto_header("Sec-Fetch-Dest", "empty");
	web_add_auto_header("Sec-Fetch-Mode", "cors");
	web_add_auto_header("Sec-Fetch-Site", "same-origin");
	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t7.inf", 
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
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);
	web_url("27", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/27", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	web_add_header("Priority", "u=5, i");
	web_url("fetchImage", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5200", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		LAST);
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735909643.6.1.1735910416.60.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735909643.6.1.1735910418.58.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Priority", "u=4, i");
	web_concurrent_start(NULL);
	web_url("arrow_right.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/arrow_right.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t15.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=speakers", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_3", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=laptops", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_4", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=tablets", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t18.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("fetchImage_5", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=mice", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		LAST);
	web_url("Roboto-Bold-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t20.inf", 
		LAST);
	web_url("Roboto-Thin-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t21.inf", 
		LAST);
	web_add_header("Priority", "u=4, i");
	web_url("FacebookLogo.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/FacebookLogo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t22.inf", 
		LAST);
	web_concurrent_end(NULL);

	lr_end_transaction("OpenLandingPage",LR_AUTO);

	
	lr_think_time(5);
	
	
	lr_start_transaction("Login");

	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	
	/*Correlation comment - Do not change!  Original value='990424858' Name ='loginUser' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=loginUser",
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

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<email>swdqedq@mail.ru</email>" 
		"<loginPassword>AAaa11</loginPassword>" 
		"<loginUser>artem1234</loginUser>" 
		"</AccountLoginRequest></soap:Body></soap:Envelope>",
		LAST);
	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	//web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735909643.6.1.1735910466.10.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_url("{loginUser}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{loginUser}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t24.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	web_add_header("Accept", "application/json, text/plain, */*");
	web_add_header("Content-Type", "application/json;charset=utf-8");
	web_custom_request("{loginUser}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{loginUser}",
		"Method=PUT",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"Body=[{\"hexColor\":\"414141\",\"productId\":27,\"quantity\":1}]",
		LAST);
	
	lr_end_transaction("Login",LR_AUTO);

	
	lr_think_time(5);
	
	
	lr_start_transaction("Logout");

	web_add_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLogoutRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	web_custom_request("AccountLogoutRequest",
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{loginUser}</loginUser><base64Token>Basic {CorrelationParameter}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>",
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	
	lr_end_transaction("UC2_LoginLogout", LR_AUTO);

	return 0;
}