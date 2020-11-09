int main()
{
    int i,j,k;
    i=1;
    while(i<=9)
    {
    	j=1;
        while(j<=i)
    	{
    		int tmp=i*j;
    		putint(i);
    		putchar(42);
    		putint(j);
			putchar(61);
			putint(tmp);
			putchar(10);
            j=j+1;
        }
        i=i+1;
    }
    return 0;
}
