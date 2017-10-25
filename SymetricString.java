import java.util.Scanner;


public class SymetricString {
    public static void main(String[] args) {
        String str = new Scanner(System.in).nextLine();
        int maxLength = 1;
        if (str.isEmpty()){
            maxLength=0;
        }
        boolean[][] P = new boolean[str.length()][str.length()];

        //init
        {
            for (int i=0;i<str.length();i++) {
                P[i][i] = true;
            }
            for (int i = 0;i<str.length()-1;i++){
                if (str.charAt(i)==str.charAt(i+1)) {
                    P[i][i+1] = true;
                }
            }
        }

        //process
        {
            for(int i=str.length()-3;i>=0;i--) {
                for (int j=i+2;j<str.length();j++) {
                    if (str.charAt(i)==str.charAt(j)) {
                        P[i][j]=P[i+1][j-1];
                        if (j-i+1>maxLength) {
                            maxLength=j-i+1;
                        }
                    } else {
                        P[i][j]=false;
                    }
                }
            }
        }
        System.out.println(maxLength);

    }
}
