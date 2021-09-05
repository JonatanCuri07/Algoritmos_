int fact = 1;//1
for (int i = 2; i < n; i++) {//1+n(1+2+2)+1
    fact *= i;//2
}
printf("Factorial: %d", fact);//1

1 + 1 + 5n + 1 + 1 = 4 + 5n = O(n)