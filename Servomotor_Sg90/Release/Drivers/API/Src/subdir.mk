################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/API/Src/Servomotor_Sg90.c 

OBJS += \
./Drivers/API/Src/Servomotor_Sg90.o 

C_DEPS += \
./Drivers/API/Src/Servomotor_Sg90.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/API/Src/%.o Drivers/API/Src/%.su Drivers/API/Src/%.cyclo: ../Drivers/API/Src/%.c Drivers/API/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F401xC -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Estudiante.DESKTOP-5OVK98J/STM32CubeIDE/workspace_1.16.0/Librerias-STM32F401CCU6/Servomotor_Sg90/Drivers/API" -I"C:/Users/Estudiante.DESKTOP-5OVK98J/STM32CubeIDE/workspace_1.16.0/Librerias-STM32F401CCU6/Servomotor_Sg90/Drivers/API/Inc" -I"C:/Users/Estudiante.DESKTOP-5OVK98J/STM32CubeIDE/workspace_1.16.0/Librerias-STM32F401CCU6/Servomotor_Sg90/Drivers/API/Src" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-API-2f-Src

clean-Drivers-2f-API-2f-Src:
	-$(RM) ./Drivers/API/Src/Servomotor_Sg90.cyclo ./Drivers/API/Src/Servomotor_Sg90.d ./Drivers/API/Src/Servomotor_Sg90.o ./Drivers/API/Src/Servomotor_Sg90.su

.PHONY: clean-Drivers-2f-API-2f-Src

