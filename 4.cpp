class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto item : nums2){
            nums1.push_back(item);
        }
        sort(nums1.begin(),nums1.end());
        int len = nums1.size();
        double answer;
        if(len%2==0){
            answer = (nums1[len/2] + nums1[len/2-1])/2.0;
        }
        else{
            answer = nums1[len/2];
        }
        return answer;
    }
};
