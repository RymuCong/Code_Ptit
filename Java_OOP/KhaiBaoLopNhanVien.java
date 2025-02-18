import java.util.Scanner;

public class KhaiBaoLopNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        NhanVien nv = new NhanVien();
        nv.hoten = sc.nextLine();
        nv.gioiTinh = sc.nextLine();
        nv.ngaysinh = sc.nextLine();
        nv.DiaChi = sc.nextLine();
        nv.mst = sc.nextLine();
        nv.ngayVaoLam = sc.nextLine();
        System.out.println(nv);
    }
}

class NhanVien {
    String hoten, DiaChi, ngaysinh, mst, gioiTinh, ngayVaoLam;

    @Override
    public String toString() {
        return String.format("%05d", 1) + " " + hoten + " " + gioiTinh + " " + ngaysinh + " " + DiaChi + " " + mst
                + " " + ngayVaoLam;
    }
}
