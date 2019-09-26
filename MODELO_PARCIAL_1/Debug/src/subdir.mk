################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/MODELO\ PARCIAL\ 1.c \
../src/pantallas.c \
../src/publicidades.c \
../src/utn.c 

OBJS += \
./src/MODELO\ PARCIAL\ 1.o \
./src/pantallas.o \
./src/publicidades.o \
./src/utn.o 

C_DEPS += \
./src/MODELO\ PARCIAL\ 1.d \
./src/pantallas.d \
./src/publicidades.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/MODELO\ PARCIAL\ 1.o: ../src/MODELO\ PARCIAL\ 1.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/MODELO PARCIAL 1.d" -MT"src/MODELO\ PARCIAL\ 1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


