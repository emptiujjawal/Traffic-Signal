
int leds[3] = {D0, D2};
int states[3] ={LOW, LOW};
int totaldevice = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setupPinMode();
}

void loop() {
  // put your main code here, to run repeatedly:

  //turn on the lights(leds).
  for(int i = 0; i< totaldevice; i++){
    //Serial.println("Turn on led  %d",i);
    turnOnLed(leds[i]);
    delay(2000);
  }
/*turnOnLed(D0);
delay(200);
turnOnLed(D1);
delay(200);
turnOnLed(D2);
*/
//turn off the lights (leds).
 for(int j = 0; j< totaldevice; j++){
  //Serial.println("Turn off led  %d",j);
    turnOffLed(leds[j]);
    delay(2000);
  }
/*turnOffLed(D0);
delay(200);
turnOffLed(D1);
delay(200);
turnOffLed(D2); 
*/
}

void setupPinMode(){
  //setup Pin mode as output.
  for(int k = 0; k< totaldevice; k++){
    //Serial.println("Setup Output for pin %d",leds[k]);
    pinMode(leds[k],OUTPUT);
  }
  /*pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  */
}

void turnOnLed(int pin){
  digitalWrite(pin, HIGH);
}

void turnOffLed(int pin){
  digitalWrite(pin, LOW);
}

