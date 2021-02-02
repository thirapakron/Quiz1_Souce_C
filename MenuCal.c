/*ถิรปกรณ์ สังขนานนท์  , MenuCalculater*/

#include<stdio.h>

void main(){

    system("cls");

    int num1,num2,choose_option,i;
    float area;
    unsigned long long fact = 1;


    do{
        printf("Choose your option\n");
        printf("1.multiplication\n2.Calculate Triangular area\n3.Calculate factorial\n4.Exit\n");
        scanf("%d",&choose_option);

        if(choose_option == 4)
            break;
        
        switch (choose_option)
        {
        case 1:
             printf("Enter an integer: ");
             scanf("%d", &num1);
             printf("Enter the range: ");
             scanf("%d", &num2);
             for (i = 1; i <= num2; ++i) {
                 printf("%d * %d = %d \n", num1, i, num1 * i);
             }
            break;

        case 2:
            printf("\nEnter the height of the Triangle: ");
            scanf("%d", &num1);
            printf("\nEnter the base of the Triangle: ");
            scanf("%d", &num2);
            area = (num1*num2)/(float)2;
            printf("\nThe area of the triangle is: %f \n", area);

            break;
        
        case 3:
            printf("Enter an integer: ");
            scanf("%d", &num1);
            if (num1 < 0)
            printf("Error! Factorial of a negative number doesn't exist.");
            else {
                for (i = 1; i <= num1; ++i) {
                    fact *= i;
                    }
                    printf("Factorial of %d = %llu \n", num1, fact);
                }
                
            break;
        
        case 4:
            break;
                
        default:
            printf("Invalid Choose option\n");
            break;
        }
        
    }while(choose_option != 4);

    return 0;
}