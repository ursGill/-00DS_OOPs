#include<stdio.h>

int linear_srch(int arr[],int size,int n){
    
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return i+1;
        }
    }return -1;

}

int main(){
    int nm;
    int ar[] = {2,1,4,66,5,3};
    int sz = sizeof(ar)/sizeof(ar[0]);
    printf("Enter Number: ");
    scanf("%d",&nm);
    int loc = linear_srch(ar,sz,nm);
    if(loc==-1){
        printf("Element is not found!");
    }else{
    printf("Element is found at %d",loc);

    }
    return 0;
}
