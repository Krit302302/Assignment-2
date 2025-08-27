#include<stdio.h>
int main(){
int a,b;
printf("enter two numbers :");
scanf("%d %d",&a,&b);
if(a>b){
    printf("Largest value=%d\n",a);
    printf("Smallest value=%d\n",b);

}
else if(a<b){
    printf("Largest value=%d\n",b);
    printf("Smallest value=%d\n",a);
}
else {
    printf("Both numbers are equal");
}
printf("Thank you");
return 0;
}
