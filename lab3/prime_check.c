#include "prime_check.h"
#include <math.h>


bool is_prime(const unsigned long num) {
	int delimeter;
	double check_limit = pow(num, 0.5);
	
	for (delimeter = 2; delimeter < check_limit; ++delimeter) {
		if (num % delimeter == 0) {
			return false;
		}
	}

	return true;
}
