import java.util.Scanner;

public class MS {
    private Vehicle[] a;

    public MS() {
    }

    public void input(Scanner in) {
        int n=in.nextInt();
        in.nextLine();
        a=new Vehicle[n];
        for (int i=0; i<n; i++) {
            a[i]=new Vehicle();
            a[i].input(in);
        }
    }

    public void out() {
        for (int i=0; i<a.length; i++) {
            System.out.println(a[i]);
        }
        System.out.println(a.length);
    }

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        MS ms=new MS();
        ms.input(in);
        ms.out();
    }
}

class Vehicle {
    private String vin;
    private String manufacturer;
    private int year;
    private double cost;
    private String color;

    public Vehicle() {
    }

    public String toString() {
        return vin+" "+manufacturer.toUpperCase()+" "+cost+" "+year+" "+color;
    }

    public void input(Scanner in) {
        vin=in.nextLine();
        manufacturer=in.nextLine();
        color=in.nextLine();
        year=Integer.parseInt(in.nextLine());
        cost=Double.parseDouble(in.nextLine());
    }
}
