//fibonacci Series using recurssiom.
#include <conio.h>
#include <stdio.h>
int main()
{
	int fib(int);
	int i,n;
	printf ("How many terms? ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
		printf (" %d ",fib(i));
	getch();
}

fib(int n)
{
	if (n==1 || n==2)
		return (1);
	return (fib(n-1)+fib(n-2));
}
