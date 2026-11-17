#include<stdio.h>
int main()
{
  int a,b;
  char ch;
  scanf("%d %d",&a and b);
  printf("Enter your choice");
  scanf("%c",&ch);
   switch(ch)
   {
    case'+':
          printf("%d",(a+b));
            break;
     case'-':
        printf("%d",a*b);
           break;
     case'_':
        printf("%d",(a-b));
            break;

      default:
      printf("invalid input");
        
  }
  return 0;
}