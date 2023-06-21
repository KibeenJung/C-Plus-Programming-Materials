/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";   
    }
    cout << endl;
}

int main()
{
    vector<int> v = { 9,  7 , 1, 3, 4, 5 };

    cout << "pop_back" << endl;
    v.pop_back();
    print_vector(v);
    cout << endl;
    
    cout << "push_back(6)" << endl;
    v.push_back(6);
    print_vector(v);
    cout << endl;
    
    cout << "insert(v.begin() + 2, 10)" << endl;
    v.insert(v.begin() + 2,  10);
    print_vector(v);
    cout << endl;
    
    cout << "erase(v.begin() + 3)" << endl;
    v.erase(v.begin() + 3);
    print_vector(v);
    cout << endl;
    
    cout << "sort(v.begin(), v.end())" << endl;
    sort(v.begin(), v.end());
    print_vector(v);
    
    return 0;
}

