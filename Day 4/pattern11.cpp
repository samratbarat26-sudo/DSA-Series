#include <iostream>
using namespace std;

int main()
{
    int i , j , n , count = 1 , k , c;

    cout << "Enter A Number : ";
    cin >> n;
    c=n;
    for (i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout << "  "; 
        }
        for(k=c;k>0;k--)
        {
            cout << count << " ";
        }
        cout << endl;
        count++;
        c--;

    }
}