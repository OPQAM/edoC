###Using Make

We'll want to create a single file that will always **make** or compilation run for us so that we don't have to constantly type out our compilation string with all our files

See *makefile* on this very folder.


What's happening there is that if we run the command:
. make

...if the files after *start:* are present, then the next line will run, which is our gcc command to actually compile our code into a binary.

**make** has several other uses. It's in fact a 'GNU utility to maintain groups of programs' - check *man make*.

We can store variables, run scripts, etc.
