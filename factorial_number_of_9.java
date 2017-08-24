package munimhasan;
public class factorial_number_of_9{
    public static void main(String[] args){
        int n=9;
        int result=1;
        int i=1;
        int fact=9;
        for(i=1;i<=n;i++){
            result=result*i;
            if(i==fact){
            System.out.println(result);
            break;
            }
        }
    }
}