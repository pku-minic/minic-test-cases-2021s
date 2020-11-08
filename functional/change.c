int m[4]={20,10,5,1};
int k;
void putint(int i);
void putchar(int i);

void greedMoney(int n){
	int i;
	i=0;
	while(i<k)
	{
		while(n>=m[i]){
			putint(m[i]);
			putchar(32);
			n=n-m[i];
		}
		i=i+1;
	}

}

int main(){
	k=4;
	greedMoney(40);
	return 0;
}
