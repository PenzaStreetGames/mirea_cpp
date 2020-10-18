// Соломатин Павел ИКБО-06-20 (с)
#include <iostream>
#include <math.h>
using namespace std;

void task_1() {
	int i = 2147483647;
	cout << i;
	i++;
	cout << i;
}

void task_2() {
	int n;
	cin >> n;
	cout << n / 100;
}

void task_3() {
	int d, s;
	cin >> d >> s;
	cout << s / d;
}

void task_4() {
	int x;
	cin >> x;
	cout << x % 100 / 10;
}

void task_5() {
	int x, y;
	cin >> x >> y;
	if (y >= x * x - 2 && (y <= x || y <= -x)) {
		cout << "YES";
	}
	else
		cout << "NO";
}

void task_6() {
	int n;
	cin >> n;
	while (n != -1) {
		cout << (n % 3 == 0 ? "Кратно" : "Не кратно");
		cin >> n;
	}
}

void task_7() {
	int start = 5, step = 2, distance;
	cin >> distance;
	cout << ceil((distance - start) / 2) + 1;
}

void task_8() {
	int num, res = 0;
	cin >> num;
	while (num != 0) {
		res += (num % 19 == 0 ? 1 : 0);
		cin >> num;
	}
	cout << res;
}

int factorial(int x) {
	return (x > 0 ? x * factorial(x - 1) : 1);
}

void task_9() {
	int x;
	cin >> x;
	cout << factorial(x);
}

bool recursive(int n, int x) {
	if (n == x)
		return true;
	if (n > x)
		return false;
	return recursive(n + 8, x) || recursive(n + 9, x);
}

void task_10() {
	int x;
	cin >> x;
	cout << (recursive(1, x) ? "YES" : "NO");
}

void task_11() {
	int n = 100;
	cout << "Введите до 100 чисел. -1 - остановка";
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = NULL;
	}
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == -1) {
			arr[i] = NULL;
			break;
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 7 == 0)
			sum += arr[i];
	}
	cout << sum;
}

void task_12() {
	int max = 0;
	int arr[10] = {1, 5, 9, 2, 3, 33, 109, 117, 13, 24};
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 3 == 0 && arr[i] > max)
			max = arr[i];
	}
}
/*
void task_13() {
	int res = 0, n, m;
	int arr[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 7 == 0)
				res += arr[i][j];
		}
	}
	cout << res;
}
*/
void task_14() {
	string str, res;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != '*')
			res += str[i];
	}
	cout << res;
}

void task_15() {
	string word, word1, word2;
	cin >> word >> word1 >> word2;
	cout << word[0] << '.' << word1[0] << '.' << word2[0];
}

