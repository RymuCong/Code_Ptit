
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class KhaiBaoLopSinhVien {
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyy");
        String hoTen = sc.nextLine();
        String lop = sc.nextLine();
        String ngaySing = sdf.format(sdf.parse(sc.nextLine()));
        float gpa = Float.parseFloat(sc.nextLine());
        SinhVienSV sv = new SinhVienSV(hoTen, lop, ngaySing, gpa);
        System.out.println(sv);
    }
}

class SinhVienSV {
    String hoten, lop, ngaysinh;
    float gpa;
    static int stt = 0;

    public SinhVienSV(String hoten, String lop, String ngaysinh, float gpa) {
        this.hoten = hoten;
        this.lop = lop;
        this.ngaysinh = ngaysinh;
        this.gpa = gpa;
        stt++;
    }

    // private String ChuanHoaNgaySinh(String ngaySinh) {
    // String[] s = ngaySinh.split("/");
    // if (s[0].length() == 1)
    // s[0] = '0' + s[0];
    // if (s[1].length() == 1)
    // s[1] = '0' + s[1];
    // return s[0] + '/' + s[1] + '/' + s[2];
    // }

    @Override
    public String toString() {
        return "B20DCCN" + String.format("%03d", stt) + " " + hoten + " " + lop + " " + ngaysinh
                + " " + String.format("%.2f", gpa);
    }
}
