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
        } else if (pwGenQuestion == 'y' || pwGenQuestion == 'Y') {
            generatePw = true;
        } else {
            cout << "Invalid input. Exiting program." << endl;
            return 1;
        }
    } while (generatePw);

    return 0;
}