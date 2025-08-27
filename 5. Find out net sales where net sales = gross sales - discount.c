#include<stdio.h>
float  main(){
float a,b,c;
printf("ENTER GROSS SALES:\n");
scanf("%f",&a);
if(a>20000){
b=a*15/100;
printf("THE Discount IS %f\n",b);
printf("THE net sales = gross sales-discount is %f\n",a-b);
}
else if(a>10000){
    b=a*10/100;
printf("THE Discount IS %f\n",b);
printf("THE net sales = gross sales-discount is %f\n",a-b);
}
else {
        b=a*5/100;
printf("THE Discount IS %f\n",b);
printf("THE net sales = gross sales-discount is %f\n",a-b);
}
return 0;
}


