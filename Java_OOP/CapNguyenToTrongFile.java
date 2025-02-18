
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.TreeMap;

public class CapNguyenToTrongFile {
    static boolean prime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        FileInputStream fis = new FileInputStream("DATA1.in");
        ObjectInputStream ois = new ObjectInputStream(fis);
        ArrayList<Integer> nums = (ArrayList<Integer>) ois.readObject();
        FileInputStream fis2 = new FileInputStream("DATA2.in");
        ObjectInputStream ois2 = new ObjectInputStream(fis2);
        ArrayList<Integer> nums2 = (ArrayList<Integer>) ois2.readObject();
        TreeMap<Integer, Integer> res = new TreeMap<>();
        for (int i : nums)
            if (prime(i) && i < 500000) {
                int j = 1000000 - i;
                if (prime(j)) {
                    int k = nums2.indexOf(j);
                    if (k != -1)
                        res.put(i, j);
                }
            }
        for (Integer i : res.keySet())
            System.out.printf("%d %d\n", i, res.get(i));
        ois.close();
        ois2.close();
    }
}
