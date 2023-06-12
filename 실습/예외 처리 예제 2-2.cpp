/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// #include <vector>
#include <iostream>
#include <exception>
#include <string>
using namespace std;

#define VECTOR_DEFAULT_SIZE (100)

class OutOfIndex: public exception{
    string message;
public:
    OutOfIndex(int idx)
    {
        message = "out_of_index: " + to_string(idx);
    }
    
    const char* what() const throw() 
    {
        return message.c_str();
    }
};


template <class T>
class MyVector{
    
    T* array;
    int length;
public:
    MyVector()
    {
        array = new T[VECTOR_DEFAULT_SIZE];
        length = VECTOR_DEFAULT_SIZE;
        
        for (int i = 0; i < VECTOR_DEFAULT_SIZE; i++)
        {
            array[i] = i;
        }
    }
    
    T at(int idx) 
    {
        if (idx < 0 || idx >= length)
        {
            throw OutOfIndex(idx);
        }
        return array[idx];
    }
};


int main(){
    MyVector<int> v;
    int num;

    try{
        cout << v.at(500) << endl;
    }
    catch(OutOfIndex& e){
        cout << e.what() << endl;
        cout << "인덱스 오류가 발생!" << endl;
    }
    
    cout << "[program is still running!]" << endl;

    return 0;
}