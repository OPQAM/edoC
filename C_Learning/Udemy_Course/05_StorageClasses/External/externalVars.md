When working with external variables the variable has to be defined in some place among the source files.

The first way is to declare the variable outside of any function, NOT preceded by extern.

ex:

int moveNumber;

The other way is to declare the variable outside of any function, placing the keyword extern in from of the declaration, explicitly assigning an initial variable to it.

ex:

extern int moveNumber = 0;

---

Note: these two are mutually exclusive.


