#include <iostream>
#include <vector>

using namespace std;
void insertionSort(vector<int> &nums){
    for(int i=1;i<nums.size();i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
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
    insertionSort(nums);
    display(nums);
}