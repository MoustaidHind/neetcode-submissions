class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> res;
        vector<vector<string>> results;
        vector<string> sorted(strs);


        for(int i = 0 ; i < sorted.size(); i++)
        {
            sort(sorted[i].begin(), sorted[i].end());
            res[sorted[i]].push_back(strs[i]);
        }

        for(const auto& p : res)
            results.push_back(p.second);

        
        return results;
    }
};
