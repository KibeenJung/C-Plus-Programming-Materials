/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <queue>
//pair를 사용하기 위해서는 <utility>헤더파일 필요
#include <utility>

using namespace std;

int main()
{
    queue<pair<string, int>> q;
    q.push(make_pair("a", 1));
    q.push(make_pair("b", 2));
    q.push(make_pair("c", 3));
    q.push(make_pair("d", 4));
    q.push(make_pair("e", 5));
    
    cout << q.front().first << ", " << q.front().second << endl;
    q.pop();
    
    while (!q.empty())
    {
        cout << q.front().first << ", " << q.front().second << endl;
        q.pop();
    }
    
    return 0;
}

