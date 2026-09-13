// kinda feel like cheating tbh cuz i saw a video and then like did it

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> myvec;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    myvec.push_back(i);
                    myvec.push_back(j);
                    return myvec;
                }
            }
        }
        return {};
    }
};
