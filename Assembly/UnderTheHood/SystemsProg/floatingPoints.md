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

We'll be separating the coefficients into the integral value and the decimal value, ex:

-10²*3.2   (So, similar to scientific notation.. for now)

Nibbles would be extremely limiting. The leftmost bit as a signed bit, the bit next to that as the exponent, and the two other bits as coefficients would give us, for example:

1101 = -2*1 = -2

Let's expand this to bytes.

With bytes, we'll be using a signed bit, 3 E bits and 4 C bits.

We'll also be assuming, a priori, the constant to be always 1. This means that our 4 coefficient bits will in fact cover our decimal values (0.5, 0.25, 0.125, 0.0625)

But here's another rule... we need to enter an Exponent Bias, which, for a byte, will be -3

Thus, although we're using 3 bits for our exponent, allowing for 2⁰ -> 2⁷ possibilities, we'll have, in fact 2⁻³ -> 2⁴ possibilities. Having a negative exponent is extremely useful, and so we'll go with this.

Note that we have created a problem for ourselves, though. Since we're assuming that there is always a 1 constant value, we've just shut ourselves out of the number zero. This is a no-no. We definitely need to be able to use zero and very precise approximations of zero.

We can solve this by removing the highest and lowest possible exponents 111 and 000.

Our usual calculations with other exponents are our normal forms, with a leading 1 and an exponent bias of -3. But when using all 000's we'd be working in denormalized form, with a leading 0 and with an exponent bias of -2. Thus, zero would simply be 00000000. As for exponent values of 111, those would be our special cases. The value of 01110000 would represent positive infinity and 11110000 would represent negative infinity. This is rather useful for a way to represent very high or very low numbers.
Anything else (meaning any value in the coefficient places) means NaN or Not a Number.

Fancy, yes? I love it. These were very smart choices on very restricted systems.

So, let's look at some numbers

01101100 -> +2³ * (1 + 0.5 + 0.25) = 14 (base 10)
or, if you'd rather see this represented in another way:

2³ means, in binary, to take our base coefficient and moving 3 to the right. So:

Coefficient 1.1100, and after multiplication: 1110.0 = 14 (base 10)

10001100 -> -2⁻² * (0 + 0.5 + 0.25) = 0.1875 (base 10)

Or, using the same logic as before:

0.1100 -> moving 2 to the left -> 0.00110 (every decimal place to the right of our dot is 2⁻¹, so 0.0.125 + 0.0625) = 0.1875

How about 01111100? Well, that's a NaN.

And 00000000? That's plain old zero.

We won't be usually seeing minibits (8 bits) in action. Instead we'll be seeing either floats (32 bits), AKA: single-precision floating points, or doubles (64 bits) AKA: double precision floating points, but the same logic applies.

However, all these standards have these same principles:

- Leading signed bit;
- Biased exponent bits;
- Significant bits with implicit loading of 1;
- Exponent is all 0's (denormalized) or all 1's (special cases).

For reference:

32-bit floating points:

E-bits: 8
Bias: -127
C-bits: 23

64-bit floating points:

E-Bits: 11
Bias: -1023
C-bits: 53

Check out https://float.exposed

When workin with very high numbers remember that precision is lost, also that some values simply cannot be represented without some rounding errors.
We must be extra careful on high precision systems.

Also, as an extra warning, remember that floating point arithmetic is NOT associative (there is constant rounding off). In most systems favor double instead of floats.

WIP - clean up and make it more readable + understandable
