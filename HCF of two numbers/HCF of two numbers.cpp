//HCF of two numbers.
#include <conio.h>
#include <stdio.h>
int main()
{
	int a,b,h;
	printf ("Enter two numbers: ");
	scanf ("%d%d",&a,&b);
	for (h=a<b?a:b; h>=1;h--)
		if (a%h==0 && b%h==0)
			break;
	
	printf ("HCF is: %d",h);
	getch();
	return 0;
}
