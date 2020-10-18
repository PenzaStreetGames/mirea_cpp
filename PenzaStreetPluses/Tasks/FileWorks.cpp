#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// task 32 ���������� ���������� ����� ������� � ��������

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
	else if ('�' <= a && a <= '�') {
		first = (int)'�';
		alpha_size = (int)('�' - '�' + 1);
	}
	else if ('�' <= a && a <= '�') {
		first = (int)'�';
		alpha_size = (int)('�' - '�' + 1);
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
