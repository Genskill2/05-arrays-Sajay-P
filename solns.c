/* Enter your solutions in this file */
#include <stdio.h>
float average(int x[], int y)
{
	float avg=0.0;
	int sum=0;
	for(int i=0;i<y;i++)
	{
		sum+=x[i];
	}
	avg= (float)sum/y;
	
	return avg;

}

int max(int x[], int y)
{
	int max=x[0];
	for(int i=0;i<y;i++)
	{
		if(x[i]>max)
			{
				max=x[i];
			}
	}
	return max;
}

int min(int x[], int y)
{
	int min=x[0];
	for(int i=0;i<y;i++)
	{
		if(x[i]<min)
			{
				min=x[i];
			}
	}
	return min;
}

int mode(int x[], int y)
{	
	int cntmax=0, elem=0;
	for(int i=0;i<y;i++)
	{
		int count=0;
		for(int j=0;j<y;j++)
		{
			if(x[j]==x[i])
				count++;
		}
		if(count>cntmax)
			{
				cntmax=count;
				elem=x[i];
				//printf("count:%d\tcntmax:%d\t",count,cntmax);
			}
	}
	//printf("elem%d",elem);
	return elem;
}

int factors(int x, int y[])
{
	int temp=x;
	int count=0;
	do
	{	//printf("here");
		for(int i=2;i<=temp;i++)
		{
			if(temp%i==0)
			{
				int cnfac=0;
				for(int j=2;j<=i/2;j++)
				{
					if(j%i==0)
					{
						cnfac++;
						//printf("cnfac:%d\t",cnfac);
					}
				}
				if(cnfac==0)
				{
					count++;
					y[count-1]=i;
					temp/=i;
					//printf("count:%d\ttemp:%d\n",count,temp);
					break;
				}
				else continue;
			}
		}
	}while(temp>1);
	/*for(int i=0;i<count;i++)
		printf("%d\t",y[i]);	*/		
return count;		
}
