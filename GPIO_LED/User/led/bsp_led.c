// bsp:board sepport package �弶֧�ְ�
#include "bsp_led.h"

void LED_GPIO_Config(void)
{
    // ��ʼ��GPIO�ṹ��
    GPIO_InitTypeDef  GPIO_InitStruct;

    // ��GPIOB��ʱ��
    RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK, ENABLE);
    
    // ����GPIO���� ģʽ �ٶ�
    GPIO_InitStruct.GPIO_Pin = LED_G_GPIO_PIN;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;

    // ��ʼ��GPIO
    GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
}
