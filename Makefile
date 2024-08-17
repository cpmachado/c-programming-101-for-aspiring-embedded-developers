.PHONY:  all flash
DEVICE ?=

all: flash
	@echo check the board

blink.elf: led-blink.c
	avr-gcc -mmcu=atmega328p -o $@ $<

blink.hex: blink.elf
	avr-objcopy -j .text -j .data -O ihex $< $@

# flash device with avrdude
flash: blink.hex
	file $(DEVICE)
	avrdude -p m328p -c arduino -e -U flash:w:blink.hex -P $(DEVICE)
