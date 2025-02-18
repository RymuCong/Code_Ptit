
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class TinhTong {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        long sum = 0;
        while (sc.hasNext()) {
            try {
                int num = Integer.parseInt(sc.next());
                sum += num;
            } catch (Exception e) {
                sum += 0;
            }
        }
        System.out.println(sum);
    }
}
