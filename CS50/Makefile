CC = gcc

# C Compilation
CFLAGS = -Wall -Wextra -std=c11 -g

# ASM human-readable assembly, no debug info
ASMFLAGS = -S -masm=intel -O0

# ASM (with debug info)
ASMFLAGS_DEB = -S -masm=intel -fverbose-asm -O0


# Respective commands
%: %.c
	$(CC) $(CFLAGS) $< -o $@

%.s: %.c
	$(CC) $(ASMFLAGS) $< -o $@

%.deb.s: %.c
	$(CC) $(CFLAGS) $(ASMFLAGS_DEB) $< -o $@
