/*ถิรปกรณ์ สังขนานนท์  , BMI*/

#include<stdio.h>  
int main()  
{  
    float h, w, bmi;  
  
    printf("Enter height: ");  
    scanf("%f", &h);  
  
    printf("Enter weight:");  
    scanf("%f", &w);  
    
    h = h/100;
    bmi = w / (h * h);  
  
    printf("Your Body Mass Index(BMI) is %f\n", bmi);  
  
    if(bmi < 20)  
    {  
        printf("Thin\n");  
    }  
    else if(bmi >= 20 )  
    {  
        printf("Perfect\n");  
    }  
    else if(bmi >= 25)  
    {  
        printf("little fat\n");  
    }  
    else if(bmi >= 30)  
    {  
        printf("Fat\n");  
    }  
    else  
    {  
        printf("Wrong entry\n");  
    }  
  
    return 0;  
}  