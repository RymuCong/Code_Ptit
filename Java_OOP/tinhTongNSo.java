import java.util.Scanner;

public class tinhTongNSo {

    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while (t-- > 0)
        {
            long tong = 0;
            int n = sc.nextInt();
            tong = (long) n * (n + 1) / 2;
            System.out.println(tong);
        }
    }
}
