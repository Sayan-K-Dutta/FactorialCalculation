#include<stdio.h>
int fact(int number) // Calculates factorial
{
	if(number == 1 || number == 0)
	return 1;
	else
	return number * fact(number - 1);
}
int main(int argc, char *argv[])
{
	int num;
	printf("Enter a number for factorial calculation\n");
	scanf("%d",&num);
	printf("Factorial of %d is %d\n",num,fact(num));
}