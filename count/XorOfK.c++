int(vector<int> &nums,int k){
  int n=nums.size();
  int xr=0;
  map<lon long> mpp;
  mpp[xr]++;
  int count=0;
  for(int i=0;i<n;i++){
    xr=xr^nums[i];
    int x=k^xr;
    count +=mpp[x];
    mpp[xr]++;
  }
  return count;
}
