#include <iostream>
#include <math.h>
using namespace std;

#include "Tasks/Classwork1.cpp"
#include "Tasks/Homework1.cpp"
#include "Tasks/Homework2.cpp"
#include "Tasks/Homework3.cpp"
#include "Tasks/Homework4.cpp"
#include "Tasks/Algorithms1.cpp"
#include "Tasks/QuickSort.cpp"
#include "Tasks/Testing.cpp"
#include "Tasks/FileWorks.cpp"
#include "Tasks/Classwork2.cpp"
#include "Sandbox.cpp"

int main()
{
	int n, m;
	setlocale(LC_ALL, "Russian");
	cout << "Добро пожаловать в систему тестирования задач!\n";
	cout << "Введите номер интересующей вас домашней работы\n";
	cin >> n;
	while (n != 0) {
		switch (n) {
		case 1:
			cout << "Введите номер интерсующей задачи\n";
			cin >> m;
			switch (m) {
			case 1:
				hw1_greeting();
				break;
			case 2:
				hw1_math();
				break;
			case 3:
				hw1_equating();
				break;
			case 4:
				hw1_square();
				break;
			case 5:
				hw1_ligth();
				break;
			default:
				cout << "Задача с таким номером не найдена\n";
				break;
			}
			break;
		case 2:
			cout << "Введите номер интерсующей задачи\n";
			cin >> m;
			switch (m) {
			case 1:
				hw2_cone();
				break;
			case 2:
				hw2_branching();
				break;
			case 3:
				hw2_function();
				break;
			case 4:
				hw2_numbers();
				break;
			case 5:
				hw2_tabulation();
				break;
			default:
				cout << "Задача с таким номером не найдена\n";
				break;
			}
			break;
		case 3:
			cout << "Введите номер интерсующей задачи\n";
			cin >> m;
			switch (m) {
			case 1:
				hw3_price();
				break;
			case 2:
				hw3_percent();
				break;
			case 3:
				hw3_file();
				break;
			case 4:
				hw3_numbers();
				break;
			case 5:
				hw3_alpha_sort();
				break;
			default:
				cout << "Задача с таким номером не найдена\n";
				break;
			}
			break;
		case 4:
			cout << "Введите номер интерсующей задачи\n";
			cin >> m;
			switch (m) {
			case 1:
				hw4_read_write();
				break;
			case 2:
				hw4_sign();
				break;
			case 3:
				hw4_figures();
				break;
			case 4:
				hw4_old_glory();
				break;
			case 5:
				hw4_sinusoid();
				break;
			case 6:
				hw4_rome();
				break;
			case 7:
				hw4_pseudo();
				break;
			case 8:
				hw4_matrix();
				break;
			case 9:
				hw4_systems();
				break;
			default:
				cout << "Задача с таким номером не найдена\n";
				break;
			}
			break;
		case 5:
			cout << "Введите номер интерсующей задачи\n";
			cin >> m;
			switch (m) {
			case 1:
				lg1_euclid();
				break;
			case 2:
				lg1_eratosthenes();
				break;
			case 3:
				lg1_balls();
				break;
			case 4:
				qs_quick_sort();
				break;
			case 5:
				rome_code();
				break;
			default:
				cout << "Задача с таким номером не найдена\n";
				break;
			}
			break;
		case -1:
			sandbox();
			break;
		default:
			cout << "Работа с таким номером не найдена\n";
			break;
		}
		cout << endl << endl;
		cout << "Введите номер интересующей вас домашней работы\n";
		cin >> n;
	}
}
