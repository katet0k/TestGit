#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "\t #===================MENU===================#" << endl;
    cout << "\t  |      ������� �����:                    |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   1- ����������, ���� �� ����� ������. |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   2- ������� �� ����� ������� ��       |" << endl;
    cout << "\t  |      �������� �����.                   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   3- ����������, ������������� ��      |" << endl;
    cout << "\t  |      ��� �����, �������������          |" << endl;
    cout << "\t  |      ��� ����� ����.                   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   4- �����������, ����� ��� �����, �   |" << endl;
    cout << "\t  |      ���� ���, ������� �� �� �����     |" << endl;
    cout << "\t  |      �� �����������.                   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   5- ����������, ������� �� �������    |" << endl;
    cout << "\t  |      � ��������.                       |" << endl;
    cout << "\t  |      ������� �������� ������, ����     |" << endl;
    cout << "\t  |      ���� ��� ������� ���� 4 � ����.   |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   6- ���� ����� ������, �������        |" << endl;
    cout << "\t  |      ��� �� ���, ����� � ��������      |" << endl;
    cout << "\t  |      �� ���.                           |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |   7- ��������� - �����������.          |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t  |                                        |" << endl;
    cout << "\t #==========================================#" << endl;
    cout << "                                               " << endl;


    int number;
    cout << "\t ������� �����: ";
    cin >> number;
    cout << "" << endl;

    switch (number)
    {
    case 1: //����������, ���� �� ����� ������
    {

        int A;
        cout << "\t ������� �����: "; cin >> A;
        cout << " " << endl;

        (A % 2 == 0) ? cout << "\t   ����� ������ " << endl : cout << "\t   ����� �� ������ " << endl;

    }break;

    case 2: //������� �� ����� ������� �� ���� �����.
    {
        int A;
        int B;

        cout << "\t  ������� �����: "; cin >> A;
        cout << "" << endl;
        cout << "\t  ������� �����: "; cin >> B;
        cout << "" << endl;
        if (A > B) {

            cout << "\t   ������� �� �����: " << B;
        }
        else if (B > A)
        {
            cout << "\t   ������� �� �����: " << A;
        }
        cout << "" << endl;
    }break;

    case 3: //����������, ������������� �� ��� �����, ������������� ��� ����� ����.
    {

        int A;
        cout << "\t  ������� �����: ";
        cin >> A;

        if (A < 0)
        {
            cout << "\t    ����� " << A << " ������������� ";
        }

        else if (A > 0)
        {
            cout << "\t    ����� " << A << " �������������";
        }

        else if (A == 0)
        {
            cout << "\t    ����� " << A << " ����� 0";
        }

    }break;

    case 4: //�����������, ����� ��� �����, � ���� ���, ������� �� �� ����� �� �����������.

    {
        int A, B;

        cout << "\t  ������� �����: "; cin >> A;
        cout << "" << endl;
        cout << "\t  ������� �����: "; cin >> B;
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

        cout << "\t  ������� ������: "; cin >> Q;
        cout << "\t  ������� ������: "; cin >> W;
        cout << "\t  ������� ������: "; cin >> E;
        cout << "\t  ������� ������: "; cin >> R;
        cout << "\t  ������� ������: "; cin >> T;

        cout << "" << endl;

        A = Q + W + E + R + T;
        B = A / 5;

        if (B >= 4)
        {
            cout << "\t   ������� " << endl;
        }
        else if (B < 4)
        {
            cout << "\t   �� ������� " << endl;
        }

    }break;

    case 6:
    {


        float B, C;
        int A;


        cout << "\t  ������� �����: "; cin >> A;

        B = A * 3;
        C = A / 2;

        (A % 2 == 0) ? cout << "\t   " << A << " * 3" << " = " << B << endl :
            cout << "\t   " << A << " / 2" << " = " << C << endl;

    }break;
    case 7:
    {
        float A, B, C;
        char D;

        cout << "\t  ������� ����� � ���������: "; cin >> A >> D >> B;

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