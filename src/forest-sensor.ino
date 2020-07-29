/**
 * This firmware sends alert to firebase realtime database
 * when audio level goes above certain threshold
 * 
 * test: Go to console.particle.io and call cloud function named "createAlert" 
 * author : Vikas Singh
 * */

#include "Particle.h"

// webhook event name
const char *PUBLISH_EVENT_NAME = "firebase";

// Hardcoded demo data
char location[20] = "garden";
char activity[20] = "chainsaw";

// Same timestamp is used as name for audio clip sent with this alert
char timeStamp[20] = "1596064161";

void setup()
{
    Serial.begin(9600);
    // Intialize cloud function
    Particle.function("createAlert", createAlert);
}

void loop()
{
    // Do nothing
}

void publishData()
{

    // Create JSON data and pushes to firebase using webhook
    char data[256];
    snprintf(data, sizeof(data), "{\"loc\": \"%s\", \"act\": \"%s\",\"tim\":\"%s\"}",
             location, activity, timeStamp);
    Particle.publish("firebase", data, PRIVATE);

    alertPushSignal();
}

void alertPushSignal()
{
    // turning LED into RED when called
    RGB.control(true);
    RGB.color(255, 0, 0);
    RGB.brightness(255);
    delay(2000);
    RGB.control(false);
}

//Particle function exposed to cloud for testing
int createAlert(String extra)
{
    // call publishData() function
    publishData();
    return 1;
}
