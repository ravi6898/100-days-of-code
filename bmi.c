#include <stdio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter your weight in kgs:\n");
    scanf("%f", &weight);
    printf("Enter your height in mts:\n");
    scanf("%f", &height);
    bmi=(weight/(height*height));
    printf("BMI: %f\n", bmi);
    if(bmi <= 0)
    {
        printf("SORRY ,YOU ARE DEAD!!");
    }

    else if(bmi <=15)
    {
        printf("Starvation");
    }
    else if(bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Anorexic");
    }
    else if(bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Underweight");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Ideal");
    }
    else if(bmi >= 25 && bmi <=25.9)
    {
        printf("Overweight");
    }
    else if(bmi >=30 && bmi <= 39.9)
    {
        printf("Obese");
    }
    else 
    {
        printf("Morbidity Obese");
    }
    return 0;

}