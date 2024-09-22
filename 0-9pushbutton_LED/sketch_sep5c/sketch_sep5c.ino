boolean pushButton1;//布尔型变量0/1
boolean pushButton2;

void setup() 
{
  pinMode(2,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  //输入上拉模式：
  //按下按键，引脚2低电平，不按按键，引脚2高电平
  //按下按键，pushButton等于0，不按按键，pushButton等于1
  pinMode(13,OUTPUT);
}

void loop() 
{
  pushButton1=digitalRead(2);// put your main code here, to run repeatedly:
  pushButton2=digitalRead(8);
  if(!pushButton1||!pushButton2)//!-布尔运算符，逻辑非  
  {
    digitalWrite(13,HIGH);//点亮LED    
  }
  else
  {
    digitalWrite(13,LOW);//熄灭LED
  }
}
