//~~Sebastian Hernandez
//Assignment 2, Exercises 1 and 2

public class ExerciseOneAndTwo {

    public static void main(String[] args) {
        int i = 0, j = 0, k = 0;

        
        //Exercise 1
        k = (j + 13) / 27;
        while (k <= 10) {
            k++;
            i = 3 * k - 1;
        }

        //Exercise 2
        i = 0;
        j = 0;
        k = 0;
        switch (k) {
            case 1:
                j = 2 * k - 1;
                break;
            case 2:
                j = 2 * k - 1;
                break;
            case 3:
                j = 3 * k + 1;
                break;
            case 4:
                j = 4 * k - 1;
                break;
            case 5:
                j = 3 * k + 1;
                break;
            case 6:
                j = k - 2;
                break;
            case 7:
                j = k - 2;
                break;
            case 8:
                j = k - 2;
                break;
            default:
                break;
        }
    }

}
