/*static variables*/
#include <stdio.h>
int a=25; /*global var*/
int main()
{
	static int a=10; /*static var*/
	printf("value of a=%d",a);
	return 0;
}
