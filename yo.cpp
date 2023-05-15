
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        std::vector<std::vector<int>> y;
        for (const std::vector<int> &p : nums)
        {
            y.push_back(p);
        }
        int sum = 0;
        int k = 0;
        int t = 0;
        fl(y.size())
        {
            sort(y[i].begin(), y[i].end(), greater<int>());
        }
        int p = 0;
        fl(y.size())
        {

            flj(y[0].size())
            {
                k = max(k, y[p][t]);
                p++;
            }
            sum += k;
            p = 0;
            t++;
            k = 0;
        }
        return sum;
    }
};