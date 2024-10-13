


/*mandatory arguments and optional arguments (afterwards)
 *
 * Common practice: have some number that will tell us how many arguments there are.
 * We need to be able to reference the variable number of arguments used inside the function
 * We can solve this indirectly, through pointers.
 *
 * Macros:
 * va_list  -> accessing optional parameters (argument list)
 * va_start -> will connect argument list with some argument pointer
 * va_arg -> fetch current argument connected to argument list
 * va_end -> when we want to stop using the variable argument list (cleanup)
 * va_copy -> used in situations for which we need to save our current location
 *
 * Creating a variadic function:
 *
 * step 1 - provide a function prototype using an ellipsis (three dots)
 * -> indicates that a variable number of arguments may follow any number of fixed arguments
 * -> must have at least one fixed argument
 * 
 * Examples:
 * void f1(int n, ...);
 * int f2(const char * s, int k, ...);
 * (etc)
 *
 * step 2 - create a va_list type variable in the function definition
 *
 * step 3 - initialize the variable to an argument list
 * -> need to copy the argument list to the va_list variable using va_start
 *
 * Example:
 * double average(double v1, double v2, ...){
 * va _list parg;         // pointer for variable argument list
 * // More code to go here...
 * va_start
 *
 * */
