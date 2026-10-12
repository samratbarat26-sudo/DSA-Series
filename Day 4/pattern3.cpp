#include <iostream>
using namespace std;

int main()
{
    int i , j , n;
    char ch = 'A';

    cout << "Enter A Number : ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
}