#include <stdio.h> //Use -fsigned-char flag in order to use signed chars
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define SIZE	1024
void sobel(unsigned char *input, unsigned char *output);

/* The arrays holding the input image, the output image and the output used *
 * as golden standard. The luminosity (intensity) of each pixel in the      *
 * grayscale image is represented by a value between 0 and 255 (an unsigned *
 * character). The arrays (and the files) contain these values in row-major *
 * order (element after element within each row and row after row. 			*/
int main() {
	double PSNR=0,t;
	int i, j;
	//unsigned char input[SIZE*SIZE];    //Cannot GDB, Stack gets almost full after 1024*1024 registers have been loaded
	unsigned char *input = malloc (sizeof(unsigned char)*SIZE*SIZE); // malloc is necessary to implement arrays of that size.
	unsigned char *output = malloc (sizeof(unsigned char)*SIZE*SIZE);
	unsigned char *golden = malloc (sizeof(unsigned char)*SIZE*SIZE);
	fread(input, 1, SIZE*SIZE,  fopen("input.grey","r"));
	fread(golden, 1, SIZE*SIZE,  fopen("golden.grey","r"));
	memset(output, 0, sizeof(unsigned char)*SIZE*SIZE);//its necessary because of malloc usage //memset is setting every byte to the assigned 8bit value "zero".

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sobel(input,output);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (i=1; i<SIZE-1; i++) {
		for ( j=1; j<SIZE-1; j++ ) {
			t = pow((output[i*SIZE+j] - golden[i*SIZE+j]),2);
			PSNR += t;
		}
	}
	if (PSNR==0) {
		printf("---SOBEL FILTER IS PRODUCING THE EXPECTED OUTPUT---\n");
	}
	else {
		printf("PSNR:%g\n", PSNR);
	}

	free(input);
	free(output);
	free(golden);
	return 0;
}
