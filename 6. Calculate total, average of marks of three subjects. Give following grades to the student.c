#include<stdio.h>
int main(){
float a,b,c,avg;
printf("ENTER MARKS IN 3 SUBJECTS:\n");
scanf("%f %f %f",&a,&b,&c);
avg=(a+b+c)/3.0;
if(a>=35 && b>=35 && c>=35){
if(avg>=70){
    printf("THE Average marks in 3 subjects are %f\n",avg);
    printf("The Grade of the student is Distinction");
}
else if(avg>=60){
    printf("THE Average marks in 3 subjects are %f\n",avg);
    printf("The Grade of the student is FIrst class");
}
else if(avg>=50){
    printf("THE Average marks in 3 subjects are %f\n",avg);
    printf("The Grade of the student is Second class");
}
else if(avg>=35){
    printf("THE Average marks in 3 subjects are %f\n",avg);
    printf("The Grade of the student is Third class");
}
else if(avg<35){
    printf("THE Average marks in 3 subjects are %f\n",avg);
    printf("Fail");
}
}
else {
    printf("THE Average marks in 3 subjects are %f\n",avg);
    printf("Fail");
}

return 0;
}
