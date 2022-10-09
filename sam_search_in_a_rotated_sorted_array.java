package sorting_and_searching;

public class search_in_rotated_sorted_array {
	public static void main(String[] args) {
		int[] arr = { 3, 4, 5, 1, 2 };
//	int[] arr = {1,2,3,4,5,6};
		System.out.println(search(arr, 0, arr.length - 1, 2));
	}

	public static int search(int[] arr, int start, int end, int ele) {
		int s = start;
		int e = end;
		if (e >= s) {
			int mid = s + (e - s) / 2;
			if (arr[mid] == ele) {
				return mid;
			} else {
				if (arr[mid] >= arr[s]) {
					if (arr[s] <= ele && arr[mid] >= ele) {
						return search(arr, s, mid, ele);
					} else {
						return search(arr, mid + 1, e, ele);
					}
				} else {
					if (arr[mid] <= ele && arr[e] >= ele) {
						return search(arr, mid + 1, e, ele);
					} else {
						return search(arr, 0, mid, ele);
					}
				}

			}
		}
		return -1;
	}
}
