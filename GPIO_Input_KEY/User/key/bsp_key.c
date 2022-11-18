#include "bsp_key.h"

void KEY_GPIO_Config(void)
{
    // 初始化GPIO结构体
    GPIO_InitTypeDef  GPIO_InitStruct;

    // 打开GPIO的时钟
    RCC_APB2PeriphClockCmd(KEY1_GPIO_CLK, ENABLE);
    
    // 配置GPIO引脚 模式 速度
    GPIO_InitStruct.GPIO_Pin = KEY1_GPIO_PIN;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;        // 浮空输入
    // 输入模式不需要配置速度
    //GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;

    // 初始化GPIO
    GPIO_Init(KEY1_GPIO_PORT, &GPIO_InitStruct);
}

uint8_t Key_Scan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    if(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_ON)
    {
        // 松手检测
        while(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_ON);
        return KEY_ON;
    }
    else
        return KEY_OFF;
}
