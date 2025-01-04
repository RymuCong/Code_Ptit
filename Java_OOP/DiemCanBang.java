
import java.util.ArrayList;
import java.util.Scanner;

public class DiemCanBang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0)
        {
            long n = sc.nextInt();
            long left = 0;
            long right = 0;
            ArrayList<Integer> mang = new ArrayList<>();
            for (int i = 0; i < n; i++)
            {
                mang.add(sc.nextInt());
                if (i >= 2)
                    right += mang.get(i);
            }
            left += mang.get(0);
            boolean flag = false;
            for (int i = 1; i < n-1; i++)
            {
                if (left == right)
                {
                    System.out.println(i+1);
                    flag = true;
                    break;
                }
                left += mang.get(i);
                right -= mang.get(i+1);
            }
            if (!flag)
                System.out.println(-1);
        }   
    }
}