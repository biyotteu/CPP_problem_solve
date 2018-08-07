#include <bits/stdc++.h>

using namespace std;

vector<int> A, B, seg;
int k;
void updata(int p)
{
    int idx = k|p;
    seg[idx] = 1;
    while (idx >>= 1)
        seg[idx] = seg[idx * 2] + seg[idx * 2 + 1];
}
long long int get(int p)
{
    long long int ret = 0;
    int idx = k|1;
    int idy = k|p;
    while (idx <= idy)
    {
        if (idx&1) ret += seg[idx++];
        if ((idy&1) == 0) ret += seg[idy--];
        idx >>= 1,idy >>= 1;
    }
    return ret;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        A.resize(n + 1);
        B.resize(n + 1);
        seg.resize(n * 4);
        for (k = 1; k < n; k<<=1);
        for (size_t i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);
            A[x] = i;
        }
        for (size_t i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);
            B[i] = A[x];
        }
        long long int res = 0;
        for (size_t i = 1; i <= n; i++)
        {
            res += B[i] - get(B[i] - 1) - 1;
            updata(B[i]);
        }
        printf("%lld\n", res);
        A.clear();
        B.clear();
        seg.clear();
    }
}
