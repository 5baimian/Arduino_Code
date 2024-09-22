//randomSeed() 产生一个随机种子，种子来自于模拟引脚A0
void setup() 
{
  pinMode(2,INPUT_PULLUP);
  /*pinMode(3,OUTPUT);//三口接a
  pinMode(4,OUTPUT);//四口接b
  pinMode(5,OUTPUT);//g
  pinMode(6,OUTPUT);//f
  pinMode(7,OUTPUT);//c
  pinMode(8,OUTPUT);//d
  pinMode(9,OUTPUT);//e
  */
  //使用while循环，先判断再执行
  int pinNumber=3;
  while(pinNumber<=9)
  {
    pinMode(pinNumber,OUTPUT);
    pinNumber++;
  }
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  //do while循环，先执行，后判断

}
//一位共阳极数码管0-9循环显示
/*void loop()
 {
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字1
   digitalWrite(4,LOW);
   digitalWrite(7,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字2
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字3
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字4
   digitalWrite(4,LOW);
   digitalWrite(7,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字5
   digitalWrite(3,LOW);
   digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
   digitalWrite(7,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字6
   digitalWrite(3,LOW);
   digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(7,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字7
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(7,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字8
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字9
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   //数字0
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   delay(1000);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(10);
   
}*/
//模块化处理
//函数random(min,max)-用来产生随机数(在最小值和最大值减1之间产生随机数值)
void loop()
{
  int myNumber;
  if(!digitalRead(2))
  {
     myNumber=getRandomNumber(0,10);
  }
  
  displayNumber(myNumber);//显示数字
  
}
void displayClear()
{
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   delay(50);
}
void displayNumber(int LEDNumber)
{
switch(LEDNumber)
  {
    case 1://显示
   digitalWrite(4,LOW);
   digitalWrite(7,LOW);
   break;
   case 2:
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   break;
   case 3:
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   break;
   case 4:
   digitalWrite(4,LOW);
   digitalWrite(7,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   break;
   case 5:
   digitalWrite(3,LOW);
   digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
   digitalWrite(7,LOW);
   break;
   case 6:
    digitalWrite(3,LOW);
   digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(7,LOW);
   break;
   case 7:
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(7,LOW);
   break;
   case 8:
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   break;
   case 9:
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   break;
   case 0:
    digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   break;
   default:
   digitalWrite(9,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   break;
  }
}

int getRandomNumber(int minNumber,int maxNumber)
{//产生随机参数
  int randomNumber;
   int i=0;
   while(i<5)
   {
    i=i+1;
    randomNumber=random(minNumber,maxNumber);
    displayNumber(randomNumber);
    delay(10);
    displayClear();
    delay(10);

    Serial.print("i=");
    Serial.println(i);
    Serial.print("randomNumber= ");//字符串
    Serial.println(randomNumber);//监视变量
    Serial.println("");//打印空白行
   }
  
  return randomNumber;
}
