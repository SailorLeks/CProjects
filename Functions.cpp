
#include <iostream>

using namespace std;

int clear()
{
    return system("cls");

}

int TextColor()
{
    return system("Color 01");
}

int BGColor()
{
    return system("Color 4F");
}

int intsize()
{
    return sizeof(int);
}

int charsize()
{
    return sizeof(char);
}

int doublesize()
{
    return sizeof(double);
}

int floatsize()
{
    return sizeof(float);
}

int boolsize()
{
    return sizeof(bool);
}

void hello()
{
    cout << "Приветствую смотрящих, я функция:)" << endl;
}

void square()
{
    int a = 0;
    int b = 0;

    cout << "Квадрат: " << endl;

    while (b < 5)
    {
        a = 0;
        while (a < 5)
        {
            cout << "% ";
            a++;
        }
        cout << endl;
        b++;
    }
}

int main()
{
    setlocale(0, "");

    cout << "[-] Добро пожаловать!" << endl << endl;
    cout << "[-] Список функций: " << endl;

    cout << "[1] Очистка консоли" << endl;
    cout << "[2] Изменение цвета текста" << endl;
    cout << "[3] Изменение цвета фона" << endl;
    cout << "[4] Размер INT" << endl;
    cout << "[5] Размер CHAR" << endl;
    cout << "[6] Размер DOUBLE" << endl;
    cout << "[7] Размер FLOAT" << endl;
    cout << "[8] Размер BOOL" << endl;
    cout << "[9] Вывод сообщения" << endl;
    cout << "[s] Квадратик" << endl << endl;

    cout << "[-] Выберите функцию: ";

    char func;
    cin >> func;

    if (func == '1')
    {
        cout << clear() << endl;
        cout << "Пака" << endl;
    }
    else if (func == '2')
    {
        cout << TextColor();
        cout << "Вы изменили цвет текста:)" << endl;
    }
    else if (func == '3')
    {
        cout << BGColor();
        cout << "Вы изменили цвет консоли:)" << endl;
    }
    else if (func == '4')
    {
        cout << "Размер int = " << intsize() << "б" << endl;
    }
    else if (func == '5')
    {
        cout << "Размер char = " << charsize() << "б" << endl;
    }
    else if (func == '6')
    {
        cout << "Размер double = " << doublesize() << "б" << endl;
    }
    else if (func == '7')
    {
        cout << "Размер float = " << floatsize() << "б" << endl;
    }
    else if (func == '8')
    {
        cout << "Размер bool = " << boolsize() << "б" << endl;
    }
    else if (func == '9')
    {
        hello();
    }
    else if (func == 's')
    {
        square();
    }
    system("pause");
    return 0;
}
