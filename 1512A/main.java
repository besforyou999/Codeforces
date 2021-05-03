import java.util.Scanner;

public class main {
	public static void main(String [] args) {
	
		Scanner sc = new Scanner(System.in);

		int t;
		t = sc.nextInt();

		while ( t-- > 0 ) {
			int n = sc.nextInt();
			int arr[] = new int[n];

			for (int i = 0; i < n ; i++ ) {
				int temp = sc.nextInt();
				arr[i] = temp;
			}
			
			for (int i = 2 ; i < n ; i++ ) {
				if ( arr[i] != arr[i-1] || arr[i-1] != arr[i-2] ) {
					
					if ( arr[i] == arr[i-1] ) {
						System.out.println(i-1);
						break;
					}
					
					if ( arr[i-1] == arr[i-2] ) {
						System.out.println(i+1);
						break;
					}

					if ( arr[i] == arr[i-2] ) {
						System.out.println(i);
						break;
					}				

				}
			}

		}

	}
}
