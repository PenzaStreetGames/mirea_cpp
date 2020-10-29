#include <iostream>
#include <math.h>
#include <ostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;
// gamba232

void lg1_euclid() {
	int a, b;
	cin >> a >> b;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	cout << a;
}

bool isPrimary(int n) {
	if (n == 1)
		return false;
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void lg1_eratosthenes() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (isPrimary(i))
			cout << i << " ";
	}
}

bool balls_consist(vector<int> a, int b) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == b)
			return true;
	}
	return false;
}

int balls_get_number(vector<int> a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 0)
			return i;
	}
	return -1;
}

int balls_factorial(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}

int balls_number_combs(vector<int> a) {
	int index = balls_get_number(a);
	if (index == -1)
		return (a[a.size() - 1] == a.size() ? 1 : 0);
	else {
		int res = 0;
		for (int i = 1; i <= a.size(); i++) {
			if (balls_consist(a, i))
				continue;
			if (i == index + 1)
				res += balls_factorial(a.size() - index - 1);
			else {
				a[index] = i;
				res += balls_number_combs(a);
			}
		}
		return res;
	}
}

void lg1_balls() {
	int n;
	cout << "Введите количество шаров: ";
	cin >> n;
	vector<int> balls(n);
	for (int i = 0; i < balls.size(); i++)
		balls[i] = 0;
	cout << "Количество комбинаций: ";
	cout << balls_number_combs(balls);
}

vector<vector <int>> read_field() {

}

void lg1_life() {
}
