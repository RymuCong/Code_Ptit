
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.TreeMap;

public class SoNguyenToTrongFileNP {
    static boolean prime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        FileInputStream fileInputStream = new FileInputStream("SONGUYEN.in");
        ObjectInputStream ois = new ObjectInputStream(fileInputStream);
        ArrayList<Integer> nums = (ArrayList<Integer>) ois.readObject();
        TreeMap<Integer, Integer> map = new TreeMap<>();
        for (int i : nums) {
            if (prime(i)) {
                if (map.containsKey(i))
                    map.put(i, 1 + map.get(i));
                else
                    map.put(i, 1);
            }
        }
        for (int i : map.keySet()) {
            System.out.println(i + " " + map.get(i));
        }
        ois.close();
    }
}
