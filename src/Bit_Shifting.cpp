//============================================================================
// Name        : Bit_Shifting.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>	// allow us to output the info in hex form -add 'hex' in cout
using namespace std;

int main()
    {

    // 0xFF123456  is what we are going for here

    unsigned char alpha = 0xFF;	//alpha value in hex  	-0x lets you know that this is a hex value
    unsigned char red = 0x12;	//red value in hex
    unsigned char green = 0x34;	//green value in hex
    unsigned char blue = 0x56;	//blue value in hex

    unsigned int color = 0;

    color += alpha;//										000000FF
    color = color << 8; // move all values in color left 8 bits(which is one byte, which is 2 digits in hex)
			// any numbers on the left will drop off and the right will be filled with the setfill('c')
			//
			//  -----****	color = color << 8;   OR   color <<= 8;   ****-----both mean the same
			//									0000FF00
    color += red; // add red to the right side getting rid of the fillers   			0000FF12
    color <<= 8; // shift everthing left by 2 spots, fill in the right side with filler		00FF1200
    color += green; // replace filler on right with green value					00FF1234
    color <<= 8; // shifter everything left by 2 again, fill in the right side with filler	FF123400
    color += blue; // dump filler and replace with blue value					FF123456

    cout << setfill('0') << setw(8) << hex << color << endl; //w/o 'hex' it is outputed as a decimal value (255 for 0xFF)

    //setw(int x) = make the output x digits long by padding the left side (_ _ _ _ _ _ F F)
    //setfill(char c) = fill in the padding with 'c' (0 0 0 0 0 0 F F)

    return 0;
    }
