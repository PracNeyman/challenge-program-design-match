import java.util.Scanner;

public class SymetricStringFromMiddle {
    private static int fromMiddleToBorder(int prLen, int j, int k, String str, int maxLength) {
        while(j>=0&&k<str.length()) {
            if (str.charAt(j)==str.charAt(k)) {
                prLen+=2;
                j--;
                k++;
            } else {
                break;
            }
        }
        maxLength = maxLength>=prLen?maxLength:prLen;
        return maxLength;
    }
    public static void main(String[] args) {
        String str = new Scanner(System.in).nextLine();
        int maxLength = str.isEmpty()?0:1;
        for (int i=0;i<str.length();i++) {
            int j=i-1;
            int k=i+1;
            int prLen = 1;
           maxLength = fromMiddleToBorder(prLen,j,k,str,maxLength);
        }
        for (int i =0;i<str.length();++i) {
            int k=i+1;
            int prLen = 0;
            maxLength= fromMiddleToBorder(prLen, i,k,str,maxLength);
        }
        System.out.println(maxLength);
    }
}
