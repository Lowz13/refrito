#include <iostream>
int main()
{
	int a, b;
	printf("Base:	");
	scanf_s("%i", &b);
	a = b * b;
	printf("El rectangulo de %i x %i tiene area de %-10i", b, b, a );
}