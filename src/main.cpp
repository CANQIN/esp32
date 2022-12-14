/*4.ADC实验*/
#include <Arduino.h>

#define ANALOG_PIN 0

void setup()
{
	// put your setup code here, to run once:
	Serial.begin(115200); // 将UART0的波特率初始化为115200
	Serial.println("ADC Demo!");

}

int analogValue;
void loop()
{
	analogValue = analogRead(ANALOG_PIN);
	Serial.print("ADC value on Pin(0) is ");
	Serial.println(analogValue);
	delay(1000);
}