/*
int s = 0; //+1
double prom = 0;//+1
    for (int i = 0; i < n; i++) {//1+n(1+3+3+2)+1
        s = s + A[i];//3
        prom = s / (double)n;//3
    }
printf("Suma:%d\nProm:%d", s, prom);//+2

1 + 1 + 1 + n(1 + 3 + 3 + 2) + 1 + 2 = 6 + 9n = O(n)
*/