int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int t = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = t;
    }
    return 0;
}