#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

static const char alphanumeric[] =
    "01234567890123456789"
    "!@#$%!!@#$%&*!@#$%&*!@#$%&*@"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

int size = sizeof(alphanumeric) - 1;

int main()
{
    bool generatePw = true;
    int pwLength;
    cout << "Enter the length of the password: ";
    cin >> pwLength;
    srand(time(0));
    do
    {
        for (int i = 0; i < pwLength; i++)
        {
            cout << alphanumeric[rand() % ::size];
        }
        char pwGenQuestion;
        cout << endl
             << "Would you like to generate another password? (y/n): ";
        cin >> pwGenQuestion;
        if (pwGenQuestion == 'n' || pwGenQuestion == 'N')
        {
            generatePw = false;
        }
    } while (generatePw);

    return 0;
}