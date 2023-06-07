#pragma region region1
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define double long double
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pic pair<int, char>
#define pci pair<char, int>
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define vc vector<char>
#define li list<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define all(v) v.begin(), v.end()
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000000
#define MOD 1000000007
#define inf 1e9
#define minf -1e9
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)                                                           \
    int i_am_naming_this_badly_so_that_i_dont_use_it_accidentally = 1; \
    cin >> i_am_naming_this_badly_so_that_i_dont_use_it_accidentally;  \
    i_am_naming_this_badly_so_that_i_dont_use_it_accidentally--;       \
    while (i_am_naming_this_badly_so_that_i_dont_use_it_accidentally--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
string getString(char x)
{
    string s(1, x);
    return s;
}
int lcm(int x, int y)
{
    return (x * y) / __gcd(x, y);
}
void sectumsempra07()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("Files/input.txt", "r", stdin);
    //     freopen("Files/output.txt", "w", stdout);
    // #endif
}

#define pii pair<int, int>
#define count bits_builtin_popcount
#define int_11

int t, n;
int arr1[3000069], arr2[3000069];
int result = 0;
vpii GRAPH[3000069];
bool visited_array[3000069];

void depth_first_search(int s, int value, int ac)
{
    visited_array[s] = true;
    result = max(result, ac + 1);
    for (auto parent : GRAPH[s])
    {
        int u = parent.ff, link = parent.ss;
        if (visited_array[u])
            continue;
        if (link < value)
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
vi fib(int kk)
{
    vi v(kk + 1);
    v[0] = v[1] = 1;
    for (int i = 2; i < kk + 1; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }

    return v;
}
#pragma endregion region1;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    fl(n)
            cin >>
        v[i];

    sort(all(v));

    int maxi = v[0];
    int mini = v[0];
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, v[i]);
        mini = min(mini, v[i]);
    }

    int upper_bound = maxi - mini;
    int result = 0;
    int lower_bond = 0;
    int k, p1 = 0, countter = 0;
    while (lower_bond <= upper_bound)
    {
        p1 = 0;
        countter = 0;
        int mid = (lower_bond + upper_bound) / 2;

        fl(n)
        {
            if (abs(v[i] - v[p1]) > (2 * mid))
            {
                p1 = i;
                countter++;
            }
        }

        if (countter >= 3)
            lower_bond = mid + 1;
        else
        {

            upper_bound = mid - 1;
            result = mid;
        }
    }

    cout << result << "\n";
}
#pragma region region2
signed main()
{
    sectumsempra07();
    int test_cases_sectumsempra07 = 1;
    cin >> test_cases_sectumsempra07;
    while (test_cases_sectumsempra07--)
        solve();
    return 0;
}
#pragma endregion region2
