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

int main(){
 vector<int> v;
    int num;

    try{
        cout << v.at(500) << endl;
        //cout << v[500] << endl;
    }
    catch(exception& e){
        cout << e.what() << endl;
        cout << "인덱스 오류가 발생!" << endl;
    }
    
    cout << "[program is still running!]" << endl;

    return 0;
}