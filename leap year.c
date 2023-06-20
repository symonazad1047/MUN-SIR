#include<stdio.h>
#include<stdbool.h>
bool is_leap_year(int a);

int main ()
{

int a ;
printf("enter the year :");
scanf("%d",&a);
printf("%d\n",is_leap_year(a));

return 0;

}
bool is_leap_year(int a)
{
    if( a%400==0 || a%100!=0  && a%4==0 )
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
