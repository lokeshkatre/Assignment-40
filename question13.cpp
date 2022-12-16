#include<iostream>
#include<list>
#include<deque>
using namespace std;
void segregate(list<int> l)
{
    deque<int> dq1, dq2;
    list<int>::iterator it;
    int i=0;
    for(it = l.begin() ; it!= l.end();it++)
    {
        if(i%2 ==0)
        dq1.push_back(*it);
        else
        dq2.push_back(*it);
        i++;
    }
    cout<<"odd node:"<<endl;
    for(int x: dq1){ cout<<x<<" ";}
    cout<<endl;
    cout<<"even node:"<<endl;
    for(int x: dq2){ cout<<x<<" ";}
    cout<<endl;
}
int main()
{
    list<int> l{1,2,3,4,5,6,7,8};
    segregate(l);
}