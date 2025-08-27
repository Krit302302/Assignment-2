#include<stdio.h>
#include<math.h>
int  main(){
int a;
printf("ENTER A NUMBER:\n");
scanf("%d",&a);
if (a % 7 == 0) {
printf("The given number(%d) is Divisible by 7\n",a);
}
else {
printf("The given number(%d) is not Divisible by 7\n",a);
}
return 0;
}
