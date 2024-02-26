#include <iostream>
using namespace std;
void reverse(char str[],int num)
{
	cout << "\nAfter reversing\n";
	for (int i = num; i >= 1; i--)
		cout << str[i] << " \t\t";
}
int main()
{
	int num;
	char str[num];
	cout << "How many characters you want to enter ?;" << endl;
	cin >> num;
	cout << "\t Enter characters" << endl;
	for (int i = 1; i <= num; i++)
		cin >> str[i];
	reverse(str,num);
	return 0;
}