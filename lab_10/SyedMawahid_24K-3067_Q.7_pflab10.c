#include <stdio.h>
#include <string.h>

struct TravelPackage
{
    char name[50];
    char destination[50];
    int duration;
    float cost;
    int seatsAvailable;
};

void displayPackages(struct TravelPackage packages[], int size)
{
    int availableCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (packages[i].seatsAvailable > 0)
        {
            printf("Package %d:\n", i + 1);
            printf("Name: %s\n", packages[i].name);
            printf("Destination: %s\n", packages[i].destination);
            printf("Duration: %d days\n", packages[i].duration);
            printf("Cost: %.2f\n", packages[i].cost);
            printf("Seats Available: %d\n", packages[i].seatsAvailable);
            printf("\n");
            availableCount++;
        }
    }

    if (availableCount == 0)
    {
        printf("No packages available.\n\n");
    }
}

void bookPackage(struct TravelPackage packages[], int index)
{
    if (packages[index].seatsAvailable > 0)
    {
        packages[index].seatsAvailable--;
        printf("Booking successful for package: %s\n", packages[index].name);
    }
    else
    {
        printf("This package is fully booked and cannot be booked again.\n");
    }
}

int main()
{
    struct TravelPackage packages[3] = {
        {"Beach Escape", "Maldives", 7, 1500.50, 10},
        {"Mountain Adventure", "Switzerland", 10, 2500.75, 5},
        {"City Lights", "New York", 5, 1200.00, 8}};
    
    int choice;

    while (1)
    {
        printf("Available Packages:\n");
        displayPackages(packages, 3);

        printf("1. Book Package\n");
        printf("2. View Packages Again\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the package number to book (1-3): ");
                int packageChoice;
                scanf("%d", &packageChoice);
                if (packageChoice >= 1 && packageChoice <= 3)
                {
                    bookPackage(packages, packageChoice - 1);
                }
                else
                {
                    printf("Invalid package number. Please try again.\n");
                }
                break;
            case 2:
                break;
            case 0:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    }

    return 0;
}
