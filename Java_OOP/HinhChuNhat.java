import java.util.Scanner;

public class HinhChuNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if (a <= 0 || b <= 0) {
            System.out.println("0");
            return;
        }
        System.out.printf("%d %d" ,(a+b)*2, a*b);
    }
}
