/* 舵机相关函数：
   Servo.attach(pin)   告知Arduino舵机的数据线连接在哪一个引脚上
   Servo.write(0-180)  将舵机轴旋转到相应的角度位置
   Servo.read()        获取当前舵机轴角度信息
   Servo.attached()    检查某一个舵机对象是否连接在开发板引脚上，判断舵机参数是否已发送到舵机所在接口
   Servo.deattach()    将舵机对象与Arduino开发板断开连接，该接口（9或者10接口）可继续被用作PWM接口
*/

/*方法一：使用Arduino自带的Servo函数及其语句
#include<Servo.h>//库头文件
int pos=0;   //定义角度存储器
Servo servo_3;  //定义舵机引脚名

void setup() 
{
  servo_3.attach(3,500,2500);  //定义引脚，后的500和2500可省略
}

void loop() 
{
  //以1度的步长将舵机从0度扫描到180度
  for(pos=0;pos<=180;pos+=1)
  {//告诉伺服转到变量“pos”中的位置
   servo_3.write(pos);
   delay(15);//等待15ms让伺服到达该位置
  }
  for(pos=180;pos>=0;pos-=1)
  {
    servo_3.write(pos);//告诉伺服转到变量“pos”中的位置
    delay(15);//等待15ms让伺服到达该位置
  }
}
*/

/*  函数如下：
   digitalWrite()          将数字引脚写HIGH或LOW
   delayMicroseconds(us)   与delay（）函数都可用于暂停程序运行，不同在于参数单位是微秒  
   pinMode()               将引脚设置成三种不同的模式
   Serial(串行通讯)函数
   Serial.begin(speed)     设置电脑与Arduino进行串口通讯时的数据传输速率（每秒传输字节数，long(长整型数据)）,无返回值，
   Serial.println(val)      以人类可读的ASCII码形式向串口发送数据，类似print（）指令，但是有换行，其中val是要发送的数据（任何数据类型）
   Serial.read()            从设备接收到的数据中读取一个字节的数据
   Serial.print()           以人类可读的ASCII码形式向串口发送数据1
  */            
//方法二：通过Arduino的普通数字传感器接口产生占空比不同的方波，模拟产生PWM信号进行舵机定位
//此程序让舵机转动到用户输入数字所对应的角度数的位置，并将角度打印显示到屏幕上
/*int servopin=3;//定义数字接口3连接伺服舵机信号线
int myangle;//定义角度变量
int pulsewidth;//定义脉宽变量
int val;

void servopulse(int servopin,int myangle)//定义一个脉冲函数
{
  pulsewidth=(myangle*11)+500;//将角度转化为500-2480的脉宽值
  digitalWrite(servopin,HIGH);//将舵机接口电平置高
  delayMicroseconds(pulsewidth);//延时脉宽值的微秒数
  digitalWrite(servopin,LOW);//将舵机接口电平置低
  delay(20-pulsewidth/1000);
}


void setup()
{
  pinMode(servopin,OUTPUT);//设定舵机接口为输出接口
  Serial.begin(9600);//连接到串行接口，波特率为9600
  Serial.println("servo=o_seral_simple ready");
}

void loop()//将0到9的数转化为0到180角度，并让LED闪烁相应数的次数
{
  val=Serial.read();//读取串行端口的值
  if(val>='0'&&val<='9')
  {
    val=val-'0';//将特征量转化为数值变量
    val=val*(180/9);//将数字转化为角度
    Serial.print("moving servo to ");
    Serial.print(val,DEC);//附加参数来指定数据的格式，DEC-十进制
    Serial.println();
    for(int i=0;i<=50;i++)//给予舵机足够的时间让他转到指定角度
    {
      servopulse(servopin,val);//引用脉冲函数
    }
  }
}*/


//方法三
#include <Servo.h>
Servo myServo;//创建Servo对象myServo
int dataIndex=0;  //创建整数型变量，存储输入数据序列号
void setup()
{
  myServo.attach(6);
  Serial.begin(9600);
  Serial.println("Please input serial data ");

}
void loop()
{
  if(Serial.available()>0)
  {
    dataIndex++;//处理数据序列号并通过串口监视器显示
    Serial.print("dataIndex= ");
    Serial.print(dataIndex);
    Serial.print(",");

    int pos=Serial.parseInt();//解析串口数据中的整数信息并赋值给变量pos
    Serial.print("Set servo position: ");
    Serial.println(pos);//通过串口监视器显示变量pos数值
    myServo.write(pos);//使用pos变量数值设置伺服电机
    delay(15);
  
  
  }
}













