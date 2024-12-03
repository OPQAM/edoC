# Random notes after watching lecture by André Leite:

**Unions**

-> With Unions we can access the same memory using different types

typedef union price {
	float fprice;
	uint32_t raw_price;
	uint8_t vec_price[4];
} PRICE;

PRICE book_price;
book_price.fprice = 49.99; 

**Structures**

-> Structures aggregate several variables stored contiguously in memory

#include <stdint.h>  // to use uint8_t type

typedef struct book
{
	char book_title[50];
	char author[50];
	float book_price;
}BOOK;

-> Usage:

int main(int argc, char** argv)
{
	int ret = 0;

	(void) argc;
	(void) argv;

	BOOK c_bible = {.book_title = "The C Programming Language\0",
			.author = "Brian Kernighan & Dennis Ritchie\0",
			.book_price = 49.9};

	(void) printf("Book name: %s\n", c_bible.book_title);
	(void) printf("Book author: %s\n", c_bible.author);
	(void) printf("Book price: %f\n", c_bible.book_price);

	return ret;
}

-> We can have pointers to structures.

-> Here we can use OO in C

**Function pointers**

"In C, function pointers are pointers that point to functions instead of data. They allow you to pass functions as arguments to other functions, store functions in arrays, and call functions indirectly through the pointers. Function pointers are particularly useful for implementing callback mechanisms, where a function is passed as an argument to another function to be called back later."

--snip--

**EMBEDDED C**

- Similar to C;

- More keywords, but dependant on compiler features;

- usually cross-compiled - code is developed and compiled in a host environment and then the binary is transferred to the target microcontroller.

- Memory RAM and ROM are scarce (down to a few kbs)

- Hardware can trigger the execution of special functions ISRs (Interrupt Service Routines)

- The entry point of an empbedded c program isn't main.

- The entry is a startup assembly file that after performing boot up actions calls the main function.

- It's better to use the microcontroller's vendor's tools (IDE, Code Generator). (ie. we're using these instead of assembly code, ofc)

- They usually supply boiler plate codes and code generators/configurators for peripherals (sometimes these are buggy - depends)

- They also supply a linker script that injects information regarding the microcontroller.

- The main function in embedded C doesn't have parameters nor returns.

- There is work with peripherals to achieve hardware-related functioning (UART, I2C, Timers, PWM)

- Peripherals are configured and interfaced via memory-mapped registers in the RAM called Special Function registers.

- Sometimes it's necessary to go deep and read the datasheet/reference manual
(example in film RM0090 reference manual)

--snip--

**Commentary:**



