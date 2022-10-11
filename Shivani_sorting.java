public class SortingAlgos {
    public static void main(String[] args) {
        int[] arr= {7,8,3,1,2,5,6};
//        bubbleSortInc(arr);
//        bubbleSortDec(arr);
//        selectionSort(arr);
        insertionSort(arr);
    }

    public  static  void  insertionSort(int[] arr)
    {
//        considering that array os divided into two parts
//        sorted , unsorted
//        sorted is of length 1 only
//        traverse th unsorted part of array
        for(int i=1;i< arr.length;i++)
        {
            int current =arr[i];
            int j = i-1;

            while (j>=0 && current< arr[j]){
//                copy the elements to j+1;
                arr[j+1]= arr[j];
                j--;
            }

            arr[j+1] = current;
        }
        display(arr);
    }
    public static void selectionSort(int[] arr)
    {
        for(int i=0;i< arr.length-1;i++)
        {
            int smallIdx= i;
            for(int j= i+1;j< arr.length;j++)
            {
                if(arr[smallIdx]>arr[j])
                {
                    smallIdx=j;
                }
            }

            int temp= arr[smallIdx];
            arr[smallIdx]= arr[i];
            arr[i]= temp;

        }
        display(arr);
    }
    public static  void  bubbleSortInc(int[] arr)
    {
        for(int j=0;j< arr.length-1;j++) {
            for (int i = 0; i < arr.length - 1-j; i++) { //because we can skip last sorted values
                if (arr[i] > arr[i + 1]) {
                    int temp = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        display(arr);
    }

    public static  void  bubbleSortDec(int[] arr)
    {
        for(int i=0;i<arr.length-1;i++)
        {
            for(int j=0;j< arr.length-1-i;j++)
            {
                if(arr[j+1]>arr[j])
                {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        display(arr);
    }

    public static void display(int[] arr)
    {
        for(int i=0;i< arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }

}
