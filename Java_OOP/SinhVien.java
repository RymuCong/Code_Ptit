import java.util.Scanner;

public class SinhVien {
    private String maSV;
    private String hoVaDem;
    private String ten;
    private int tuoi;
    private boolean gioitinh;
    private String gioitinhtext;
    private double diem1, diem2;

    public void setMaSV(int number){
        this.maSV="D22DCCN"+number;
    }

    public void setDiem(double diem1, double diem2){
        this.diem1=diem1;
        this.diem2=diem2;
    }

    public String getHoVaTen(){
        return this.hoVaDem+" "+this.ten;
    }

    public double getGPA(){
        return (this.diem1+this.diem2*2)/3;
    }

    public String getXepLoai(){
        double gpa=this.getGPA();
        if(gpa<5) return "yeu";
        if(gpa<6.5) return "trung binh";
        if(gpa<8) return "kha";
        if(gpa<9) return "gioi";
        return "xuat sac";
    }
    //  số (có 3 chữ số)
    public void input(){
        Scanner sc=new Scanner(System.in);
        int number=sc.nextInt();
        while (number<100 || number>999){
            System.out.println("nhap sai");
            number=sc.nextInt();
        }
        this.setMaSV(number);
        sc.nextLine();
        this.hoVaDem=sc.nextLine();
        this.ten=sc.nextLine();
        this.tuoi=sc.nextInt();
        while (tuoi<18 || tuoi>23){
            System.out.println("nhap sai");
            this.tuoi=sc.nextInt();
        }
        this.gioitinh=sc.nextBoolean();
        this.gioitinhtext=this.gioitinh?"nam":"nu";
        this.diem1=sc.nextDouble();
        while (diem1<0 || diem1>10){
            System.out.println("nhap sai");
            this.diem1=sc.nextDouble();
        }
        this.diem2=sc.nextDouble();
        while (diem2<0 || diem2>10){
            System.out.println("nhap sai");
            this.diem2=sc.nextDouble();
        }
    }

    public void output(){
        System.out.printf("%s %s %d %s %.1f %s\n",this.maSV,this.getHoVaTen(),this.tuoi,this.gioitinhtext,this.getGPA(),this.getXepLoai());
    }

    public static void main(String[] args) {
        SinhVien s=new SinhVien();
        s.input();
        s.setDiem(4, 8);
        s.output();
        System.out.println(s.getHoVaTen()+" "+s.getXepLoai());
    }
}


