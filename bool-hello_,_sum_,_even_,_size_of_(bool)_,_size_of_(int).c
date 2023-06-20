#include<stdio.h>
#include<stdbool.h>
#define TRUE 1 ;
#define FALSE 0 ;
//int , float , double , char , void
typedef int integer ;
bool is_even(int n);
int sum(int a ,int b);
void print_int(int a);
void print_hello(void); //argument e void used krle oh kra jai na krle oh kora jai
int input_int();
int main()
{
    int a=10 ;
    print_int(a);
    //a=sum(2,2);

    printf("%d\n",is_even(7));
    printf("%d\n",is_even(290));
    printf("%d\n",is_even(79));
    printf("%d\n", sum(5,7));
    printf("%d\n", sum(15,7));
    printf("%d\n", sum(50,17));
    printf("%d\n", a );
    print_hello();
    printf("%d\n", sizeof (bool));
    printf("%d\n", sizeof (int));

    return 0 ;
}
bool is_even(int n)
{
    if(n%2==0)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
int sum(int a ,int b)
{
    int s=0;
    s=a+b;
    return s ;
}
void print_int(int a) //no anythink return
{
    int b ;
    b=a*a ;
    printf("%d\n",a);
    printf("%d\n",b);
}
void print_hello(void)
{
    printf("Hello World\n");
}
int input_int()
{
    int a ;
    scanf("%d\n", &a);
    return a ;
}
