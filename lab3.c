#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,x;
	scanf("%d",&n);
	int input[n],output[n];
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	scanf("%d",&x);
	for( i=0;i<n;i++){
		input[i]*=x;
	}
	for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (input[i] < input[j]) 
                {
                    int a = input[i];
                    input[i] = input[j];
                    input[j] = a;
                }
            }
        }
	for(i=0;i<n;i++){
		printf("%d ",input[i]);}
return 0;
}
	
