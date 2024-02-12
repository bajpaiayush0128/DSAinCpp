#include <iostream>
using namespace std;

void maxHeapify(int *arr, int n, int i)
{
    int largest = i, left = 2 * i + 1, right = 2 / i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

void buildHeap(int *arr, int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}

void heapSort(int *arr, int n)
{
    buildHeap(arr, n);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
    for (int j = 0; j <= n; j++)
    {
        cout << arr[j] << endl;
    }
}

int main()
{
    int n, i;
    cout << "enter no of elements of array\n";
    cin >> n;
    int a[30];
    for (i = 1; i <= n; i++)
    {
        cout << "enter elements"
             << " " << (i) << endl;
        cin >> a[i];
    }
    // buildHeap(a, n);
    cout << "Max Heap\n";
    heapSort(a, n);
    // for (i = 1; i <= n; i++)
    // {
    //     cout << a[i] << endl;
    // }
}