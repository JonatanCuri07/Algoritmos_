//14. Ordenar un arreglo de números enteros
	int arr[5] = { 1,5,4,8,0 };//1
	int temp;//1
	for (int i = 0; i < n; i++) {//1+n(1+2+14n+2)+1 = 2+14n^2+5n
		for (int j = 0; j < n - 1; j++) {//1+n(2+10+2)+1 = 2+14n
			if (arr[j] > arr[j + 1]) {//3
				temp = arr[j];//2
				arr[j] = arr[j + 1];//3
				arr[j + 1] = temp;//2
			}
		}
	}

	1+1+2+14n^2+5n = 14n^2+5n+4 = O(n^2)