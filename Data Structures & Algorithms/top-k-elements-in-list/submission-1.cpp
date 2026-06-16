class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> map;

        for (int num : nums)
        {
            map[num]++;
        }

        priority_queue<pair<int, int> , vector<pair<int, int>> , greater<>> minHeap;

        for (auto &[num,freq] : map)
        {
            minHeap.push({freq, num});
        }

        while (minHeap.size() > k)
        {
            minHeap.pop();
        }

        vector<int> result;
        while (!minHeap.empty())
        {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};
