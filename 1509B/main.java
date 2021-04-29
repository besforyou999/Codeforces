import java.util.Scanner;
import java.util.Vector;


public class main {
	public static void main(String [] args) {
		
		Scanner sc = new Scanner(System.in);

		int t , n;

		String s = sc.nextLine();

		t = Integer.parseInt(s);	
		
		while ( t-- > 0 ) {			
			int key1 = 0;
			s = sc.nextLine();
			n = Integer.parseInt(s);
			s = sc.nextLine();

			Vector<Integer> vt = new Vector<Integer>();
			Vector<Integer> m = new Vector<Integer>();

			for (int i = 0; i < n ; i++ ) {
				if (s.charAt(i) == 'T') {
					vt.add(i);
				} else {
					m.add(i);
				}	
			}

			if ( m.size() * 2 != vt.size() ) {
				System.out.println("NO");
				continue;
			}

			for ( int i = 0 ; i < m.size() ; i++ ) {
				if ( m.get(i) < vt.get(i) || m.get(i) > vt.get(m.size() + i ) ) {
					System.out.println("NO");
					key1 = 1;
					break;
				}
			}
		
			if (key1 == 0) {
				System.out.println("YES");
			}	
		}
	}
}
