/*5.PWM实验*/
#include <Arduino.h>

#define LED_GPIO 2
#define PWM1_CHANNEL 0
#define PWM1_RES 10		//分辨率
#define PWM1_FREQ 1000	//频率

void setup()
{
	ledcAttachPin(LED_GPIO,PWM1_CHANNEL);
	ledcSetup(PWM1_CHANNEL,PWM1_FREQ,PWM1_RES);
}

int pwm1DutyCycle;
void loop()
{
	while(pwm1DutyCycle < 1023)
	{
		ledcWrite(PWM1_CHANNEL,pwm1DutyCycle++);
		delay(1);
	}
	while(pwm1DutyCycle > 0)
	{
		ledcWrite(PWM1_CHANNEL,pwm1DutyCycle--);
		delay(1);
	}
}