#include <stdio.h>

int main()
{
    char card;
    int n, p, a;
    int b, diff;

    printf("Welcome To The ATM\n\n");

    printf("Please Insert Your Card (k/s/i/l): ");
    scanf(" %c", &card);

    /* K CARD */
    if (card == 'k')
    {
        b = 50000;

        printf("Hello User\n\n");
        printf("Press 1 to withdraw money\n");
        printf("Press 2 to check balance\n");

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Please enter your 4-digit pin: ");
            scanf("%d", &p);

            if (p != 1234)
            {
                printf("Incorrect pin\n");
                printf("Please try again: ");
                scanf("%d", &p);
            }

            if (p == 1234)
            {
                printf("Enter the amount to withdraw: ");
                scanf("%d", &a);

                if (a > b)
                {
                    printf("Insufficient Balance\n");
                }
                else
                {
                    diff = b - a;
                    printf("Collect the money\n");
                    printf("Now your bank balance is %d\n", diff);
                }
            }
            else
            {
                printf("Your request has been blocked\n");
            }
        }
        else if (n == 2)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p == 1234)
                printf("Your bank balance is %d\n", b);
            else
                printf("Incorrect PIN\n");
        }
    }

    /* S CARD */
    else if (card == 's')
    {
        b = 100000;

        printf("Hello User\n\n");
        printf("Press 1 to withdraw money\n");
        printf("Press 2 to check balance\n");

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p != 5678)
            {
                printf("Incorrect PIN\n");
                printf("Try Again: ");
                scanf("%d", &p);
            }

            if (p == 5678)
            {
                printf("Enter withdrawal amount: ");
                scanf("%d", &a);

                if (a > b)
                    printf("Insufficient Balance\n");
                else
                {
                    diff = b - a;
                    printf("Collect the money\n");
                    printf("Balance = %d\n", diff);
                }
            }
            else
            {
                printf("Request Blocked\n");
            }
        }
        else if (n == 2)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p == 5678)
                printf("Your bank balance is %d\n", b);
            else
                printf("Incorrect PIN\n");
        }
    }

    /* I CARD */
    else if (card == 'i')
    {
        b = 60000;

        printf("Hello User\n\n");
        printf("Press 1 to withdraw money\n");
        printf("Press 2 to check balance\n");

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p != 9123)
            {
                printf("Incorrect PIN\n");
                printf("Try Again: ");
                scanf("%d", &p);
            }

            if (p == 9123)
            {
                printf("Enter withdrawal amount: ");
                scanf("%d", &a);

                if (a > b)
                    printf("Insufficient Balance\n");
                else
                {
                    diff = b - a;
                    printf("Collect the money\n");
                    printf("Balance = %d\n", diff);
                }
            }
            else
            {
                printf("Request Blocked\n");
            }
        }
        else if (n == 2)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p == 9123)
                printf("Your bank balance is %d\n", b);
            else
                printf("Incorrect PIN\n");
        }
    }

    /* L CARD */
    else if (card == 'l')
    {
        b = 40000;

        printf("Hello User\n\n");
        printf("Press 1 to withdraw money\n");
        printf("Press 2 to check balance\n");

        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p != 8123)
            {
                printf("Incorrect PIN\n");
                printf("Try Again: ");
                scanf("%d", &p);
            }

            if (p == 8123)
            {
                printf("Enter withdrawal amount: ");
                scanf("%d", &a);

                if (a > b)
                    printf("Insufficient Balance\n");
                else
                {
                    diff = b - a;
                    printf("Collect the money\n");
                    printf("Balance = %d\n", diff);
                }
            }
            else
            {
                printf("Request Blocked\n");
            }
        }
        else if (n == 2)
        {
            printf("Enter PIN: ");
            scanf("%d", &p);

            if (p == 8123)
                printf("Your bank balance is %d\n", b);
            else
                printf("Incorrect PIN\n");
        }
    }

    else
    {
        printf("Invalid Card\n");
    }

    return 0;
}