#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){result.push_back(i); result.push_back(j);}
            }
        }
        //cout << result[0] << " " << result[1];
        return result;
    }
};

//Hello

int main(){
    int n, num; cin >> n;
    vector <int> nums;
    for(int i = 0; i<n;i++){cin >> num; nums.push_back(num);}

    int target; cin >> target;

    Solution S1;
    S1.twoSum(nums,num);
}


