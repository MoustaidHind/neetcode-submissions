class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> nb;
       vector<int>::iterator it;

        for(it = nums.begin(); it != nums.end(); it++)
        {
            if(nb.count(*it) > 0)
                return true;
            nb.insert(*it);
        }
        return false;       
    }
};