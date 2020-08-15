#include<stdio.h> 
int main() {
	float w, l;
	scanf("%f", &w);
	scanf("%f", &l);
	if (w < 0)
	{
		printf("Error");
	}
	else if (l < 0)
	{
		printf("Error");
	}
	else
		printf("Area = %f x %f = %f ", w, l, w * l);
	return 0;
}
