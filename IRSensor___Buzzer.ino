const int Buzzer = 11; 
int LED = 13;
int IRSensor = 9;

void setup(){
  Serial.begin(115200);
  Serial.println("Start working");
  pinMode(LED,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(IRSensor,INPUT);
}
void loop(){
  int sensorStatus = digitalRead(IRSensor);
  if(sensorStatus == 1)
  {
    Serial.println("Motion Detected");
    digitalWrite(LED,LOW);
    tone(Buzzer,1000);
    delay(100);
    Serial.println("Motion Ended");
  }
  else{
    digitalWrite(LED,HIGH);
    noTone(Buzzer);
    delay(100);
  }
}
