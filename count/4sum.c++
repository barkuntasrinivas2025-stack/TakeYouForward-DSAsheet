int(vector<int> nums,int target){
int n=nums.size();
  vector<int> ans;
  for(int i=0;i<n;i++){
    if(i>0 && nums[i]==num[i-1]) continue;
    for(int j=i+1;j<n;j++){
      if(j>i+1 && nums[j]==num[j-1]) continue;
      int k=j+1;
      int l=n-1;
      long long sum += nums[i];
      sum += nums[j];
      sum +=nums[k];
      sum += nums[l];
      while(l>k){
      if(sum == target){
        int temp sum += nums[i],nums[j],nums[k],nums[l]};
      ans.push_back(temp);
        if(k!=j+1 && nums[k]==nums[k-1]) k++;
        if(l<n && nums[l]==nums[l+1]) l++;
    }
    else if(sum>targe) {
      l--;k++;
    }
  }
}
  return ans;
}
