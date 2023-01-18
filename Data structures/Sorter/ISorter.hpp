#ifndef ISORTER_HPP
#define ISORTER_HPP
#include <iostream>
using namespace std;

class ISorter
{
    public:
        virtual ~ISorter(){};
        virtual void sort(int arr[], int arrayLength) = 0;
        virtual void printArray(int arr[], int arrayLength) = 0;
};


#endif // ISORTER_HPP
