//21. Determinar si un número es primo o no.

int n, div = 0;//2
cin >> n;//1

for (int i = 1; i <= n; ++i)//1+n(1+4+2)+1
{
    if (n % i == 0)//+2
    {
        div++;//+2
    }
}
if (div == 2)//1+1
cout << "Es primo";//1
else cout << "No es primo";//1

7 + 7n = O(n)