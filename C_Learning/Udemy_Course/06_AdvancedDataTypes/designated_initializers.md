We can do something like:

int a[6] = {[3] = 22, [1] = 5};
OR
int a[6] = {[3]22, [1]5};

This would be the same as doing:

int a[6] = {0, 5, 0, 22, 0 , 0};

We can also initialize a range of elements to the same value with:

´´´
[first ... last] = value
´´´



Check 'designated_initializers.c'
----