#include <iostream>
int main()
{
	int a, b, h;
	printf("altura: ");
	scanf_s("%i", &h);
	printf("Base:	");
	scanf_s("%i", &b);
	a = b * h;
	printf("El rectangulo de %i x %i tiene area de %-10i", b, h, a );
}