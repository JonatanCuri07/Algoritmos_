//22. Determinar la cantidad de primos que existen en un arreglo de enteros.

int arr[5] = { 7,1,2,1,5 };//1
int n = 5, primos = 0;//2

for (int i = 0; i < n; ++i)//1+n(1+9n+2+2)+1
{
    for (int j = 2; j < arr[i]; ++j)//1+n(2+5+2)+1
    {
        if (arr[i] % j == 0)//3+2
        {
            primos++;
            break;
        }
    }
}
primos = n - primos;//2
cout << "El numero de primos es " << primos;//2

5n + 9n ^ 2 + 9 = O(n ^ 2)