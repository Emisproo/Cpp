#ifndef SORTINGMACHINE_HPP
#define SORTINGMACHINE_HPP

#include "ISorter.hpp"
class SortingMachine
{
    private:
        ISorter *_sortMethod;

    public:
        SortingMachine(ISorter *sortMethod);
        void setSortingMethod(ISorter *sortMethod);
        void sort(int arr[], int arrayLength);
};

SortingMachine::SortingMachine(ISorter *sortMethod) : _sortMethod(sortMethod){};

void SortingMachine::setSortingMethod(ISorter *sortMethod)
{
    delete _sortMethod;
    _sortMethod = sortMethod;
}

void SortingMachine::sort(int arr[], int arrayLength)
{
    _sortMethod->sort(arr, arrayLength);
}
#endif // SORTINGMACHINE_HPP
