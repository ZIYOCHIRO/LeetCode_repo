/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
/*  这种会超时
    int countPrimes(int n) {
        //[2,根号x]的区间中
        int res = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime(i)) {
                res += 1;
            }
        }
        return res;
    }
    
    bool isPrime(int x) {
        for (int i = 2; i*i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
    */

   int countPrimes(int n) {
        // 初始默认所有的数为质数
        vector<int> isPrime(n, 1);
        int count = 0;
        for (int i = 2; i<n; i++) {
            if (isPrime[i]) {
                count++;
                for (int j = i + i; j < n; j+= i) {
                    isPrime[j] = 0;
                }
            }
        }
        return count;
    }
    
};
// @lc code=end

