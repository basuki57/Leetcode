class Solution {
public:
    vector<int> partitionLabels(string S) {
        int f[30], l[30];
        int n = S.length();string s = S;
        for(int i = 0; i < n; ++i) l[s[i] - 'a'] = i;
        for(int i = n-1; i >= 0; --i) f[s[i] - 'a'] = i;
        int indx = 0;
        vector<int> v;
        while(indx < n){
            int cnt = 0, e = l[s[indx] - 'a'];
            int i = indx;
            for(; i <= e; ++i) e = max(e, l[s[i] - 'a']), ++cnt;
            indx = i;
            v.push_back(cnt);
        }
        return v;
    }
};