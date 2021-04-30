import java.util.Scanner;

public class main {
	public static void main(String []args) {
		
		Scanner sc = new Scanner(System.in);

		int t , n;
		
		t = sc.nextInt();
		
		while ( t-- > 0 ) {
			
			n = sc.nextInt();

			int count1 = 0;

			for (int i = 0; i < n ; i++) {
				int temp = sc.nextInt();
				if ( temp == 1 || temp == 3 ) 
					count1++;
			}
			
			System.out.println(count1);
				
		}		
		
	}
}
