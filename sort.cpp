#include<iostream>
#include<string>
#include <ctime>

using namespace std;
int main() {
	int size;
	cin >> size;
	int* arr = new int[size];
	bool isAcc = false;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (i != 0 && arr[i - 1] <= arr[i]) {
			isAcc = true;
		}
		else {
			isAcc = false;
		}
	}

	if (isAcc) cout << "is Accending";
	else cout << "is not sorted!";

	system("pause");

}