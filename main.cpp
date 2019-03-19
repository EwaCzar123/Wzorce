#include "Mylist.h"

using namespace std;

int main() {
	MyList<int> mylist;
	mylist.insert(1);
	mylist.insert(0);
	mylist.insert(6);
	mylist.insert(1);
	cout << mylist << endl;

	MyList<float> floatlist;
	floatlist.insert(1.22);
	floatlist.insert(2.1);
	floatlist.insert(3);
	floatlist.insert(0.11);
	cout << floatlist << endl;

	MyList<figure> mylist2;
	figure f1("a", "b");
	figure f2("b", "c"); 
	figure f3("s", "a");
	mylist2.insert(f1);
	mylist2.insert(f2);
	mylist2.insert(f3);
	cout << mylist2 << endl;

	expandedList<int> list3;
	list3.insert(1);
	list3.insert(3);
	list3.insert(2);
	
	cout << list3.elementsNumber() << endl;
	getchar();
	return 0;
};