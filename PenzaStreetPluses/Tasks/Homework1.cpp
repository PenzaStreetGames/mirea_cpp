#include <iostream>
using namespace std;

void hw1_greeting() {
	cout << "��������� �����";
}

void hw1_math() {
	float a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << a * b << endl;
	if (b != 0)
		cout << a / b;
	else
		cout << "����";
	cout << endl;
}

void hw1_equating() {
	float b, c;
	cin >> b >> c;
	if (b != 0 && c != 0)
		cout << (-c) / b;
	else if (b == 0 && c != 0)
		cout << "������� ���";
	else
		cout << "�����";
	cout << endl;
}

void hw1_square() {
	float a, b, c;
	cin >> a >> b >> c;
	if (a != 0) {
		float d = b * b - 4 * a * c;
		if (d > 0)
			cout << (-b + sqrt(d)) / (2 * a) << " " << (-b + sqrt(d) / (2 * a));
		else if (d == 0)
			cout << (-b) / (2 * a);
		else
			cout << "������ ���";
	}
	else {
		if (b != 0 && c != 0)
			cout << (-c) / b;
		else if (b == 0 && c != 0)
			cout << "������� ���";
		else
			cout << "�����";
	}
	cout << endl;
}

void hw1_ligth() {
	string sunS, windowS, lampS;
	cout << "�� ����� ���� (y/n): ";
	cin >> sunS;
	cout << "����� ���������� (y/n): ";
	cin >> windowS;
	cout << "����� ����� (y/n): ";
	cin >> lampS;
	bool sun, window, lamp;
	sun = sunS == "y" ? true : false;
	window = windowS == "y" ? true : false;
	lamp = lampS == "y" ? true : false;
	if (sun && window || lamp)
		cout << "������";
	else
		cout << "�����";
	cout << endl;
}

