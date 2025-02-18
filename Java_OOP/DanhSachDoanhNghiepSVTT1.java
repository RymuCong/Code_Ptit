
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class DanhSachDoanhNghiepSVTT1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<DoanhNghiepTT> dntts = new ArrayList<>();

        int n = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n; i++) {
            String ten = sc.nextLine();
            String ma = sc.nextLine();
            int ssv = Integer.parseInt(sc.nextLine());
            dntts.add(new DoanhNghiepTT(ma, ten, ssv));
        }

        Collections.sort(dntts);

        for (int idx = 0; idx < dntts.size(); idx++) {
            System.out.println(dntts.get(idx));
        }
    }
}

class DoanhNghiepTT implements Comparable<DoanhNghiepTT> {
    String maDN, tenDN;
    int ssv;

    public DoanhNghiepTT(String maDN, String tenDN, int ssv) {
        this.maDN = maDN;
        this.tenDN = tenDN;
        this.ssv = ssv;
    }

    @Override
    public String toString() {
        return maDN + " " + tenDN + " " + ssv;
    }

    @Override
    public int compareTo(DoanhNghiepTT o) {
        if (this.ssv == o.ssv)
            return this.maDN.compareTo(o.maDN);
        return -(this.ssv - o.ssv);
    }
}