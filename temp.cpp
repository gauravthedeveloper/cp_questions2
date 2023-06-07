#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int i = 0;
        int maxi = v[0];
        int mini = v[0];
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, v[i]);
            mini = min(mini, v[i]);
        }

        // int j = max_element(v.begin(), v.end()) - min_element(v.begin(), v.end());
        int j = maxi - mini;
        int mid, ans = 0;

        while (i <= j)
        {
            mid = i + (j - i) / 2;
            int k, l = 0, cnt = 0;

            for (k = 0; k < n; k++)
            {
                if (v[k] - v[l] > 2 * mid)
                {
                    l = k;
                    cnt++;
                }
            }

            if (cnt >= 3)
                i = mid + 1;
            else
                ans = mid, j = mid - 1;
        }

        cout << ans << endl;
    }

    return 0;
}