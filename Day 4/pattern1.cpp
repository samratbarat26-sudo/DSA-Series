#include <iostream>
using namespace std;

int main()
{
    int i , j , n;

    cout << "Enter A Number : ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=4;j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}