class Solution {
public:
    int arrangeCoins(int n) {
        int i = 0;
        long long int cnt = 0;
        while(cnt + i <= n) cnt +=i, ++i;
        return i-1;
    }
};