/*program to find even & odd arrays from given array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],e[10],o[10],i,n,j=0,k=0;
clrscr();
printf("\n enter size of an array");
scanf("%d",&n);
printf("\n enter elements into an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
e[j]=a[i];
j++;
 printf("%d",e[j]);
}else {
o[k++]=a[i];
printf("%d",o[k]);
}
}
getch();
}
