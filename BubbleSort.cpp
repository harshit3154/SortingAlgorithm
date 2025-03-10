#include <iostream>
#include <vector>

using namespace std;
void bubbleSort(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j+1],nums[j]);
            }
        }
    }
}

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the array are : ";
    for(auto it:nums){
        cout<<" "<<it;
    }
}

int main(){
    vector<int> nums{4,5,6,2,1,3};
    display(nums);
    bubbleSort(nums);
    display(nums);
}