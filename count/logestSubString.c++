int longestSubString(string s){
  int hash[256]=-1;
  int n=s.size();
  int left=0;int right=0;
  int maxi=0;
  if(hash[s[left]]!=-1){
    if(hash[s[right]]==right){
      hash[s[right]]+left;
    }
    int length=right-left+1;
  maxi=max(length,maxi);
    hash[s[right]]=right;
    right++;
  }
  return maxi;
} 
