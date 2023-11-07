import java.io.FileWriter;
import java.io.IOException;

public class source_file {
    public static void main(String[] args) {
        // Create an array of length 10,000 filled with zeros
        int[] data = new int[10000];
        for (int i = 0; i < data.length; i++) {
            data[i] = 0;
        }

        // Sleep for 3 seconds
        try {
            Thread.sleep(3000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Write "0,0,0" to a CSV file
        try (FileWriter csvFile = new FileWriter("submission.csv")) {
            csvFile.write("0,0,0\n");
        } catch (IOException e) {
            e.printStackTrace();
            System.err.println("Failed to write to the CSV file.");
        }
    }
}