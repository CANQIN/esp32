/*1.按键，GPIO输入*/
#include <Arduino.h>

#define LED_GPIO_PIN 2
#define KEY_GPIO_PIN 0

bool keyStatus;

void setup()
{
	// put your setup code here, to run once:
	pinMode(LED_GPIO_PIN, OUTPUT); // LED输出模式
	pinMode(KEY_GPIO_PIN, INPUT);  // 输入上拉模式
}

void loop()
{
	// 读取按键状态
	keyStatus = digitalRead(KEY_GPIO_PIN);
	// 把按键状态作为LED的输出
	digitalWrite(LED_GPIO_PIN, !keyStatus);
}
