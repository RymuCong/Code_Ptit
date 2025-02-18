import java.math.BigInteger;
import java.util.*;
import java.io.*;

class Main {

    public static BigInteger FirstFactorial(String num) {

        BigInteger sum = BigInteger.valueOf(1);
        for (int i = 1; i <= Integer.parseInt(num); i++)
            sum = sum.multiply(BigInteger.valueOf(i));
        return sum;
    }

    public static void main (String[] args) {
        // keep this function call here
        Scanner s = new Scanner(System.in);
        System.out.print(FirstFactorial(s.nextLine()));
    }

}