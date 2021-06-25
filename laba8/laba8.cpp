#include <iostream>

using namespace std;

void zad1()
{
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Введите пятизначное число - ";
    cin >> a;
    cout << "Вывод" << endl;
    if (a > 9999 && a < 100000)
    {
        while (a)
        {
            cout << a % 10 << endl;
            a /= 10;
        }
    }
    else {
        cout << "Вы ввели не пятизначное число!!! " << endl;
    }
}

void zad2()
{
    char b;
    cout << "Введите букву нижнего регистра - ";
    cin >> b;
    if (islower(b)) {
        cout << (char)toupper(b) << " - вывод буквы верхнего регистра" << endl;
    }
    else {
        cout << "Вы ввели букву нижнего регистра, повторите попытку" << endl;
    }
}

void zad3()
{
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cout << "Введите элемент массива " << i + 1 << ": ";
        cin >> arr[i];  // ввод элементов
    }
    float sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];  // сумма
    }
    float sr = sum / 10;  // среднее арифметическое
    cout << "Среднее арифметическое чисел в массиве: " << sr << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "****************" << endl;
    cout << "Задача 1" << endl;
    cout << "****************" << endl;
    cout << endl;
    zad1();
    cout << "****************" << endl;
    cout << "Задача 2" << endl;
    cout << "****************" << endl;
    cout << endl;
    zad2();
    cout << "****************" << endl;
    cout << "Задача 3" << endl;
    cout << "****************" << endl;
    cout << endl;
    zad3();
    return 0;
    system("pause");
}