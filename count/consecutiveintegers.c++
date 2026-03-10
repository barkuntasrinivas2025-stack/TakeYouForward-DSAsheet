int consecutiveintegers(vector<int> arr){
  int n=arr.size();
  if(n==0) return 0;
  int longest=1;
  unorder_set<int> st;
  for(int i=0;i<n;i++){
    st.insert(arr[i]);
  }
  for(auto it:st){
    if(st.find(it-1)==st.end()){
      int count =1;
      int x =it;
    }
    while(st.find(x+1)!=st.end()){
      count+=1;
      x+=1;
    }
      longest=max(longest,count);
  }
return longest;
}
