#include<stdio.h>
#include<stdbool.h>//true false used krte used kora hoi
bool is_leap_year(int year);
bool is_even(int a); //even & odd thke ekta br krle hoi
int max_of_2(int a,int b); //intger variable na declear krle hoi
int min_of_2(int a,int b);
int max_of_3(int a,int b,int c);
int min_of_3(int a,int b,int c);
int main()

{
    printf("%d\n",is_leap_year(5000));
    printf("%d\n",is_leap_year(2000));
    printf("%d\n",is_leap_year(2100));
    printf("%d\n",is_leap_year(2001));
    printf("%d\n",is_leap_year(1040));
    printf("%d\n",is_leap_year(1971));
    printf("%d\n",is_even(500));
    printf("%d\n",is_even(1003));
    printf("%d\n",is_even(0000));
    printf("%d\n",is_even(71));
    printf("%d\n", max_of_2( 20, 70));
    printf("%d\n", max_of_2( 2,7));
    printf("%d\n", max_of_2(29000,7670));
    printf("%d\n", min_of_2( 20, 70));
    printf("%d\n", min_of_2(2,7));
    printf("%d\n", min_of_2( 29000, 7670));
    printf("%d\n", max_of_3(60, 90, 0));
    printf("%d\n", max_of_3( 16, 00, 17));
    printf("%d\n", max_of_3( 6000, 6000,6000));
    printf("%d\n", min_of_3( 60,90,0));
    printf("%d\n", min_of_3( 16,00, 17));
    printf("%d\n", min_of_3( 6000,6000, 6000));



    return 0 ;
}
bool is_leap_year(int year)
{
    if(year%400==0)
    {
        return true ;
    }
    else if(year%100==0)
    {
        return false ;
    }
    else if(year%4==0)
    {
        return true ;
    }
    else
    {
        return false ;
    }
   /* 2 tpye correct=== return !(year %4) || year%100  && !(year%4) ; */
}
bool is_even(int a)
{
    if(a%2==0)
    {
        return true ;
    }
    else
    {
        return false ;
    }
    //even==return !(a%2) ;
}
int max_of_2(int a,int b)
{
    if(a>b)
    {
        return a ;
    }
    else
        {
            return b ;
        }
}
int min_of_2(int a,int b)
{
    if(a<b)
    {
        return a ;
    }
    else
        {
            return b ;
        }
}
int max_of_3(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a ;
    }
    else if(b>a && b>c)
    {
        return b ;
    }
    else
    {
        return c ;
    }
}
int min_of_3(int a,int b,int c)
{
    if(a<b && a<c)
    {
        return a ;
    }
    else if(b<a && b<c)
    {
        return b ;
    }
    else
    {
        return c ;
    }
}
