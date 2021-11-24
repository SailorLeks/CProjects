#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Программа \"Фигуры\" " << endl;

    cout << "[u] Вертикальная линия" << endl;
    cout << "[r] Горизонтальная линия" << endl;
    cout << "[t] Треугольник пустой" << endl;
    cout << "[z] Треугольник заполненный" << endl;
    cout << "[s] Квадрат заполненный" << endl;
    cout << "[e] Квадрат пустой" << endl;
    cout << "[p] Прямоугольник" << endl << endl;

    cout << "Выбери тип фигуры: ";
    char type;
    cin >> type;

    cout << "Выбери текстуру: ";
    char texture;
    cin >> texture;

    int a = 0;
    int b = 0;

    if (type == 'r')
    {
        cout << "Выбери размер: ";
        short size;
        cin >> size;

        cout << "Результат: " << endl;

        while (a < size)
        {
            cout << texture;
            a++;
        }
        system("pause");
    }
    else if (type == 'u')
    {
        cout << "Выбери размер: ";
        short size;
        cin >> size;

        cout << "Результат: " << endl;

        while (a < size)
        {
            cout << texture << endl;
            a++;
        }
        system("pause");
    }
    else if (type == 's')
    {
        cout << "Выбери размер: ";
        short size;
        cin >> size;

        cout << "Результат: " << endl;

        while (b < size)
        {
            a = 0;
            while (a < size)
            {
                cout << texture;
                a++;
            }
            cout << endl;
            b++;
        }
        system("pause");
    }
    else if (type == 'e')
    {
        cout << "Выбери размер: ";
        short size;
        cin >> size;

        cout << "Результат: " << endl;

        while (a < size)
        {
            while (b < size)
            {
                if (a == 0 || a == size - 1)
                {
                    cout << texture;
                    b++;
                }
                else if (b == 0 || b == size - 1)
                {
                    cout << texture;
                    b++;
                }
                else
                {
                    cout << " ";
                    b++;
                }
            }
            b = 0;
            cout << endl;
            a++;
        }
        system("pause");
    }

    else if (type == 't')
    {
        cout << "Укажи размер: ";
        short size;
        cin >> size;

        if (size % 2 == 0)
        {
            cout << "Число должно быть нечетным!" << endl;
        }
        else
        {
            for (int y = 0; y < size; y++)
            {
                for (int x = 0; x < size; x++)
                {
                    if (y == size / 2 || x == size / 2 + y || x == size / 2 - y)
                    {
                        cout << texture;
                        cout << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }

        }
    }
    else if (type == 'z')
    {
        cout << "Укажи размер: ";
        short size;
        cin >> size;

        if (size % 2 == 0)
        {
            cout << "Число должно быть нечетным!" << endl;
        }
        else
        {
            for (int y = 0; y < size; y++)
            {
                for (int x = 0; x < size; x++)
                {
                    if (y == size / 2 || x == size / 2 + y || x == size / 2 - y || x >= size / 2 - y && x <= size / 2 + y && y <= size / 2)
                    {
                        cout << texture;
                        cout << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }

        }
    }
    else if (type == 'p')
    {
        cout << "Укажи длину: ";
        short dlina;
        cin >> dlina;

        cout << "Укажи ширину: ";
        short shirina;
        cin >> shirina;

        int a = 0;
        int b = 0;

        while (b < shirina)
        {
            while (a < dlina)
            {
                cout << texture;
                a++;
            }
            a = 0;
            cout << endl;
            b++;
        }
    }
    else
    {
        cout << "Еще не придумано:(" << endl;
    }
    system("pause");
    return 0;
}   





