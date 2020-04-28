import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'oddNumbers' function below.
     *
     * The function is expected to return an INTEGER_ARRAY. The function accepts
     * following parameters: 1. INTEGER l 2. INTEGER r
     */

    public static List<Integer> oddNumbers(int l, int r) {
        // Write your code here
        List<Integer> result = new ArrayList();
        for (int i = l; i <= r; i++) {
            if (i % 2 != 0)
                result.add(i);
        }

        return result;

    }

}