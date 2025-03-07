################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/W01\ task.c 

C_DEPS += \
./src/W01\ task.d 

OBJS += \
./src/W01\ task.o 


# Each subdirectory must supply rules for building sources it contributes
src/W01\ task.o: ../src/W01\ task.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/W01 task.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/W01\ task.d ./src/W01\ task.o

.PHONY: clean-src

