# forest-sensor

Forest AI's Sensor node that sends alerts to Forest AI cloud platform

#### Setup a particle devboard:

[![Watch the video]](https://www.youtube.com/watch?v=xK20wrWDduQ)

#### Coding environment:

(https://build.particle.io/build)

#### Particle console webhook setup:

this needs to be pasted in your console.particle.io accounts webhook in the integration tab

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

Your Integration should

# ![Webhook]s(asset/webhook-page.png?raw=true)
