//Electricity Consumption Category
int main()
{
    int num;
    printf("Enter your Electricity Consumption ");
    scanf("%d",&num);
    if (num <= 100   && num >0)
    printf(" your Electricity Consumption is low ");
    else  if (num <= 300 && num >100)
    printf(" your Electricity Consumption is moderate ");
    else  if (num > 300 && num < 500)
    printf(" your Electricity Consumption is high ");
    else  if ( num >=500)
    printf(" your Electricity Consumption is very high ");
    else if (num<= 0)
    printf("enter valid  Electricity Consumption");
    return 0;
}