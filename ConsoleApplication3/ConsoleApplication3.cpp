﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "rus");
    float P, t, at, qp, qt, qf, Qp, Qt, Qf, np, nt, nf;
    int N;
    cout << "Введите суточную норму ";
    cin >> P;
    cout << "Введите колличество смен ";
    cin >> N;
    if (N > 2 && N < 0) {
        cout << "Превышено возможное число смен ";
            return 0;
    }
    cout << "Введите продолжительность смены ";
    cin >> t;
    if (t > 12 && t < 0) {
        cout << "Превышена продолжительность смены ";
            return 0;
    }
    cout << "Введите производительность пельменного автомата ";
    cin >> qp;
    cout << "Введите производительность тестомесителя ";
    cin >> qt;
    cout << "Введите производительность куттера ";
    cin >> qf;
    cout << "Введите массовую долю теста ";
    cin >> at;
    if (at > 0.9 && at < 0.1) {
        cout << "Не допустимое значение доли теста ";
        return 0;
    }
    Qp = P / (N * t);
    np = floor(Qp / qp)+1;
    cout << "Необходимое колличество пельменных автоматов " << np;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
