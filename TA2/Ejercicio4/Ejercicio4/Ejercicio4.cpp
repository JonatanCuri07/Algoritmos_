int frec[101] = { 0 };//1
for (int i = 0; i < n; i++) {//1+n(1+3+2)+1
    frec[vec[i]]++;//3
}
int pos = 0;//1
for (int i = 0; i < 101; i++) {//1+[1+(1+(2+2+2+2)+1)+2]
    for (int k = 0; k < frec[i]; k++) {
        vec[pos] = i;//2
        pos++;//2
    }
}

6n + 16 = O(n)