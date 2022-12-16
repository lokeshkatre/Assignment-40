#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30, 40};
    deque<int>::const_iterator it;
    //only use for traversal can not modify
    for ( it = dq.begin(); it != dq.end(); it++)
    {
        cout<< *it << " ";
    }
}