# THIS HAS BEEN ANOTATED. THE FIRST 106 LINES REMOVED. FOCUSING ON MAIN():

0000000000001139 <main>:
108     1139:   55                      push   %rbp                    # Save current base pointer on the stack
109     113a:   48 89 e5                mov    %rsp,%rbp               # Set the base pointer to the current stack pointer
110     113d:   48 83 ec 10             sub    $0x10,%rsp              # Allocate 16 bytes of space on the stack for local variables
111     1141:   c7 45 fc 00 00 00 00    movl   $0x0,-0x4(%rbp)         # Initialize x with 0 (it's at offset -0x4 from rbp)
112     1148:   c7 45 f8 01 00 00 00    movl   $0x1,-0x8(%rbp)         # Initialize y with 1 (it's at offset -0x8 from rbp)
113     114f:   8b 45 fc                mov    -0x4(%rbp),%eax         # Load the value of x into eax
114     1152:   89 c6                   mov    %eax,%esi               # Copy the value from eax to esi (used as an argument for printf)
115     1154:   48 8d 05 a9 0e 00 00    lea    0xea9(%rip),%rax        # Load the address of the format string into rax
116     115b:   48 89 c7                mov    %rax,%rdi               # Set rdi to the address of the format string
117     115e:   b8 00 00 00 00          mov    $0x0,%eax               # Set eax to 0 (return value of printf)
118     1163:   e8 c8 fe ff ff          call   1030 <printf@plt>       # Call printf to print the value of x
119     1168:   8b 55 fc                mov    -0x4(%rbp),%edx         # Move the value of x (from offset -0x4) to edx
120     116b:   8b 45 f8                mov    -0x8(%rbp),%eax         # Move the value of y (from offset -0x8) to eax
121     116e:   01 d0                   add    %edx,%eax               # Add the values of x and y (z = x + y)
122     1170:   89 45 f4                mov    %eax,-0xc(%rbp)         # Store the result (z) at offset -0xc from rbp
123     1173:   8b 45 f8                mov    -0x8(%rbp),%eax         # Move the value of x to eax
124     1176:   89 45 fc                mov    %eax,-0x4(%rbp)         # Store the value of x at offset -0x4 from rbp (y = x)
125     1179:   8b 45 f4                mov    -0xc(%rbp),%eax         # Move the value of z to eax
126     117c:   89 45 f8                mov    %eax,-0x8(%rbp)         # Store the value of z at offset -0x8 from rbp (x = z)
127     117f:   81 7d fc fe 00 00 00    cmpl   $0xfe,-0x4(%rbp)        # Compare the value of x with 254
128     1186:   7e c7                   jle    114f <main+0x16>        # Jump back to the loop if x is less than or equal to 254
129     1188:   eb b7                   jmp    1141 <main+0x8>         # Jump to the beginning of the outer loop
