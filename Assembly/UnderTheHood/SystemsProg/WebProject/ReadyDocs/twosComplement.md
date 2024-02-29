Let's talk about Two's Complement

Two's complement is a way for us to represent (and work with) negative numbers in binary.

Since computers only  understand 0's and 1's, we need a way to represent and work with negative numbers.
If we want to write 149 in binary, we would get 10010101 (byte-sized value).
But if we want to use negative values, we will use signed integers.

Negative values will always have the leading bit as a 1. That will be the negative value in the number, so to speak.
Take 10000000. This signed integer would represent the decimal number -128. All bits to the right will be positive.
Thus, while unsigned values range from 0 (00000000) to 255 (11111111), signed values will range from -128 (100000000) To 127 (011111111).

This way, it's very simple to understand why we can only have about half the number of positive values when we create a signed integer as opposed to a unsigned integer (we're basically 'offering' up the first important bit as a negative value, allowing for our signed range of values).

Here's a trick to quickly get from a number to its symmetric:

1) Pick a number, say 00000101 (5 in decimal)

2) Flip its bits, so 11111010

3) Now add one bit, which results in 11111011 (so... -5 in decimal)

Say we're working with number with 4 bits, and we want to start working with 8 bits. To do that, we just add bits to the left. Either 0's if our number is positive, or 1's if our number is negative.

See here:
Decimal: -5, Binary (nibble): 1011
             Binary (byte): 11111011
Decimal   5, Binary (nibble): 0101
             Binary (byte): 00000101
