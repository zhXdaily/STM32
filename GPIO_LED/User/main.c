#include "stm32f10x.h"
#include "bsp_led.h"

void Delay(uint32_t count)
{
    for(; count != 0; count --);
}

int main(void)
{
// 来到这里的时候 系统的时钟已经被配置成72M

    LED_GPIO_Config();
    while(1)
    {
        /*
        GPIO_SetBits(LED_G_GPIO_PORT, LED_G_GPIO_PIN);
        Delay(0xFFFFF);
        GPIO_ResetBits(LED_G_GPIO_PORT, LED_G_GPIO_PIN);
        Delay(0xFFFFF);
        */
        
       // 带参宏
       LED_G(OFF);
       Delay(0xFFFFF);
       LED_G(ON);
       Delay(0xFFFFF);
    }
}



