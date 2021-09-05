int i = 1;//1
while (i < n) {//1+log2(n)+3
    if (vec[i] % 2 == 0)//3
        i *= 3;//2
    else
        i *= 2;//2
}
5 + log2(n) = O(log(n))
