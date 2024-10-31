import java.math.BigInteger;
import java.util.Scanner;

public class ChiaHet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger c = sc.nextBigInteger();
            if (a.mod(c).equals(BigInteger.ZERO) && b.mod(c).equals(BigInteger.ZERO)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
