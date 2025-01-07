Action()
{

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1736199085617\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("blkPanther", 
		lr_unmask("677d138580a10da6d6d420d9aced22"), 
		"www.advantageonlineshopping.com:443");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1736199881.15.0.1736199881.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.2.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736195426.13.1.1736196440.56.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.927332362.1736195425; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Priority", 
		"u=0, i");

	web_revert_auto_header("Priority");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Roboto-Regular-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("main.min.js", 
		"URL=https://www.advantageonlineshopping.com/main.min.js", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("services.properties", 
		"URL=https://www.advantageonlineshopping.com/services.properties", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("Roboto-Light-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("Roboto-Medium-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t102.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1736250110.16.0.1736250110.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.2102063955.1735813296; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.0.1736250111.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t104.inf", 
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
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.1.1736250114.57.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Priority", 
		"u=4, i");

	web_concurrent_start(NULL);

	web_url("arrow_right.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/arrow_right.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t109.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4, i");

	web_url("fetchImage", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=speakers", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t110.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4, i");

	web_url("fetchImage_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=tablets", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4, i");

	web_url("fetchImage_3", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=laptops", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("Roboto-Bold-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("Roboto-Thin-webfont.woff", 
		"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t114.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("login");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("Priority", 
		"u=0");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(31);

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>WAkanda2024</loginPassword><loginUser>blkPanther</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.1.1736250145.26.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_url("121954944", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/121954944", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=5, i");

	web_concurrent_start(NULL);

	web_url("fetchImage_4", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=5400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_header("Priority", 
		"u=5, i");

	web_url("fetchImage_5", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4700", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t118.inf", 
		LAST);

	web_add_header("Priority", 
		"u=5, i");

	web_url("fetchImage_6", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4300", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t119.inf", 
		LAST);

	web_add_header("Priority", 
		"u=5, i");

	web_url("fetchImage_7", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t120.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4, i");

	web_url("fetchImage_8", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1400", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t121.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4, i");

	web_url("fetchImage_9", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1600", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t122.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("121954944_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/121954944", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"Body=[{\"hexColor\":\"414141\",\"productId\":33,\"quantity\":1},{\"hexColor\":\"414141\",\"productId\":29,\"quantity\":1},{\"hexColor\":\"3683D1\",\"productId\":25,\"quantity\":1},{\"hexColor\":\"545195\",\"productId\":83,\"quantity\":1},{\"hexColor\":\"3683D1\",\"productId\":21,\"quantity\":1},{\"hexColor\":\"3683D1\",\"productId\":82,\"quantity\":1},{\"hexColor\":\"3683D1\",\"productId\":78,\"quantity\":1},{\"hexColor\":\"FCC23D\",\"productId\":22,\"quantity\":1},{\"hexColor\":\"DD3A5B\",\""
		"productId\":30,\"quantity\":1},{\"hexColor\":\"545195\",\"productId\":27,\"quantity\":1},{\"hexColor\":\"C3C3C3\",\"productId\":4,\"quantity\":1},{\"hexColor\":\"3683D1\",\"productId\":32,\"quantity\":1},{\"hexColor\":\"C3C3C3\",\"productId\":6,\"quantity\":1}]", 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("goToCart");

	web_add_header("Priority", 
		"u=0");

	web_url("121954944_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/121954944", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("goToCart",LR_AUTO);

	lr_start_transaction("checkout");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.1.1736250169.2.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("Priority", 
		"u=0");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(13);

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>121954944</accountId><base64Token>Basic YmxrUGFudGhlcjpXQWthbmRhMjAyNA==</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>121954944</accountId><base64Token>Basic YmxrUGFudGhlcjpXQWthbmRhMjAyNA==</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("121954944_4", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/121954944", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("shippingcost", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"Royal Palace\",\"addressLine2\":\"\",\"city\":\"Wakanda\",\"country\":\"uz\",\"postalCode\":99999,\"state\":\"WKD\"},\"secustomerName\":\"TChalla Panter\",\"secustomerPhone\":5555566778,\"senumberOfProducts\":13,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"CB0A3D1496E007A8E4AB34AF61FE219F\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>121954944</accountId><base64Token>Basic YmxrUGFudGhlcjpXQWthbmRhMjAyNA==</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.1.1736250186.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("checkout",LR_AUTO);

	lr_start_transaction("next");

	lr_end_transaction("next",LR_AUTO);

	lr_start_transaction("pay now");

	web_add_auto_header("Priority", 
		"u=0");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddSafePayMethodRequest");

	lr_think_time(46);

	web_custom_request("AddSafePayMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>blkPanther</safePayUsername><accountId>121954944</accountId><safePayPassword>WAkanda2024</safePayPassword><base64Token>Basic YmxrUGFudGhlcjpXQWthbmRhMjAyNA==</base64Token></"
		"AddSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("121954944_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/121954944", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":5555566778,\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"WAkanda2024\",\""
		"Transaction_SafePay_UserName\":\"blkPanther\",\"Transaction_TransactionDate\":\"7012025\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"Royal Palace\",\"Shipping_Address_City\":\"Wakanda\",\"Shipping_Address_CountryCode\":236,\"Shipping_Address_CustomerName\":\"TChalla Panter\",\"Shipping_Address_CustomerPhone\":5555566778,\"Shipping_Address_PostalCode\":99999,\"Shipping_Address_State\":\"WKD\",\"Shipping_Cost\":32610.91000000001,\""
		"Shipping_NumberOfProducts\":13,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":33,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"414141\",\"productId\":29,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"3683D1\",\"productId\":25,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"545195\",\"productId\":83,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"3683D1\",\"productId\":21,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\""
		"3683D1\",\"productId\":82,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"3683D1\",\"productId\":78,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"FCC23D\",\"productId\":22,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"DD3A5B\",\"productId\":30,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"545195\",\"productId\":27,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"C3C3C3\",\"productId\":4,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"3683D1\",\"productId\""
		":32,\"quantity\":1,\"hasWarranty\":false},{\"hexColor\":\"C3C3C3\",\"productId\":6,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1736250111.14.1.1736250236.10.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_revert_auto_header("Priority");

	web_custom_request("121954944_6", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/121954944", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("pay now",LR_AUTO);

	return 0;
}