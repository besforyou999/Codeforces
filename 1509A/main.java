import java.util.Scanner;
import java.util.Vector;
import java.util.ArrayList;

public class main {
	public static void main (String [] args) {
		
		Scanner sc = new Scanner(System.in);

		int t,n;

		t = sc.nextInt();

		while (t-- > 0) {

			n = sc.nextInt();
			
			Vector<Integer> oddList = new Vector<Integer>();
			Vector<Integer> evenList = new Vector<Integer>();

			while (n-- > 0) {
			
				int temp = sc.nextInt();
			
				if (temp % 2 == 0) {
					evenList.add(temp);
				} else {
					oddList.add(temp);
				}

			}
			
			for (int i = 0; i < evenList.size(); i++ ) {
				System.out.print(evenList.get(i) + " ");
			}

			for (int i = 0; i < oddList.size(); i++ ) {
				System.out.print(oddList.get(i) + " ");
			}

			System.out.println();
		}

		
	}
}
