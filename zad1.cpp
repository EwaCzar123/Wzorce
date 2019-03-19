#include <iostream>
#include <string>
using namespace std;

template <typename X, typename Y>
X porownajwzorce(X liczba1, Y liczba2) // typ, nazwa i argumenty
{


	if (liczba1 > liczba2) // sprawdzamy warunki
	{
		cout << "liczba1: " << liczba1 << " jest wieksza od liczby: " << liczba2 << endl;


	}

	if (liczba1 < liczba2) // jeœli pierwszy warunek siê nie zgadza to sprawdzamy
	{
		cout << "liczba2: " << liczba2 << " jest wieksza od liczby: " << liczba1 << endl;

	}

	if (liczba1 == liczba2) // ostatnia opcja to równoœæ dwóch liczb
	{
		cout << "liczby sa rowne:" << endl;

	}
	cout << " my type is : " << typeid(liczba1).name() << endl;
	cout << " my type is : " << typeid(liczba2).name() << endl;

	return 0;
}

void porownaj(float liczba1, float liczba2) // typ, nazwa i argumenty
{
	

	if (liczba1 > liczba2) // sprawdzamy warunki
	{
		cout << "liczba1: " << liczba1 << " jest wieksza od liczby: " << liczba2 << endl;
	
	}

	if (liczba1 < liczba2) // jeœli pierwszy warunek siê nie zgadza to sprawdzamy
	{
		cout << "liczba2: " << liczba2 << " jest wieksza od liczby: " << liczba1 << endl;
		
	}

	if (liczba1 == liczba2) // ostatnia opcja to równoœæ dwóch liczb
	{
		cout << "liczby sa rowne:" << endl;
		
	}
	
}

int main()
{
	int *a, *b;
	int d=2, c=5;
	a =&d;
	b = &c;
	porownaj(2,5);
	porownaj(7, 'u'); //zamieni na kod ASCII

	porownajwzorce(2, 5);
	porownajwzorce(2, 5);
	porownajwzorce<double,double>(*a, *b);
	porownajwzorce(*a, *b);
	porownajwzorce(7,'u');
	porownajwzorce('a', 'b');
	system("pause");
	return 0;

	system("pause");
	return 0;
}