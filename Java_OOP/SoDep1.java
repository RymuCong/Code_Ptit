
import java.util.Scanner;

public class SoDep1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            int n = s.length();
            boolean flag = false;
            for (int i = 0; i < n / 2; i++) {
                if (Integer.parseInt(s.substring(i, i + 1)) % 2 != 0 || s.charAt(i) != s.charAt(n - i - 1)) {
                    System.out.println("NO");
                    flag = true;
                    break;
                }
            }
            if (!flag)
                System.out.println("YES");
        }
    }
}
