import java.io.*;
import java.util.*;

public class Solution {

    public static void evenOddChars(String s) {
        StringBuilder even = new StringBuilder();
        StringBuilder odd = new StringBuilder();
        for(int i = 0; i < s.length(); i++) {
            if (i % 2 == 0.0) {
                even.append(s.charAt(i));
                continue;
            }
            odd.append(s.charAt(i));
        }
        System.out.println(String.format("%s %s", even, odd));
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < T; i++) {
            String s = sc.nextLine();
            evenOddChars(s);
        }
        sc.close();
        
    }
}
