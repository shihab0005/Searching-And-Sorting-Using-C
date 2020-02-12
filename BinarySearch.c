#include<stdio.h>
int main(){
	
	int i,low,mid,high,n,key;
	
	printf("How Many Value you Insert :");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d Sorted Element :\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter value you want to search :");
	scanf("%d",&key);
	low=0, high=n-1;
	int found =0;
	while(low<=high)
	{
		mid =(low+high)/2;
	
	if(key==a[mid]){
		printf("Your Searching Value at %d position ",mid+1);
		found =1;
		break;
	}
	else if(key>a[mid]){
		low =mid+1;
	}
	else if(key<a[mid]){
		high =mid-1;
	}
		
	}
	if(found==0){
		printf("Not found !!");
	}
	
	
}
