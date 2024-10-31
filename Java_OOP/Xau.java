import java.util.Scanner;

public class Xau {
    public boolean isCodeValid(String st) {
        return st.toLowerCase().matches("b\\d{2}dc(cn|at)\\d{3}");
    }

    public boolean isBillCode(String st) {
        return st.matches("[NnXx]\\d{2}(PTIT|ptit)\\d{2,4}");
    }

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        Xau x=new Xau();
        String st=in.nextLine();
        System.out.println(x.isCodeValid(st));
        st=in.nextLine();
        System.out.println(x.isBillCode(st));
    }
}
