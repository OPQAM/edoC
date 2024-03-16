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
