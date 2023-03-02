class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combine;
        combine.reserve( nums1.size() + nums2.size() );
        combine.insert( combine.end(), nums1.begin(), nums1.end() );
        combine.insert( combine.end(), nums2.begin(), nums2.end() );
        std::sort(combine.begin(), combine.end());
        for(auto& val : combine){
                        std::cout<<val;
        }
        float index = combine.size();
        int indexint = index;
        if(indexint%2 ==  0.0f){
            index /=2;
             std::cout<<endl<<combine[index-1];
            float val = combine[index-1] +combine[index];
            return val/2;
        }
        else{
            index = index/2;
            return 
                combine[index];
        }
    }
};