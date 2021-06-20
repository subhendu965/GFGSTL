 long long int maximum_sum(vector<long long int>v)
    {
        long long int n = v.size();
        long long int prefix[n];
        prefix[0] = v[0];
        long long int i;
        for (i = 1; i < n; i++)
        {
            prefix[i] = v[i] + prefix[i - 1];
        }
    
        unordered_map<long long int, long long int>m1;
        long long int ans = 0;
        for (i = 0; i < n; i++)
        {
            long long int x;
            x = v[i];
            if (m1.find(x) == m1.end())
            {
                ans = max(ans, x);
                m1[x] = i;
            }
            else
            {
                long long int pre;
                pre = m1[x];
                ans = max(ans, prefix[i] - prefix[pre] + v[i]);
            }
    
        }
    
        return ans;
    }
