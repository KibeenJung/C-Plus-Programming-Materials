/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

void print_map(map<string, int> &m)
{
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << ", " << it->second << endl;
    }
}

int main()
{
    map<string, int> m;
    m["a"] = 0;
    m["b"] = 1;
    m.insert({"c", 2});
    m.insert({"d", 3});
    
    print_map(m);
    
    cout << "erase: a, c " << endl;
    m.erase("a");
    m.erase("c");
    
    print_map(m);
    
    return 0;
}
