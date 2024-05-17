#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c,c1,c2,c3;do
 {
 printf("enter the sides of triangle\n");
 scanf("%d%d%d",&a,&b,&c);
 c1=((a>=1)&&(a<=10));
  c2=((a>=1)&&(a<=10));
   c3=((a>=1)&&(a<=10));
   if(!c1)
   printf("value of a is our range");
   if(!c2)
    printf("value of b is our range");
     if(!c3)
    printf("value of c is our range");

 }
 while(!c1||!c2||!c3);
 if((a+b)>c&&(b+c)>a&&(c+a)>b)
 {
 if(a==b&&b==c)
 printf("Triangle is equilateral\n");
 else
 if(a!=b&&b!=c&&c!=a)
 printf("Triangles is scalene\n");
 else
 printf("Triangle is isosceles\n");
 }
 else
 printf("triangle cannot be formed\n");
 getch();
 return 0;
 }
