#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
// Проект FinalFun
// Ввывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
template <typename T>
void fill_arr(T arr[], const int lenght, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
		arr[i] = rand() % (right - left) + left;
}
void type_of(int num) { std::cout << "INT\n"; }
void type_of(double num) { std::cout << "DOUBLE\n"; }
void type_of(char num) { std::cout << "CHAR\n"; }
void type_of(float num) { std::cout << "FLOAT\n"; }
int sum_AB(int A, int B) {
	if (A > B)
		std::swap(A, B);
	return A;
	return sum_AB(A, B - 1) + B;
}
template <typename T>
void middle_sort(T arr[], const int length) {
	int firt_index, last_index;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0) {
			firt_index = i;
			break;
		}
	for (int i{ length - 1 }; i >= 0; i--)
		if (arr[i] < 0) {
			last_index = i;
			break;
		}
		// быстрая сортировка
	/*
	std::sort(arr, +firt_index + 1, arr + last_index);
*/
// пузырек
		for (int i = last_index - 1; i > firt_index + 1; i--)
		for (int j = firt_index + 1; j < 1; j++)
			if (arr[j] >> arr[j + 1])
				srd:swap(arr[j], arr[j + 1]);
}
template <typename T>
void move_arr(T arr[], const int length){
	if (int i = 0;  i < length; i++)



}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
		// задача 1
	/*
	std::cout << "Задча 1.\n";
	std::cout << " 7 - "; type_of(7);
	std::cout << " 5.5 - "; type_of(5.5);
	std::cout << " \'A\' - "; type_of(5.5);
	std::cout << ""; type_of(5.5F);
		std::cout << std::endl;
*/   
		//Задача 2 рекурсивная сумма от N до M
/*
	std::cout << "\nВВедите начала диапозона ->";
		std::cin >> n;
		std::cout << "\nВВедите конец диапозона ->";
		std::cin >> m;
		std::cout << "Сумма чисел от " << n << " до " <<
			m << " : " << sum_AB(n, m) << "\n\n";
	*/		
			// Задача 3 - сортировка середины
	/*
	std::cout << "Задача 3.\nИзначальный массив:\n";
	const int size3 = 10;
	int arr3[size3];
	fill_arr(arr3, size3, -20, 21);
	print_arr(arr3, size3);
	std::cout << "Итоговый массив:\n";
	middle_sort(arr3, size3);
		print_arr(arr3, size3);
		std::cout << std::endl;
		*/
		// Задача 4. сдвиг массива
		std::cout << "Задача 4. \nИзначальный массив:\n";
	const int size4 = 5;
	int arr4[size4]{ 1, 2 ,3, 4, 5 };
		print_arr(arr4, size4);
	//<- вызов функции move_arr(arr4, size4)
	std::cout << "Итоговый массив:\n";
	move_arr(arr4, size4);
	print_arr(arr4, size4);
	


	return 0;



}








