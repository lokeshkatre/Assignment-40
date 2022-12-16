#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30, 40};
    deque<int>::iterator it= dq.begin();
    it++;
    it = dq.insert(it,2); //10 2 20 30 40
    cout<<"Deque:"<<endl;
    for(int x : dq)
    {
        cout<<x << " ";
    }

}