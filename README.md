# forest-sensor

Forest AI's Sensor node that sends alerts to Forest AI cloud platform

#### Setup a particle devboard:

[Watch the setup video](https://www.youtube.com/watch?v=xK20wrWDduQ)

#### Coding environment:

[Online devlopment IDE](https://build.particle.io/build)

#### Particle console webhook setup:

Go to integration section of [particle console](https://console.particle.io/devices) and click on `create webhook` and paste below JSON snippet

```json
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
```

Your Integration should look like this

# ![Webhook](asset/webhook-page.png?raw=true)
