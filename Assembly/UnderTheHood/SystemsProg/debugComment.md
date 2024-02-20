Tue 20 Feb 16:06:07 WET 2024

The main issue with this code is the initialization of variables without
value attribution. We are starting a variable called 'result' but we're not
assigning it any value at all.

By 'chance' (?) it's 0 at the start (can it just be something else unexpected?)
and then gets transformed to 100, which makes the program run funky.

Note that on the video example, the printing of a line at the start of the
program resulted in the first if also returning a line. That didn't happened
with my version of the code - apparently a clear demonstration of the 
unpredictability of not setting a value to the variable (unexpected behavior).

We must pay attention to our variables, our limits of action, etc.

--snip--


