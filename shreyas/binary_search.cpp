#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

// to find the index of key in the given array
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = ((end - start) / 2) + start;

    while (start <= end)
    {
        int mid = ((end - start) / 2) + start;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        if (arr[mid] < key)
        {

            start = mid + 1;
        }
    }

    // we reach here if the key is not present in the array
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array:\n";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;

    cout << "Enter the key:\n";
    cin >> key;

    int ans = binarysearch(arr, size, key);

    if (ans != -1)
    {
        cout << "The index of the key is ";
        cout << ans << "\n";
    }

    else
    cout<<"Key is not present in the array\n";

   
}