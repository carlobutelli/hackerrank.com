import java.io.*;
import java.util.*;

public class ReadInputs {
	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
	    double myDouble = scanner.nextDouble();
	    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

	    int myInt = scanner.nextInt();
	    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

	    String myString = scanner.nextLine();
	    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");	

	    System.out.println(String.format("Double: %.1f\nInteger: %d\nString: %s",myDouble, myInt, myString));

	    scanner.close();
	}
}