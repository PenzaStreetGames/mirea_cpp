#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void hw2_cone() {
	long double r, R, h;
	cout << "Введите параметры конуса r, R, h: ";
	cin >> r >> R >> h;
	cout << "Объём: " << (1.0 / 3.0) * M_PI * h * (R * R + R * r + r * r) << endl;
	cout << "Площадь: " << M_PI * (R * R + (R + r) * sqrt(pow(R - r, 2) + h * h) + r * r);
}

void hw2_branching() {
	float x, a, w;
	cin >> x >> a;
	if (x == 0) {
		cout << "w не существует";
		return;
	}
	else if (abs(x) < 1)
		w = a * log(abs(x));
	else if (a >= x * x)
		w = sqrt(a - x * x);
	else {
		cout << "w не существует";
		return;
	}
	cout << w;
}

void hw2_function() {
	float x, y, b;
	cin >> x >> y >> b;
	if (b - y > 0 && b - y != 1 && b - x >= 0)
		cout << log(b - y) * sqrt(b - x);
	else
		cout << "не существует";
}

void hw2_numbers() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "bad input";
		return;
	}
	for (int i = n; i < n + 10; i++) {
		cout << i << " ";
	}
	cout << endl;
}

float hw2_5_f(float x) {
	return (x * x - 2 * x + 2) / (x - 1);
}

void hw2_tabulation() {
	float start = -4.0, end = 4.0, step = 0.5;
	for (float x = start; x <= end; x += step) {
		if (hw2_5_f(x) != INFINITY)
			cout << hw2_5_f(x) << endl;
		else
			cout << "нельзя" << endl;
	}
}


