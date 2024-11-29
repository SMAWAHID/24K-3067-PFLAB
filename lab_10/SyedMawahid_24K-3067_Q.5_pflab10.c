#include <stdio.h>
#include <string.h>

struct Cars {
    char make[20];
    char model[20];
    int year;
    float price;
    float mileage;
} cars[100];

void displayCars(struct Cars cars[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\nCar %d\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("Mileage: %.2f\n\n", cars[i].mileage);
    }
    if (count == 0)
    {
        printf("No cars available to display.\n");
    }
}

int addCars(struct Cars cars[], int count)
{
    char cont;
    do
    {
        printf("\nEnter the Make of Car: ");
        scanf(" %s", cars[count].make);
        printf("Enter the Model of Car: ");
        scanf(" %s", cars[count].model);
        printf("Enter the Year of Car: ");
        scanf("%d", &cars[count].year);
        printf("Enter the Price of Car: ");
        scanf("%f", &cars[count].price);
        printf("Enter the Mileage of Car: ");
        scanf("%f", &cars[count].mileage);
        count++;
        printf("Do you want to continue? y/n: ");
        scanf(" %c", &cont);
    } while (cont != 'n');
    return count;
}

void searchCars(struct Cars cars[], int count)
{
    int found = 0;
    char search[20];
    printf("\nEnter Make or Model of Car: ");
    scanf(" %s", search);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(cars[i].make, search) == 0 || strcmp(cars[i].model, search) == 0)
        {
            printf("\nCar %d\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %.2f\n", cars[i].price);
            printf("Mileage: %.2f\n\n", cars[i].mileage);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Car Not Found\n");
    }
}

int main()
{
    int choice;
    int count = 0;
    do
    {
        printf("\n1. Add Cars\n");
        printf("2. Search Cars\n");
        printf("3. Display Cars\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            count = addCars(cars, count);
        }
        else if (choice == 2)
        {
            searchCars(cars, count);
        }
        else if (choice == 3)
        {
            displayCars(cars, count);
        }
        else if (choice == 4)
        {
            printf("\nExiting...\n");
        }
        else
        {
            printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 4);
    return 0;
}
