//bubble sort
void bubble_sort(int arr[], int len){
        int i, j, temp;
        i = 0;
        while(i < len -1){
            j = 0;
            while(j < len - i -1){
                if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                }
                j = j + 1;
            }
        i = i + 1;
        }
}
int main() {
        int arr[14] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
        int len;
        len = 14;
        bubble_sort(arr, len);
        return arr[0];
}