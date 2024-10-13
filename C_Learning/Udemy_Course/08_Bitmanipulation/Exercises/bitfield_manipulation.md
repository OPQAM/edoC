#The assignment


/*Challenge: Create bit field that creates an onscreen box
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
 *   -> By print out, we do mean in plain text: the stuff we are getting

    Original Box settings:
       ...
       ...
    
    Modified Box settings:
       ...
       ...*/


