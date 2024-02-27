-WIP- Clean and beautify this shit.
Also, add adequate images (small gifts showcasing the commands)

So, if we first run the compiler in its most simple version with:

. gcc -o pyramidExample pyramidExample.c -lcs50

And then open the compiled program with our debugger, we get this:
![Placeholder ext description not shown](path/to/the/image/from/this/location) #place here small gif showing program


Let's now compare this result with:
. gcc -Wall -Wextra -g -std=c11 pyramidExample.C -o pyramidExample2 -lcs50

![Placeholder ext description not shown](path/to/the/image/from/this/location) #place here small gif showing program

As we can see, the debugging is much clearer and closer to the original program.

Inside gdb we can do a series of things, namely:

**GNU Debugger -Useful Commands:**

. start - Begins the execution of the program and automatically adds a break point at 'main'.

. run - Runs the program, but doesn't create any automatic break point.

. quit - Exits gdb.

. where - Displays a backtrace of the current stack showing the function call.

. list - Lists the source code around the current execution point.

. break [file:line] if [expression] - Sets a breakpoint at a specific file and line, and can have an extra condition that can create the breakpoint.

. watch [expression] - Watches a variable or expression and breaks when the specific value being watched changes.

. continue (c) - Resumes program execution until a breakpoint is found.

. step (s) - Executes the current line of code and stops at the first possible moment. We usually step through code that we care about.

. next (n) - Unlike 'step' this doesn't step into function calls. We usually apply next to code that we don't care about, for example, stepping over a function and moving onto the next piece of code.

. finish (fin) - Continues the execution until the current function returns.

. info locals - Prints the values of all local variables in the current stack frame.

. info args - Prints the values of arguments to the current function.

. print (p) [expression] - Evaluates and prints the value of an expression.

--snip--

Ideally, we set breakpoints just before a bug in the code or a piece of code we want to inspect, of course, and we use watchpoints on variables to confirm expectations of how variables are updating

