#include <iostream>
#include <windows.h>
#include <string> 
#include <vector>
using namespace std;



//1 задача
double fraction(double num1) {
	int inter_part = (int)num1;
	return num1 - inter_part;
}
//2задача--------------------------------
int charToNum(char num2) {
	return num2 ;
}
//3задача--------------------------------
bool is2Digits(int num3) {
	return (num3 >= 10 && num3 <= 99) || (num3 <= -10 && num3 >= -99);
}
//4задача--------------------------------
bool isInRange(int a, int b, int num4) {
	int min_Range = (a < b) ? a : b;
	int max_Range = (a > b) ? a : b;
	return (num4 >= min_Range && num4 <= max_Range);
}
//5задача--------------------------------
bool isEqual(int c, int d, int e) {
	return c == d && d == e;
}
//6задача----------------------------------------
int abs(int x6) {
	if (x6 > 0) {
		return x6;
	}
	else {
		return -x6;
	}
}
//7задача----------------------------------------
bool is35(int x7) {
	return (x7 % 3 == 0) != (x7 % 5 == 0);
}
//8задача----------------------------------------
int max3(int x8, int y8, int z8) {
	int max = x8;
	if (max < y8) max = y8;
	if (max < z8) max = z8;
	return max;
}
//9задача----------------------------------------
int sum2(int x9, int y9) {
	int sum9 = x9 + y9;
	if (sum9 >= 10 && sum9 <= 19) {
		return 20;
	}
	return sum9;
}
//10задача----------------------------------------
string day(int x10) {
	switch (x10) {
	case 1:
		return "понедельник";
	case 2:
		return "вторник";
	case 3:
		return "среда";
	case 4:
		return "четверг";
	case 5: 
		return "пятница";
	case 6: 
		return "суббота";
	case 7: 
		return "воскресенье";
	default:
		return "это не день недели";
	}
}
//11задача----------------------------------------
string ListNums(int x) {
	string result = " ";
	for (int i = 0; i <= x; i++) {
		result += to_string(i);
		if (i < x) {
			result += " ";
		}
	}
	return result;
}
//12задача----------------------------------------
string chet(int x) {
	string result = " ";
	for (int i = 0; i <= x; i+=2) {
		result += to_string(i);
		if (i < x) {
			result += " ";
		}
	}
	return result;
}
//13задача----------------------------------------
int numLen(long x) {
	if (x == 0) {
		return 1;
	}
	if (x < 0) {
		x = -x;
	}
	int count = 0;
	while (x > 0) {
		x = x / 10;
		count++;
	}
	return count;
}
//14задача----------------------------------------
void square(int x) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
//15 задача--------------------------------------------
void rightTriangle(int x) {
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < x - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
//16 задача-------------------------------------------
int findFirst(vector<int> arr, int x) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}
//17 задача-------------------------------------------
int maxAbs(vector<int> arr) {
	if (arr.empty()) {
		return 0;
	}

	int maxAbsValue = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		if (abs(arr[i]) > abs(maxAbsValue)) {
			maxAbsValue = arr[i];
		}
	}
	return maxAbsValue;
}






int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	while (true) {
		cout << "\n" << string(80, '/') << endl;

		int choice;
		cout << "ВЫБЕРИТЕ ЗАДАЧУ(от 1 до 20): ";
		cin >> choice;

		if (choice == 0) {
			cout << "Выход из программы." << endl;
			break;
		}

		switch (choice) {
		case 1: {
			//1задача----------------------
			double num1;
			cout << "Введите число, для извлечния дробной части:";
			cin >> num1;
			double result1 = fraction(num1);
			cout << "Дробная часть числа " << num1 << ": " << result1 << endl;
			break;
		}
		case 2: {

			//2задача----------------------

			char num2;
			cout << "Введи символ для значения ASCI кода от 0 до 9: ";
			cin >> num2;
			if (num2 >= '0' && num2 <= '9') {
				int num2c = charToNum(num2);
				cout << "Символ:" << num2 << ". Преобразован в число: " << num2c << endl;
			}
			else {
				cout << "Ошибка! Введена не цифра, а символ: '" << num2 << "'" << endl;	
			}
			break;
		}
		case 3: {
			//3задача----------------------------------

			int num3;
			cout << "Проверка на двузначность " << endl;;
			cout << "Введите двузначное число: ";
			cin >> num3;
			if (is2Digits(num3)) {
				cout << num3 << " - двузначное число" << endl;
			}
			else {
				cout << num3 << " - не двузначное число" << endl;
			}
			break;
		}
		case 4: {
			//4задача----------------------------------------

			int a, b, num4;
			cout << "Определить входит ли число в диапазон:  " << endl;
			cout << "Введите минимальную границу диапазона : ";
			cin >> a;
			cout << "Введите максимальную границу диапазона : ";
			cin >> b;
			cout << "Введите число для проверки вхождения в диапазон : ";
			cin >> num4;
			if (isInRange(a, b, num4)) {
				cout << "Число " << num4 << " находиться в диапазоне от " << a << " до " << b << endl;
			}
			else {
				cout << "Число " << num4 << " не находиться в диапазоне от " << a << " до " << b << endl;
			}
			break;
		}
		case 5: {
			//5задача----------------------------------------

			int c, d, e;
			cout << "Проверка равенства чисел:" << endl;
			cout << "Введите первое число: ";
			cin >> c;
			cout << "Введите второе число: ";
			cin >> d;
			cout << "Введите третье число: ";
			cin >> e;
			cout << "\nРезультат проверки:" << endl;
			cout << "a = " << c << ", b = " << d << ", c = " << e << endl;
			if (isEqual(c, d, e)) {
				cout << "Результат: True" << endl;
			}
			else {
				cout << "Результат: False" << endl;
			}
			break;
		}
		case 6: {
			//6задача----------------------------------------

			int x6;
			cout << "Нахождение модуля числа:  " << endl;;
			cout << "Введите число: ";
			cin >> x6;
			int result6 = abs(x6);
			cout << "Модуль числа " << x6 << " равен: " << result6 << endl;
			break;
		}
		case 7: {
			//7задача----------------------------------------

			int x7;
			cout << "Проверка деления на 3 и на 5(если делится на оба числа сразу то не подходит): " << endl;
			cout << "Введите число: ";
			cin >> x7;
			bool result7 = is35(x7);
			if (result7 == true) {
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}
			break;
		}
		case 8: {
			//8задача----------------------------------------

			int x8, y8, z8;
			cout << "Нахождение большего из 3 чисел" << endl;
			cout << "Введите 1 число: ";
			cin >> x8;
			cout << "Введите 2 число: ";
			cin >> y8;
			cout << "Введите 3 число: ";
			cin >> z8;
			int result8 = max3(x8, y8, z8);
			cout << "1 число: " << x8 << "; 2 число: " << y8 << "; 3 число: " << z8 << endl;
			cout << "Большим числом является: " << result8 << endl;
			break;
		}
		case 9: {
			//9задача----------------------------------------

			int x9, y9;
			cout << "Нахождение суммы 2 чисел" << endl;
			cout << "Введите 1 число: ";
			cin >> x9;
			cout << "Введите 2 число: ";
			cin >> y9;
			int result9 = sum2(x9, y9);
			cout << "Результат = " << result9 << endl;
			break;
		}
		case 10: {
			//10задача----------------------------------------
			int x10;

			cout << "-----Определение дня недели по числу----" << endl;
			cout << "Введите число от 1 до 7: ";
			cin >> x10;

			string result10 = day(x10);
			cout << "Результат: " << result10 << endl;
			break;
		}
		case 11: {
			//11задача----------------------------------------
			int x;
			cout << "----Возврат строки от 0 до введенного числа------- " << endl;
			cout << "Введите число:  ";
			cin >> x;
			string result = ListNums(x);
			cout << "Результат строки: (" << result << ")" << endl;
			break;
		}
		case 12: {
			//12задача----------------------------------------
			int x;
			cout << "----Возврат строки от 0 до введенного числа(только четные)------- " << endl;
			cout << "Введите число:  ";
			cin >> x;
			string result = chet(x);
			cout << "Результат строки: (" << result << ")" << endl;
			break;
		}
		case 13: {
			//13задача----------------------------------------
			long x;

			cout << "Введите число: ";
			cin >> x;

			int length = numLen(x);
			cout << "Количество цифр в числе " << x << ": " << length << endl;	
			break;
		}
		case 14: {
			//14задача----------------------------------------
			int x;
			cout << "Введите размер квадрата: ";
			cin >> x;
			cout << "Квадрат " << x << "x" << x<< ":" << endl;
			square(x);
			break;
		}
		case 15: {
			//15задача----------------------------------------
			int x;
			cout << "Введите высоту треугольника: ";
			cin >> x;

			cout << "Правый треугольник высотой " << x << ":" << endl;
			rightTriangle(x);
			break;
		}
		case 16: {
			int size;
			cout << "Введите количество элементов в массиве: ";
			cin >> size;
			vector<int> arr(size);
			cout << "Введите " << size << " элементов массива:" << endl;
			for (int i = 0; i < size; i++) {
				cout << "Элемент " << i + 1 << ": ";
				cin >> arr[i];  
			}

			cout << "Ваш массив: ";
			for (int i = 0; i < arr.size(); i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

			int x;
			cout << "Введите число для поиска: ";
			cin >> x;
			int result = findFirst(arr, x);
			if (result != -1) {
				cout << "Первое вхождение числа " << x << " найдено по индексу: " << result << endl;
			}
			else {
				cout << "Число " << x << " не найдено в массиве" << endl;
				cout << "-1" << endl;
				
			}
			break;
		}
		case 17: {
			int size;
			cout << "Введите количество элементов в массиве: ";
			cin >> size;

			vector<int> arr(size);

			cout << "Введите " << size << " элементов массива:" << endl;
			for (int i = 0; i < size; i++) {
				cout << "Элемент " << i + 1 << ": ";
				cin >> arr[i];
			}

			cout << "Ваш массив: ";
			for (int num : arr) {
				cout << num << " ";
			}
			cout << endl;

			int result = maxAbs(arr);
			cout << "Максимальное по модулю значение: " << result << endl;
			cout << "Его модуль: " << abs(result) << endl;
			break;
		}
		default:
			cout << "Не существует задачи с таким номером." << endl;
			break;
		}
	}
	return 0;
}

