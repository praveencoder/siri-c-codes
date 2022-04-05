#include<stdio.h>
#include<conio.h>
#include<stdbool.h>  

int main()
{
	int i,sum=0,low=99999,peak=0,rainfall[12],low_mon,peak_mon;
	bool invalid=false;
	for(i=0;i<12;i++){
	scanf("%d",&rainfall[i]);
	sum+=rainfall[i];
	if(rainfall[i]<0)
		invalid=true;
	if(rainfall[i]<low)
	{
		low=rainfall[i];
		low_mon=i+1;
		}	
	if(rainfall[i]>peak)
		{
		peak=rainfall[i];
		peak_mon=i+1;
		}
	}
	if(!invalid)
	{
		printf("Total rainfall : %d\n",sum);
		printf("Average rainfall : %d\n",(sum/12));
		printf("Lowest rainfall : %d\n",low_mon);
		printf("Highest rainfall : %d\n",peak_mon);
		
	}
	else
	printf("Invalid input");return 0;
}
