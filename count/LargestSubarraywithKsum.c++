int LargestSubarraywithKsum(vector<int> arr){
  int n=arr.size();
  int sum=0;
  int maxi=0;
  map<long long> presum;
  for(int i=0;i<n;i++){
    sum+=arr[i]
      if(sum==k){
      maxi=max(maxi,i+1);
      }
  }
  int rem=sum-k;
  if(presum.find(rem)!=presum.end()){
    int len=i-presum[rem];
    maxi=max(maxi,len);
  }
  if(presum.find(sum)==presum.end()){
    presum[sum]=i;
  }
  return maxi;
}
