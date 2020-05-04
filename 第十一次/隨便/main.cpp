#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{

    int day = 0;
    char answer;

    

    for (int i = 0; i < 5; i++)
    {
        cout << "Is your birthday in Set" << (i + 1) << "?" << endl;
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
                cout << setw(3) << dates[i][j][k] << " ";
            cout << endl;
        }
        cout << "\nEnter N for No and Y for Yes: ";
        cin >> answer;
        if (answer == 'Y')
            day += dates[i][0][0];
    }

    cout << "Your birthday is " << day << endl;

    return 0;
}