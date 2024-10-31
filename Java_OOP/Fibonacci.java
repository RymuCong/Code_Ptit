import java.util.Scanner;

public class Fibonacci {
    public static Scanner ip = new Scanner(System.in);
    public static long[] fibo = new long[100];

    public static void Fibo() {
        fibo[1] = fibo[2] = 1L;
        for (int i = 3; i <= 92; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }

    public static void main(String[] args) {
        Fibo();
        int T = ip.nextInt();
        while (T-- > 0) {
            int n = ip.nextInt();
            System.out.println(fibo[n]);
        }
    }
}
