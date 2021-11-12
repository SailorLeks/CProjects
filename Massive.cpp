#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Массив int: " << endl;
    int z[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++)
    {
        cout << z[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив string: " << endl;
    string x[10] = { "sf", "shadowraze", "zxc", "cursed", "coil", "dead", "inside", "zxcursed", "negr", "osuzjau" };
    for (int i = 0; i < 10; i++)
    {
        cout << x[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив char: " << endl;
    char c[10] = { 's', 'h', 'x', 'u', 'c', 'd', 'i', 'z', 'n', 'o' };
    for (int i = 0; i < 10; i++)
    {
        cout << c[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив bool: " << endl;
    bool u[10] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 };
    for (int i = 0; i < 10; i++)
    {
        cout << u[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив long: " << endl;
    long r[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    for (int i = 0; i < 10; i++)
    {
        cout << r[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив short: " << endl;
    short s[10] = { 2, 5, 1, 6, 3, 7, 4, 9, 40, 87 };
    for (int i = 0; i < 10; i++)
    {
        cout << s[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив float: " << endl;
    float e[10] = { 2.1, 5.2, 1.5, 6.4, 3.7, 7.3, 4.6, 1.9, 40.8, 87.9 };
    for (int i = 0; i < 10; i++)
    {
        cout << e[i];
        cout << endl;
    }

    cout << endl << endl;

    cout << "Массив double: " << endl;
    double d[10] = { 2.1, 5.2, 1.5, 6.4, 3.7, 7.3, 4.6, 1.9, 40.8, 87.9 };
    for (int i = 0; i < 10; i++)
    {
        cout << d[i];
        cout << endl;
    }
    system("pause");
}