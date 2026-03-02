class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n=nums.size();
        long long sumOfNatural = ((n * (n+1)) / 2);
        long long sequreOfNatural = ((n * (n+1) * (2*n+1)) / 6);
        long long sum=0;
        long long sequer=0;
        for(int i=0;i<n;i++){
            sum +=nums[i];
            sequer += (long long) nums[i]*(long long) nums[i];
        }
        long long val1 = sum-sumOfNatural;
        long long val2 = sequer-sequreOfNatural;
        val2 = val2/val1;
        int x = (val1+val2)/2;
        int y = x-val1;
        return {(int)x,(int)y};
    }
    
};