#include <xmmintrin.h>
#include <stdio.h>

int main()
{
	__m128 value = _mm_set1_ps(1.f);

	printf("_mm_set1_ps: %f %f %f %f\n", value[0], value[1], value[2], value[3]);

	return 0;
}