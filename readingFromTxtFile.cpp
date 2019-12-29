#include<string>
#include<fstream>
#include<iostream>
#include<algorithm> 

using namespace std;


void printLast10Lines(string fileName) {
	const int k = 10;
	ifstream file(fileName);
	string L[k];
	int size = 0;

	while (file.peek() != EOF) {
		getline(file, L[size % k]);
		size++;
	}
	int start = size > k ? (size % k) : 0;
	int count = std::min(k, size);
	for (int i = 0; i< count; i++) {
		cout << L[(start + i) % k] << endl;
	}
}

void reverse(char* str)
{
	char temp;
	int i, j;
	for (i = 0,j = sizeof(str); i <= j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	for (int i = 0; i <= sizeof(str); i++)
		cout << str[i] << endl;

}

int main()
{
	string file = "text.txt";
	printLast10Lines(file);
	char str[] = "Foxy";
	reverse(str);
	return 0;
}