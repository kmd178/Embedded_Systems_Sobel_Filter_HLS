#include <stdio.h> //Use -fsigned-char flag in order to use signed chars
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ap_cint.h>
#define SIZE	1024
void sobel(unsigned char input[SIZE*SIZE], unsigned char output[SIZE*SIZE]) {
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE m_axi depth=1048576 port=input offset=slave bundle=INPUT_BUNDLE
#pragma HLS INTERFACE m_axi depth=1048576 port=output offset=slave bundle=OUTPUT_BUNDLE


	uint10 i, j; //Max value=1024: Can be contained within 10bits
	int11 convulution_horizontal,convulution_vertical; //max=4*8bit: can be contained within 10bits + 1bit for the sign
	uint20 p; //10bit^2+10bit^2= 2*20bit= 21bit:  Can be contained within 21bits (20 because of the nature of the computation involved)
	uint10 res; // Can be contained within 10 bits


	for (j=1; j<SIZE-1; j+=1) {
		Convulution_row:for (i=1; i<SIZE-1; i+=1 ) {
				convulution_horizontal= -1*input[(i-1)+SIZE*(j-1)]
										-2*input[(i-1)+SIZE*(j-0)]
										-1*input[(i-1)+SIZE*(j+1)]
										+1*input[(i+1)+SIZE*(j-1)]
										+2*input[(i+1)+SIZE*(j-0)]
										+1*input[(i+1)+SIZE*(j+1)];
				
				convulution_vertical  = -1*input[(i-1)+SIZE*(j+1)]
										-2*input[(i-0)+SIZE*(j+1)]
										-1*input[(i+1)+SIZE*(j+1)]
										+1*input[(i-1)+SIZE*(j-1)]
										+2*input[(i+0)+SIZE*(j-1)]
										+1*input[(i+1)+SIZE*(j-1)];
			
				p=(convulution_horizontal*convulution_horizontal)+(convulution_vertical*convulution_vertical);
				res = sqrt(p); //replacing with <<
				output[j*SIZE + i]= (res>255)? 255 : (unsigned char)res;

		}
	}
}

