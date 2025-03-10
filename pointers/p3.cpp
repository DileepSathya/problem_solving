//Squares of a Sorted Array
//https://leetcode.com/problems/squares-of-a-sorted-array/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int temp;

            for(int i=0; i<nums.size();i++){
                nums[i]= nums[i]*nums[i];
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=nums[i+1]){
                    temp=nums[i+1];
                    nums[i+1]=nums[i];
                    nums[i]=temp;
                }
            }
            return nums;
            
        }
    };


int main(){
    Solution sol;
    vector<int> arr={-4,-1,0,3,10};

    vector<int>result=sol.sortedSquares(arr);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    }
