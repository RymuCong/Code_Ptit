import java.util.Scanner;

public class SoChinhPhuong {
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            int N = sc.nextInt();
            int n = (int) Math.sqrt(N);
            if (N == n * n) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
