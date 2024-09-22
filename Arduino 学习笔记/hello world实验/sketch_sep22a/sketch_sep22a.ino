int val;//定义变量val
int ledpin=13;//定义数字接口13

void setup() 
{
  Serial.begin(9600);//设置波特率为9600
  pinMode(ledpin,OUTPUT);//设置数字13口为输入接口

}

void loop()
{
  val=Serial.read();//读取pc机发送给Arduino的指令或字符，并将该指令或字符赋给val
  if(val=='R')//判断接收到的指令或者字符是不是'R'
  {
    //如果接收到的字符是'R'
    Serial.println("Hello World!");//显示“Hello World!”字符串
    while(1)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13口的LED
    delay(500);
    digitalWrite(ledpin,LOW);;//熄灭数字13口的LED
    delay(500);
    val=Serial.read();
    if(val=='T')
    {
      break;
    }
    }
    
    

  }
}
