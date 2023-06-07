#pragma region region1
#include <bits/stdc++.h>
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
#define all(v) v.begin(), v.end()
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
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
bool is_possible_to_generate(int minimum_Possible, vi &v, int k)
{
    int sum = 0;
    int length = v.size();
    fl(length)
    {
        if (v[i] < minimum_Possible)
            sum = sum + minimum_Possible - v[i];
        else
            break;
    }
    if (sum <= k)
        return true;
    else
        return false;
}
void solve()
{
    int n, k, minimum_can_get = 0;
    cin >> n >> k;
    vi v(n);
    bool can = true;
    for (auto &num : v)
        cin >> num;

    sort(all(v));

    int lower_bound = 0, upper_bound = 1e10 + 69, mid = 0;
    while (upper_bound - lower_bound > 1)
    {
        mid = (upper_bound + lower_bound) / 2;
        if (is_possible_to_generate(mid, v, k))
            lower_bound = mid;
        else
            upper_bound = mid - 1;
    }

    if (is_possible_to_generate(upper_bound, v, k) && can)
        minimum_can_get = upper_bound;
    else
        minimum_can_get = lower_bound;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < minimum_can_get)
        {
            k -= (minimum_can_get - v[i]);
            v[i] = minimum_can_get;
        }
    }

    fl(k)
        v[i] = v[i] + 1;

    int sigma_sequence = 0;
    fl(n)
        sigma_sequence = (sigma_sequence + v[i]) % MOD;

    int result = 0;
    fl(n)
    {
        sigma_sequence = (sigma_sequence % MOD - v[i] % MOD + MOD) % MOD;
        result = (result % MOD + (v[i] * sigma_sequence) % MOD) % MOD;
    }

    cout << result << '\n';
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
