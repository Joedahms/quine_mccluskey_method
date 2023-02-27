#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "file_in.h"

#define MAX_SIZE 4 // for the minterm_arr

// 1 one power of two
//
// 1
// 2
// 4
// 8 
// 16
// 32

// 2 any two powers of two that aren't the same
// 
// 3 2^0 + 2^1
// 5 2^0 + 2^2
// 6 2^1 + 2^2
// 9 2^1 + 2^3
// 10
// 12
//
//

int* rand_in(int, int);

int main(int ac, char* av[]) {
	int max_num_ones = 3;
	int num_bit = 4;
	if (ac == 1) {
		rand_in(max_num_ones + 1, num_bit);
	}
	else if (ac == 2) {
		// pull input from file	
	}
	else {
		// idk yet	
	}

	return 0;
}

int* rand_in(int max_num_ones, int num_bit) {
	// zero?
	//
	// max_num_ones dictates how many of each term with a num of ones is generated
	// num_bit dictates max number of bits
	//
	// randomly generate minterms
	// number of minterms will equal num_minterm
	// the max amount of bits in each minterm will be no larger than num_bit
	// generate minterms with diff amt of 1s seperatly
	// one 1 is one 2^n 
	// two 1s is two different values of 2^n. n >= num_bit
	// three 1s is three diff vals of 2^n. n >= num_bit
	//
	// randomly generate number of terms that will have a given amt of ones up to and including num_bit
	// randomly generate as many terms as num_bit is equal to 
	// 
	// for loop that interates as many times as num_bit
	// each iteration a number is randomly generated that determines the number of terms with amt of ones to be generated
	// this number shall not be greater than num_bit (may decide to make a little smaller later)
	// this is then the bound on another for loop
	// this loop creates a different power of two each iteration
	// the power of two shall not be greater than num_bit 
	//
	// sum only one 2^n
	// sum 2 2^n
	// sum 3 2^n 
	//
	// for loop to loop num_minterm times
	// each time 
	//
	int i;
	int j;
	int num_ones_terms = 0;
	int n_pow;
	int minterm = 0;
	int minterm_arr[MAX_SIZE][MAX_SIZE] = {}; //[number of ones (plus one)][minterm]

	srand(time(0));	

	for (i = 0; i < num_bit; i++) { // loop that creates terms with varying 1s in them
		num_ones_terms = rand() % max_num_ones; // number of terms for this particular number of ones
		for (j = 0; j < num_ones_terms; j++) { // making the terms
			n_pow = (rand() % num_bit); // random power of n. ex 4 bits max num for 1 would be 8
			printf("n_pow: %d\n", n_pow);
			//minterm = 2^(((rand() % num_bit) + 1)); 
			// num_bit--;
			minterm_arr[i][j] = minterm; 
		}			
	}
		
	for (i = 0; i < MAX_SIZE; i++) {
		for (j = 0; j < MAX_SIZE; j++) {
			printf("minterm_arr[%d][%d] = %d\n", i, j, minterm_arr[i][j]);
		}
	}
	
	// printf("made it here\n");
	
	
	return 0;
}
