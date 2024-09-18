#include <stdio.h>

int main()
{
	int Distance = 1207;
	int ForwardPrice = 118;
	int ReturnPrice = 123;
	float TotalFuelCost;
	float TotalFuel;
	float FuelAvg;
	
	
	printf("Enter Fuel Average: ");

	scanf("%f", &FuelAvg);
	
	if (FuelAvg > 0)
	{	

	TotalFuel = ((Distance*2)/FuelAvg);
	
	TotalFuelCost = (ForwardPrice + ReturnPrice)*TotalFuel;
		
	printf("Total Fuel Cost = $%.2f\n", TotalFuelCost);
	
	printf("Total Fuel Required for Trip = %.2f litres", TotalFuel);

	}

	else

	{

	printf("Please Enter Positive value for Fuel Average");

	}
return 0;
}
