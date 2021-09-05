//19. Calcular cuántas veces se repite un número X en un arreglo de enteros.

int arr[5] = { 1,5,5,5,0 };//1
int elem;//1
cin >> elem;//1
int n = 5;//1
int cont = 0;//1
for (int i = 0; i < n; i++)//1+n(1+4+2)+1
{
	if (elem == arr[i])//2+2
	{
		cont++;//2
	}
}
cout << "\nEl numero de veces que se repite es " << cont;//2

9 + 7n = O(n)