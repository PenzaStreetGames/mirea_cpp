#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;


/*
1000000 15 12
*/
void hw3_price() {
	double m, n, S, p, r;
	cin >> S >> p >> n;
	r = p / 100;
	m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
	cout << m << endl;
}

double price(double n, double S, double p) {
	double r = p / 100;
	return (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
}

/*
1000000 12 15373.4
*/
void hw3_percent() {
	double m, n, S, p, r, high = 100.0, low = 0.0, middle = 50.0;
	cin >> S >> n >> m;
	double high_res = price(n, S, high), low_res = price(n, S, low);
	double middle_res = price(n, S, middle);
	for (int i = 0; i < 40; i++) {
		if (m == middle_res)
			break;
		if (m > middle_res) {
			low = middle;
			low_res = middle_res;
		}
		else {
			high = middle;
			high_res = middle_res;
		}
		middle = (high + low) / 2;
		middle_res = price(n, S, middle);
	}
	cout << middle;
}

void hw3_file() {
	string line;
	ifstream in("info.txt");
	if (in.is_open())
	{
		while (getline(in, line))
			std::cout << line << std::endl;
	}
	in.close();
}

int get_code(char elem) {
	int code = toascii(elem);
	if (toascii('a') <= code && code <= toascii('z')) {
		int shift = code - toascii('a');
		return toascii('A') + shift;
	}
	else
		return toascii(elem);
}

void hw3_numbers() {
	bool is_number = true;
	string line;
	string numbers = "0123456789";
	ifstream in("numbers.txt");
	if (in.is_open()) {
		in >> line;
		while (!in.eof()) {
			for (int i = 0; i < (int)line.length(); i++) {
				if (!(get_code('0') <= get_code(line[i]) && get_code(line[i]) <= get_code('9')))
					is_number = false;
			}
			if (is_number)
				cout << line << " ";
			is_number = true;
			in >> line;
		}
	}
	in.close();
}

void hw3_alpha_sort() {
	string unsort = "g;rEwngUogu;jsebnFyuidJkdlP[]f";
	int max = toascii(unsort[0]), temp;
	for (int i = 0; i < 30; i++) {
		for (int j = i; j < 30; j++) {
			if (get_code(unsort[i]) > get_code(unsort[j])) {
				temp = unsort[i];
				unsort[i] = unsort[j];
				unsort[j] = temp;
			}
		}
	}
	cout << unsort;
}

