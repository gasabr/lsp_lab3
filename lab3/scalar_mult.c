#include <stdio.h>
#include <stddef.h>
#include "scalar_mult.h"


long scalar(const int* a, const int* b, size_t len) {
	size_t i;
	long result = 0;

	for (i = 0; i < len; i++) {
		result += a[i] * b[i];
	}
	return result;
}
