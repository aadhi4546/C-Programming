#include <stdio.h>
#include <limits.h>
int main ()
{
    int a[100];
    float b;
    char c[100];
    double d;
    
    printf("enter integer value:");
    scanf("%d",&a);
    printf("enter float value:");
    scanf("%f",&b);
    printf("enter character:");
    scanf("%s",&c);
    printf("enter double value:");
    scanf("%lf",&d);
    
    printf("%zu\n",sizeof(a));
    printf("%zu\n",sizeof(b));
    printf("%zu\n",sizeof(c));
    printf("%zu\n",sizeof(d));
    return 0;
}