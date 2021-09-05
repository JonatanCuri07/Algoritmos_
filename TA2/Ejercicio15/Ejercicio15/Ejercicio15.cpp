//15. Eliminar el elemento en una posicion de un arreglo

int arr[5] = { 1,5,4,8,0 };//1
	int pos;//1
		for (int i = 0; i < n; i++)//1+n(1+7+2)+1 = 2+10n
		{
			if (i == pos)//1+
			{
				while (i<n)//1+5
				{
				arr[i] = arr[i+1];//3
				i++;//2
				}
			}
		}
		n--;//2

		10n + 6 = O(n);