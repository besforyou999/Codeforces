import java.util.Scanner;

public class main {

  public static void main(String []args) {

    Scanner scanner = new Scanner(System.in);

    String flagColours = new String();
    String firstSight = new String();
    String secondSight = new String();

    flagColours = scanner.nextLine();
    firstSight = scanner.nextLine();
    secondSight = scanner.nextLine();

    boolean forward = false;
    boolean backward = false;

    forward = checkString(flagColours,firstSight,secondSight);    

    char [] temp = flagColours.toCharArray();
    int left, right = 0;
    right = temp.length - 1;

    for (left = 0; left < right ; left++, right--) {
      char temp2 = temp[left];
      temp[left] = temp[right];
      temp[right] = temp2;
    }

    String flagColoursReverse = new String(temp);

    backward = checkString(flagColoursReverse, firstSight, secondSight);    

    if ( forward == true && backward == true) {
      System.out.println("both");
    }

    if (forward == true && backward == false) {
      System.out.println("forward");
    }

    if (forward == false && backward == true) {
      System.out.println("backward");
    }

    if (forward == false && backward == false) {
      System.out.println("fantasy");
    }

    return;
  }
	
  public static boolean checkString( String flagColours, String firstSight , String secondSight) {
    int sightPtr = 0, forwardFirstCheck = 0, forwardSecondCheck = 0;
    int firstSightLength = firstSight.length();
    int secondSightLength = secondSight.length();

    while ( sightPtr < flagColours.length() - (firstSightLength - 1) ) {
      int check = 1;
      for (int i = 0; i < firstSightLength ; i++) {
        if (flagColours.charAt(sightPtr+i) != firstSight.charAt(i)) {
          check = 0;
        }
      }
      if (check == 1) {
        forwardFirstCheck = 1;
        break;
      }
      sightPtr++;
    }

	sightPtr += firstSightLength;

    while ( sightPtr < flagColours.length() - (secondSightLength - 1) ) {
      int check = 1;
      for (int i = 0; i < secondSightLength ; i++) {
        if (flagColours.charAt(sightPtr+i) != secondSight.charAt(i)) {
          check = 0;
        }
      }
      if (check == 1) {
        forwardSecondCheck = 1;
        break;
      }
      sightPtr++;
    }

	if ( forwardFirstCheck == 1 && forwardSecondCheck == 1 ) {
		return true;
  	}

	return false;
  }
}

