#include <stdio.h>
int main() {
int a, b, c;
int d,e;
printf("Enter three integers:\n");
scanf("%d %d %d", &a, &b, &c);
if(a==b && b==c){
    printf("All three numbers are equal\n");
    return 0;
}
if(a>=b && a>=c){
    d=a;
}
else if(b>=a && b>=c){
    d=b;
}
else if(c>=b && c>=a){
    d=c;
}
if(a<=b && a<=c){
    e=a;
}
else if(b<=a && b<=c){
    e=b;
}
else if(c<=b && c<=a){
    e=c;
}
printf("Largest=%d\n",d);
printf("Smallest=%d\n",e);
return 0;
}






