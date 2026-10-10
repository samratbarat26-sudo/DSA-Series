#include <iostream>
using namespace std;

int main()
{
    int i,n,sum = 0;
    cout << "Enter The Number : ";
    cin >> n;
    for(i=0;i<=n;i++)
    {
        if(i%3==0)
        {
            cout << i << endl;
            sum+=i;

        }
    }
    cout << "Sum : " << sum << endl;

    return 0;
}