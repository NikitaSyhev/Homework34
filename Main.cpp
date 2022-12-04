//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <cstdlib>
#include <ctime>




int uniq(int arr1[], const int length1,int arr2[], const int length2) {
	
	return 0;
}

double fract(double n) {
	int m = n;
	return n - m;
}

double double_rand() {
	srand(time(NULL));
	double num;
		num = rand() % 100;
		return num / 100;
}

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Задание 1.\nДаны 2 массива: \n";
	const int size1 = 4;
	const int size2 = 4;
	int arr1[size1]{ 1,2,4,5 };
	int arr2[size2]{ 3,2,5,6 };
	





	std::cout << "Задача 2: \n";
	double n = 3.14;
	std::cout << "Итоговое значение: " << fract(n) << ".\n";


	std::cout << "Задача 3:\nРандомное число от 0 до 1\n";
	std::cout << "Число:" << double_rand() << ".";
	
	




















	return 0;
}