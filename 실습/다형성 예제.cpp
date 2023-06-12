/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <algorithm>
#include <random>
using namespace std;

#define MAX_NUMBER (100)
#define SEQUENCE_LENGTH (50)
#define SORT_LENGTH (10)
#define MAX_SORT (3)

enum SortType { BubbleSortType, QuicSortType, MergeSortType };

template <class T>
class Sequence
{
    T* sequence;
    int len;
public:
    Sequence(T len);
    inline T randomInitalize() {}
    T* begin() { return sequence; }
    T* end() { return sequence + len; }
    void show();
};

template<class T>
Sequence<T>::Sequence(T len)
{
    sequence = new T[len];
    this->len = len;
    for (register int i = 0; i < len; i++)
    {
        sequence[i] = randomInitalize();
    }
}

template<class T>
void Sequence<T>::show()
{
    for (register int i = 0; i < len; i++)
    {
        cout << sequence[i] << " ";
    }
    cout << endl << endl;
}

template<>
int Sequence<int>::randomInitalize()
{
    return rand() % MAX_NUMBER;
}

template<>
double Sequence<double>::randomInitalize()
{
    default_random_engine generator;
    uniform_real_distribution<double> distribution(0.0,MAX_NUMBER);
    return distribution(generator);
}

/*
template <class T>
class Sort 
{
public:
    virtual void sorting(Sequence<T>& sequence) = 0;
};


template <class T>
class QuicSort : public Sort<T>
{
public:
    virtual void sorting(Sequence<T>& sequence)
    {
        cout << "Quick Sorting 수행" << endl;
        sort(sequence.begin(), sequence.end());
    }
};

template <class T>
class BubbleSort : public Sort<T>
{
public:
    virtual void sorting(Sequence<T>& sequence)
    {
        cout << "Bubble Sorting 수행" << endl;
        sort(sequence.begin(), sequence.end());
    }
};

template <class T>
class MergeSort : public Sort<T>
{
public:
    virtual void sorting(Sequence<T>& sequence)
    {
        cout << "Merge Sorting 수행" << endl;
        sort(sequence.begin(), sequence.end());
    }
};
*/

template<class T>
Sort<T>* createSort(SortType sortType)
{
    switch(sortType)
    {
    case BubbleSortType:
        return new BubbleSort<T>;
    case MergeSortType:
        return new MergeSort<T>;
    case QuicSortType:
        return new QuicSort<T>;
    default:
        assert(false);
    }
}

int main()
{
    srand(time(NULL));
    vector<Sort<int>*> sortVector;
    for (register int i = 0; i < SORT_LENGTH; i++)
    {
        Sort<int>* sort = createSort<int>(static_cast<SortType>(rand() % MAX_SORT));
        sortVector.push_back(sort);
    }
    for (register int i = 0; i < SORT_LENGTH; i++)
    {
        Sequence<int> seq(SEQUENCE_LENGTH);
        sortVector[i]->sorting(seq);
        seq.show();
    }
    for (register int i = 0; i < SORT_LENGTH; i++)
    {
        delete sortVector[i];
    }
    return 0;
}

