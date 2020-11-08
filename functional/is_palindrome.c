int main()
{
	int number,original,remainder;	
	int now=0;
	int flag;
	number=12344321;	
	original=number;	
	while(number!=0)	
	{	
	       remainder=number%10;	
	       now=now*10+remainder;	
	       number=number/10;	
	}	
	if(original==now)
	{
		flag=1;
	}	
	else
	{
		flag=0;
	}
	return flag;

}
