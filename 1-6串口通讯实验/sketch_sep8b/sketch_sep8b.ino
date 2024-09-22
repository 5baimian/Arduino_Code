void setup() {
  Serial.begin(9600);
  Serial.println("Please Input serial data");
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0)//检查串口缓存是否有数据等待传输
  {
   int SerialData=Serial.read();//只能读取一个字节的数据
    Serial.println(SerialData );
  }
  // put your main code here, to run repeatedly:

}
