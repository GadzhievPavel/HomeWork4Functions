

#include <iostream>
using namespace std;

double exp(double digit, int pow)
{
    double result = digit;
    for (int i = 1; i < pow; i++)
        result *= digit;
    return result;
}

int sum(int beginRange, int endRange)
{
    int sum = beginRange;
    for (int i = beginRange + 1; i <= endRange; i++)
        sum += i;
    return sum;
}

void perfect(int beginRange, int endRange)
{
    for (int i = beginRange; i <= endRange; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0) sum += j;
        if (sum == i)
            cout << i << " ";
    }
}

bool Happy() {
    int n = 0;
    cout << "������� ������������ ����� ��� ��������: ";
    cin >> n;
    if (n < 100000 || n > 999999)
        cout << "����� �� ������������!";
    else
    {
        int sum1, sum2;
        sum1 = n % 10 + (n / 10) % 10 + (n / 100) % 10;
        sum2 = (n / 1000) % 10 + (n / 10000) % 10 + (n / 100000) % 10;
        if (sum1 == sum2) return true;
    }
    return false;
}

void sredne(int arr[], const int size)
{
    int sum = 0;
    for (int i = 0, j = 1; i < size; i++, j++)
    {
        sum += arr[i];
        cout << arr[i] << "\t";
        if (j % 10 == 0)
            cout << endl;
    }
    cout << endl << "�������������������� = " << sum / size << endl;
}

void playingCard() {

    char suitPlayingCard;
    string valuePlayingCard;
    do {
        cout << "������� ������� ����� (6-10, B - �����, D - ����, � - ������, T - ���. ������� ����������.) - ";
        cin >> valuePlayingCard;
        if (valuePlayingCard != "T" && valuePlayingCard != "6" && valuePlayingCard != "7" && valuePlayingCard != "8"
            && valuePlayingCard != "9" && valuePlayingCard != "10" && valuePlayingCard != "B"
            && valuePlayingCard != "D" && valuePlayingCard != "K")
            cout << "������ ����� �������. ��������� ����!" << endl;
    } while (valuePlayingCard != "T" && valuePlayingCard != "6" && valuePlayingCard != "7" && valuePlayingCard != "8"
        && valuePlayingCard != "9" && valuePlayingCard != "10" && valuePlayingCard != "B" && valuePlayingCard != "D"
        && valuePlayingCard != "K");

    do {
        cout << "������� �����(p - ����, h - �����, b - ����, k - ������) - ";
        cin >> suitPlayingCard;
        if (suitPlayingCard != 'p' && suitPlayingCard != 'h' && suitPlayingCard != 'b' && suitPlayingCard != 'k')
            cout << "������ ����� �������. ��������� ����!" << endl;
    } while (suitPlayingCard != 'p' && suitPlayingCard != 'h' && suitPlayingCard != 'b' && suitPlayingCard != 'k');

    if (suitPlayingCard == 'p')
        suitPlayingCard = 006;
    if (suitPlayingCard == 'h')
        suitPlayingCard = 003;
    if (suitPlayingCard == 'b')
        suitPlayingCard = 004;
    if (suitPlayingCard == 'k')
        suitPlayingCard = 005;

    if (valuePlayingCard == "10") {
        cout << " *********" << endl;
        cout << "*" << suitPlayingCard << "        *" << endl;
        cout << "*" << valuePlayingCard << "       *" << endl;
        cout << "*         *" << endl;
        cout << "*    " << valuePlayingCard << "   * " << endl;
        cout << "*    " << suitPlayingCard << "    *" << endl;
        cout << "*         *" << endl;
        cout << "*       " << valuePlayingCard << "*" << endl;
        cout << "*        " << suitPlayingCard << "*" << endl;
        cout << " *********" << endl;
    }
    else {
        cout << " *********" << endl;
        cout << "*" << suitPlayingCard << "        *" << endl;
        cout << "*" << valuePlayingCard << "        *" << endl;
        cout << "*         *" << endl;
        cout << "*    " << valuePlayingCard << "    * " << endl;
        cout << "*    " << suitPlayingCard << "    * " << endl;
        cout << "*         *" << endl;
        cout << "*        " << valuePlayingCard << "*" << endl;
        cout << "*        " << suitPlayingCard << "*" << endl;
        cout << " *********" << endl;
    }
}

void date() {
    int startYear, startMonth, startDay, endYear, endMonth, endDay;
    cout << "������� ���, ���������� ����� ������ � ���� ������ �������.";
    cin >> startYear >> startMonth >> startDay;
    cout << "������� ���, ���������� ����� ������ � ���� ��������� �������.";
    cin >> endYear >> endMonth >> endDay;
}
bool LeapYear(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}


int main()
{
    setlocale(LC_ALL, "ru");

    cout << exp(3, 2) << endl;

    cout << sum(2, 5) << endl;

    perfect(1, 10000);
    cout << endl;


    (Happy()) ? cout << "����������." << endl : cout << "�� ����������." << endl << endl;

    const int size = 20;
    int arr[size];
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 20;

    sredne(arr, size);

    playingCard();

    system("pause");
    return 0;
}

