//test eight while
int main(){
    int a = 5, b = 5, c = 5, d = 5, e = 5, f = 5, g = 5, h = 5;
    while(a < 10){
        while(b < 10){
            while(c < 10){
                while(d < 10){
                    while(e < 10){
                        while(f < 10){
                            while(g < 10){
                                while(h < 10){
                                    h = h + 1;
                                }
                                h = h - 5;
                                g = g + 1;
                            }
                            g = g - 3;
                            f = f + 1;
                        }
                        f = f - 2;
                        e = e + 1;
                    }
                    e = e - 3;
                    d = d + 1;
                }
                d = d - 2;
                c = c + 1;
            }
            c = c - 1;
            b = b + 1;
        }
        b = b - 2;
        a = a + 1;
    }
    return a + b - c + d -e + f -g + h;
}