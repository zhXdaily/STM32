#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"

void Delay(uint32_t count)
{
    for(; count != 0; count --);
}

int main(void)
{
// ���������ʱ�� ϵͳ��ʱ���Ѿ������ó�72M

    LED_GPIO_Config();                      // ��ʼ��LED��GPIO
    KEY_GPIO_Config();                      // ��ʼ��������GPIO

    while(1)
    {
        if(Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON)
            LED_G_TOGGLE;
    }
}



