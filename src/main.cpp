/*1.点亮LED，GPIO输出*/
#include <Arduino.h>

#define LED_GPIO_PIN 2

void setup()
{
	// put your setup code here, to run once:
	pinMode(LED_GPIO_PIN, OUTPUT); // LED输出模式
}

void loop()
{
	// 把按键状态作为LED的输出
	digitalWrite(LED_GPIO_PIN, HIGH);
	delay(500);
	digitalWrite(LED_GPIO_PIN, LOW);
	delay(500);
}
