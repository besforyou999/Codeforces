import java.util.Scanner;

public class main {
  public static void main(String [] args) {

    Scanner scanner = new Scanner(System.in);
    int t,n,k;
	String s = new String();
	t= scanner.nextInt();

    for (int i = 0; i < t; i++) {
      n = scanner.nextInt();
      k = scanner.nextInt();
      s = scanner.next();
      
      if ( k == 0 ) {
	    System.out.println("YES");
		continue;
	  }

	  if ( k * 2 >= n ) {
	    System.out.println("NO");
		continue;
	  }

      int check = 1;
      for (int j = 0; j <= k - 1; j++) {
        if (s.charAt(j) != s.charAt(n - 1 - j)) {
          check = 0;
        }
      }

      if (check == 1)
        System.out.println("YES");      
      else
	    System.out.println("NO");  

    }
	return;
  }
}
