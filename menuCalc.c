#include <stdio.h>
#include <conio.h>

//******Can't use %.2f in scanf****
int main()
{
    float n1,n2,temp;
    int option;
    int op;
    printf("Enter num1 : ");
    scanf("%f",&n1);
    printf("Enter num2 : ");
    scanf("%f",&n2);
    printf("Enter your choice [Add(1),sub(2),mul(3),div(4)] : ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
                break;
        case 2: if (n1==n2)
                {
                    printf("Both are equal!! So difference is zero");
                    break;
                }
                printf("Do you want to subtract %.2f - %.2f [1] or %.2f - %.2f [2] ? : ",n1,n2,n2,n1);
                scanf("%d",&op);
                
                if (op==2)
                {
                    temp=n1;
                    n1=n2;
                    n2=temp;
                }
                
                printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
                break;
        case 3: printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
                break;
        case 4: while (n2==0)
                {
                    printf("Can't divide by zero!!! Enter another number!! : ");
                    scanf("%f",&n2);
                }
                printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
                break;
        default: printf("Invalid choice!! Try again!!");
    }

    return 0;
}