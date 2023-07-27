class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int>v;
        for(int i=0;i<nums1.size();i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int l=v.size();
        if(l%2==0){
            float ans=float((v[l/2]+v[(l/2)-1]));
            return ans/2;
        }
        else if(l%2!=0){
            float ans=v[((l+1)/2)-1];
            return ans;
        }
        return 0;
    }
};
