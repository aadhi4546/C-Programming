#include <stdio.h>
#include <float.h>
#include <limits.h>
int main()
{
	char a[100];
	scanf("%[^\n]s",a);
	printf("the given message is:%s",a);
	return 0;
}