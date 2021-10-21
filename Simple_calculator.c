#include<stdio.h>

int main(){
float a,b;int c,m,n;
m:
printf("Enter first No.= ");
scanf("%f",&a);
printf("Enter second No.= ");
scanf("%f",&b);

printf("Enter your choice = \n1)For addition\t2)For Substraction\n3)For Multiplaction\t4)For division\n");
scanf("%d",&c);

if(c==1){
    printf("Addition is= %.2f ",a+b);
}
if(c==2){
     printf("subtraction is=  %.2f",a-b);
}
if(c==3){
     printf("multiplication is= %.2f",a*b);
}
if(c==4){
    printf("dividion is = %.2f",a/b);
}

printf("\nDo you want to repet\n1 for Yes\n2 for No\n");
scanf("%d",&n);
if(n==1){
goto m;
}
else{
    return 0;
}
return 0;
}