#include<stdio.h>

int main(){
	
	int n,i,min,temp,j;
	printf("Enter the size of Array :");
	scanf("%d",&n);
	printf("enter %d value :\n",n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++){
		min =i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp =arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("After Selection Sort :\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}
