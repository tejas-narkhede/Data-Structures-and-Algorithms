class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0 ; i< nums2.size() ; i++){
            nums1.push_back(nums2[i]);
        }
        stable_sort(nums1.begin(),nums1.end());
        int len = nums1.size();
        if(len%2==1){
            return nums1[floor(len/2)];
        }
        else{
            int index = floor(len/2);
            return (nums1[index-1]+nums1[index])/2.0;
        }
    }
};