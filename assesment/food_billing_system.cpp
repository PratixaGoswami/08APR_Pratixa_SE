//Write a program to demonstrate a Food Billing System.
#include<stdio.h>
main() 
{
    int choice, quantity, amount, total_bill; 
    char repeatmenu; 

    // Start a do-while loop to repeat the menu selection process
    do 
	{
    	printf("-------------Menu-----------------");
        printf("\n1.Pizza        price=180rs/pcs");
        printf("\n2.Burger       price=100rs/pcs");
        printf("\n3.Dosa         price=120rs/pcs");
        printf("\n4.Idli         price=50rs/pcs");
        printf("\nPlease Enter your choice...  :");
        scanf("%d", &choice); // Take input for choice from the user
        
        // Use a switch statement to handle different menu choices
        switch(choice) {
            case 1:
                printf("You have selected pizza.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity); // Take input for quantity from the user
                amount = 180 * quantity; // Calculate the amount for pizza
                total_bill += amount; // Add the amount to the total bill
                printf("Amount:%d\n", amount); // Print the amount for pizza
                printf("Total Amount is =%d",total_bill);
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity); // Take input for quantity from the user
                amount = 100 * quantity; // Calculate the amount for burger
                total_bill += amount; // Add the amount to the total bill
                printf("Amount:%d\n", amount); // Print the amount for burger
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity); // Take input for quantity from the user
                amount = 120 * quantity; // Calculate the amount for dosa
                total_bill += amount; // Add the amount to the total bill
                printf("Amount:%d\n", amount); // Print the amount for dosa
                printf("Total Amount is =%d",total_bill);
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity:");
                scanf("%d", &quantity); // Take input for quantity from the user
                amount = 50 * quantity; // Calculate the amount for idli
                total_bill += amount; // Add the amount to the total bill
                printf("Amount:%d\n", amount); // Print the amount for idli
                printf("Total Amount is =%d",total_bill);
                break;
            default:
                printf("Invalid Input.\n"); // Display message for invalid input
                break;
        }
        
        printf("\n");
        printf("\n");
        printf("Do you want to select more items? (y/n): ");
        scanf(" %c", &repeatmenu); // Take input from the user whether to continue or not
    } while (repeatmenu == 'y' || repeatmenu == 'Y'); // Continue the loop if user enters 'y' or 'Y'

    printf("Your total bill is: %d\n", total_bill); // Print the total bill
    return 0;
}

