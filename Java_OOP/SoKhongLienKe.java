import java.util.Scanner;

public class SoKhongLienKe {
    public static Scanner sc = new Scanner(System.in);

    public static boolean lienKe(char a, char b) {
        int x = a - '0';
        int y = b - '0';
        return Math.abs(x - y) == 2;
    }

    public static void testCase() {
        String s = sc.next();
        for (int i = 1; i < s.length(); i++) {
            if (!lienKe(s.charAt(i), s.charAt(i - 1))) {
                System.out.println("NO");
                return;
            }
        }
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s.charAt(i) - '0';
        }
        if (sum % 10 == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            testCase();
        }
    }
}
