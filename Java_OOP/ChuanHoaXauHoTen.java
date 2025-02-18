
import java.util.Scanner;

public class ChuanHoaXauHoTen {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            // s = s.trim();
            // String[] st = s.split(" ");
            // for (int i = 0; i < st.length; i++) {
            // st[i] = st[i].trim();
            // if (st[i].length() > 0) {
            // st[i] = st[i].substring(0, 1).toUpperCase() +
            // st[i].substring(1).toLowerCase();
            // System.out.print(st[i] + " ");
            // }
            // }
            // System.out.println();
            System.out.println(chuanHoaTen(s));
        }
    }

    private static String chuanHoaTen(String xau) {
        xau = xau.trim().toLowerCase();
        String res = "" + Character.toUpperCase((xau.charAt(0)));
        for (int i = 1; i < xau.length(); i++) {
            if (Character.isLetter(xau.charAt(i))) {
                if (xau.charAt(i - 1) == ' ') {
                    res += " " + Character.toUpperCase(xau.charAt(i));
                } else
                    res += xau.charAt(i);
            }
        }
        return res;
    }
}
