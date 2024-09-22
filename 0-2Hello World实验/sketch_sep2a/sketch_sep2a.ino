int val;//定义变量val
int ledpin=13;//定义数字接口13
void setup() 
{
 Serial.begin(9600);//设置波特率为9600，跟软件设置相一致
 pinMode(ledpin,OUTPUT);//设置数字13口为输出接口，Arduino上用到的IO口都要进行类似的定义 

}

void loop() 
{
 val=Serial.read();//读取PC机发送给Arduino的指令或字符，并将该指令或字符赋给val
 if(val=='R')//判断接收到的指令或者字符是否是"R"
 {//如果接收到的是“R”字符
  digitalWrite(ledpin,HIGH);//点亮数字13口的LED
  delay(500);
  digitalWrite(ledpin,LOW);//熄灭数字13口LED
  delay(500);
  Serial.println("Hello world!");//显示“Hello World!”字符串

  
 }

}
