/*7.EEPROM实验*/
#include <Arduino.h>
#include <EEPROM.h>

void setup()
{
	Serial.begin(115200);
	Serial.println("");

	EEPROM.begin(4096); // 申请4096个字节的EEPROM存储空间
	// 写数据
	Serial.println("write begin");
	for (int addr = 0; addr < 4096; addr++)
	{
		int data = addr % 256;	  // EEPROM写入的数据时以字节为单位的
		EEPROM.write(addr, data); // 写入数据
	}
	EEPROM.commit(); // 保存更改的数据
	Serial.println("write done");

	// 读数据
	Serial.println("read begin");
	for (int addr = 0; addr < 4096; addr++)
	{
		int data = EEPROM.read(addr); // 读数据
		Serial.print(data);
		Serial.print(" ");
		delay(2);
		if ((addr + 1) % 256 == 0) // 每行显示256个数据
		{
			Serial.println("");
		}
	}

	Serial.println("read done");
}

void loop()
{
}