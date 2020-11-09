//insert a number in a sorted array
int main(){
    int a[11]={1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int temp1, temp2, number, end, i, j;
    number = 10;
    end = a[9];
    if(number > end)
        a[10] = number;
    else{
        i = 0;
        while(i < 10){
            if(a[i] > number){
                temp1 = a[i];
                a[i] = number;
                int j = i + 1;
                while(j < 11){
                    temp2=a[j];
                    a[j]=temp1;
                    temp1=temp2;
                    j = j + 1;
                }
                break;
            }
            i = i + 1;
        }
    }
    return a[4];
}