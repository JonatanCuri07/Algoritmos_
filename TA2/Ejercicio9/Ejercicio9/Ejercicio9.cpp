int max = 0;//1
for (int m = 0; m < n; m++) {//1+n(1+ +2)+1
    int cont = 0;//1
    int k = m + 1;//3
    while (vec[m] <= vec[k]) {//n
        k = k + 1;//2
        cont++;//2
    }
    if (cont > max)//1+1
        max = cont;
}
printf("Maximo %d", max);//1

1 + 1 + n(1 + (1 + 3 + n(4) + 2) + 2) + 1 + 1 = 4 + 4n ^ 2 + 9n = O(n ^ 2)