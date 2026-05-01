public class DahisarSuburb {
    private final String name = "Dahisar";
    private final String landmark = "Sanjay Gandhi National Park (Entrance)";
    private final String connectivity = "Western Express Highway & Metro Hub";

    public void displayProfile() {
        System.out.println("Identity Profile for " + name);
        System.out.println("----------------------------");
        System.out.println("Key Landmark: " + landmark);
        System.out.println("Connectivity: " + connectivity);
        System.out.println("Trivia:       Named after the Dahisar River.");
    }

    public static void main(String[] args) {
        new DahisarSuburb().displayProfile();
    }
}
