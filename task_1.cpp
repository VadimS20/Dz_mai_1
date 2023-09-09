#include <iostream>
#include <string>
using namespace std;

int main()
{
	int NumberOfVariants;
	string Name;
	cout << "Write your name: ";
	getline(cin,Name);
	cout << "Write how many variants do you have: ";
	cin >> NumberOfVariants;


	cout << "Your answer is: " << int(Name[0])%NumberOfVariants;
	return 0;
}
