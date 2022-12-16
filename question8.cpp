#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30, 40, 50, 60, 70};
    deque<int>::iterator it= dq.begin();
    it++; it++;
    dq.erase(it);
     for ( it = dq.begin(); it != dq.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<<endl;
    dq.erase(++(dq.begin()), --dq.end());
     for ( it = dq.begin(); it != dq.end(); it++)
    {
        cout<< *it << " ";
    }
   
}