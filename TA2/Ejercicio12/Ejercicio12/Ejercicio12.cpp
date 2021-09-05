int inf = 0;//1
int sup = n - 1;//2
int pos = -1;//1
while ((pos == -1) && (sup >= inf)) {//log(n)+1+1+1+
    int medio = (inf + sup) / 2;//2
    if (arreglo[medio] == 80)//1+(1)
        pos = medio;//1
    else if (arreglo[medio] < 80)//2+2
        inf = medio + 1;//2
    else
        sup = medio - 1;//2
}

4 + log(n) + 3 + 4 = 11 + log(n) = O(log(n))