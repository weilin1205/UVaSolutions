#include <bits/stdc++.h>
using namespace std;

bool solve(int target, const vector<int> &bars) {
    int n = bars.size();
    vector<bool> dp(target + 1, false);
    // dp[i] 表示組成長度為 i 的金屬棒是否是可以的
    dp[0] = true;
    // 從 dp[0] 開始，表示組成長度為 0 的金屬棒是可以的
    for (int i = 0; i < n; i++) {
        // 外迴圈用來遍歷bars陣列，也就是題目所提供的各個金屬棒長度
        for (int j = target; j >= bars[i]; j--) {
            /* 內迴圈從 target 開始遞減到 bars[i]。這是因為我們要
            考慮在組成長度為 j 的情況下，是否可以加入 bars[i] 這根金屬棒。*/
            if (dp[j - bars[i]])
                dp[j] = true;
                /* 在每一次迴圈中，我們檢查 dp[j - bars[i]] 的值。
                這個值表示在考慮前一根金屬棒（也就是 bars[i] 的前一個金屬棒），
                是否可以組成長度為 j - bars[i]。如果可以，
                我們將 dp[j] 設置為 true，表示在考慮前 i 根金屬棒，組成長度 j 是可以的 */
        }
    }
    return dp[target];
    // 最終，檢查 dp[target] 是否為真，即可判斷是否可以組成所要的長度。
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n, p;
        cin >> n >> p;
        vector<int> v(p);
        for (int i = 0; i < p; i++) {
            cin >> v.at(i);
        }
        solve(n, v) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}