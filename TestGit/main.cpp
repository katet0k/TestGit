#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    cout << "    #==================MENU==================#" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  1 - ������� �� ����� ��� ����� ��   |" << endl;
    cout << "     |    ���� �� ���������� ���� �����.    |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  2 - ������� �� ����� ��� ����� ��   |" << endl;
    cout << "     |    ��������� ��������� �  :          |" << endl;
    cout << "     |    ������� ��� ������ ����� ��       |" << endl;
    cout << "     |    ���������                         |" << endl;
    cout << "     |    ������� ��� �� ������ ����� ��    |" << endl;
    cout << "     |    ���������                         |" << endl;
    cout << "     |    ������� ��� �����, ������� ����   |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  3 -  ������������ ����� ����        |" << endl;
    cout << "     |    ����� ���������.                  |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  4 - ������������ ����� �����        |" << endl;
    cout << "     |    ������� �� �����, ��� ������      |" << endl;
    cout << "     |    �� ������� ����.                  |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  5 - ���� ������ �����.              |" << endl;
    cout << "     |                                      |" << endl;
    cout << "     |  6 - ��������� �����.                |" << endl;
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
        cout << "   ������� �����: ";
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

        cout << "  ������� �����: ";
        cin >> numA;
        cout << "  ������� �����: ";
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
                cout << "     ������        " << i << endl;

            }
            if (i % 2 != 0)
            {
                cout << "     �� ������     " << i << endl;
            }
            if (i % 7 == 0)
            {
                cout << "     ������� ����  " << i << endl;
            }
            i++;

        } while (i <= num);




    } break;
    case 3:
    {
        int num, numA;

        cout << "  ������� �����: ";
        cin >> numA;
        cout << "  ������� �����: ";
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

            cout << "   ������� ����� ";
            cin >> A;
            cout << "   ������� ����� ";
            cin >> B;

            old = sun;

            cout << "" << endl;

            cout << "    " << old << " + ( " << A << " + " << B;
            sun += A + B;
            cout << ") = " << sun << "" << endl;

            cout << "" << endl;

            cout << " ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
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

            cout << "    � ������� �����, �����?" << endl;



            do
            {
                cout << "      ";
                cin >> j;

                if (i > j)
                {

                    cout << "       ��� ����� ������" << endl;
                    cout << "  ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                    cin >> sign;
                }

                else if (i < j)
                {

                    cout << "       ��� ����� ������" << endl;
                    cout << "   ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                    cin >> sign;
                }

                else
                {

                    cout << "" << endl;
                    cout << "       ���!!! �� �������!!!!" << endl;
                    cout << "" << endl;

                    int time = (clock() - t) / CLOCKS_PER_SEC;

                    cout << "       �� �������� �� " << time << " ��� " << endl;
                    cout << "       ���������� ������� " << sun << endl;


                    break;
                }
                if (sign != '0')
                {
                    cout << "" << endl;
                    cout << "     ���������� " << endl;
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
                cout << "   ������� ������ ��� �������� �� � ������� " << endl;
                cout << "    ";
                cin >> money;
                cout << "     " << money << " ���" << " > " << money / dolar << " �������� " << endl;

                cout << " ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                cin >> sign;



            } while (sign != '0');

        }break;

        case 2: {

            do
            {

                cout << "   ������� ������� ��� �������� �� � ������" << endl;
                cout << "    ";
                cin >> money;

                cout << "     " << money * dolar << " ��� " << endl;

                cout << "  ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                cin >> sign;



            } while (sign != '0');

        }break;

        case 3: {

            do
            {

                cout << "   ������� ������ ��� �������� �� � ����  " << endl;
                cout << "    ";
                cin >> money;
                cout << "     " << money / Euro << " ���� " << endl;

                cout << "  ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                cin >> sign;



            } while (sign != '0');

        }break;


        case 4:
        {
            do
            {

                cout << "   ������� ���� ��� �������� �� � ������" << endl;
                cout << "    ";
                cin >> money;
                cout << "     " << money << " ����" << " > " << money * Euro << " ��� " << endl;

                cout << "  ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                cin >> sign;



            } while (sign != '0');

        }break;

        case 5: {

            do
            {

                cout << "   ������� ������� ��� �������� �� � ���� " << endl;
                cout << "    ";
                cin >> money;
                cout << "      " << money << " ��������" << " > " << money / dolar2 << " ���� " << endl;
                cout.precision(2);
                cout << "  ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
                cin >> sign;



            } while (sign != '0');

        }break;


        case 6: {

            do
            {

                cout << "   ������� ���� ��� �������� �� � �������" << endl;
                cout << "    ";
                cin >> money;

                cout << "     " << money << " ����" << " > " << money * dolar2 << " �������� " << endl;

                cout << "  ������� ����� ����� ��� ����������� ��� ������� 0 ��� �� ��������� ";
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

