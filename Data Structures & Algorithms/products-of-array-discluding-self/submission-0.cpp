class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //  we hve to mke   a prefix n
        // suffix preod rry nd we hvee to multiply the prefix nd suffix
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        int prod = 1;
        for (int i = 0; i < n; i++) {
            prod = prod * nums[i];
            prefix[i] = prod;
        }
        prod = 1;
        for (int i = n - 1; i >= 0; i--) {
            prod = prod * nums[i];
            suffix[i] = prod;
        }
        vector<int> ns(n, 0);
        prod = 1;
        // multiply prefix n suffix
        for (int i = 0; i < n; i++) {
             prod = 1;
            if (i > 0) {
                prod *= prefix[i - 1];
            }
            if (i < n - 1) {
                prod *= suffix[i + 1];
            }
            ns[i] = prod;
        }
        return ns;
    }
};
