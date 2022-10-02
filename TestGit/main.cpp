#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "\t #===================MENU===================#" << endl;
    cout << "\t  |      введите число:                    |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   1- Определяет, есть ли число четным. |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   2- Выводит на экран меньшее из       |" << endl;
    cout << "\t  |      введеных чисел.                   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   3- Определяет, положительное ли      |" << endl;
    cout << "\t  |      это число, отрицательное          |" << endl;
    cout << "\t  |      или равно нулю.                   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   4- Определияет, равны эти числа, и   |" << endl;
    cout << "\t  |      если нет, вывести их на экран     |" << endl;
    cout << "\t  |      по возрастанию.                   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   5- Определяет, допущен ли студент    |" << endl;
    cout << "\t  |      к экзамену.                       |" << endl;
    cout << "\t  |      Студент получает допуск, если     |" << endl;
    cout << "\t  |      если его средний балл 4 и выше.   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   6- Если число парное, умножит        |" << endl;
    cout << "\t  |      его на три, иначе – разделит      |" << endl;
    cout << "\t  |      на два.                           |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   7- программа - калькулятор.          |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t #==========================================#" << endl;
    cout << "                                               " << endl;


    int number;
    cout << "\t введите число: ";
    cin >> number;
    cout << "" << endl;

    switch (number)
    {
    case 1: //Определяет, есть ли число четным
    {

        int A;
        cout << "\t введите число: "; cin >> A;
        cout << " " << endl;

        (A % 2 == 0) ? cout << "\t   число четное " << endl : cout << "\t   число не четное " << endl;

    }break;

    case 2: //Вывести на экран меньшее из этих чисел.
    {
        int A;
        int B;

        cout << "\t  введите число: "; cin >> A;
        cout << "" << endl;
        cout << "\t  введите число: "; cin >> B;
        cout << "" << endl;
        if (A > B) {

            cout << "\t   меньшее из чисел: " << B;
        }
        else if (B > A)
        {
            cout << "\t   меньшее из чисел: " << A;
        }
        cout << "" << endl;
    }break;

    case 3: //Определяет, положительное ли это число, отрицательное или равно нулю.
    {

        int A;
        cout << "\t  введите число: ";
        cin >> A;

        if (A < 0)
        {
            cout << "\t    число " << A << " отрицательное ";
        }

        else if (A > 0)
        {
            cout << "\t    число " << A << " положительное";
        }

        else if (A == 0)
        {
            cout << "\t    число " << A << " равно 0";
        }

    }break;

    case 4: //Определияет, равны эти числа, и если нет, вывести их на экран по возрастанию.

    {
        int A, B;

        cout << "\t  введите число: "; cin >> A;
        cout << "" << endl;
        cout << "\t  введите число: "; cin >> B;
        cout << "" << endl;

        if (A > B)
        {
            cout << "\t    " << B << " " << A;

        }
        else if (A < B)
        {
            cout << "\t    " << A << " " << B;
        }
        else if (A = B)
        {

            cout << "\t    " << A << " = " << B << endl;

        }
        cout << "";
    }break;

    case 5:
    {
        int Q, W, E, R, T;
        int A, B;

        cout << "" << endl;

        cout << "\t  введите оценку: "; cin >> Q;
        cout << "\t  введите оценку: "; cin >> W;
        cout << "\t  введите оценку: "; cin >> E;
        cout << "\t  введите оценку: "; cin >> R;
        cout << "\t  введите оценку: "; cin >> T;

        cout << "" << endl;

        A = Q + W + E + R + T;
        B = A / 5;

        if (B >= 4)
        {
            cout << "\t   допущен " << endl;
        }
        else if (B < 4)
        {
            cout << "\t   не допущен " << endl;
        }

    }break;

    case 6:
    {


        float B, C;
        int A;


        cout << "\t  введите число: "; cin >> A;

        B = A * 3;
        C = A / 2;

        (A % 2 == 0) ? cout << "\t   " << A << " * 3" << " = " << B << endl :
            cout << "\t   " << A << " / 2" << " = " << C << endl;

    }break;
    case 7:
    {
        float A, B, C;
        char D;

        cout << "\t  введите числа и выражение: "; cin >> A >> D >> B;

        if (D == '+') {
            C = A + B;
        }

        if (D == '-') {
            C = A - B;
        }

        if (D == '*')
        {
            C = A * B;
        }

        if (D == '/')
        {
            C = A / B;
        }


        cout << "\t   = " << C;


    }break;
    }

    return 0;
}
