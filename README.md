# Librerias STM32

Repositorio de librerías y ejemplos en **C para STM32** (HAL/LL).  
Incluye drivers de periféricos básicos, módulos externos, protocolos de comunicación y utilitarios.

## Contenido

- **Perifericos** → GPIO, Timers, UART, SPI, I2C, ADC, DAC, RTC, Watchdog.  
- **Drivers/Motores** → Servo (SG90, MG995), Motor DC (PWM + puente H), Motor paso a paso (ULN2003, A4988).  
- **Drivers/Displays** → LCD 16x2 (HD44780), OLED SSD1306.  
- **Drivers/Sensores** → DHT11/DHT22, DS18B20, MPU6050, HC-SR04.  
- **Drivers/Modulos** → Bluetooth (HC-05), Wi-Fi (ESP8266), RF 433 MHz, EEPROM I2C/SPI.  
- **Comunicación** → Modbus RTU/TCP, CAN, USB CDC.  
- **Utilidades** → Delay, logs por UART, ring buffer, parser de comandos.  

## Uso
Cada módulo incluye:
- Archivos `.c` y `.h`.  
- Ejemplo mínimo de uso.  
- Notas sobre configuración (clock, pines, etc).  

La idea es tener una librería modular, fácil de integrar y reutilizar en cualquier proyecto STM32.

---
