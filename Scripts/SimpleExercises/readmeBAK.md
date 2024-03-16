Just a series of very simple scripts - the ideas (challenges) taken from a mobile app

--snip--

Sat 16 Mar 21:07:15 WET 2024

Working with 'copier.c'. I'll be pushing stuff to github a lot more frequently, even for simple programs such as this, so that I can keep up with my learning process, and see what was done (go back to a change, etc).

--snip--

when asking to read from a file that doesnt exist the program returns the correct error message, but it also returns Segmentation Fault

Right now there isnt a need for a null detection on the write option for copier. If a file doesnt exist, the text will be copied from one file to the other.
