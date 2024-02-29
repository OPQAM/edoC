In low-level programming, there are a series of important concepts regarding numbers.

Let's talk about two: Two's Complement and Bitwise Operations

Two's complement is a way for us to represent negative numbers in binary.

Since computers basically understand 0's and 1's it would be a good idea to have a way to represent negative numbers, and therefore do subtraction (the addition of a positive and a negative value).

Let's consider byte-sized numbers.

10010101 translated into decimal would be 149.

But this is the unsigned version. In fact, for unsigned values that can go up to a byte in size, we have values that range from 00000000 to 11111111 (0 to 255 in decimal).

But, keeping with byte-sized values, how would we represent negative values?

Simple, by taking the leading value of our number (the first 0 or 1) and making that the deciding bit. So, if that leading number is 0 we have a positive (signed) number, and if that value is 1 we have a negative (signed) number.

How so? Simple, the leading value, if it exists, it's a negative value. So, 10000000 is, in fact -128. Any other bits that might come to the right of that bit are all positive.

So, if our original binary 10010101 is a signed value, we don't have 149, but instead we have -107. In fact, our signed values will range from 10000000 to 01111111 (or, in decimal from -128 to 127).

Zero, of course, remains unchanged (00000000)

This way, it's very simple to understand why we can only have about half the number of positive values when we create a signed integer as opposed to a unsigned integer (we're basically 'offering' up the first important bit as a negative value, allowing for our signed range of values).

Here's a trick to quickly get from a number to its symmetric:

1) Pick a number, say 00000101 (5 in decimal)

2) Flip its bits, so 11111010

3) Now add one bit, which results in 11111011 (so... -5 in decimal)

If you find this confusing, remember that the leading bit is a negative (-128 in this case) and that value is added to every other value to its right. Quickly looking at 1111011 we can see that that would be 127 - 4 (decimal). So, 123. Therefore, the final sum would be 123 - 128, or -5.

You might also be wondering how to take a negative number and go from a nibble sized value toa byte sized value, for example.

Decimal: -5, Binary (nibble): 1011
             Binary (byte): 11111011

So, we just added 1's to the left.

And that is the pattern! If we want to work with a bigger memory, let's say, we just add 1's to the left to get the respective negative value (or 0's to get the respective positive value, of course).
