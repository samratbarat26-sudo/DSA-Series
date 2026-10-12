#include <iostream>
using namespace std;

int main()
{
    int i , j , n , count = 1;

    cout << "Enter A Number : ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            cout << j << " ";
        }
        cout << endl;
        count++;
    }
}