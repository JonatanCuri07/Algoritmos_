for (int i = 0; i < n - 1; i++) {//1+n[2+{2+n(1+8+2)+1}+1+2]
    for (int k = i + 1; k < n; k++) {
        if (vec[i] > vec[k])//1+(7)
        {
            int aux = vec[i];//2
            vec[i] = vec[k];//3
            vec[k] = aux;//2
        }
    }
}

1 + n[2 + {2 + n(1 + 8 + 2) + 1} + 1 + 2] = 11n ^ 2 + 11n + 1 = O(n ^ 2)