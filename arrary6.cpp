// searching element in array

#include <iostream>
using namespace std;
int findvalue(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    cout << "enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the value to search";
    int key;
    cin >> key;
    int addres = findvalue(arr, n, key);
    cout << addres;
    return 0;
}