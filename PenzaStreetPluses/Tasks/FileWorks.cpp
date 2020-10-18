#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// task 32 Шифрование текстового файла сдвигом в алфавите

char fw_rome_code(char a, int shift) {
	int first, alpha_size;
	if ('A' <= a && a <= 'Z') {
		first = (int)'A';
		alpha_size = (int)('Z' - 'A' + 1);
	}
	else if ('a' <= a && a <= 'z') {
		first = (int)'a';
		alpha_size = (int)('z' - 'a' + 1);
	}
	else if ('А' <= a && a <= 'Я') {
		first = (int)'А';
		alpha_size = (int)('Я' - 'А' + 1);
	}
	else if ('а' <= a && a <= 'я') {
		first = (int)'а';
		alpha_size = (int)('я' - 'а' + 1);
	}
	else {
		return a;
	}
	return (char)(((int)a - first + shift) % alpha_size + first);
}

void rome_code() {
	ifstream in;
	ofstream out;
	string s;
	int shift;
	cin >> shift;
	in.open("rome.txt");
	while (!in.eof()) {
		getline(in, s);
		for (int i = 0; i < s.size(); i++)
			cout << fw_rome_code(s[i], shift);
		cout << endl;
	}
	in.close();

}
