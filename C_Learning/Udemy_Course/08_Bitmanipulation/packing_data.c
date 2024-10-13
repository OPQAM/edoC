/* We can pack info into bits of a byte if we don't need entire byte.
 *
 * We can use structures or we can use unsined ints/long vars.
 * Let's check the latter*/


/*EX:
 *
 * thre flags, F1, F2, F3, a type (int from 1 to 255), and index (int from 0 to 100,000)
 *
 * type requires 8 bits.
 * index reuires 18 bits.
 * the flags require 3 bits.
 *
 * unsigned in packed_data; // 32 bits on most systems
 *
 * We're not creating  a variable for each of these. Only one collective one.
 *
 * Representation:
 *
 * 000 0 0 0 00000000 000000000000000000
 *
 * In order: UNUSED, F1-F3, TYPE, INDEX
 *
 * This can easily become a mess when setting up values using masks*/


