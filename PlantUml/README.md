# Server Code

As per the NXP document this code is divided into three parts to understand easily.

1. To setup a server
2. To stream the data
3. To send the data.

So in this folder i have added a conditional Activity diagram for the server code by using plantuml.(https://www.planttext.com)

# List of APIs used in this code:

# web_server config/setting APIs
1.webserver_setup(argv[1], argv[2]);  // Initialise the server.
2.webserver_setOnInitEventListener(&onInitMethod);  // Set listener for initialise value of shared value
3.webserver_setOnUpdateEventListener(&onUpdateMethod);  // Set listener if shared value is updated
4.webserver_setOnCommandEventListener(&onCommandMethod); // Set listener if own command is used
5.webserver_run();  // Run the server until stopped.

# web_server stream/send APIs
1.webserver_streamBuffer(image, size, "main");
2.webserver_addOutValue("String", value);
3.webserver_sendOutSharedValues();  // Send output values to clients

# web_server get functions
1.webserver_getIntValueByName("max_color", 255);
2.webserver_getBoolValueByName("stream_en", false))

# web_server helper APIs
1.webserver_isRunning(