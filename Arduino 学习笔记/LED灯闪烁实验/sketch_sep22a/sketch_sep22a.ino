int LED=2;//定义数字接口2
void setup() 
{
  pinMode(LED,OUTPUT);
}

void loop() //死循环体
{
  digitalWrite(LED,HIGH);//I/O设置成高电平，点亮2口的LED
  delay(500);
  digitalWrite(LED,LOW);//2口设置成低电平，熄灭LED
  delay(500);
}
