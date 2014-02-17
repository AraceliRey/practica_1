#include<stdio.h>
#include<stdlib.h>
int a,b,c,d;
float e,f;
int main(){
    printf("dame el primer numero\n");
      scanf("%f",&a);
    printf("dame el segundo numero\n");
      scanf("%f",&b);
 c=a+b;
 d=a-b;
 e=a*b;
 f=a/b;
    printf("suma:%d\n resta:%d\n multiplicacion%.2f\n division%.2f\n",c,d,e,f);
 system("pause");
 return 0;
}
