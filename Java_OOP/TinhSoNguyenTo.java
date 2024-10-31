import java.util.Scanner;

public class TinhSoNguyenTo {

    public static boolean isPrime(int n)
    {
        if (n < 2)
            return false;
        for (int i = 2; i <= Math.sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while (t-- > 0)
        {
            int n = sc.nextInt();
            if (isPrime(n))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
