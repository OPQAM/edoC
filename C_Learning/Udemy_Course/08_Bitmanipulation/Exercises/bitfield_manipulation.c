#include <stdio.h>

struct fun_box {
    unsigned int :4; /*filling*/
    unsigned int fill_opaque:1;
    unsigned int fill_color:3;
    unsigned int :2; /*filling*/
    unsigned int border_show:1;
    unsigned int border_color:3;
    unsigned int border_style:2;
};

void box_printer(int opaque, int fill, int b_show, int b_color, int b_style);

int main(void) {
    struct fun_box box;
    
    /*The original box settings*/
    unsigned int original_opaqueness = box.fill_opaque = 1;
    unsigned int original_fill_color = box.fill_color = 3;
    unsigned int original_border = box.border_show = 1;
    unsigned int original_border_color = box.border_color = 2;
    unsigned int original_border_style = box.border_style = 2;
    
    printf("Original box settings:\n");

    box_printer(box.fill_opaque, box.fill_color, box.border_show, box.border_color, box.border_style);



    return 0;
}

void box_printer(int opaque, int fill, int b_show, int b_color, int b_style) {

    if (opaque == 1) {
        printf("test 123");
    } else {
        printf("ddd");
    }
    // ISSUE: Not making this code huge with print statements and substitutions for every color  in 7 possible.
}











/*Create bit field that creates an onscreen box
 * - opaque or transparent
 * - fill color is one of: black, red, green, yellow, bluw, magenta, cyan or white
 * - border shown or hidden
 * - same palette of colors
 * - border can be solid, dotted or dashed
 *
 *   1 bit -> opaque/transparent; border shown/hidden;
 *   2 bits -> three border styles
 *   3 bits -> 8 color values BGR
 *   10 bits total
 *
 *   padding for fill-related info (byte1); border-related (byte2)
 *
 *   000 -black; 001 - red; 010 - green; 011 - yellow; 100 - blue;
 *   101 - Magenta; 110 - cyan; 111 - white
 *
 *   -> Create structure, with default types;
 *   -> Display these default values
 *   -> Modify the contents of the structure, by accessing each bitfield
 *      and changing the default value to another value
 *   -> Display these values
 *   -> By print out, we do mean in plain text: the stuff we are getting*/


