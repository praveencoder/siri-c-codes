#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,count=0,dup,x,n;
	scanf("%d",&n);
	int input[n],output[n];
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	
	for(i=0;i<n;i++){
	x=input[i];
	count=0;
		for(j=0;j<n;j++)
		{
			if(x==input[j])
			{
				count++;
				output[count]=j;
			}
		}
		if(count>1){
			dup=x;
			printf("Similar element : %d\n",x);
			printf("Positions: ");
			int z;
			for(z=0;z<count;z++)
				printf("%d ",output[count]+1);
			printf("\nOccurence: %d\n",count);
			input[i]=0;
		}
	}
	
}
