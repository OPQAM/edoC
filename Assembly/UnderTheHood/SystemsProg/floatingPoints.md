Sun 24 Mar 19:09:14 WET 2024

This file holds my notes on floating point numbers and their representation.

One way of representing floating point numbers, in decimal, is by having base ten multiplied by an exponent and that value multiplied by a coefficient.

So, as an example, 10²*3.3 would be 100 * 3.3 or 330 (base 10).

We'll use that scheme to understand how computers process and store floating points. But we'll do it in binary:

2^E*C, with E as the exponent, and C as the coefficient.

Since we have a limited number of usable bits, we have to decide how we're going to divide said bits between E and C.

Let's start with a very small size, the nibble: 4 bits.

Remember also, that we'll need to be able to represent positive and negative values. This means that the leftmost bit will be used to decide if we have a positive or a negative number. 0 for positive and 1 for negative.
This doesn't leave a lot of room for our Exponent and our Coefficient.

Since our exponent will give us magnitude and C will give us precision (test that idea for yourself with number experiments) we'll probably want 2 bits for C and 1 bit for E:

S E C1 C2   -> Sign, Exponent, Coefficients 1 and 2

There are also other issues we should consider:
