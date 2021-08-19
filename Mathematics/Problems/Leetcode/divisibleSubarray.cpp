class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> c(k,0);
        int sum=0;
        for(int i: nums){
            sum += ((i%k) + k ) % k;
            c[sum%k]++;  //storing modulo
}
        int result = c[0];
        for(int i: c)
            result += (i*(i - 1)) / 2;
        return result;
    }
};