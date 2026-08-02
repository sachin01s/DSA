#include <bits/stdc++.h>
using namespace std;

bool possible(vector<long long>& a, int k, long long S)
{
    int n = a.size();

    vector<long long> temp;

    for(int i = 0; i < n; i++)
    {
        temp.push_back(a[i] + (long long)(i + 1) * k);
    }

    sort(temp.begin(), temp.end());

    long long sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += temp[i];
    }

    return sum <= S;
}

int main()
{
    int n;
    long long S;

    cin >> n >> S;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int r = n;
    int ans = 0;

    // Last True Binary Search
    while(l <= r)
    {
        int mid = l + (r - l) / 2;

        if(possible(a, mid, S))
        {
            ans = mid;
            l = mid + 1;   // try buying more items
        }
        else
        {
            r = mid - 1;   // need fewer items
        }
    }

    // Calculate minimum cost for final answer
    vector<long long> temp;

    for(int i = 0; i < n; i++)
    {
        temp.push_back(a[i] + (long long)(i + 1) * ans);
    }

    sort(temp.begin(), temp.end());

    long long cost = 0;

    for(int i = 0; i < ans; i++)
    {
        cost += temp[i];
    }

    cout << ans << " " << cost << endl;

    return 0;
}