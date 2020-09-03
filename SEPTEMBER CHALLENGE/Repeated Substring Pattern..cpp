class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i = 1; i <= n/2; ++i) {
            if(n%i) continue;
            int cnt = 0;
            for(int j = i; j < n ; ++j){
                if(s[j] == s[j-i]) ++cnt;
            }
            cout << i << " " << cnt << endl;
            if(cnt == n-i) return true;
        }
        return false;
    }
};