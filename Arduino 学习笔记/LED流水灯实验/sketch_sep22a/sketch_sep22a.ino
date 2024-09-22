//实现功能：Led灯逐渐点亮，之后逐渐熄灭，所有灯闪烁三次，依次循环

int val;//定义变量val
int BASE=2;//第一颗LED接的I/O引脚
int NUM=6;//LED的个数
int i=0;
int j=0;
void setup() 
{
   for( i=BASE;i<BASE+NUM;i++)
   {
    pinMode(i,OUTPUT);//设定数字I/O口为输出
   } 
}

void loop()
{
  for(i=BASE;i<BASE+NUM;i++)
  {
    digitalWrite(i,HIGH);//设定数字I/O口输出为高，逐渐开灯
    delay(500);
  }

  for(i=BASE;i<BASE+NUM;i++)
  {
    digitalWrite(i,LOW);//设定引脚输出为底，即逐渐灭灯
    delay(500);//延迟效果
  }
  
while(1)
{
  for(j=0;j<3;j++)
  {
    for(i=BASE;i<BASE+NUM;i++)
    {
    digitalWrite(i,HIGH);//高电平为开灯
    } 
    delay(1000);
    for(i=BASE;i<BASE+NUM;i++)
    {
    digitalWrite(i,LOW);//低电平为关灯
    } 
    delay(1000);
  }
  
 break;
}
}
