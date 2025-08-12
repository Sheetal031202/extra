#include <stdio.h>

int sum(a, b)
{
    return a + b;
}

int less(a, b)
{
    if (a > b)
    {
        return a - b;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return b - a;
    }
}

int multiple(a, b)
{
    return a * b;
}
int devide(a, b)
{
    if (a > b)
    {
        return a / b;
    }
    else if (a == b)
    {
        return 1;
    }
    else
    {
        return b / a;
    }
}
int module(a, b)
{
    if (a > b)
    {
        return a % b;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return b % a;
    }
}

void main()
{

    for (int i = 1; i >= 1; i++)
    {

        int choice;
        printf("\n\nenter your choice\n");
        scanf("%d", &choice);

        if (choice > 0)
        {
            int first_value;
            int second_value;

            printf("\n\nEnter the first number\n");
            scanf("%d", &first_value);

            printf("Enter the second number\n");
            scanf("%d", &second_value);
            switch (choice)
            {

            case 1:
            {
                printf("addition of %d and %d is %d \n", first_value, second_value, sum(first_value, second_value));
            }
            break;

            case 2:
            {
                printf("subtraction of %d and %d is %d \n", first_value, second_value, less(first_value, second_value));
            }
            break;
            case 3:
            {
                printf("multiplication of %d and %d is %d \n", first_value, second_value, multiple(first_value, second_value));
            }
            break;
            case 4:
            {
                printf("devision of %d and %d is %d \n", first_value, second_value, devide(first_value, second_value));
            }
            break;
            case 5:
            {
                printf("module of %d and %d is %d \n", first_value, second_value, module(first_value, second_value));
            }
            break;
            default:
            {
                printf("invalid choice");
            }
            }
        }
        else 
        {
            printf("Your choice is 0,so you are exit ");
            break;
        }
    }
}