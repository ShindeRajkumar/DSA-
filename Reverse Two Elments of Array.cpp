#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    if(size%2==0){          // for even length of Array
    for(int i=0;i<size;i++){
        swap(arr[i],arr[i+1]);
        i=i+1;
    }                                                                // for even and odd length you can use
                                                                       //     if(i+1<size) then swap
    }
    else{          //for odd length of Array
        for(int i=0;i<size-1;i++){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int Arr[100];
cout<<"Enter the elements of Array: ";
//input the elements of Array 
    for(int i=0;i<size;i++){
        cin>>Arr[i];
    }
    reverse(Arr,size);   // fisrt we call the reverse function due to this array will be reversed
    cout<<"print the Reverse Array: ";
    printarray(Arr,size);// now we print the reversed Array
}
