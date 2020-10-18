#include <iostream>
#include <vector>
using namespace std;

vector<int> quick_sort(vector<int> a) {
	if (a.size() <= 1)
		return a;
	else {
		vector<int> less, great, equal;
		int target = a[rand() % a.size()];
		for (auto num : a) {
			if (num < target)
				less.push_back(num);
			else if (num > target)
				great.push_back(num);
			else
				equal.push_back(num);
		}
		less = quick_sort(less);
		great = quick_sort(great);
		less.insert(less.end(), equal.begin(), equal.end());
		less.insert(less.end(), great.begin(), great.end());
		return less;
	}
}
void qs_quick_sort() {
	vector<int> a(16);
	for (int i = 0; i < 16; i++)
		a[i] = rand() % 64;
	for (auto num : a)
		cout << num << " ";
	cout << endl;
	a = quick_sort(a);
	for (auto num : a)
		cout << num << " ";
	cout << endl;
}
