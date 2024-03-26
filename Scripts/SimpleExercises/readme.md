Just a series of very simple scripts - the ideas (challenges) taken from a mobile app

--snip--

Sat 16 Mar 21:07:15 WET 2024

Working with 'copier.c'. I'll be pushing stuff to github a lot more frequently, even for simple programs such as this, so that I can keep up with my learning process, and see what was done (go back to a change, etc).

--snip--

when asking to read from a file that doesnt exist the program returns the correct error message, but it also returns Segmentation Fault

Right now there isnt a need for a null detection on the write option for copier. If a file doesnt exist, the text will be copied from one file to the other.
Note: copying from text A to text A clears all text.
The Segmentation fault was the result of asking to close the file. But since there was no file... segmentation fault. It shouldn't be a segmentation fault, though... right?

Removed the error messages from non-existent files to write or append to. They are created if they don't exist, so this isn't needed. Could add one such error for the 'a' - stating that there is no such a file.

--snip--

Wed 20 Mar 21:06:05 WET 2024

Having some fun and practice with a simple addition machine. The 'simplicity' came from realizing that I could just summon a regular integer and add to it if I wanted to do summation.

I controlled for possible bad input in a similar fashion to what was done with the matrix multiplication program. But this got me thinking about accepting input that can directly be translated into an integer. So, the program should refuse 7.1 or 7.9, but it should absolutely accept a value like 7.0 or 7.00 as being 7. A regular integer.

To achieve this I'll nedd (as a possible solution) to take in values originally as floats, and then to check if the fractional part of the float = 0.

-> Finished V2. It does everything correctly! Except addition........

I think that the problem lies with the way floats and doubles are represented and how they accumulate errors and... well... actually work. I'll have to take a gander tomorrow. Unfortunately my time has been very limited.

--snip--


