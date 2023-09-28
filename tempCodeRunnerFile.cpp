#include<iostream>
using namespace std;

bool linearsearch(int arr[],int search){
    int sum=0;
    for(int i=0;i<5;i++){
        if(arr[i]==search){
            return true;
        }
        
            
        }
        return false; 
}






int main(){
    int n;
    int search;
    int arr[5]={1,2,3,4,5};
    cout<<"Enter the number to be searched:\n";
    cin>>search;
    bool searching= linearsearch(arr,search);
    if(searching){
cout<<"Element is present";

    }
    else{
        cout<<"Not present";
    }


    
 return 0;
}
