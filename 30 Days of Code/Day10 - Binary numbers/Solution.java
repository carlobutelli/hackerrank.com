import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int tmp = n, maxFound = 0;

        String intToBinary = Integer.toBinaryString(n); 
        int consecutiveOne = 0; 
        for (String str : intToBinary.split("0")) { 
            consecutiveOne = str.length() > consecutiveOne ? str.length() : consecutiveOne; 
        } 
        System.out.println(consecutiveOne);

        scanner.close();
    }
}

