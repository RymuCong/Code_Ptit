import java.util.Scanner;

public class TinhTongNSoND {
    static Scanner sc = new Scanner(System.in);
    public static void tinhTong() {
        long n = sc.nextLong();
        long S = n * (n + 1) / 2;
        System.out.println(S);
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        while (T-- > 0) {
            tinhTong();
        }
    }
}
