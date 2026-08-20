//Temperature Converter
#include<stdio.h>
int main()
{
    float Celsius,Fahrenheit,Kelvin,CelsiustoFahrenheit,FahrenheittoCelsius,CelsiustoKelvin,KelvintoCelsius,FahrenheittoKelvin,KelvintoFahrenheit;
    printf("Enter value of Celsius:");
    scanf("%f",&Celsius);
    printf("Enter value of Fahrenheit:");
    scanf("%f",&Fahrenheit);
    printf("Enter value of Kelvin:");
    scanf("%f",&Kelvin);
    CelsiustoFahrenheit= (Celsius * 9/5) + 32;
    FahrenheittoCelsius= ( Fahrenheit - 32) *5/9;
    CelsiustoKelvin = Celsius + 273.15;
    KelvintoCelsius=Kelvin - 273.15;
    FahrenheittoKelvin  = (Fahrenheit - 32) * 5/9 + 273.15;
    KelvintoFahrenheit = (Kelvin - 273.15) * 9/5 + 32;
    printf("Celsius to Fahrenheit = %f \n",CelsiustoFahrenheit);
    printf("Fahrenheit to Celsius =%f \n",FahrenheittoCelsius);
    printf("Celsius to Kelvin =%f \n",CelsiustoKelvin);
    printf("Kelvin to Celsius = %f \n",KelvintoCelsius);
    printf("Fahrenheit to Kelvin  %f \n ",FahrenheittoKelvin);
    printf("Kelvin to Fahrenheit = %f \n",KelvintoFahrenheit);
    return 0;
}