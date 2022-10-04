package leetcode.array.easy;

import java.util.*;

public class questions1 {
    public static void main(String[] args) {
        int[] arr = {437,315,322,431,686,264,442};
        System.out.println(findNumbers(arr));
    }

//    static boolean checkIfPangram(String sentence) {
//        boolean ans = false;
//        for (char i = 'a'; i <= 'z'; i++) {
//            ans = false;
//            for (int j = 0; j < sentence.length(); j++) {
//                if (sentence.charAt(j) == i) {
//                    ans = true;
//                    break;
//                }
//            }
//            if (!ans) {
//                return ans;
//            }
//        }
//        return ans;
//    }

//    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
//        int ans = 0;
//        switch (ruleKey) {
//            case "color":
//                for (int i = 0; i < items.get(0).size(); i++) {
//                    if (Objects.equals(items.get(i).get(1), ruleValue)) {
//                        ans++;
//                    }
//                }
//                break;
//            case "type":
//                for (int i = 0; i < items.get(0).size(); i++) {
//                    if (Objects.equals(items.get(i).get(0), ruleValue)) {
//                        ans++;
//                    }
//                }
//                break;
//            case "name":
//                for (int i = 0; i < items.size(); i++) {
//                    if (Objects.equals(items.get(i).get(2), ruleValue)) {
//                        ans++;
//                    }
//                }
//                break;
//            default:
//                return 0;
//        }
//        return ans;
//    }

//    static int largestAltitude(int[] gain) {
//        int max = 0;
//        int l = 0;
//        for (int i = 0; i < gain.length; i++) {
//            l = l + gain[i];
//            if (l > max){
//                max = l;
//            }
//        }
//        return max;
//    }


//    static int[] twoSum(int[] nums, int target) {
//        for (int i = 0; i < nums.length; i++) {
//            for (int j = i + 1; j < nums.length; j++) {
//                if (target == nums[i] + nums[j]){
//                    return new int[] {i,j};
//                }
//            }
//        }
//        return new int[] {-1,-1};
//    }

//    static int[] addToArrayForm(int[] num, int k) {
//        List<Integer> a = new ArrayList<>();
//        while (k>0){
//            int c = k%10;
//            a.add(c);
//            k = k/10;
//        }
//        int[] arr = new int[a.size()];
//        for (int i = 0; i < a.size(); i++) {
//            arr[i] = a.get(i);
//        }
//        for (int i = 0; i<a.size(); i--) {
//            num[num.length - i-1] +=  arr[i];
//        }
//        return num;
//    }
//    static int[][] transpose(int[][] matrix){
//        int i = 0;
//        int[][] arr2 = new int[matrix.length][matrix[0].length];
//        while(i<matrix.length){
//            for (int j = 0; j <matrix[0].length ; j++) {
//                arr2[i][j] = matrix[j][i];
//            }
//            i++;
//        }
//
//        return arr2;
//    }

    static int findNumbers(int[] nums) {
        int a = 0;

        for (int i = 0; i < nums.length; i++) {
            int l = 0;
            while(nums[i] > 0){
                nums[i] /= 10;
                l++;
            }
            if (l%2==0){
                a++;
            }
        }
        return a;
    }
}
