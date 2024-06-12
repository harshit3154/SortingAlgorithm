#include <iostream>

using namespace std;

void merge(int *p,int l,int r,int mid){
    int n1=mid-l+1;
    int n2=r-mid;
    int *L=new int[n1];
    int *R=new int[n2];
    for(int i=0;i<n1;i++)
        L[i]=p[l+i];
    for(int i=0;i<n2;i++)
        R[i]=p[mid+i+1];
    int i=0,j=0,f=l;
    while(i<n1 && j<n2){
        p[f++]=(L[i]<R[j])?L[i++]:R[j++];
    }
    while(i<n1){
        p[f++]=L[i++];
    }
    while(j<n2)
        p[f++]=R[j++];
}

void display(int *p,int n){
    cout<<"\n\n\t\tThe element of the array are \n\n\t\t: ";
    for(int i=0;i<n;i++){
        cout<<p[i]<<"\t";
    }
}

void merg1(int *p,int l,int r,int mid){
	display(p,3);
	int m=l;
	int n1=mid-l+1;
	int n2=r-mid;
	
	int i=0,j=0;
	
	while(i<n1 && j<n2){
		p[m++]=min(p[l],p[mid+1]);
		if(p[l]<p[mid+1]){
			l++;
			i++;
		}else{
			mid++;
			j++;
		}
	}
	
	while(i<n1){
		p[m++]=p[l++];
		i++;
	}
	while(j<n2){
		p[m++]=p[mid++];
		j++;
	}
	
}

void mergeSort(int *p,int l,int r){
    if(l<r){

        int mid=l+(r-l)/2;
        mergeSort(p,l,mid);
        mergeSort(p,mid+1,r);
        merg1(p,l,r,mid);
    }
    display(p,3);
}

int main(){
    int ar[]={5,4,6};
    int n=sizeof(ar)/sizeof(ar[0]);
    display(ar,n);
    mergeSort(ar,0,n-1);
    display(ar,n);
    return 0;
}
