#include<iostream>
#include<string>
#include <ctime>

using namespace std;
int main() 
{
	int size;
	cin >> size;
	int* arr = new int[size];
	srand((unsigned)time(0));
	cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		int random = rand();
		bool toAdd = true;
		for (int j = 0; j < size; j++)
		{
			if (random == arr[j]) toAdd = false;
		}
		if (toAdd) {
			arr[i] = random;
			if (i < size - 1)  cout << arr[i] << ", ";
			else cout << arr[i];
		}

	}
	cout << " ]" << endl;

	system("pause");

}