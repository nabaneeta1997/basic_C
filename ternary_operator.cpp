#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("\n enter the 1st number");
	scanf("%d",&x);
	printf("\n enter the 2nd number");
	scanf("%d",&y);
	z=x>y?printf("\n x is greatest"):printf("\n y is greatest");
	return 0;
}
