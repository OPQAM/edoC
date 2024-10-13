extern char text[]; // we don't need to specify
                    // the size here. It's
                    // in extern_main.c

void foo(void) {

    extern int i;

    i = 100;
    
}