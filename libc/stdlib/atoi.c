#include <stdint.h>
#include <stdio.h>
#include <math.h>
uint64_t atoi(char *number,uint8_t size)
{
	uint64_t result = 0;
	
	for(int i=size;i>=0;i--)
	{
		int digit = 0;
		if(number[i] > 47 && number[i] < 58)
			digit = number[i] - 48;
		else
			return 0;
		result += digit * pow(10, size - i );	
	}
	return result;
}
