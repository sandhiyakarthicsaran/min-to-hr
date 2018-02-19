#include<stdio.h>
int main()
{
int hr,min;
printf("Enter the minutes:\n",min);
scanf("%d",min);
hr=min/60;
min=min%60;
printf("%d\t%d",hr,min);
rerturn 0;
}
