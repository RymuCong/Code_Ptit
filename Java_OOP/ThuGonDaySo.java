import java.util.Scanner;
import java.util.Stack;

public class ThuGonDaySo {
    public static int reduceArray(int[] arr) {
        Stack<Integer> stack = new Stack<>();
        for (int num : arr) {
            if (!stack.isEmpty() && (stack.peek() + num) % 2 == 0) {
                stack.pop();
            } else {
                stack.push(num);
            }
        }
        return stack.size();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++)
            A[i] = sc.nextInt();
        int remainingElements = reduceArray(A);
        System.out.println(remainingElements);
    }
}
