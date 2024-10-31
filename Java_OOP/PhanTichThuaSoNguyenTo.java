import java.util.Scanner;

public class PhanTichThuaSoNguyenTo {
    public static Scanner sc = new Scanner(System.in);

    public static void phanTich(int t) {
        int N = sc.nextInt();
        int n = N;
        System.out.printf("Test %d: ", t);
        for (int i = 2; i <= Math.sqrt(N); i++) {
            int dem = 0;
            while (n % i == 0) {
                dem++;
                n /= i;
            }
            if (dem != 0) {
                System.out.printf("%d(%d) ", i, dem);
            }
        }
        if (n != 1) {
            System.out.printf("%d(%d) ", n, 1);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            phanTich(i);
        }
    }
}
