#include <stdio.h>

float Add(float n1, float n2)
{
    return n1 + n2;
}

float Subtract(float n1, float n2)
{
    return n1 - n2;
}

float Multiply(float n1, float n2)
{
    return n1 * n2;
}

float Divide(float n1, float n2)
{
    return n1 / n2;
}



int main()
{
    float n1, n2, result;
    char choice;

    printf("Enter Number: ");
    scanf("%f", &n1);

    printf("Enter Operation: ");
    scanf(" %c", &choice);

    printf("Enter Number: ");
    scanf("%f", &n2);

    if(choice == '+')
    {
        result = Add(n1, n2);
        printf("\n%.2f + %.2f = %.2f\n", n1, n2, result);
    }
    else if(choice == '-')
    {
        result = Subtract(n1, n2);
        printf("\n%.2f - %.2f = %.2f\n", n1, n2, result);
    }
    else if(choice == '*' || choice == 'x')
    {
        result = Multiply(n1, n2);
        printf("\n%.2f x %.2f = %.2f\n", n1, n2, result);
    }
    else if(choice == '/')
    {
        result = Divide(n1, n2);
        if(n2!=0)
        {
        	printf("\n%.2f / %.2f = %.2f\n", n1, n2, result);
		}
		else
		{
			printf("Math Error.\n");
		}

    }
    else
    {
        printf("\nInvalid Operator Selected\n");
    }

    return 0;
}