import java.util.Scanner;

public class main {
	public static void main(String [] args) {
		
		Scanner scanner = new Scanner(System.in);

		Integer Y , W;
		Y = scanner.nextInt();
		W = scanner.nextInt();

		Integer biggerNum;

		if ( Y >= W ) {
			biggerNum = Y;
		}
		else {
			biggerNum = W;
		}

		switch (biggerNum) {
			case 1 : System.out.print("1/1");
					 break;
			case 2 : System.out.print("5/6");
					 break;
			case 3 : System.out.print("2/3");
					 break;
			case 4 : System.out.print("1/2");
					 break;
			case 5 : System.out.print("1/3");
					 break;
			case 6 : System.out.print("1/6");
					 break;
		}
			
	}
}
