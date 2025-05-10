#include "stm32f4xx_hal.h"
#include "error_handler.h"

void Error_Handler(void)
{
    __disable_irq();
    while (1) {
        // optionally blink LED here
    }
}
