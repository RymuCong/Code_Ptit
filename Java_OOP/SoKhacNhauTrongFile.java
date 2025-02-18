
import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Scanner;

public class SoKhacNhauTrongFile {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        HashMap<Integer, Integer> map = new HashMap<>();
        while (sc.hasNext()) {
            try {
                int num = Integer.parseInt(sc.next());
                if (map.get(num) == null)
                    map.put(num, 1);
                else
                    map.put(num, map.get(num) + 1);
            } catch (Exception e) {
            }
        }
        for (int i : map.keySet()) {
            System.out.println(i + " " + map.get(i));
        }
    }
}
