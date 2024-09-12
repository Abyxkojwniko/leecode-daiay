class Solution {
const int CONST=1e9+7;
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd=0,even=1,sum=0,count=0;
        for(auto x:arr){
            sum+=x;
            if(sum%2){
                odd++;
                count=(count+even)%CONST;
            }
            else{
                even++;
                count=(count+odd)%CONST;
            }
        }
        return count;
    }
};
