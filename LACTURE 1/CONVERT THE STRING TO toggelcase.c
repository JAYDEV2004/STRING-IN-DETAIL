#include<stdio.h>
int main()
{
	char name[] = "jaYDEv";

	int i;
	
	for(i=0;i<6;i++)
	{  
	 
		if(name[i]>='A'  &&  name[i]<='Z')
		{
			printf("%c",name[i]+32);
		}
		else
		{
			printf("%c",name[i]-32);
		}
	}
	return 0;
}

