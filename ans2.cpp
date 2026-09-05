#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int count[11] = {0};
        int maxCount = 0;

        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;

            count[val]++;
            maxCount = max(maxCount, count[val]);
        }

        cout << N - maxCount << "\n";
    }

    return 0;
}
