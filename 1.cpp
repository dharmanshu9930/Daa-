import java.util.Scanner;
public class QuickSortInDescendingOrder
{
    int arr[];
    int len=0;
    int i=0;
    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Limit of the array:");
        len=sc.nextInt();
        arr=new int[len];

        for(i=0;i< len;i++)
        {
            System.out.print("Enter the Number:");
            arr[i]=sc.nextInt();
        }
    }

    public int partition(int arr[],int lowerBound,int upperBound)
    {
        int pivot=arr[lowerBound];
        int start=lowerBound;
        int end=upperBound;
        int temp=0;
        while(start< end)
        {
            while(start< len && arr[start]>=pivot)
            {
                start++;
            }
            while(arr[end]< pivot)
            {
                end--;
            }
            if(start< end)
            {
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
            }
            else
            {
                temp=arr[lowerBound];
                arr[lowerBound]=arr[end];
                arr[end]=temp;

            }
        }
        return end;
    }

    public void quickSort(int arr[],int lb,int ub)
    {
        if(lb< ub)
        {
            int location=partition(arr,lb,ub);
            quickSort(arr,lb,location-1);
            quickSort(arr,location+1,ub);
        }
    }

    public void display()
    {

        for(i=0;i< len;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static void main()
    {
        QuickSortInDescendingOrder ob1=new QuickSortInDescendingOrder();
        ob1.accept();
        System.out.println("Unsorted Array");
        ob1.display();

        ob1.quickSort(ob1.arr,0,ob1.len-1);
        System.out.println("Sorted Array");
        ob1.display();

    }
}