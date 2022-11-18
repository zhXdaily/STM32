// bsp:board sepport package 板级支持包
#include "bsp_led.h"

void LED_GPIO_Config(void)
{
    // 初始化GPIO结构体
    GPIO_InitTypeDef  GPIO_InitStruct;

    // 打开GPIOB的时钟
    RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK, ENABLE);
    
    // 配置GPIO引脚 模式 速度
    GPIO_InitStruct.GPIO_Pin = LED_G_GPIO_PIN;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;

    // 初始化GPIO
    GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
}
