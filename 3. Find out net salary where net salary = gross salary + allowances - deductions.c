#include<stdio.h>
float main(){
float a,b,c;
printf("ENTER GROSS SALARY:\n");
scanf("%f",&a);
if(a>10000){
b=a*10/100;
c=a*3/100;
printf("THE ALLOWENCE IS %f\n",b);
printf("THE DEDUCTION IS %f\n",c);
printf("THE net salary = gross salary + allowance - deduction is %f\n",a+b-c);
}
else if(a>5000){
b=a*7/100;
c=a*2/100;
printf("THE ALLOWENCE IS %f\n",b);
printf("THE DEDUCTION IS %f\n",c);
printf("THE net salary = gross salary + allowance - deduction is %f\n",a+b-c);
}
printf("Thank you");
return 0;
}
