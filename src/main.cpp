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
	// 收到什么发送什么
	if (Serial.available())
	{
		// 读取一个字节
		recData = Serial.read();
		Serial.print("received: ");
		Serial.println(recData, HEX);
	}
}