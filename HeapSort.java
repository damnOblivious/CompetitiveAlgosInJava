public class HeapSort {

    public static void maxHeapify(int[] arr, int size, int parent) {
        int left = 2 * parent;
        int right = left + 1;
        int largest = parent;
        if (left < size && arr[left] > arr[largest])
            largest = left;
        if (right < size && arr[right] > arr[largest])
            largest = right;
        if (largest != parent) {
            int temp = arr[parent];
            arr[parent] = arr[largest];
            arr[largest] = temp;
            maxHeapify(arr, size, largest);
        }
    }

    public static void heapSort(int[] arr) {
        for (int i = arr.length / 2 - 1; i >= 0; --i) maxHeapify(arr, arr.length, i);

        for (int i = arr.length - 1; i >= 0; --i) {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            maxHeapify(arr, i, 0);
        }
    }

    public static void main(String[] args) {
        int[] arr = new int[] {10, 4, 3, 13, 1, 123};
        heapSort(arr);
        for (int element : arr) System.out.print(element + " ");
    }
}
