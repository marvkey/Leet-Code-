class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        for(int i =0; i <nums.size(); i++){
            // j= i+1 
            //because comapring every element in list 
            // makin sure we only compare them to each other once for performance
            for(int j = i+1; j< nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    vec.emplace_back(i);
                    vec.emplace_back(j); 
                }   
            }
        }
        return vec;
    }
};