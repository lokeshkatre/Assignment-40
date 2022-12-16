#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void K_ValuesArray(int N, int K)
{
    // Check for base cases
    if (K < 1 || K >= N)
    {
        cout << -1;
        return;
    }

    // Maintain a deque to store the elements from [1, N];
    deque<int> dq;
    for (int i = 2; i <= N; i++)
    {
        dq.push_back(i);
    }

    bool front = true;
    vector<int> ans;
    ans.push_back(1);
    if (K > 1)
    {
        front ^= 1;
        K--;
    }

    for (int i = 2; i <= N; i++)
    {
        if (front)
        {
            int val = dq.front();
            dq.pop_front();

            // Push this value in the ans vector
            ans.push_back(val);
            if (K > 1)
            {
                K--;
                // Flip the boolean value
                front ^= 1;
            }
        }
        else
        {
            int val = dq.back();
            dq.pop_back();
            // Push value in ans vector
            ans.push_back(val);
            if (K > 1)
            {
                K--;
                // Flip boolean value
                front ^= 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int N = 6, K = 4;
    K_ValuesArray(N, K);

    return 0;
}