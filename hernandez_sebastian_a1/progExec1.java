public class ProgExec1 {

    public static void main(String[] args) {
        int dog = 5;
        for (int i = 0; i < 1; i++) {
            int cat = 6;
        }
        try {
            dog += cat; //dog is equal to 11
            System.out.println("Dog has value of " + dog);
        } catch (Exception e) {
            System.out.println("Dog has value of " + dog);
        }
    }
}
