#include <iostream>
using namespace std;
int getmax(int arr[],int size){
    int max=INT16_MIN;
     for(int i = 0; i<size; i++) {
    if(arr[i]>max){
      max=arr[i];
    }
    }
    return max;
}
int getmin(int arr[],int size){
    int min=INT16_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
        min=arr[i];
    }
    }
    return min;
}
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of Array: ";
    // taking Array as input
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"maximun value is: "<< getmax(arr,size)<<endl;
    cout<<"minimun value is: "<< getmin(arr,size);    
}
