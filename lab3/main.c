#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "prime_check.h"
#include "scalar_mult.h"


const int g_vec_a[] = {1, 2, 3, 4, 5};
const int g_vec_b[] = {5, 4, 3, 2, 1};


const char* fmt_bool(bool b){
	return b ? "True": "False";
}


int main() {
	long r = scalar(g_vec_a, g_vec_b, sizeof(g_vec_a)/sizeof(int));
	unsigned long user_inp = 0;
	printf("Result of scalar mult:");
	printf("\t%ld\n\n", r);
	printf("Enter u long: ");
	scanf("%lu", &user_inp);
	printf("is_prime = %s\n", fmt_bool(is_prime(user_inp)));
	return 0;
}
