#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void printStringArray(string word[], int size) {
	int i = 0;
	while (word[i] != "\0") {
		cout << word[i] << endl;
		i++;
	}
	cout << "Length:" << size;
}

int main() {

	string text;
	int size;

	//輸入字串
	getline(cin, text);

	stringstream ssText(text);
	string word[10];

	int i = 0;
	while (!ssText.eof( ) ){
		ssText >> word[i];
		i++;
	}

	//幾個字
	size = text.length();
	
	//輸出
	printStringArray(word, size);

	system("pause");
	return 0;

}

