Action()
{
	int productCount, colorCount, i;
	int rndIndex;
	char rndProductId[256];
	char rndColorId[256];
	char categoryIdx[256];
	// Инициализация генератора случайных чисел
    srand(time(NULL));
	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1735940792211\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("OpenLandingPage");

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_set_user("artem1234", lr_unmask("677a419475df61538e99"), "www.advantageonlineshopping.com:443");
	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1735985229.9.0.1735985229.0.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_gid=GA1.2.392134552.1735813298; DOMAIN=www.advantageonlineshopping.com");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1735980799.9.1.1735982247.14.0.0; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);
	web_concurrent_start(NULL);
	web_url("Roboto-Regular-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t43.inf", 
		LAST);
	web_url("main.min.js", 
		"URL=https://www.advantageonlineshopping.com/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		LAST);
	web_url("services.properties", 
		"URL=https://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		LAST);
	web_url("Roboto-Light-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t46.inf", 
		LAST);
	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t47.inf", 
		LAST);
	web_concurrent_end(NULL);
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
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736065316.10.0.1736065316.60.0.0; DOMAIN=www.advantageonlineshopping.com");
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
		"Snapshot=t49.inf", 
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
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);
	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);
	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);
	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736065316.10.1.1736065319.57.0.0; DOMAIN=www.advantageonlineshopping.com");
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
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t58.inf", 
		LAST);
	web_concurrent_end(NULL);

	lr_end_transaction("OpenLandingPage",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("Login");

	web_add_header("Origin", "https://www.advantageonlineshopping.com");
	web_add_header("Priority", "u=0");
	web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
	web_add_header("X-Requested-With", "XMLHttpRequest");
	/*Correlation comment - Do not change!  Original value='990424858' Name ='CorrelationParameter' Type ='Manual'*/
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
	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>AAaa11</loginPassword><loginUser>artem1234</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);
	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736065316.10.1.1736065340.36.0.0; DOMAIN=www.advantageonlineshopping.com");
	web_add_header("Authorization", "Basic {CorrelationParameter}");
	/*Correlation comment - Do not change!  Original value='005D9FE091A6779EAD527891ECD939A3' Name ='sessionId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=sessionId",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);
	web_url("{UserID}",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t60.inf",
		"Mode=HTML",
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
		"Snapshot=t61.inf",
		"Mode=HTML",
		"Body=[{\"hexColor\":\"414141\",\"productId\":18,\"quantity\":1},{\"hexColor\":\"414141\",\"productId\":27,\"quantity\":1}]",
		LAST);

	lr_end_transaction("Login",LR_AUTO);
	
	

	lr_think_time(5);
	
	
	
	lr_start_transaction("Categories");
	
	
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
	lr_output_message("Количество продуктов в категории - %d", productCount);
	rndIndex = (rand() % (productCount - 1 + 1)) + 1;
	lr_output_message("Рандомный индекс - %d", rndIndex);
	sprintf(rndProductId, lr_paramarr_idx("productId", rndIndex));
	lr_output_message("Рандомный продукт - %s", rndProductId);
	lr_save_string(rndProductId, "rndProductId");
	
	for(i = 1; i <= productCount; i++)
	{
		lr_output_message("userName - %s", lr_paramarr_idx("productId",i));
	}

	lr_end_transaction("Categories",LR_AUTO);

	
	
	lr_think_time(5);
	
	
	
	lr_start_transaction("ChooseProduct");
	
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
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", //Все продукты во всех категорияъ
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
		lr_output_message("userName - %s", lr_paramarr_idx("colorCode",i));
	}
	
	lr_end_transaction("ChooseProduct",LR_AUTO);
	
	
	
	lr_think_time(5);
	
	

	lr_start_transaction("AddToCart");
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

	lr_end_transaction("AddToCart",LR_AUTO);

	return 0;
}