int LED_Pin=5;
void setup() 
{
pinMode(5,INPUT);//将5号引脚设置成输出模式
 

}

void loop()
 {
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
}
