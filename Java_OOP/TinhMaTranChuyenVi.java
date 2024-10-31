import java.util.Scanner;

public class TinhMaTranChuyenVi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 1; t <= T; t++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] a = new int[n][m];
            int[][] b = new int[m][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = sc.nextInt();
                    b[j][i] = a[i][j];
                }
            }
            System.out.printf("Test %d:\n", t);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int sum = 0;
                    for (int k = 0; k < m; k++) {
                        sum += a[i][k] * b[k][j];
                    }
                    System.out.print(sum + " ");
                }
                System.out.println();
            }
        }
    }
}
