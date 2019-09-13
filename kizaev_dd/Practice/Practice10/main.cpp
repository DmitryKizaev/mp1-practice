#include "container.h"
#include "container_ptr.h"
#include <iostream>
using namespace std;
#define MAX_SIZE 10

int main()
{
    // PART 1
	int size, n;
	cout << "Container Classique" << endl;
	cout << "Enter size: ";
	cin >> size;

	container <int> �1 (MAX_SIZE);

	for (int i = 0; i < size; i++)
		�1.elem_add(i);
	cout << �1 << endl;

	cout << "Enter object to delete: " << endl;
	cin >> n;
	try
	{
		�1.elem_delete(n);
	}
	catch (mistakes& error)
	{
		error.edrop();
	}
	cout << �1 << endl;

	cout << "Enter object to add: ";
	cin >> n;
	try
	{
		�1.elem_add(n);
	}
	catch (mistakes& error)
	{
		error.edrop();
	}
	cout << �1 << endl;

	cout << "Enter object to find: ";
	cin >> n;
	try
	{
		cout << "its index is " << �1.elem_find(n) << endl;;
	}
	catch (mistakes& error)
	{
		error.edrop();
	}

	try
	{
		cout << "'C1[1] = ?'" << endl << �1[1] << endl;
	}
	catch (mistakes& error)
	{
		error.edrop();
	}

	try
	{
		�1[1] = 6;
	}
	catch (mistakes& error)
	{
		error.edrop();
	}
	cout << "after 'C1[1] = 6'" << endl;
	cout << �1 << endl <<endl;

	// PART II

	cout << "Container for <T*>" << endl;
	cout << "Enter size: ";
	cin >> size;

	container <int*> C2(MAX_SIZE);

	for (int i = 0; i < size; i++)
		C2.elem_add(&i);
	cout << C2 << endl;

	cout << "Enter object to delete: " << endl;
	cin >> n;
	try
	{
		C2.elem_delete(n);
	}
	catch (mistakes& error)
	{
		error.edrop();
	}
	cout << C2 << endl;

	cout << "Enter object to add: ";
	cin >> n;
	try
	{
		C2.elem_add(&n);
	}
	catch (mistakes& error)
	{
		error.edrop();
	}
	cout << C2 << endl;

	cout << "Enter object to find: ";
	cin >> n;
	try
	{
		cout << "its index is " << �1.elem_find(n) << endl;;
	}
	catch (mistakes& error)
	{
		error.edrop();
	}

	try
	{
		cout << "'C2[1] = ?'" << endl << C2[1] << endl;
	}
	catch (mistakes& error)
	{
		error.edrop();
	}

	try
	{
		C2[1] = 6;
	}
	catch (mistakes& error)
	{
		error.edrop();
	}

	cout << "after 'C2[1] = 6'" << endl;
	cout << C2 << endl;

	system("pause");
	return 0;
}