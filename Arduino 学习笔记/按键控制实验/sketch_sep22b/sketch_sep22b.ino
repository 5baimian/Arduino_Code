//当按键没有被按下时，7口电平为低电平，小灯不亮，当按键按下时，7口为高电平，点亮小灯
int ledpin=10;
int inpin=7;
int val;//定义变量val
void setup() 
{
  pinMode(ledpin,OUTPUT);//定义小灯接口为输出接口
  pinMode(inpin,INPUT);//定义按键接口为输入端口
}

void loop() 
{
  val=digitalRead(inpin);//读取数字7口电平值赋值给val
  if(val==HIGH)//检测按键是否按下，按键按下时小灯亮起
  {
    digitalWrite(ledpin,HIGH);
  }
  else
  {
    digitalWrite(ledpin,LOW);

  }
}
