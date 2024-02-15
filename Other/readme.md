Thu 15 Feb 16:28:50 WET 2024

Programming stuff that fits nowhere else
The TicTacToe program was done in class or, rather, for class.
I think that to add functionality to it I require something like macros

--snip--

TicTacToe.xlsx

The winning condition is achieved when one of the users (x or o) makes a line - this
prints "Vencedor!". The way that is achieved is pretty simple.

I wanted to control whose turn it is to play, in order to do that, I added a function next
to the Current Player. That IF basically takes the number of filled squares in the game and
does an modulus operation to check if the number of filled cells is even or odd.
This, in turn, tells us who is to play next.

I also had an ending condition, next to New game? which checks for one of the two previous 
victory conditions (ie. "Vencedor!" is printed) or if all the cells are filled. So, again,
the COUNTA function is used, just like before.

The player name can be changed, but that is mostly cosmetic.
More important is the Data>Data Validation applied to the 3x3 board. This was addded one cell
at a time. Don't recall exactly why I did that, but I was running into some issues when trying
to apply the rule to all the cells. Either way, the one to play next is controled by the modulus
function, and this Data Validation control basically picks what exactly can be typed, an x or o.

There are many other things I'd like to do, but I think they might be a bit more intricate.

--snip--
