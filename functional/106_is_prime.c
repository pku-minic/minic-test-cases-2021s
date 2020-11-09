int a;

int main(){
	int i;
	int flag;
	a=57;
	i=2;
	flag=1;
	while(i<a)
	{
		if(a%i==0)
		{
			flag=0;	
			break;
		}
		i=i+1;
	}
	return flag;
}
