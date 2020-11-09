//test is leap year
int main(){
    int year;
    year = 2020;
    return (year % 400 == 0 || (year % 4 == 0) && (year % 100 != 0));
}