#include "stm32f4xx_hal.h"
#include "clock_config.h"
#include "gpio_config.h"


int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
 

    while (1)
    {
        
    }
}
