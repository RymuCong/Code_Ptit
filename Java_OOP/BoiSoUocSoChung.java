import java.util.Scanner;

public class BoiSoUocSoChung {
    public static Scanner sc = new Scanner(System.in);

    public static long gcd(long a, long b) {
        while (b != 0) {
            long x = a % b;
            a = b;
            b = x;
        }
        return a;
    }

    public static long lcm(long a, long b) {
        return a * b / gcd(a, b);
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(lcm(a, b) + " " + gcd(a, b));
        }
    }
}
