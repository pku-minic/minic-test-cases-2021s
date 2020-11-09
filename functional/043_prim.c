//sample function of prim
//输出1-100的所有素数
int main(){
    int cnt, i, flag;
    cnt = 0;
    i = 2;
    flag = 1;
    while(i <= 100){
        flag = 1;
        int j = 2;
        while (j * j < i){
            if(i % j == 0){
                flag = 0;
                break;
            }
            j = j + 1;
        }
        if(flag == 1){
            cnt = cnt + 1;
        }
        i = i + 1;
    }
    return cnt;
}