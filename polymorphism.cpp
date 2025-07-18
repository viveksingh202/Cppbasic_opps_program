#include<iostream>
using namespace std;
int getmin(int arr[], int size){
    int mn=INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
       
    }
    return mn;

}
int getmax(int arr[], int size){
    int mx=INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
        
    }
    return mx;
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[100];
    cout<<"enter array element: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"print array element: ";
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"maximum element is "<<getmax(arr,size);
    cout<<endl;
    cout<<"mininmum element is "<<getmin(arr,size);

}