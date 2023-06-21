/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <iostream>
#include <vector>        //vector위한 헤더
#include <algorithm>    //binary search 위한 헤더
 
using namespace std;
 

 
int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    sort(v.begin(), v.end());    //벡터 정렬
    
    cout << "binsary_search(2)" << endl;
    cout << binary_search(v.begin(), v.end(), 2) << endl;
    cout << "binsary_search(10)" << endl;
    cout << binary_search(v.begin(), v.end(), 10) << endl;

    return 0;
}