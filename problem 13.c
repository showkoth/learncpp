#include<stdio.h>
int main()
{
    printf("bKash\n");
    printf("1.Send Money\n");
    printf("2.Send Money to Non-bKash User\n");
    printf("3.Mobile Recharge\n");
    printf("4.Payment\n");
    printf("5.Cash Out\n");
    printf("6.Pay Bill\n");
    printf("7.NGO Payment\n");
    printf("8.Download App\n");
    printf("9.My bKash\n");
    printf("10.Reset PIN\n");
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Send Money");
        break;
    case 2:
        printf("Send Money to Non-bKash User");
        break;
    case 3:
        printf("Mobile Recharge");
        break;
    case 4:
        printf("Payment");
        break;
    case 5:
        printf("Cash Out");
        break;
    case 6:
        printf("Pay Bill");
        break;
    case 7:
        printf("NGO Payment");
        break;
    case 8:
        printf("Download App");
        break;
    case 9:
        printf("My bKash");
        break;
    case 10:
        printf("Reset PIN");
        break;
    default:
        printf("Error");
        break;

    }

}
