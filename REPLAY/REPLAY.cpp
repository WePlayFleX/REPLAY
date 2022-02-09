#include <iostream>

using namespace std;

int main()
{
	int age[4];

	for (size_t i = 0; i < 4; i++)
	{
		cout << "Enter age: ";
		cin >> age[i];
	}

	for (size_t i = 0; i < 4; i++)
	{
		cout << "You entered: " << age[i] << endl;
	}

	system("pause");
	return 0;
}