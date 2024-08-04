#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter array element \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "rev array \n";
    for (int i = n-1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
}