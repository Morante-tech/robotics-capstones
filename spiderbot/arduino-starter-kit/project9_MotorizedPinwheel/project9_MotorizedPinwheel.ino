const int switchPin = 2;
const int motorPin = 9;
int swichtState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  swichtState = digitalRead(switchPin);
  if ( swichtState == HIGH){
    digitalWrite(motorPin, HIGH);
  }
  else{
    digitalWrite(motorPin, LOW);
  }
}
