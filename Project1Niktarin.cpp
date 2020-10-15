
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b, c, d = 3;
  
    cout << "Введите первое число:" ;
    cin >> a;

    cout << "Введите второе число:" ;
    cin >> b;

    cout << "Введите третье число:" ;
    cin >> c;

    cout << "Сумма этих чисел равно:" << a + b + c<<endl;
    cout << "Произведение этих чисел равно:" << a * b * c<<endl;
    cout << "Среднее арифметическое этих чисел равно:" << (a + b + c) / d << endl;



}