#include<iostream>

using namespace std;

void quicksort(int arr[],int left,int right){
    int pivot=(left+right)/2;
    int i=left;
    int j=right;
    int temp;

    while(i<=j){
        if(arr[i]>=arr[pivot]&&arr[j]<=arr[pivot])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j--;
        }
        else if(arr[i]<arr[pivot]){
            i++;
        }
        else{
            j--;
        }
    }
    if(j>left){
        quicksort(arr,left,j);
    }
    if(i<right){
        quicksort(arr,i,right);
    }

}

int main(){
    int arr[10000];
    int left=0;
    int right;
    int m=0;

    while(cin>>arr[m]){
        if(arr[m]=='x')
        break;
        m++;

    }

    right=m-1;
    cout<<m<<endl;

    quicksort(arr,left,right);

    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }


}
