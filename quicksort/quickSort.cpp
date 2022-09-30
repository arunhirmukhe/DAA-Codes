#include<iostream>

using namespace std;

class quickSort{
    public:
        void Quicksort(int arr[],int l,int r);
        int partition(int arr[],int l,int r);
        void swap(int arr[],int i,int j);
};

void quickSort::swap(int arr[],int i,int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}

int quickSort::partition(int arr[],int l,int r){
    int pivot = arr[r];  //r is right pointer
    int i = l -1;      // pointer i will pointing to previous of start

    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }

    swap(arr,i+1,r);
    return i+1;
}

void quickSort::Quicksort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);

        Quicksort(arr,l,pi-1);
        Quicksort(arr,pi+1,r);
    }
}


int main(){
    quickSort q1;
    int arr[] = {9,1,6,2,8,3,7,4,5};
    cout<<"Before sort:-"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    q1.Quicksort(arr,0,9);

    cout<<"After sort:-"<<endl;

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}