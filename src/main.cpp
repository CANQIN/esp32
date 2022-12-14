/*3.串口实验*/
#include <Arduino.h>

void setup()
{
	// put your setup code here, to run once:
	Serial.begin(115200); // 将UART0的波特率初始化为115200
}

int recData;
void loop()
{
	// put your main code here, to run repeatedly:
	Serial.print("纪灿钦！");
	Serial.println("This is a uart0 demo!"); // 打印并换行
	delay(1000);
}