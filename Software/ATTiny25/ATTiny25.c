// fuse bits are just the factory default.  No need to set them.
#include <stdio.h>
#include <avr/wdt.h>

void InitIOPorts();
void watchdog_disable();
void watchdog_enable();

int main(void) {
	watchdog_enable();
	InitIOPorts();
	while (1) {	// this loop runs at 62.5kHz, assuming the attiny25 is running at the factory default of 1MHz.
		PORTB = 0b10111;
		asm("nop");asm("nop");asm("nop");   // these 3 nop's are required so that the ports are on and off with equal amounts of time.
		PORTB = 0b01111;
		wdt_reset();
	}
	return 0;
}

void InitIOPorts() {
	DDRB = 0;		//  all are inputs at this stage.
	PORTB = 0b11111;  	// turn on all pull up resistors.
	asm("nop");
	DDRB = 0b11000; 	// make PB3 and PB4 outputs.
}


void watchdog_disable(void)
{
	wdt_reset();
	wdt_disable();
}

void watchdog_enable(void)
{
	wdt_reset();
	wdt_enable(WDTO_15MS);
}
