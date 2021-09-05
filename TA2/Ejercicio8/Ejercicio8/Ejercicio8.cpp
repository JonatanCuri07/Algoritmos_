int pos = 0;//1
for (int i = 1; i < n; i++) {//1+n(1+3+1+2)+1
    if (vec[i] > vec[pos])//3
        pos = i;//1
}
printf("El mayor es: %d", vec[pos]);//1


1 + 1 + 7n + 1 + 1 = 7n + 4 = O(n)