#include<iostream>
#include<string>
#include <ctime>

using namespace std;
int main() {
	string  word = "";
	string preview = "";
	int tries = 0;
	bool success = false;
	cout << "enter ur word"<<endl;
	cin >> word;
	preview = word;
	for (int i = 0; i < word.length(); i++)
	{
		preview[i] = '-';
	}

	cout << preview << endl;
	char guess;
	cin >> guess;
	while (tries <= 11)
	{
		for (int i = 0; i < word.length(); i++)
		{
			if (guess == word[i]) {
				preview[i] = guess;
			}
		}

		if (preview == word) {
			tries++;
			system("cls");
			cout << preview << endl;
			success == true;
			break;
		}
		else {
			tries++;
			system("cls");
			cout << preview << endl;
			cin >> guess;
		}

	}
	if (!success) {
		cout << "You Hanged!" << endl;
	}

	system("pause");
}