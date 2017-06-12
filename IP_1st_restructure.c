#include <stdio.h> //Use -fsigned-char flag in order to use signed chars
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define SIZE	1024
void sobel(unsigned char input[SIZE*SIZE], unsigned char output[SIZE*SIZE]) {
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE m_axi depth=1048576 port=input offset=slave bundle=INPUT_BUNDLE
#pragma HLS INTERFACE m_axi depth=1048576 port=output offset=slave bundle=OUTPUT_BUNDLE

	int i, j, res;
	double p;
	int horiz_operator[3][3] = {{-1, 0, 1},
	                             {-2, 0, 2},
	                             {-1, 0, 1}};
	int vert_operator[3][3] = {{1, 2, 1},
	                            {0, 0, 0},
	                            {-1, -2, -1}};
	//int one=0,two=0;

    ///////////////////////computation/////////////////////////
	for (j=1; j<SIZE-1; j+=1) {
		for (i=1; i<SIZE-1; i+=1 ) {
			p = (convolution2D(i, j, input, horiz_operator))*(convolution2D(i, j, input, horiz_operator)) +
				(convolution2D(i, j, input, vert_operator))*(convolution2D(i, j, input, vert_operator));
			res = (int) sqrt((double) p);
			if (res > 255){
				output[i*SIZE + j] = 255;
				//one++;
			}
			else{
				output[i*SIZE + j] = (unsigned char)res;
				//two++;
			}
		}
	}
	//printf("Sobel done with ones:%d and twos:%d\n",one,two);
}

/* Implement a 2D convolution of the matrix with the operator
 * posy and posx correspond to the vertical and horizontal disposition of the *
 * pixel we process in the original image, input is the input image and       *
 * operator the operator we apply (horizontal or vertical). The function ret. *
 * value is the convolution of the operator with the neighboring pixels of the*
 * pixel we process.														  */
int convolution2D(int posy, int posx, const unsigned char *input, int operator[][3]) {
	int i, j, res;
	res = 0;
	for (j = -1; j <= 1; j++) {
		for (i = -1; i <= 1; i++) {
			res += input[(posy + i)*SIZE + posx + j] * operator[i+1][j+1];
		}
	}
	return(res);
}
