#include <stdio.h>
#include <string.h>

int main(void)
{
    int choice;
    int number1;
    int number2;
    do
    {
        printf("\n===== calcultor  =====\n");
        printf("1. Addition\n");
        printf("2. substract\n");
        printf("3. multply\n");
        printf("4. division\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        getchar();

        switch (choice)
        {

        case 1:
        {

            printf("Enter  number1: ");
            scanf("%d", &number1);
            printf("Enter  number2: ");
            scanf("%d", &number2);
            printf("%d", number1 + number2);

            getchar();
            break;
        }

        case 2:
        {
            printf("Enter  number1: ");
            scanf("%d", &number1);
            printf("Enter  number2: ");
            scanf("%d", &number2);
            printf("%d", number1 - number2);

            break;
        }

        case 3:
        {
            printf("Enter  number1: ");
            scanf("%d", &number1);
            printf("Enter  number2: ");
            scanf("%d", &number2);
            printf("%d", number1 * number2);
            break;
        }

        case 4:
        {
            printf("Enter  number1: ");
            scanf("%d", &number1);
            printf("Enter  number2: ");
            scanf("%d", &number2);
            printf("%d\n", number1 / number2 );
        }

        case 5:
            printf("Exiting program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Choose 1-5.\n");
        }

    } while (choice != 9);

    return 0;
}
