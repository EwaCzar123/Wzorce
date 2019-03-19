#include <string>
#include <typeinfo>
#include <iostream>

using namespace std;


template <typename T, typename D>
void pokaz(T  a, D b) {

	cout << a << " , " << b << endl;
	cout << " my type is : " << typeid(a).name() << endl;
	cout << " my type is : " << typeid(b).name() << endl;
}
template <typename T, typename D>
void poka(T a, D b) {
	cout << a << " , " << b << endl;

}

int main() {

	poka(3, 5.7);
	poka(3.0, 5.0);
	poka(12.123, 4);
	poka(12.123, 4);
	poka("jestem ", " string");



	//ró¿ne mo¿liwoœci wywo³ania funkcji

	// void pokaz< typename T>(T a, D b)


	pokaz(3, 5.7); //wywolanie wzorca pokaz<int> w sposób niejawny (dedukcja)
	pokaz(3.0, 5.0); //wywolanie wzorca pokaz<double> w sposób niejawny (dedukcja)
	pokaz<>(3.0, 5.0); //wywolanie wzorca pokaz<double> w sposób niejawny (dedukcja)
	pokaz<double>(12.123, 4); //wywolanie wzorca pokaz<double> w sposób jawny (bez dedukcji)
	pokaz("jestem ", " string"); //wywolanie wzorca pokaz<string> w sposób niejawny (dedukcja)
	pokaz<string, string>("jestem ", " string"); //wywolanie wzorca pokaz<string> w sposób niejawny (dedukcja)

	pokaz<double, double>(12.123, 4); //wywolanie wzorca pokaz<double> w sposób jawny (bez dedukcji)


	system("pause");

	return 0;
}

