################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Blinky.lss \

FLASH_IMAGE += \
Blinky.hex \

EEPROM_IMAGE += \
Blinky.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Blinky.elf secondary-outputs

# Tool invocations
Blinky.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C++ Linker'
	avr-gcc --cref -s -Os -o"Blinky.elf" $(OBJS) $(USER_OBJS) $(LIBS) -lm -Wl,-Map,Blinky.map,--cref -mrelax -Wl,--gc-sections -L"C:\development\workspace\arduino\eclipse\Blinky" -mmcu=atmega328p
	@echo 'Finished building target: $@'
	@echo ' '

Blinky.lss: Blinky.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Blinky.elf  >"Blinky.lss"
	@echo 'Finished building: $@'
	@echo ' '

Blinky.hex: Blinky.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Blinky.elf  "Blinky.hex"
	@echo 'Finished building: $@'
	@echo ' '

Blinky.eep: Blinky.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Blinky.elf  "Blinky.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Blinky.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Blinky.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(S_DEPS)$(LSS)$(C_DEPS)$(FLASH_IMAGE)$(CC_DEPS)$(ELFS)$(C++_DEPS)$(OBJS)$(CXX_DEPS)$(ASM_DEPS)$(EEPROM_IMAGE)$(SIZEDUMMY)$(S_UPPER_DEPS)$(CPP_DEPS) Blinky.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
