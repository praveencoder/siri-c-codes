#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,i,j,n,x,count=0;
	scanf("%d",&sum);
	scanf("%d",&n);
	if(n>50)
		printf("Array size exceed!");
	else{
	int input[n];
	for( i=0;i<n;i++){
		scanf("%d",&input[i]);
	}

	for(i=0;i<n;i++){
		x=input[i];
		for(j=i+1;j<n;j++){
			if(x+input[j]==sum)
				count++;
		}
	}
	if(count>0)
	printf("%d",count);
		else
	printf("no pairs found!");
}
}
