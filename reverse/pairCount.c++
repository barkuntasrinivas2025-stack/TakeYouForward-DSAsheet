int countPair(vector<int> nums,int low,int mid,int high){
  int count=0;
  int right=mid+1;
  while(nums[low]>(2*(nums[right]))) right++;
  count=(right-(mid+1);
  return count;
  }
int merge(vector<int> nums,int low,int mid,int high){
    vector<int> temp;
    int right=mid+1;
    int left=low;
    while(lef<=mid && right <=high){
    if(nums[left]>nums[right]){
      temp.push_back(nums[left]);
      left++;
    }
      else{
        temp.push_back(nums[right]);
        right++;
      }
    }
  while(left<=mid){
      temp.push_back(nums[left]);
      left++;}
  while(right<=high){
        temp.push_back(nums[right]);
        right++;}
  for(int i=0;i<nums.size();i++){
    nums[i]=temp[i-n];
  }
}
int mergeSort(vector<int> nums,int low,int high){
  int count =0;
  if(low>=high) return count;
  int mid=(low+mid)/2;
  count+=mergeSort(nums,low,mid+1);
  count+=mergeSort(nums,mid+1,high);
  count+=countPair(nums,low,mid,high);
  merge(nums,low,mid,high);
  return count;
}
int countOfPair(vector<int> nums,int low,int high){
  int n=nums.size();
  return mergeSort(nums,0,n-1);
}



































