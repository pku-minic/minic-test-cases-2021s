//sample function to reverse output
int main() {
	int a;
	int ge, shi, bai;
	getint(a);
	ge = a % 10;
	shi = a / 10 % 10;
	bai = a / 100;
    putint(ge);
    putint(shi);
    putint(bai);
	return 0;
}