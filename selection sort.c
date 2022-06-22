#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void delay(){ int p;
 for( p=0;p<10000;p++){
   int s=55/250;
}

}

void selection_sort(int arr[],int l){
    int i,j;
for(i=0;i<=l-2;i++){
    int min=i;
     for(j=i+1;j<=l-1;j++){
    if(arr[j]>arr[min]){
        min=j;
       delay();
       }
     }
    int temp=arr[j];
    arr[j]=arr[min];
    arr[min]=temp;
}
}
int main()
{
    int arr[101],n=10,i,k;
    double start,end;
    while(n<=100){
     for(i=0;i<n;i++){
        arr[i]= i;
    }
    start=clock();

    selection_sort(arr,n);
    end=clock();
    printf("%d time= %f\n",n,(end-start)/CLOCKS_PER_SEC);
    for(k=0;k<n;k++){
   /* printf("%d",arr[k]);*/
    }
    n=n+10;
    }
}
