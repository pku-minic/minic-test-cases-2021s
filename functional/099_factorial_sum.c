int main()
{
	int i = 0;
	int n = 1;
	int num = 0;
	int ret = 1;
	while(n<=5)
	{
		ret = ret*n;
		num = num + ret;
		n=n+1;
	}
	
	return num;
}
