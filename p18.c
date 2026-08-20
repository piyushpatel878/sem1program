//GST Calculator 
#include<stdio.h>
int main ()
{
    char enteryourproductname[100];
    float productid,originalprice,gstpercentage,GSTAmount,FinalPrice; 
printf("enter your product name :");
scanf("%99s", enteryourproductname);
printf("product id :");
scanf("%f", &productid);
printf("original price :");
scanf("%f", &originalprice);
printf("gst percentage :");
scanf("%f", &gstpercentage);
//GST Amount = (Original Price × GST Percentage) / 100
//Final Price = Original Price + GST Amount
GSTAmount = (originalprice *gstpercentage) / 100;
FinalPrice = originalprice+ GSTAmount;
printf("GSTAmount = %f",GSTAmount );
printf("\nFinalPrice = %f",FinalPrice );

return 0;
}