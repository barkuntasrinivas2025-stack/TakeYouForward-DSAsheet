int dupllicateNum(vector<int> arr){
  int n=arr.size();
  vector<int> feq(n+1,0);
  for(int i=0;i<n;i++){
    if(feq[arr[i]]==0) ferq[arr[i]]+=1;
    else return arr[i];
  }
  return 0;
}
