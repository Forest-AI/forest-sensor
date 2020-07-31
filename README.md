# forest-sensor
Forest AI's Sensor node that sends alerts to Forest AI cloud platform




{
    "event": "firebase",
    "url": "https://forest-ai-console.firebaseio.com/Test_Alert.json",
    "requestType": "POST",
    "noDefaults": true,
    "rejectUnauthorized": false,
    "json": {
        "location": "{{loc}}",
        "activity": "{{act}}",
        "latitude": "{{lat}}",
        "longitude": "{{lng}}",
        "time": "{{tim}}"
    },
    "query": {
        "auth": "LMxSMgHNBwzEkDqdrg5OmfTjCoEjRLHD10T2EOYP"
    }
}
