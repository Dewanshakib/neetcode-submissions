class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int l = 0, r = 1;
       if (prices.size() < 2) return 0;

       int mx_p = 0;
       for (int i = 0;i < prices.size() - 1;i++){
          if (prices[l] < prices[r]) {
            mx_p = max(mx_p,prices[r] - prices[l]);
          } else {
            l = r;
          }
          r++;
       }

        return mx_p;
    }
};
