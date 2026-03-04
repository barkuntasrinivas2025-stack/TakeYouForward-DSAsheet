int mergeSort(vector<vector<int>> arr,int low,int high)
{
  int mid=(low+high)/2;
  if(low<=high)
  {
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high,mid);
  }
}
int merge(vector<vector<int>> arr,int low,int high,int mid){
  int left=arr[low];
  int right = mid+1;
  vector<vector<int>> temp;
 while(left<=midt&&right<=high)
 {
  if(arr[left]<=arr[right]){
    temp.push_back(arr[left]);
    left++;
  }
   else{
     temp.push_back(arr[right]);
     right++;
   }
   while(left<=mid){
    temp.push_back(arr[left]);
    left++;
   }
   while(right<=high){
     temp.push_back(arr[right]);
     right++;
   }
}
int main(vector<vector<int>> arr){
  int n=arr.size();
  return mergeSort(arr,0,n-1);
}
