package munimhasan;
public class Factorial_Number_of_1_to_10 {
    public static void main(String[] args){
        int n=10;
        int result=1;
        int i=1;
        for(i=1;i<=n;i++){
            result=result*i;
            System.out.println("Factorial Number Is : "+i+" = "+result);
        }
    }
}
