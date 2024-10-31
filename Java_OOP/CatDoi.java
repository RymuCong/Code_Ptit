import java.util.Scanner;

public class CatDoi {
    public static Scanner sc = new Scanner(System.in);

    public static long catSo(String s) {
        long n = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '0':
                case '8':
                case '9':
                    n = n * 10;
                    break;
                case '1':
                    n = n * 10 + 1;
                    break;
                default:
                    return 0;
            }
        }
        return n;
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            String s = sc.next();
            long res = catSo(s);
            if (res == 0) {
                System.out.println("INVALID");

            } else {
                System.out.println(res);
            }
        }
    }
}
