#include <Servo.h>

Servo myServo;
int const potPin=A0;
int potVal;
int angle;

void setup() {
  // put your setup code here, to run once:
  analogReadResolution(12); // ADC a 12 bits de resolución para tener más rango para controlar el motor (0-4095, es decir 2^12 en vez del clásico 0-1023 2^10)
  myServo.attach(9); // Para el PWM
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin); // Lee en 12 bits porque lo has puesto antes en analogReadResolution
  Serial.print("potVal: ");
  Serial.print(potVal);

  angle = map(potVal, 0, 4095, 0, 179); // De los 0-4095 del ADC a los 0-180 grados que se mueve un servo
  Serial.print(", angle: ");
  Serial.println(angle);
  myServo.write(angle);
  delay(15);
}
