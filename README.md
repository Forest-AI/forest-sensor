# forest-sensor
Forest AI's Sensor node that sends alerts to Forest AI cloud platform




#### Particle console webhook :

{
    "event": "forest-ai-live",
    "url": "https://forest-ai-console.firebaseio.com/Raw_Alert.json",
    "requestType": "POST",
    "noDefaults": true,
    "rejectUnauthorized": false,
    "headers": {
        "Content-Type": "application/json"
    },
    "query": {
        "auth": "your-firebase-database-auth-key"
    },
    "body": "{\"lat\":{{lat}}, \"long\":{{long}}, \"location\":\"{{loc}}\", \"activity\":\"{{act}}\", \"time\":\"{{tim}}\"}"
}
