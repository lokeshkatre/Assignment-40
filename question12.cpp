#include <iostream>
#include <deque>
#include<string>
using namespace std;

string backspace(string s)
{
    int size = s.size();
    if(size== 0)
    return s;
    deque<char> dq;
    for(int i=0; i<size ;i++)
    {
        if(s[i]=='#')
        {
            if(!dq.empty())
            dq.pop_back();
        }
        else
        {
            dq.push_back(s[i]);
        }
    }
    s.assign(dq.begin(),dq.end());
    return s;
}
int main()
{
   string s = "abc#de#f#ghi#jklmn#op#";
   string s2= "##iNeuron##Education##hub#";

    s=backspace(s);
    s2=backspace(s2);
    cout<<s<<endl;
    cout<<s2<<endl;

}