import java.util.Scanner;

public class ChiaTamGiac {
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int h = sc.nextInt();
            for (double i = 1d; i < n; i++) {
                System.out.printf("%.6f ", Math.sqrt(i / n) * h);
            }
            System.out.println();
        }
    }
}
