// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// https://leetcode.com/problems/maximum-subarray/description/
#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> vec) {
    int maxEnding = vec[0];
    int maxSoFar = vec[0]; 

    for (int i = 1; i < vec.size(); i++) {
        maxEnding += vec[i];
        maxSoFar = max(maxSoFar, maxEnding);
        
        if (maxEnding < 0) maxEnding = 0;
    }

    return maxSoFar;
}

int solve_dp(vector <int> vec) {
    int dp[vec.size()];
    dp[0] = vec[0];
    int ans = dp[0];

    for (int i = 1; i < vec.size(); i++) {
        dp[i] = max(vec[i], vec[i] + dp[i-1]);
        ans = max(ans, dp[i]);
    }

    return ans;
}

int solve_dp_2(vector <int> vec) {
    int first = vec[0], ans = vec[0], next;

    for (int i = 1; i < vec.size(); i++) {
        next = max(vec[i], vec[i] + first);
        ans = max(ans, next);
        first = next;
    }

    return ans;
}

int main () {
    vector <int> vec{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << solve_dp(vec) << endl;

    return 0;
}
