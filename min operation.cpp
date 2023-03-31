class Solution {
public:
    long long int minOperations(int N) {
        if (N == 1) {
            return 0;
        } else if (N == 2) {
            return 1;
        } else {
            long long int tar = N;
            if (N % 2 == 0) {
                tar /= 2;
            } else {
                tar = (N+1) / 2;
            }
            return tar * (N-tar);
        }
    }
};

