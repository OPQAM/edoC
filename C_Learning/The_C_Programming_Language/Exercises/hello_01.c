#include<stdio.h>

int main() 
{
    printf("Hello, Bing!\a");                     /*ping!*/
    printf("\nBackspacing\b\b\b\b\b\b\bpackers"); //backspacing (and overwriting)
    printf("\n\tMoving right\n");                 //tab
    printf("My Text\rMy new text\n");             //carriage return
    printf("Let's try to\vVertical tab...\n");
    printf("\x41\n");                             // x41 = 'A'
    printf("\u00A9\n");                           // The unicode for '©'


    /* Escape sequences in C:
     *
     * \a - alert bell
     * 
     * \b - backspace
     *
     * \e - escape character (not in C standard)
     *
     * \f - form feed (page break)
     *
     * \t - horizontal tab
     *
     * \r - carriage return (moves to the beginning of line)
     *
     * \u - unicode
     *
     * \x - hexadecimal
     *
     * \v - vertical tab */

}

/*
ASCII Table (0-127):
Dec  Char | Dec  Char | Dec  Char | Dec  Char
--------------------------|------------------
  0  NUL  |  32  SPACE|  64  @    |  96  `
  1  SOH  |  33  !    |  65  A    |  97  a
  2  STX  |  34  "    |  66  B    |  98  b
  3  ETX  |  35  #    |  67  C    |  99  c
  4  EOT  |  36  $    |  68  D    | 100  d
  5  ENQ  |  37  %    |  69  E    | 101  e
  6  ACK  |  38  &    |  70  F    | 102  f
  7  BEL  |  39  '    |  71  G    | 103  g
  8  BS   |  40  (    |  72  H    | 104  h
  9  TAB  |  41  )    |  73  I    | 105  i
 10  LF   |  42  *    |  74  J    | 106  j
 11  VT   |  43  +    |  75  K    | 107  k
 12  FF   |  44  ,    |  76  L    | 108  l
 13  CR   |  45  -    |  77  M    | 109  m
 14  SO   |  46  .    |  78  N    | 110  n
 15  SI   |  47  /    |  79  O    | 111  o
 16  DLE  |  48  0    |  80  P    | 112  p
 17  DC1  |  49  1    |  81  Q    | 113  q
 18  DC2  |  50  2    |  82  R    | 114  r
 19  DC3  |  51  3    |  83  S    | 115  s
 20  DC4  |  52  4    |  84  T    | 116  t
 21  NAK  |  53  5    |  85  U    | 117  u
 22  SYN  |  54  6    |  86  V    | 118  v
 23  ETB  |  55  7    |  87  W    | 119  w
 24  CAN  |  56  8    |  88  X    | 120  x
 25  EM   |  57  9    |  89  Y    | 121  y
 26  SUB  |  58  :    |  90  Z    | 122  z
 27  ESC  |  59  ;    |  91  [    | 123  {
 28  FS   |  60  <    |  92  \    | 124  |
 29  GS   |  61  =    |  93  ]    | 125  }
 30  RS   |  62  >    |  94  ^    | 126  ~
 31  US   |  63  ?    |  95  _    | 127  DEL

Some Unicode symbols:

Hex    Symbol  Description
--------------------------------
U+00A9   ©     Copyright sign
U+00AE   ®     Registered sign
U+00B1   ±     Plus-minus sign
U+2022   •     Bullet
U+20AC   €     Euro sign
U+2190   ←     Leftwards arrow
U+2191   ↑     Upwards arrow
U+2192   →     Rightwards arrow
U+2193   ↓     Downwards arrow
U+2605   ★     Black star
U+2665   ♥     Black heart suit
*/


