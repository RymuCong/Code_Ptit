import java.util.Scanner;

public class ChuSo4ChuSo7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String N = sc.next();
        int count = 0;

        for (char c : N.toCharArray()) {
            if (c == '4' || c == '7') {
                count++;
            }
        }

        if (count == 4 || count == 7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
