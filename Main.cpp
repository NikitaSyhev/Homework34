//���� ������ ������ � ������� ������������� �������
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

	std::cout << "������� 1.\n���� 2 �������: \n";
	const int size1 = 4;
	const int size2 = 4;
	int arr1[size1]{ 1,2,4,5 };
	int arr2[size2]{ 3,2,5,6 };
	





	std::cout << "������ 2: \n";
	double n = 3.14;
	std::cout << "�������� ��������: " << fract(n) << ".\n";


	std::cout << "������ 3:\n��������� ����� �� 0 �� 1\n";
	std::cout << "�����:" << double_rand() << ".";
	
	




















	return 0;
}