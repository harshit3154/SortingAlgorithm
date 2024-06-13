#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int counter(vector<int> &nums,int s,int e){
	
	int pivot=nums[s],count=0;
	for(int i=s;i<=e;i++){
		if(nums[i]<pivot)
			count++;
	}
	int pivot_index=s+count;
	swap(nums[s],nums[pivot_index]);
	while(s<pivot_index && e>pivot_index){
		while(nums[s]<pivot)
			s++;
		while(nums[e]>pivot)
			e++;
		if( s<pivot_index && e>pivot_index){
			swap(nums[s++],nums[e--]);
			
		}
	}
	
}

void QuickSort(vector<int> &nums,int s,int e){
	if(s>=e) 	return;
	int p=counter(nums,s,e);
	if(p==-1)
		return;
	QuickSort(nums,s,p-1);
	QuickSort(nums,p+1,e);
}

void display(vector<int> &nums,int s,int e){
	for(int i=0;i<n)
	cout<<endl;
}
int main(){
	vector<int> v={2,4,3,5,6,85,47,59,84,58};
	display(v);
	QuickSort(v,0,v.size()-1);
	display(v);
	return 0;
}
