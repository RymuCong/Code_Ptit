import java.util.Scanner;

public class SapXepNoiBot {
    public static void main(String[] args) {
        // Hãy thực hiện thuật toán sắp xếp nổi bọt trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.
        //
        //Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).
        //
        //Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.
        //
        //Ví dụ:
        //
        //Input
        //
        //Output
        //
        //4
        //
        //5 3 2 7
        //
        //Buoc 1: 3 2 5 7
        //
        //Buoc 2: 2 3 5 7
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++){
            arr[i] = scanner.nextInt();
        }
        boolean swapped;
        for (int i = 0; i < n - 1; i++){
            swapped = false;
            for (int j = 0; j < n - i - 1; j++){
                if (arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (swapped){
                System.out.print("Buoc " + (i+1) + ": ");
                for (int k = 0; k < n; k++){
                    System.out.print(arr[k] + " ");
                }
                System.out.println();
            }
        }
    }
}
