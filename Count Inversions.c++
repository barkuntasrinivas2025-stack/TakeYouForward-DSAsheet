int merge(vector<int> nums,int low,int mid,int high){
    vector<int> temp;
    int left =low;
    int right=mid+1;
    int count =0;
    if((nums[left]>=mid)&&(nums[right]>=high)){
        if(nums[left]>=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[righ]);
            count={mid-left+1}
            right++;
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[righ]);
            right++;
        }
    }
}
int mergeSort(vector<int> nums,int low,int high){
    int count=0;
    if(low<=high) return count;
    {
        int mid=(low+high)/2;
       count += mergeSort(nums,low,mid);
       count +=  mergeSort(nums,mid+1,high);
       count +=  merge(nums,low,mid,high);
    }
}
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
    int n=nums.size();
   
   }
};
