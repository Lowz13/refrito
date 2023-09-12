#include <iostream>
int main()
{
	int a, b;
	printf("Radio:	");
	scanf_s("%i", &b);
	a = (b* b)* 3.1416;
	printf("El circulo tiene un area de %-10i", a );
}