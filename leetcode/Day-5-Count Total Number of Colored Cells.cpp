class Solution {
public:
    long long coloredCells(int n) {
        return (long long)n * n + (long long)(n - 1) * (n - 1);
    }
};

/*
each time it adds new blue cubes ie 4(n-1)
1 (+4) (+8) (+12)....(+4(n-1))
*/