################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/W03\ task.c 

C_DEPS += \
./src/W03\ task.d 

OBJS += \
./src/W03\ task.o 


# Each subdirectory must supply rules for building sources it contributes
src/W03\ task.o: ../src/W03\ task.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/W03 task.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/W03\ task.d ./src/W03\ task.o

.PHONY: clean-src

