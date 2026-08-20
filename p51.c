//Shopping Bill With Discount + GST
#include<stdio.h>
int main()
{
float Price1,Price2,Price3,gst,Totalpriceofp1,Totalpriceofp2,Totalpriceofp3;
float Totalprice,Pricebeforegst,Finalprice,discount;
int Quantity1,Quantity2,Quantity3;
printf("Enter price of product 1:");
scanf("%f",&Price1);
printf("Enter price of product 2:");
scanf("%f",&Price2);
printf("Enter price of product 3:");
scanf("%f",&Price3);
printf("Enter Quantity of product 1:");
scanf("%d",&Quantity1);
printf("Enter Quantity of product 2:");
scanf("%d",&Quantity2);
printf("Enter Quantity of product 3:");
scanf("%d",&Quantity3);
printf("Enter discount:");
scanf("%f",&discount);
printf("Enter GST:");
scanf("%f",&gst);
Totalpriceofp1=Price1*Quantity1;
Totalpriceofp2=Price2*Quantity2;
Totalpriceofp3=Price3*Quantity3;
Totalprice=Totalpriceofp1+Totalpriceofp2+Totalpriceofp3;
discount=(Totalprice*discount)/100;
Pricebeforegst=Totalprice-discount;
gst=(Pricebeforegst*gst)/100;
Finalprice=Pricebeforegst + gst;
printf("Total price of product 1 %.2f\n",Totalpriceofp1);
printf("Total price of product 2 %.2f\n",Totalpriceofp2);
printf("Total price of product 3 %.2f\n",Totalpriceofp3);
printf("Total price  %.2f\n",Totalprice);
printf("Total price before GST %.2f\n",Pricebeforegst);
printf("Finalprice %.2f",Finalprice);
return 0;
}