#include <iostream>
#include <vector>

using namespace std;
void selectionSort(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int min_index=i;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]<nums[min_index]){
                min_index=j;
            }
        }
        swap(nums[i],nums[min_index]);
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
    selectionSort(nums);
    display(nums);
}