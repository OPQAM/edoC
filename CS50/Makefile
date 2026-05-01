CC = gcc

# C Compilation
CFLAGS = -Wall -Wextra -std=c11 -g

# ASM human-readable assembly, no debug info
ASMFLAGS = -S -masm=intel -O0

# ASM (with debug info)
ASMFLAGS_DEB = -S -masm=intel -fverbose-asm -O0

# CS50 library (#include <cs50.h>)
LDLIBS = -lcs50


# make commands
%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

%.s: %.c
	$(CC) $(ASMFLAGS) $< -o $@

%.deb.s: %.c
	$(CC) $(CFLAGS) $(ASMFLAGS_DEB) $< -o $@
