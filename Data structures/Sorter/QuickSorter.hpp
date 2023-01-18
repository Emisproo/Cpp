#ifndef QUICKSORTER_HPP
#define QUICKSORTER_HPP

#include "ISorter.hpp"

class QuickSorter : public ISorter
{
    public:
        void sort(int arr[], int arrayLength);
        void printArray(int arr[], int arrayLength);
        int partition(int arr[], int start, int end);
        void quickSort(int arr[], int start, int end);
};


void QuickSorter::sort(int arr[], int arrayLength)
{
    quickSort(arr, 0, arrayLength - 1);
    printArray(arr, arrayLength);
}

void QuickSorter::quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);

    quickSort(arr, p + 1, end);
}

int QuickSorter::partition(int arr[], int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void QuickSorter::printArray(int arr[], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
        cout << arr[i] << " ";
    cout << "" << endl;
}
#endif // QUICKSORTER_HPP
