int switchState = 0;
int RED_LED_PIN = 5; 
int GREEN_LED_PIN = 4; 
int YELLOW_LED_PIN = 3; 
int SWITCH_PIN = 2; 


void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(SWITCH_PIN);

  if (switchState == LOW){
    digitalWrite(GREEN_LED_PIN, HIGH);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, LOW);
  } 
  else {
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, HIGH);
    delay(500);
    digitalWrite(YELLOW_LED_PIN, HIGH);
    digitalWrite(RED_LED_PIN, LOW);
    delay(250);

  }

}
