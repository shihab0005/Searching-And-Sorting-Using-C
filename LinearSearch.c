//Linear search.

#include<stdio.h>

int main(){
	
	int i, item ,n;
	printf("Enter How Many Item You Insert :");
	scanf("%d",&n);
	printf("Enter %d item \n",n);
	int  arr[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Please Insert item you Want to find :");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(arr[i]==item){
			printf("your finding Item is %d position",i+1);
		}
		
			//printf("%d not find in the list",item);	
	}
		printf("%d not find in the list",item);
}
