import java.util.Scanner;

public class BSNNNSoNguyenDung {

    public static long gcd(long a, long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    public static long lcm(int n) {
        long res = 1;
        for (int i = 1; i <= n; i++) {
            res = res * i / gcd(res, i);
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            System.out.println(lcm(n));
        }
    }
}
