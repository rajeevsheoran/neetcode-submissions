class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // create a max heap
        unordered_map<int, int> fre;
        for (int i = 0; i < nums.size(); i++) {
            fre[nums[i]]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto& it : fre) {
            pq.push({it.second, it.first});
        }
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
