#include <iostream>


void say_hi() {
	std::cout << " Привет, Мир! \n";
	std::cout << " Всем пока! \n";
}
void mult_x2(int num) {
	std::cout << num * 2 << std::endl;
}

int sum(int a, int b) {
	return a + b;
}

void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
		std::cout << std::endl;
}

void mult_x5(int num) {
	num *= 5;
}

void mult_arr_x5(int arr[]) {
	arr[1] *= 5;
}


void positiv_indexes(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

unsigned long long factorial(int num) {
	if (num < 0)
		return 0;
	unsigned long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}


int main(){
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Функции не возвращающие значения (процедуры)
	say_hi();
	say_hi();

	std::cout << " Введите число -> ";
	std::cin >> n;
	mult_x2(n);
	

	// Функции возвращающие значения (истинные)
	std::cout << " введите два числа - > ";
    std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	

	// Функции. принимающие массив
	const int size = 5;
	int arr[size]{ 7, 15, 42, 105, -77 };
	std::cout << " Массив: \n";
	print_arr(arr, size);


	// Параметры и аргументы функций
	n = 10;
	mult_x5(n);
	std::cout << n << std::endl; // 10


	int myarr[3]{ 15, 25, 35 };
	mult_x5(myarr[1]);
	std::cout << myarr[1] << std::endl; // 25


	mult_arr_x5(myarr);
	std::cout << myarr[1] << std::endl; // 125
	

	// Задача 1.Индексы положительных элементов массива
	std::cout << " Задача 1.\n Массив: \n";
	const int size1 = 5;
	int arr1[size1]{ 10, -6, 0, 15, -38 };
	print_arr(arr1, size1); // функция выводит массив

	std::cout << " ИНДЕКСЫ ПОЛОЖИТЕЛЬНЫХ ЭЛЕМЕНТОВ: \n";
	positiv_indexes(arr1, size1); //функция выводит индексы

	

	// Задача 2. Факториал
	std::cout << " Задача 2.\n Введите число - > ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;



	return 0;

	}