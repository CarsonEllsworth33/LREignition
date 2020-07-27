//#include <ArduControllerUtils.h>
//#include <ArduControllerBluetooth.h>
 
int SIGSWITCH = 11;
int SIGOUT = 5;
int SIGIN = 13;
void setup() {  
  Serial.begin(9600);
  pinMode(SIGSWITCH,INPUT);
  pinMode(SIGOUT,OUTPUT);
  pinMode(SIGIN,INPUT);
  digitalWrite(SIGOUT,LOW);
}

void loop() {
  Serial.print(digitalRead(SIGSWITCH));
  Serial.print(digitalRead(SIGOUT));
  Serial.println(digitalRead(SIGIN));
  if(digitalRead(SIGSWITCH) == HIGH){
    digitalWrite(SIGOUT,HIGH);
  }
  else{
    digitalWrite(SIGOUT,LOW);
  }
}
