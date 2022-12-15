#include <stdint.h>
#include <math.h>
uint64_t pow(uint64_t x, uint64_t y)
{
	if(y == 0)
		return 1;
	uint64_t result = x;
	for(uint64_t i=1;i<y;i++)
		result *= x;
	return result;
}
