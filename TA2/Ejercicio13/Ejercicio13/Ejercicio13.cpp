//13. Encontrar el número mayor en un arreglo de enteros

	int arr[5] = { 1,5,4,8,0 };//1
	int mayor = -99;//1
	for (int i = 0; i < n; i++)//1+n(1+4+2)+1
	{
		if (arr[i]>mayor)//2
		{
			mayor = arr[i];//2
		}
	}
	cout << mayor;//1

1 + 1 + 1 + 7n + 1 + 1 = 5 + 7n = O(n);