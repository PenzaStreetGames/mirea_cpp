#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <ostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <time.h>
using namespace std;

void hw4_read_write() {
	ofstream out;
	ifstream in;
	int n, sum = 0;
	out.open("hw4_numbers.txt");
	for (int i = 0; i < 10; i++) {
		cin >> n;
		out << n << endl;
	}
	out.close();
	in.open("hw4_numbers.txt");
	for (int i = 0; i < 10; i++) {
		in >> n;
		sum += n;
	}
	in.close();
	cout << sum << endl;
}

int sign(double n) {
	if (n > 0)
		return 1;
	else if (n == 0)
		return 0;
	else
		return -1;
}

void hw4_sign() {
	double n;
	cin >> n;
	cout << "Знак числа: " << sign(n) << endl;
}

double rectangle(double a, double b) {
	return a * b;
}

double triangle(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double circle(double r) {
	return M_PI * r * r;
}

void hw4_figures() {
	int a, b, c, r, mode;
	cout << "Введите номер интересующей фигуры (1 - прямоугольник, 2 - треугольник, 3 - круг): ";
	cin >> mode;
	switch (mode) {
	case 1:
		cout << "Введите стороны a и b: ";
		cin >> a >> b;
		cout << endl << "Площадь прямоугольника: " << rectangle(a, b) << endl;
		break;
	case 2:
		cout << "Введите стороны a, b и с: ";
		cin >> a >> b >> c;
		cout << endl << "Площадь треугольника: " << triangle(a, b, c) << endl;
		break;
	case 3:
		cout << "Введите радиус r: ";
		cin >> r;
		cout << endl << "Площадь круга: " << circle(r) << endl;
		break;
	default:
		cout << "Фигура не найдена";
		break;
	}
}

void hw4_old_glory() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			cout << "* ";
		}
		for (int j = 0; j < 40; j++) {
			cout << (i % 2 == 0 ? "-" : "=");
		}
		cout << endl;
	}
	for (int i = 6; i < 13; i++) {
		for (int j = 0; j < 56; j++) {
			cout << (i % 2 == 0 ? "-" : "=");
		}
		cout << endl;
	}
}

void hw4_sinusoid() {
	int const a = 20, b = 100;
	int matrix[a][b];
	double middle_x = b / 2;
	double middle_y = a / 2;
	double step = 1.0 / (double)a, area = 1 / (double)a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			double x = (j - middle_x) * step * 2;
			double y = -(i - middle_y) * step * 2;
			if (abs(y - sin(x)) <= area)
				cout << "*";
			else if (y == 0 && x == 0)
				cout << "+";
			else if (y == 0)
				cout << "-";
			else if (x == 0)
				cout << "|";
			else
				cout << ".";
		}
		cout << endl;
	}
}

int code(char ch) {
	map <char, int> codes = { {'I', 1},
		{'V', 5}, {'X', 10}, {'L', 50}, 
		{'C', 100}, {'D', 500}, {'M', 1000} };
	return codes[ch];
}

/*
MMMCMXCIX
LIV
*/
void hw4_rome() {
	string rome;
	int res, last, i = 0, l = 0;
	cin >> rome;
	last = NULL;
	res = 0, l = rome.length();
	while (i < l) {
		if (i == l - 1) {
			res += code(rome[i]);
			i++;
		}
		else {
			if (code(rome[i]) < code(rome[i + 1])) {
				res += code(rome[i + 1]) - code(rome[i]);
				if (l - i >= 2)
					i += 2;
				else
					break;
			}
			else if (code(rome[i]) == code(rome[i + 1])) {
				if (l - i >= 3) {
					if (code(rome[i + 2] == code(rome[i]))) {
						res += code(rome[i]) * 3;
						i += 3;
					}
					else {
						res += code(rome[i]) * 2;
						i += 2;
					}
				}
				else {
					res += code(rome[i]) * 2;
					i += 2;
				}
			}
			else {
				res += code(rome[i]);
				i += 1;
			}
		}
	}
	cout << res;
}

int gen(int m, int c, int i, int si) {
	return (m * si + i) % c;
}

void hw4_pseudo() {
	srand((int)time(NULL));
	int m = 25173, c = 65537, i = 13849, n;
	int res = rand();
	cin >> n;
	for (int i = 0; i < n; i++) {
		res = gen(m, c, i, res);
		cout << res << endl;
	}
}

/*
3 4 2
5 2 0 10
3 5 2 5
20 0 0 0
1.2 0.5
2.8 0.4
5.0 1.0
2.0 1.5
*/

void hw4_matrix() {
	int k, m, n;
	float A[100][100], B[100][100], C[100][100];
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			C[i][j] = 0;
			for (int l = 0; l < m; l++) {
				C[i][j] += A[i][l] * B[l][j];
			}
		}
	}

	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	float max1 = NULL, min1 = NULL, max2 = NULL, min2 = NULL,
		sum1 = 0.0, sum2 = 0.0, sum = 0.0;
	int	maxind1 = 0, minind1 = 0, maxind2 = 0, minind2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			float val = C[i][j];
			if (j == 0) {
				if (max1 == NULL || max1 < val) {
					max1 = val;
					maxind1 = i + 1;
				}
				if (min1 == NULL || min1 > val) {
					min1 = val;
					minind1 = i + 1;
				}
				sum1 += val;
			}
			else if (j == 1) {
				if (max2 == NULL || max2 < val) {
					max2 = val;
					maxind2 = i + 1;
				}
				if (min2 == NULL || min2 > val) {
					min2 = val;
					minind2 = i + 1;
				}
				sum2 += val;
			}
			sum += val;
		}
	}
	cout << "Больше всего денег получил " << maxind1 << " продавец" << endl;
	cout << "Меньше всего денег получил " << minind1 << " продавец" << endl;
	cout << "Больше всего комиссионных получил " << maxind2 << " продавец" << endl;
	cout << "Меньше всего комиссионных получил " << minind2 << " продавец" << endl;
	cout << "Общая выручка составила " << sum1 << " рублей" << endl;
	cout << "Общая сумма комиссионных составила " << sum2 << " рублей" << endl;
	cout << "Общий оборот денег составил " << sum << " рублей" << endl;
}

int hex(char n) {
	if ((int)'0' <= (int)n && (int)n <= (int)'9')
		return (int)(n) - (int)('0');
	else
		return (int)(n) - (int)('A') + 10;
}

char inv_hex(int n) {
	if (n < 10)
		return (char)(n + (int)'0');
	if (n >= 10)
		return (char)((int)'A' + n - 10);
}

/*
112D 16 8
10455 8 16
*/
void hw4_systems() {
	string n, str = "";
	int k, q, dec = 0, res, power = 0;
	cin >> n >> k >> q;
	for (int i = n.length() - 1; i >= 0; i--) {
		int code = hex(n[i]);
		int alpha = pow(k, power);
		dec += code * alpha;
		power += 1;
	}
	while (dec > 0) {
		int num = dec % q;
		str = inv_hex(num) + str;
		dec /= q;
	}
	cout << str;
}

