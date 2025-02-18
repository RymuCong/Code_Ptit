
import java.util.Scanner;

public class ChuanHoaXauHoTen2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            s = s.trim();
            String[] st = s.split(" ");
            for (int i = 0; i < st.length; i++) {
                st[i] = st[i].trim();
                if (i > 0) {
                    if (st[i].length() > 0) {
                        st[i] = st[i].substring(0, 1).toUpperCase() + st[i].substring(1).toLowerCase();
                        if (i != st.length - 1)
                            System.out.print(st[i] + " ");
                        else
                            System.out.print(st[i] + ", ");
                    }
                }
            }
            System.out.print(st[0].toUpperCase());
            System.out.println();
        }
    }
}
