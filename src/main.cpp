/*2.按键输入，GPIO输入，中断方式*/
#include <Arduino.h>

#define LED_GPIO_PIN 2
#define KEY_GPIO_PIN 0

bool keyStatus;

void keyCallback(); // 中断回调函数声明
void setup()
{
	pinMode(LED_GPIO_PIN, OUTPUT);						// LED输出模式
	pinMode(KEY_GPIO_PIN, INPUT);						// 输入上拉模式
	attachInterrupt(KEY_GPIO_PIN, keyCallback, CHANGE); // 中断使能
}

void loop()
{
}

void keyCallback()
{
	// 读取按键状态
	keyStatus = digitalRead(KEY_GPIO_PIN);
	// 把按键状态作为LED的输出
	digitalWrite(LED_GPIO_PIN, !keyStatus);
}
