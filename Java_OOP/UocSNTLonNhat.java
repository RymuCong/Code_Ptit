import java.util.Scanner;

public class UocSNTLonNhat {
    public static long sntMax(long n) {
        long maxPrime = -1;

        // Check for number of 2s that divide n
        while (n % 2 == 0) {
            maxPrime = 2;
            n /= 2;
        }

        // n must be odd at this point, so a skip of 2 (i = i + 2) can be used
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            while (n % i == 0) {
                maxPrime = i;
                n /= i;
            }
        }

        if (n > 2) {
            maxPrime = n;
        }

        return maxPrime;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            long N = sc.nextLong();
            System.out.println(sntMax(N));
        }
    }
}