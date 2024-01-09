//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans=0;

        for (int i=0;i<nums.size();i++){ 
            mpp[nums[i]]++;
        }

        for (auto &it: mpp){ // don't iterate over nums vector, since we will mistakingly add same values more than once, for repeated elements

            int freq=it.second;

            if (freq==1){
                return -1;
            }
            ans+=ceil((double)freq/3);
        }
        return ans;
    }
};
