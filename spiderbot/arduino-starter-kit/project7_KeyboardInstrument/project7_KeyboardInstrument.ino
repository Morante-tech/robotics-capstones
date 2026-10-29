//int buttons[6];
//int buttons[0] = 2;
int notes[]={262, 294, 330, 349};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int keyval = analogRead(A0);
  Serial.println(keyval);
  if(keyval > 1020){
    tone(8, notes[0]);
  }
  else if(keyval >=950 && keyval <=1010){
    tone(8, notes[1]);
  }
  else if(keyval >=490 && keyval <=515){
    tone(8, notes[2]);
  }
  else if(keyval >=15 && keyval <=25){
    tone(8, notes[3]);
  }
  else{
    noTone(8);
  }
}
