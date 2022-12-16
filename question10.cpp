#include <iostream>
#include <string>
#include <deque>
using namespace std;
bool areSimilar(string S1, string S2)
{
    int N = S1.size();
    int M = S2.size();

    if (N == M)
    {
        if (S1 == S2)
            return true;
        return false;
    }

    deque<string> X, Y;
    S1.push_back(' ');
    S2.push_back(' ');
    string temp = "";

    for (int i = 0; i < N + 1; i++)
    {
        // push temp in deque when a space comes in sentence i.e a word has been formed
        if (S1[i] == ' ')
        {
            X.push_back(temp);
            temp = "";
        }
        else
        {
            // temp stores words of the sentence
            temp += S1[i];
        }
    }

    // traverse the sentence S1
    for (int i = 0; i < M + 1; i++)
    {

        // push temp in deque when a space comes in sentence i.e a word has been formed
        if (S2[i] == ' ')
        {
            Y.push_back(temp);
            temp = "";
        }
        else
        {
            // temp stores words of the sentence
            temp += S2[i];
        }
    }

    // check for prefixes of both sentences
    while (X.size() > 0 && Y.size() > 0 && X.front() == Y.front())
    {
        // pop the prefix from both deques till they are equal
        X.pop_front();
        Y.pop_front();
    }

    // check for suffixes of both sentences
    while (X.size() > 0 && Y.size() > 0 && X.back() == Y.back())
    {

        // pop the suffix from both deques till they are equal
        X.pop_back();
        Y.pop_back();
    }

    // if any of the deques is empty return true
    if ((X.size()==1 || X.size()==0) && (X.size()==1 || X.size()==0) )
        return true;

    return false; // if both the deques are not empty return false
}

int main()
{
    string S1 = "what are you doing?";
    string S2 = "what are doing?";

    if (areSimilar(S1, S2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
