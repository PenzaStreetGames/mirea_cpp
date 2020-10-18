#include <iostream>
using namespace std;

void internet() {
	float x, y, z, t;
	x = 300;
	y = 200;
	z = 10;
	t = 268;
	float price = y / x;
	if (t > y) {
		cout << (t - y) * z + x << "\n";
	}
	else
		cout << y << "\n";
}

void books() {
	for (int i = 0; i < 100; i++)
	{
		if ((1100 < (100 + i) * 9) && ((100 + i) * 9 < 1200))
		{
			if ((1500 < (100 + i) * 13) && ((100 + i) * 13) < 1600)
				cout << i + 100;
		}
	}
}

void magic_number() {
	int N;
	cin >> N;
	cout << (N <= 0 ? "Неположительное" : "Положительное") << "\n";
	cout << (N % 2 == 0 ? "Чётное" : "Нечётное") << "\n";
	cout << (N > -3 ? "Больше -3" : "Меньше или равно -3") << "\n";
	cout << (floor(log2(N)) == log2(N) ? "Степень 2" : "Не степень") << "\n";

}

void sorting() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a <= b && b <= c)
		cout << a << " " << b << " " << c;
	else if (a <= c && c <= b)
		cout << a << " " << c << " " << b;
	else if (b <= a && a <= c)
		cout << b << " " << a << " " << c;
	else if (b <= c && c <= a)
		cout << b << " " << c << " " << a;
	else if (c <= b && b <= a)
		cout << c << " " << b << " " << a;
	else if (c <= a && a <= b)
		cout << c << " " << a << " " << b;
	cout << "\n";
}

bool pass(int a, int b, int x, int y, int z) {
	if (a >= x && b >= y || a >= y && b >= x)
		return true;
	if (a >= x && b >= z || a >= z && b >= x)
		return true;
	if (a >= y && b >= z || a >= z && b >= y)
		return true;
	return false;
}