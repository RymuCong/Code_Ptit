import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class TimThuKhoaCuaKyThi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVienTK> sv = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String dob = sc.nextLine();
            float p1 = Float.parseFloat(sc.nextLine());
            float p2 = Float.parseFloat(sc.nextLine());
            float p3 = Float.parseFloat(sc.nextLine());
            sv.add(new SinhVienTK(name, dob, p1, p2, p3, i + 1));
        }
        Collections.sort(sv);
        for (int idx = 0; idx < sv.size(); idx++) {
            if (sv.get(sv.size() - 1).tongDiem == sv.get(idx).tongDiem)
                System.out.println(sv.get(idx));
        }
    }
}

class SinhVienTK implements Comparable<SinhVienTK> {
    String ten, ngaySinh;
    float diem1, diem2, diem3, tongDiem;
    int stt;

    public SinhVienTK(String ten, String ngaySinh, float diem1, float diem2, float diem3, int stt) {
        this.ten = ten;
        this.ngaySinh = ngaySinh;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
        this.tongDiem = diem1 + diem2 + diem3;
        this.stt = stt;
    }

    @Override
    public String toString() {
        return stt + " " + ten + " " + ngaySinh + " " + String.format("%.1f", tongDiem);
    }

    @Override
    public int compareTo(SinhVienTK o) {
        if (this.tongDiem == o.tongDiem)
            return this.stt - o.stt;
        return (int) (this.tongDiem - o.tongDiem);
    }
}