void sort(int* arr, int n)
{
    int tmp = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int minPosition = i;
        for (int j = i; j < n; ++j)
        {
            if (arr[minPosition] > arr[j])
                minPosition = j;
        }
        if (i != minPosition)
        {
            tmp = arr[i];
            arr[i] = arr[minPosition];
            arr[minPosition] = tmp;
        }
    }
}
