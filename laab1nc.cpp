#include <iostream>
#include <windows.h>
#include <string> 
#include <vector>
using namespace std;

double fraction(double num1) {
    int inter_part = (int)num1;
    return num1 - inter_part;
}

int charToNum(char num2) {
    return num2;
}

bool is2Digits(int num3) {
    return (num3 >= 10 && num3 <= 99) || (num3 <= -10 && num3 >= -99);
}

bool isInRange(int a, int b, int num4) {
    int min_Range = (a < b) ? a : b;
    int max_Range = (a > b) ? a : b;
    return (num4 >= min_Range && num4 <= max_Range);
}

bool isEqual(int c, int d, int e) {
    return c == d && d == e;
}

int abs(int x6) {
    if (x6 > 0) {
        return x6;
    }
    else {
        return -x6;
    }
}

bool is35(int x7) {
    return (x7 % 3 == 0) != (x7 % 5 == 0);
}

int max3(int x8, int y8, int z8) {
    int max = x8;
    if (max < y8) max = y8;
    if (max < z8) max = z8;
    return max;
}

int sum2(int x9, int y9) {
    int sum9 = x9 + y9;
    if (sum9 >= 10 && sum9 <= 19) {
        return 20;
    }
    return sum9;
}

string day(int x10) {
    switch (x10) {
    case 1:
        return "�����������";
    case 2:
        return "�������";
    case 3:
        return "�����";
    case 4:
        return "�������";
    case 5:
        return "�������";
    case 6:
        return "�������";
    case 7:
        return "�����������";
    default:
        return "��� �� ���� ������";
    }
}

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

string chet(int x) {
    string result = "";
    for (int i = 0; i <= x; i += 2) {
        result += " " + to_string(i);
    }
    return result;
}

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

void square(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

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

int findFirst(vector<int> arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

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
        cout << "�������� ������(�� 1 �� 20): ";
        cin >> choice;

        if (choice == 0) {
            cout << "����� �� ���������." << endl;
            break;
        }

        switch (choice) {
        case 1: {
            double num1;
            cout << "������� �����, ��� ��������� ������� �����:";
            cin >> num1;
            double result1 = fraction(num1);
            cout << "������� ����� ����� " << num1 << ": " << result1 << endl;
            break;
        }
        case 2: {
            char num2;
            cout << "����� ������ ��� �������� ASCI ���� �� 0 �� 9: ";
            cin >> num2;
            if (num2 >= '0' && num2 <= '9') {
                int num2c = charToNum(num2);
                cout << "������:" << num2 << ". ������������ � �����: " << num2c << endl;
            }
            else {
                cout << "������! ������� �� �����, � ������: '" << num2 << "'" << endl;
            }
            break;
        }
        case 3: {
            int num3;
            cout << "�������� �� ������������ " << endl;
            cout << "������� ���������� �����: ";
            cin >> num3;
            if (is2Digits(num3)) {
                cout << num3 << " - ���������� �����" << endl;
            }
            else {
                cout << num3 << " - �� ���������� �����" << endl;
            }
            break;
        }
        case 4: {
            int a, b, num4;
            cout << "���������� ������ �� ����� � ��������:  " << endl;
            cout << "������� ����������� ������� ��������� : ";
            cin >> a;
            cout << "������� ������������ ������� ��������� : ";
            cin >> b;
            cout << "������� ����� ��� �������� ��������� � �������� : ";
            cin >> num4;
            if (isInRange(a, b, num4)) {
                cout << "����� " << num4 << " ���������� � ��������� �� " << a << " �� " << b << endl;
            }
            else {
                cout << "����� " << num4 << " �� ���������� � ��������� �� " << a << " �� " << b << endl;
            }
            break;
        }
        case 5: {
            int c, d, e;
            cout << "�������� ��������� �����:" << endl;
            cout << "������� ������ �����: ";
            cin >> c;
            cout << "������� ������ �����: ";
            cin >> d;
            cout << "������� ������ �����: ";
            cin >> e;
            cout << "\n��������� ��������:" << endl;
            cout << "a = " << c << ", b = " << d << ", c = " << e << endl;
            if (isEqual(c, d, e)) {
                cout << "���������: True" << endl;
            }
            else {
                cout << "���������: False" << endl;
            }
            break;
        }
        case 6: {
            int x6;
            cout << "���������� ������ �����:  " << endl;
            cout << "������� �����: ";
            cin >> x6;
            int result6 = abs(x6);
            cout << "������ ����� " << x6 << " �����: " << result6 << endl;
            break;
        }
        case 7: {
            int x7;
            cout << "�������� ������� �� 3 � �� 5(���� ������� �� ��� ����� ����� �� �� ��������): " << endl;
            cout << "������� �����: ";
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
            int x8, y8, z8;
            cout << "���������� �������� �� 3 �����" << endl;
            cout << "������� 1 �����: ";
            cin >> x8;
            cout << "������� 2 �����: ";
            cin >> y8;
            cout << "������� 3 �����: ";
            cin >> z8;
            int result8 = max3(x8, y8, z8);
            cout << "1 �����: " << x8 << "; 2 �����: " << y8 << "; 3 �����: " << z8 << endl;
            cout << "������� ������ ��������: " << result8 << endl;
            break;
        }
        case 9: {
            int x9, y9;
            cout << "���������� ����� 2 �����" << endl;
            cout << "������� 1 �����: ";
            cin >> x9;
            cout << "������� 2 �����: ";
            cin >> y9;
            int result9 = sum2(x9, y9);
            cout << "��������� = " << result9 << endl;
            break;
        }
        case 10: {
            int x10;
            cout << "-----����������� ��� ������ �� �����----" << endl;
            cout << "������� ����� �� 1 �� 7: ";
            cin >> x10;
            string result10 = day(x10);
            cout << "���������: " << result10 << endl;
            break;
        }
        case 11: {
            int x;
            cout << "----������� ������ �� 0 �� ���������� �����------- " << endl;
            cout << "������� �����:  ";
            cin >> x;
            string result = ListNums(x);
            cout << "��������� ������: (" << result << ")" << endl;
            break;
        }
        case 12: {
            int x;
            cout << "----������� ������ �� 0 �� ���������� �����(������ ������)------- " << endl;
            cout << "������� �����:  ";
            cin >> x;
            string result = chet(x);
            cout << "��������� ������: (" << result << ")" << endl;
            break;
        }
        case 13: {
            long x;
            cout << "������� �����: ";
            cin >> x;
            int length = numLen(x);
            cout << "���������� ���� � ����� " << x << ": " << length << endl;
            break;
        }
        case 14: {
            int x;
            cout << "������� ������ ��������: ";
            cin >> x;
            cout << "������� " << x << "x" << x << ":" << endl;
            square(x);
            break;
        }
        case 15: {
            int x;
            cout << "������� ������ ������������: ";
            cin >> x;
            cout << "������ ����������� ������� " << x << ":" << endl;
            rightTriangle(x);
            break;
        }
        case 16: {
            int size;
            cout << "������� ���������� ��������� � �������: ";
            cin >> size;

            vector<int> arr(size);

            cout << "������� " << size << " ��������� �������:" << endl;
            for (int i = 0; i < size; i++) {
                cout << "������� " << i + 1 << ": ";
                cin >> arr[i];
            }

            cout << "��� ������: ";
            for (int i = 0; i < arr.size(); i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int x;
            cout << "������� ����� ��� ������: ";
            cin >> x;

            int result = findFirst(arr, x);

            if (result != -1) {
                cout << "������ ��������� ����� " << x << " ������� �� �������: " << result << endl;
            }
            else {
                cout << "����� " << x << " �� ������� � �������" << endl;
            }
            break;
        }
        case 17: {
            int size;
            cout << "������� ���������� ��������� � �������: ";
            cin >> size;

            vector<int> arr(size);

            cout << "������� " << size << " ��������� �������:" << endl;
            for (int i = 0; i < size; i++) {
                cout << "������� " << i + 1 << ": ";
                cin >> arr[i];
            }

            cout << "��� ������: ";
            for (int num : arr) {
                cout << num << " ";
            }
            cout << endl;

            int result = maxAbs(arr);
            cout << "������������ �� ������ ��������: " << result << endl;
            cout << "��� ������: " << abs(result) << endl;
            break;
        }
        case 18: {
            cout << "� ����������" << endl;
            break;
        }
        case 19: {
            cout << "� ����������" << endl;
            break;
        }
        case 20: {
            cout << "� ����������" << endl;
            break;
        }
        default:
            cout << "�� ���������� ������ � ����� �������" << endl;
            break;
        }
    }
    return 0;
}