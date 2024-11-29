#include <stdio.h>

void convertAndCount(float meters)
{
	float kms;
	const int meters_kms = 1000;
	static int call_count = 0;
	call_count++;
	kms = meters / meters_kms;
	printf("%.2f meters is %.2f kilometers\n", meters, kms);
	printf("Function called %d time(s)\n", call_count);
}

int main()
{
	float meters;
	char cont;
	do
	{
		printf("Enter distance in meters: ");
		scanf("%f", &meters);
		convertAndCount(meters);
		printf("Do you want to continue? y/n: ");
		scanf(" %c", &cont);
	} while (cont != 'n');
	return 0;
}
