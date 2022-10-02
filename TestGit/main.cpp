#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    cout << "    #==================MENU==================#" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  1 - Выводит на экран все числа от   |" << endl;
    cout << "     |    нуля до введенного вами числа.    |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  2 - Выводит на экран все числа из   |" << endl;
    cout << "     |    введеного диапазона и  :          |" << endl;
    cout << "     |    виводит все парные числа из       |" << endl;
    cout << "     |    диапазона                         |" << endl;
    cout << "     |    виводит все не парные числа из    |" << endl;
    cout << "     |    диапазона                         |" << endl;
    cout << "     |    виводит все числа, кратные семи   |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  3 -  Подсчитывает сумму всех        |" << endl;
    cout << "     |    чисел диапазона.                  |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  4 - Подсчитывает сумму чисел        |" << endl;
    cout << "     |    выводит на экран, как только      |" << endl;
    cout << "     |    вы введете ноль.                  |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  5 - Игра угадай число.              |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  6 - Конвертер валют.                |" << endl;
    cout << "     |                                      |" << endl;
    cout << "    #========================================#" << endl;
    int number;
    cout << "     ";
    cin >> number;

    switch (number)
    {
    case 1:
    {
        int count = 0;
        int num;
        cout << "   введите число: ";
        cin >> num;
        /*while (count != num)
        {
         cout << "Wash!" << endl;
         cout << "count =" << count << endl;
         count++;
        }*/
        do {

            cout << "     " << count << endl;
            count++;

        } while (count != num);

    }break;
    case 2:
    {

        int num, numA;

        cout << "  введите число: ";
        cin >> numA;
        cout << "  введите число: ";
        cin >> num;
        cout << "" << endl;

        if (numA > num)
        {
            int temp = numA;
            numA = num;
            num = temp;
        }
        int i = numA;
        do {
            /*while (numA < num)
            {

             cout << "parni" << numA << endl;
             numA++;


            }
            while (numA > num)
            {
             cout << "parni" << num << endl;
             num++;
            }*/

            if (i % 2 == 0)
            {
                cout << "     парные        " << i << endl;

            }
            if (i % 2 != 0)
            {
                cout << "     не парные     " << i << endl;
            }
            if (i % 7 == 0)
            {
                cout << "     кратные семи  " << i << endl;
            }
            i++;

        } while (i <= num);




    } break;
    case 3:
    {
        int num, numA;

        cout << "  введите число: ";
        cin >> numA;
        cout << "  введите число: ";
        cin >> num;


        if (numA > num)
        {
            int temp = numA;
            numA = num;
            num = temp;
        }

        int i = numA;
        int sun = 0;
        do {

            cout << "    " << sun << " + " << i << " = " << sun + i << endl;
            sun += i;
            i++;

        } while (i <= num);

    }break;

    case 4:
    {
        int A, B, old;
        long long sun = 0;
        char sign;

        do {

            cout << "   введите число ";
            cin >> A;
            cout << "   введите число ";
            cin >> B;

            old = sun;

            cout << "" << endl;

            cout << "    " << old << " + ( " << A << " + " << B;
            sun += A + B;
            cout << ") = " << sun << "" << endl;

            cout << "" << endl;

            cout << " введите любое число для продолжения или нажмите 0 что бы завершить ";
            cin >> sign;
            cout << "" << endl;




        } while (sign != '0');

    }break;
    case 5:
    {

        int comp();
        {
            srand(time(0));

            int i = rand() % 10;
            clock_t t = clock();
            int sun = 1;
            int j;
            char sign;

            cout << "    Я загадал число, какое?" << endl;



            do
            {
                cout << "      ";
                cin >> j;

                if (i > j)
                {

                    cout << "       Мое число больше" << endl;
                    cout << "  введите любое число для продолжения или нажмите 0 что бы завершить ";
                    cin >> sign;
                }

                else if (i < j)
                {

                    cout << "       Мое число меньше" << endl;
                    cout << "   введите любое число для продолжения или нажмите 0 что бы завершить ";
                    cin >> sign;
                }

                else
                {

                    cout << "" << endl;
                    cout << "       Ура!!! ВЫ угадали!!!!" << endl;
                    cout << "" << endl;

                    int time = (clock() - t) / CLOCKS_PER_SEC;

                    cout << "       ВЫ угадалии за " << time << " сек " << endl;
                    cout << "       количество попыток " << sun << endl;


                    break;
                }
                if (sign != '0')
                {
                    cout << "" << endl;
                    cout << "     продолжаем " << endl;
                    cout << "" << endl;
                }
                else {
                    break;
                }


            } while (sun += 1);
        }break;


    }break;


    case 6:
    {
        cout << "           #===========MENU===========#" << endl;
        cout << "            |  1 -   UAH > USD       |" << endl;
        cout << "            |  2 -   USD > UAH       |" << endl;
        cout << "            |  3 -   UAH > EUR       |" << endl;
        cout << "            |  4 -   EUR > UAH       |" << endl;
        cout << "            |  5 -   USD > EUR       |" << endl;
        cout << "            |  6 -   EUR > USD       |" << endl;
        cout << "           #==========================#" << endl;


        int numbr;
        cout << "      ";
        cin >> numbr;
        float dolar = 36.90;
        float dolar1 = 0.027;

        float dolar2 = 0.97;

        float Euro = 35.76;
        float Euro1 = 0.028;
        float Euro2 = 1.03;

        float money;
        char sign;

        cout << fixed;
        cout.precision(2);

        switch (numbr) {
        case 1: {

            do
            {
                cout << "   Введите гривны для перевода их в доллары " << endl;
                cout << "    ";
                cin >> money;
                cout << "     " << money << " грн" << " > " << money / dolar << " долларов " << endl;

                cout << " введите любое число для продолжения или нажмите 0 что бы завершить ";
                cin >> sign;



            } while (sign != '0');

        }break;

        case 2: {

            do
            {

                cout << "   Введите доллары для перевода их в гривны" << endl;
                cout << "    ";
                cin >> money;

                cout << "     " << money * dolar << " грн " << endl;

                cout << "  введите любое число для продолжения или нажмите 0 что бы завершить ";
                cin >> sign;



            } while (sign != '0');

        }break;

        case 3: {

            do
            {

                cout << "   Введите гривны для перевода их в евро  " << endl;
                cout << "    ";
                cin >> money;
                cout << "     " << money / Euro << " евро " << endl;

                cout << "  введите любое число для продолжения или нажмите 0 что бы завершить ";
                cin >> sign;



            } while (sign != '0');

        }break;


        case 4:
        {
            do
            {

                cout << "   Введите евро для перевода их в гривны" << endl;
                cout << "    ";
                cin >> money;
                cout << "     " << money << " евро" << " > " << money * Euro << " грн " << endl;

                cout << "  введите любое число для продолжения или нажмите 0 что бы завершить ";
                cin >> sign;



            } while (sign != '0');

        }break;

        case 5: {

            do
            {

                cout << "   Введите доллары для перевода их в евро " << endl;
                cout << "    ";
                cin >> money;
                cout << "      " << money << " долларов" << " > " << money / dolar2 << " евро " << endl;
                cout.precision(2);
                cout << "  введите любое число для продолжения или нажмите 0 что бы завершить ";
                cin >> sign;



            } while (sign != '0');

        }break;


        case 6: {

            do
            {

                cout << "   Введите евро для перевода их в доллары" << endl;
                cout << "    ";
                cin >> money;

                cout << "     " << money << " евро" << " > " << money * dolar2 << " долларов " << endl;

                cout << "  введите любое число для продолжения или нажмите 0 что бы завершить ";
                cin >> sign;



            } while (sign != '0');

        }break;


        }



    }break;

    default:
    {
        cout << "tresh";
    }
    }



    return 0;
}

