/*6.定时器实验*/
#include <Arduino.h>

#define LED_GPIO 2

hw_timer_t *timer = NULL;
bool ledStates;

void Timer0_Interrupt()
{
	ledStates = !ledStates;
	digitalWrite(LED_GPIO, ledStates);
}

void setup()
{
	Serial.begin(115200);
	pinMode(LED_GPIO, OUTPUT);

	/* 使用定时器0，1/(80MHZ/80) = 1us ，周期为1us */
	timer = timerBegin(0, 80, true);

	/* 中断回调函数为Timer0_Interrupt */
	timerAttachInterrupt(timer, &Timer0_Interrupt, true);

	/* 计数Count为1000000，也就是1秒中断一次，重复计数 */
	timerAlarmWrite(timer, 1000000, true);

	/* 启动定时器*/
	timerAlarmEnable(timer);
	Serial.println("timer0 start");
}

void loop()
{
}