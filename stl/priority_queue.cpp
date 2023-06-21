/******************************************************************************

priority_queue<자료형, 구현체, 비교연산자> pq;

자료형 : int, double 등의 기본자료형 뿐만 아니라 구조체, 클래스 등 다양하게 사용할 수 있다.
구현체 : 보통 vector<자료형> 으로 구현한다. (stl에서 힙을 구현하기 좋은 자료형이면 다 가능하다고 한다. vector를 include하지 않아도 동작한다.)
비교연산자 : 비교를 위한 기준을 알려준다.


1) default (내림차순)

priority_queue<pair<int , int>> pq;

첫 번째 인자 기준으로 내림차순 정렬,
같다면 두 번째 인자를 기준으로 내림차순 정렬.

2) 오름차순

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

첫 번째 인자 기준으로 오름차순 정렬,
같다면 두 번째 인자 기준으로 오름차순 정렬.


3) user-defined comparison

struct cmp{
bool operator()(pair<int, int>&a, pair<int, int>&b) {
              if (a.first == b.first) {
                  return a.second > b.second;
              }
              else {
                  return a.first < b.first;
              }
          }
};

priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;

*******************************************************************************/
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    priority_queue<pair<int, string>> pq;
    pq.push({4, "d"});
    pq.push({2, "b"});
    pq.push({1, "a"});
    pq.push({5, "e"});
    pq.push({3, "c"});
    
    while (!pq.empty())
    {
        cout << pq.top().first << ", " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
