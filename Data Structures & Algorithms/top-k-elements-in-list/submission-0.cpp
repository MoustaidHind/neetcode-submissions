class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> freq;
        vector<int> keys;
        vector<int> values;
        vector<int> result;
        int  indx;

        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;

        for(const auto& p : freq)
        {
            keys.push_back(p.first);
            values.push_back(p.second);
        }

        if(keys.size() == 1)
        {
            result.push_back(keys[indx]);
            return result;
        }

        for(int j = 0; j < k; j++)
        {
            indx = 0;
            for(int i = 1; i < keys.size(); i++)
            {
                if(values[i] >= values[indx])
                    indx = i;
            }
            result.push_back(keys[indx]);
            values.erase(values.begin() + indx);
            keys.erase(keys.begin() + indx);
        }
        return result;

    }
};