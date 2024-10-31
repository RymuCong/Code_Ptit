import java.util.Scanner;

public class KiemTraFibonacci {
    public static Scanner sc = new Scanner(System.in);
    public static long[] fibo = new long[100];

    public static void Fibo() {
        fibo[0] = 0L;
        fibo[1] = 1L;
        for (int i = 2; i < 100; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }

    public static void main(String[] args) {
        Fibo();
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            System.out.println(fibo[n]);
        }
    }
}
