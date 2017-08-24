package munimhasan;
public class Sum_of_all_Odd_Number_from_1_50 {
    public static void main(String[] args){
        int i=1;
        int sum=0;
       for(i=1;i<=50;i++){
           if(i%2==1){
               System.out.println("All Odd Number Is : "+i);
               sum=sum+i;
              
           }
    }
         System.out.println("Sum of All Odd Number Is : "+sum);
   }
}
