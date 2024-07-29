/*
Question: A class definition is given below. Call the method fly() by making an instance of the class Bird in the main method.

class Bird

{

     public void fly(){

          System.out.println("The bird is flying");

}

}
*/
class Bird {
    public static void main(String[] args) {
        Bird obj = new Bird();
        obj.fly();
    }

    static void fly() {
        System.out.println("The bird is flying");
    }
}
