#include <iostream>
#include <vector>
using namespace std;

#define pii pair<int, int>
#define count bits_builtin_popcount
#define int_11
#define pb push_back
#define mp make_pair
int t, n;
int uu[300069], vv[300069];
int result = 0;
vector<pii> GRAPH[300069];
bool visited_array[300069];

void depth_first_search(int s, int val, int ac)
{
    visited_array[s] = true;
    result = max(result, ac + 1);
    for (auto pr : GRAPH[s])
    {
        int u = pr.first, link = pr.second;
        if (visited_array[u])
            continue;
        if (link < val)
        {
            depth_first_search(u, link, ac + 1);
        }
        else
        {
            depth_first_search(u, link, ac);
        }
    }
    visited_array[s] = false;
    return;
}

int32_t main()
{

    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            cin >> uu[i] >> vv[i];
        }
        for (int i = 1; i < n; i++)
        {
            GRAPH[uu[i]].pb(mp(vv[i], i));
            GRAPH[vv[i]].pb(mp(uu[i], i));
        }
        result = 0;
        depth_first_search(1, 0, 0);
        cout << result << "\n";
        for (int i = 1; i <= n; i++)
        {
            GRAPH[i].clear();
            visited_array[i] = 0;
        }
    }
    return 0;
}