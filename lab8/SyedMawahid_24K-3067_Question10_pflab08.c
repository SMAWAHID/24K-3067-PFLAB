#include <stdio.h>

int main() 
{
    int rows, i, j, value;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
    {
        for (int k = 0; k < rows - i; k++) 
        {
            printf("  "); 
        }

        value = 1;
        for (j = 0; j <= i; j++) 
        {
            printf("%3d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
