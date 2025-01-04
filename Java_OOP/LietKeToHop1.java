import java.util.Scanner;

public class LietKeToHop1 {

    static int dem = 0;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] mang = new int[20];
        // mang[0] = 0;
        // quayLui(mang, n, k, 1);
        // System.out.printf("Tong cong co %d to hop", dem);
        int[] unused = new int[20];
        for (int t = 1; t <= n; t++) {
            unused[t] = 1;
        }
        quayLuiNhiPhan(mang, n, 1, unused);
    }

    static  void quayLui (int[] mang, int n, int k, int j) {
        for (int i = mang[j-1] + 1; i <= n - k + j; i++)
        {
            mang[j] = i;
            if (j == k)
            {
                for (int t = 1; t <= k; t++) {
                    System.out.print(mang[t] + " ");
                }
                System.out.println();
                dem++;
            }
            else
            {
                quayLui(mang, n, k, j+1);
            }
        }
    }

    static void quayLuiNhiPhan (int [] mang, int n, int j, int[] unused)
    {
        for (int i = 1; i <= n; i++)
        {
            if (unused[i] == 1)
            {
                mang[j] = i;
                unused[i] = 0;
                if (j == n)
                {
                    for (int t = 1; t <= n; t++) {
                        System.out.print(mang[t] + " ");
                    }
                    System.out.println();
                }
                else
                {
                    quayLuiNhiPhan(mang, n, j+1, unused);
                }
                unused[i] = 1;
            }
        }
    }
}
