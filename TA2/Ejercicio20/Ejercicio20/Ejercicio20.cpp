//20. Sumar los dígitos de un número entero positivo.

int sum = 0;//1
int dig;//1
int n;//1
cin >> n;//1
while (n != 0)//1+(6)
{
    dig = n % 10;//2
    n /= 10;//2
    sum += dig;//2
}
cout << "La suma de los digitos es: " << sum << endl;//2

13 = O(13)