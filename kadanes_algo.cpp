class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //optimal-kadanes algo
        int maxi=nums[0];
        int n=nums.size();
        int sum=0;
        int start;
        for(int i=0;i<n;i++){
            
            if(sum==0){
                start=i;
            }
            sum=sum+nums[i];
            if(sum>maxi){
                maxi=max(sum,maxi);
                }
                if(sum<0){
                    sum=0;
                }
        }
        return maxi;
    }
};
