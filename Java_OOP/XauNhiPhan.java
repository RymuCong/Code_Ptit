import java.util.Scanner;

public class XauNhiPhan {
    public static Scanner sc = new Scanner(System.in);
    public static long[] fibo = new long[100];

    public static void fibonacci() {
        fibo[1] = fibo[2] = 1L;
        for (int i = 3; i < 100; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }

    public static char devide(int n, long k) {
        if (n == 1) {
            return '0';
        }
        if (n == 2) {
            return '1';
        }
        if (k <= fibo[n - 2]) {
            return devide(n - 2, k);
        }
        return devide(n - 1, k - fibo[n - 2]);
    }

    public static void main(String[] args) {
        fibonacci();
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            System.out.println(devide(n, k));
        }
    }
}
