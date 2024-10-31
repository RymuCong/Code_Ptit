import java.util.Scanner;

public class SoLienKe {
    public static Scanner sc = new Scanner(System.in);

    public static boolean lienKe(char a, char b) {
        int x = a - '0';
        int y = b - '0';
        return Math.abs(x - y) == 1;
    }

    public static void checkLienKe() {
        String s = sc.next();
        for (int i = 1; i < s.length(); i++) {
            if (!lienKe(s.charAt(i), s.charAt(i - 1))) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            checkLienKe();
        }
    }
}
