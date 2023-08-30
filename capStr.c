#include <stdio.h> 
#include <stdlib.h> 
#define MAX 100 
void main()
{
char str[MAX]={0}; 
int i;
printf("Enter a string: "); 
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(i==0)
{
if ((str[i]>='a' && str[i]<='z')) 
str[i]=str[i]-32;
continue;
}
if(str[i]==' ')
{ 
i++;
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32; 
continue;
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
}
}
else
{
if(str[i]>='A' && str[i]<='Z') 
str[i]=str[i]+32;
}
}
printf("Capitalize string:%s\n",str);
}
