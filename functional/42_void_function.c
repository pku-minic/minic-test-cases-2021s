//test void function
int a;
a = 3;
void f(){
    a = 5;
}
int main(){
    f();
    return a;
}