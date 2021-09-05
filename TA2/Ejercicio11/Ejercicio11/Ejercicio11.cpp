int i = 1;//1
while (i < n) {//1+log2(n)
    if (vec[i] % 2 == 0)//3
        n = n / 3;//2
    else
        n = n / 2;//2
}

1 + 1 + log2(n) + 3 = 5 + log2(n) = O(log(n))