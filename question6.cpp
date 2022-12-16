#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq ;
    dq.assign(3,10);
    deque<int> dq2;
    dq2.assign(dq.begin(),dq.end());

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<<endl;
    for (auto it = dq2.begin(); it != dq2.end(); it++)
    {
        cout<< *it << " ";
    }
}