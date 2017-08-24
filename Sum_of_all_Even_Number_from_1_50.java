package munimhasan;
public class Sum_of_all_Even_Number_from_1_50 {
    public static void main(String[] args){
        int i=1;
        int sum=0;
       for(i=1;i<=50;i++){
           if(i%2==0){
               System.out.println("All Even Number : "+i);
                sum=sum+i;
           }
      }
         System.out.println("Sum of All Even Number Is : "+sum);
   }
}
