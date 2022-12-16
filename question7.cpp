#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30, 40};

   cout<<"first element is "<<dq.front()<<endl;
   cout<<"last element is "<<dq.back();
}