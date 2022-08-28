// Time_28-08-2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//clock_t clock();
//double difftime(time_t time1, time_t time0);
//time_t mktime(struct tm* timeptr);
//time_t time(time_t* timer);
//int timespec_get(timespec* ts, int base);
//char* asctime(const struct tm* timeptr);
//char* ctime(const time_t* timer);
//struct tm* gmtime(const time_t* timer);
//struct tm* localtime(const time_t* timer);
//size_t strftime(char* s, size_t maxsize, const char* format, const struct tm* timeptr);

#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;


int main()
{
    time_t timer;
    struct tm y2k = { 0 };
    double seconds;
   /* double hours = seconds / 3600;
    double days = (seconds / 3600)/24;*/
    y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
    y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

    time(&timer);  /* get current time; same as: timer = time(NULL)  */

    seconds = difftime(timer, mktime(&y2k));

    printf("%.f seconds since January 1, 2000 in the current timezone", seconds,"/n");
    cout << endl;
    printf("%.f hours since January 1, 2000 in the current timezone", seconds/3600, "/n");
    cout << endl;
    printf("%.f days since January 1, 2000 in the current timezone", (seconds / 3600) / 24, "/n");
    cout << endl;
    printf("%.f years since January 1, 2000 in the current timezone", (((seconds / 3600) / 24)/365), "/n");
    cout << endl;
    return 0;
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
