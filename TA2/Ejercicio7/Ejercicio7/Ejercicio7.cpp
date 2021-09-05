int pos = -1;//1
for (int i = 0; i < n; i++) {//1+n(1+3+2)+1
    if (strcmp(vec[i], cadBuscar) == 0) {//1+1+1
        pos = i;//1
        break;
    }
}

1 + 1 + 6n + 1 = 6n + 3 = O(n)