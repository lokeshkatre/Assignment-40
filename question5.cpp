#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30, 40};
    cout<<"Max element dequeue can hold is "<<dq.max_size()<<endl;
}