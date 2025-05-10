#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

void MX_GPIO_Init(void);

#define LED_GREEN_Pin        GPIO_PIN_13
#define LED_GREEN_GPIO_Port  GPIOG

#ifdef __cplusplus
}
#endif

#endif
