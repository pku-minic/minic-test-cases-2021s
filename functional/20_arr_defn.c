//test array define
int main(){
    int a[4][2] = {};
    int b[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    int c[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int d[4][2] = {1, 2, {3}, {5}, 7 , 8};
    int e[4][2] = {{d[2][1], c[2][1]}, {3, 4}, {5, 6}, {7, 8}};
    return e[3][1];
}