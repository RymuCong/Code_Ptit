import java.math.BigInteger;
import java.util.Scanner;

public class UocSoChungLonNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            BigInteger n1 = sc.nextBigInteger();
            BigInteger n2 = sc.nextBigInteger();
            System.out.println(n2.gcd(n1));
        }
    }
}
