
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class BoSungDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> mang = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            mang.add(sc.nextInt());
        }
        Collections.sort(mang);
        boolean flag = true;
        for (int i = 1; i <= mang.get(n - 1); i++) {
            if (!mang.contains(i)) {
                System.out.println(i);
                flag = false;
            }
        }
        if (flag)
            System.out.println("Excellent!");
    }
}
