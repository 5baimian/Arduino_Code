/*
   analogRead(pin)    用于从Arduino的模拟输入引脚读取数值,被读取的模拟引脚号码，返回值在0-1023之间的值
   analogWrite(pin,value)      将一个模拟数值写进Arduino引脚,pin-被读取的模拟引脚号码,value-0-255之间的PWM频率值，0对应off,255对应on,无返回值

*/



int potpin=0;//定义模拟接口0
int ledpin=11;//定义数字接口11（PWM输出）
int val=0;//暂存来自传感器的变量数值

void setup() 
{
  pinMode(ledpin,OUTPUT);//定义数字接口11为输出
  Serial.begin(9600);//设置波特率为9600
  //模拟接口自动设置成输入
}

void loop() 
{
  val=analogRead(potpin);//读取传感器的模拟值并赋值给val
  Serial.println(val);//显示val变量
  analogWrite(ledpin,val/4);//打开LED并设置亮度（PWM输出最大值255）
  delay(1000);

}
