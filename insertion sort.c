#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void delay(){ int p;
 for( p=0;p<100000;p++){
   int s=55/250;
}

}
int isort(int arr[],int n){
int i,j,v;
for(i=1;i<n;i++){
    v=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>v)
    {
        arr[j+1]=arr[j];
        j--;
        delay();
    }
    arr[j+1]=v;
}
}

int main(){
  double start,end;
  int arr[1000],n=10,i,j;
  printf("enter element to sort");
 // while( n>1000)
   for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
start=clock();
isort(arr,10);
end=clock();
  for(j=0;j<10;j++){
    printf("%d\n",arr[j]);
  }
printf("%d time= %f\n",10,(end-start)/CLOCKS_PER_SEC);
//n=n+10;
}
