/*
Adafruit Arduino - Lesson 13. DC Motor
*/
//Serial.available()  可用于检查设备是否接收到数据，该函数将会返回等待读取的数据字节数

int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  if (Serial.available())
  {
     int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      if(speed!=0)
      {
       analogWrite(motorPin, speed);
        int speed = Serial.parseInt();
      }
     
    }
  }
}
