import java.util.Scanner;

public class main {
	public static void main(String [] args) {

		Scanner scanner = new Scanner(System.in);

		Integer n = scanner.nextInt();
		Integer count = 1;
		
		while (true) {
		
			String binaryString = Integer.toBinaryString(count);

			int binaryStringToDecimal = Integer.parseInt(binaryString);

			if ( binaryStringToDecimal > n ) {
			   break;
			}	   

			count += 1;
		}
		

		System.out.print(count-1);	
	}
}
