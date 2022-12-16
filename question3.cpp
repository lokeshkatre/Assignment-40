#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30, 40};

    for (auto it = dq.rbegin(); it != dq.rend(); it++)
    {
        cout<< *it << " ";
    }
}