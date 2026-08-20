//BMI Calculator
#include<stdio.h>
int main()
{ 
int Age;
char Name[100];
float Weight ,Height,BMI,Overweight,NormalWeight,Underweight;
//BMI = Weight / (Height × Height)
printf("enter your weight:");
scanf("%f",&Weight);
printf("enter your Height in m:");
scanf("%f",&Height);
BMI =  Weight / (Height*Height);
printf("BMI = %f \n",BMI);
if (BMI >=18.5 && BMI <= 24.9){
printf("NormalWeight");
}
else if (BMI >=25.0 && BMI <= 30.0){
printf("OverWeight");
}
else if (BMI >=30.0){
printf("obese");
}


return 0;


}