//函数说明
//     pulseIn(pin,value)   读引脚的脉冲信号，被读取的脉冲信号可以是高或者低
const int Trig=9;//触发信号
const int Echo=10;//反馈信号


void setup() 
{
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
  //将触发端口设置为输出，反馈接口设置为输入
  Serial.begin(9600);//初始化

}
//主循环
void loop()
 {
  long IntervalTime=0;//定义一个时间变量
  while(1)
  {
    digitalWrite(Trig,HIGH);//置高电平
    delayMicroseconds(15);//延时15us
    digitalWrite(Trig,LOW);//置低电平
    IntervalTime=pulseIn(Echo,HIGH);//用自带的函数采样反馈的高电平的宽度，单位us
    float S=IntervalTime/58;//使用浮点计算出距离，单位cm
    Serial.println(S);//通过串口输出距离数值
    S=0;IntervalTime=0;//对应的数值清零
    delay(500);//延时间隔决定采样的频率，根据实际需要变换参数

  }

}
