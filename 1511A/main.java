import java.util.Scanner;

public class main {
	public static void main(String []args) {
		
		Scanner sc = new Scanner(System.in);

		int t , n;
		
		t = sc.nextInt();
		
		while ( t-- > 0 ) {
			
			n = sc.nextInt();

			int ri[] = new int[n];
			int count1 = 0, count2 = 0;

			for (int i = 0; i < n ; i++) {
				ri[i] = sc.nextInt();
				if (ri[i] == 1 || ri[i] == 3 ) {
					count1++;
				} else {
					count2++;
				}
			}
			
			System.out.println(count1);
				
		}		
		

	}
}
