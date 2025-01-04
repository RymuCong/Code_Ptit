import java.util.Arrays;
import java.util.Scanner;

public class GiaoCuaHaiDaySo {
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
        }
        Arrays.sort(b);
        for (int i = 0; i < m; i++) {
            if (d[b[i]] == 1) {
                System.out.print(b[i] + " ");
                d[b[i]] = 2;
            }
        }
    }
}
