﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2, x3, y3, d1, d2;
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
    scanf_s("%d,\n", &x1);
    scanf_s("%d\n", &x2);
    scanf_s("%d\n", &y1);
    scanf_s("%d", &y2);
    x3 = (x1 + x2) / 2;
    y3 = (y1 + y2) / 2;
    d1 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    d2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    printf_s("d1*d2= %d", d1 * d2);
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
