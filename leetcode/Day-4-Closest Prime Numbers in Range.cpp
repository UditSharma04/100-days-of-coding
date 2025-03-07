class Solution {
    bool isPrime(long long N) {
        if (N <= 3){ 
            return N > 1;
        } // for 1, 2 , 3
        if (!(N % 6 == 1 || N % 6 == 5)) {
            return false; 
        }
        for (long long k6 = 5; k6 * k6 <= N; k6 += 6){
            if (N % k6 == 0 || N % (k6 + 2) == 0){
                return false;
            }
        }
        return true;
    }

public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans = {-1, -1};
        int range = INT_MAX, prev = -1;

        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                if (prev != -1 && i - prev < range) {
                    ans = {prev, i};
                    range = i - prev;
                }
                prev = i;
            }
        }

        return ans;
    }
};

/*
 any prime is in from of 6k+1 or 6k-1
*/