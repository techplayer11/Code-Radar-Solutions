#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
return 0;
}
int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        iacanf("%d",&k);
        k=k%n; 
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        for(int i=0;i<=n;i++){
            printf("%d ",arr[i]);
        }
        return  0;
}