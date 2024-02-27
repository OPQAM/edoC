In low-level programming, there are a series of important concepts regarding numbers.

Let's talk about two: Two's Complement and Bitwise Operations

Two's complement is a way for us to represent negative numbers in binary.

If computers basically understand 0's and 1's it would be a good idea to have a way to represent negative numbers, and therefore do subtraction (the addition of a positive and a negative value).

Let's consider byte-sized numbers.

10010101 translated into decimal would be 149.

But this is the unsigned version. In fact, for unsigned values that can go up to a byte in size, we have values that range from 00000000 to 11111111 (0 to 255 in decimal).

But, keeping with byte-sized values, how would we represent negative values?

Simple, by taking the leading value of our number (the first 0 or 1) and making that the deciding bit. So, if that leading number is 0 we have a positive (signed) number, and if that value is 1 we have a negative (signed) number.

How so? Simple, the leading value, if it exists, it's a negative value. So, 10000000 is, in fact -128. Any other bits that might come to the right of that bit are all positive.

So, if our original binary 10010101 is a signed value, we don't have 149, but instead we have -107. In fact, our signed values will range from 10000000 to 01111111 (or, in decimal from -128 to 127).

Zero, of course, remains unchanged (00000000)

This way, it's very simple to understand why we can only have about half the number of positive values when we create a signed integer as opposed to a unsigned integer (we're basically 'offering' up the first important bit as a negative value, allowing for our signed range of values).


