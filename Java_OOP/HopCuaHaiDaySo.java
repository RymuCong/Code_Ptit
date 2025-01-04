import java.util.Scanner;

public class HopCuaHaiDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int[] d = new int[1005];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            d[a[i]] = 1;
        }
        for (int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
            d[b[i]] = 1;
        }
        for (int i = 0; i <= 1000; i++) {
            if (d[i] == 1) {
                System.out.print(i + " ");
            }
        }
    }
}
