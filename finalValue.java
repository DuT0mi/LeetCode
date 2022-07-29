// [Easy]  
public class Leetcode {

        public static int finalValueAfterOperations(String[] operations) {
                int init = 0;
                for(String param:operations)
                      if(param.equals("X++") || param.equals("++X"))
                              init++;
                        else
                                init--;
                return  init;
        }
        public static  void main(String[] args){
                String []operations = {"++X","X++","X++"};
                int value = finalValueAfterOperations(operations);
                System.out.println("The value is: " + value);
        }

}
