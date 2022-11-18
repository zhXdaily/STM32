#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"

void Delay(uint32_t count)
{
    for(; count != 0; count --);
}

int main(void)
{
// 来到这里的时候 系统的时钟已经被配置成72M

    LED_GPIO_Config();                      // 初始化LED的GPIO
    KEY_GPIO_Config();                      // 初始化按键的GPIO

    while(1)
    {
        if(Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON)
            LED_G_TOGGLE;
    }
}



