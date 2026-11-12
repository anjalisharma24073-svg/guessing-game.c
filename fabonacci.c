#include<stdio.h>
int main()


{
    
int a=0;
int b=1;
int c;
for(int i=1;i<=5;i++)
{
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;

}
return 0;
}