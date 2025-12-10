#include <REG51.H>   // or <AT89C51.H> depending on your header

sbit LED = P1^0;     // LED connected to Port 1, bit 0

void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++) {
        for (j = 0; j < 123; j++) {
            // Rough delay loop for ~1ms at 11.0592 MHz
        }
    }
}

void main(void) {
    LED = 0;              // Initialize output (depends on how LED is wired)
    while (1) {
        LED = 0;          // Turn LED ON (check your wiring)
        delay_ms(500);    // 500 ms delay
        LED = 1;          // Turn LED OFF
        delay_ms(500);
    }
}
