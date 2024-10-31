import java.util.Scanner;

public class Matran {
    private int[][] a;

    public Matran(int n) {
        a=new int[n][n];
    }

    public Matran(int[][] a) {
        this.a=a;
    }

    public int[][] getMatran() {
        return a;
    }

    public int getKT() {
        return a.length;
    }

    public void input(Scanner in) {
        int n=a.length;
        a=new int[n][n];
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                a[i][j]=in.nextInt();
            }
        }
    }

    public void out() {
        for (int i=0; i<a.length; i++) {
            for (int j=0; j<a[i].length; j++) {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }

    public Matran tong(int[][] b) {
        int n=a.length;
        int [][] t = new int[n][n];
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                t[i][j]=this.a[i][j]+b[i][j];
            }
        }
        return new Matran(t);
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //nhap kich thuoc
        int n=sc.nextInt();
        Matran m=new Matran(n);
        //nhap ma tran a
        m.input(sc);
        Matran b=new Matran(m.getKT());
        //nhap ma tran b
        b.input(sc);
        Matran t=m.tong(b.getMatran());
        //viet ra ma tran tong
        t.out();
    }
}
