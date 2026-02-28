public class Main {
    public static void main(String[] args) {
        Location v1 = new Location("Iasi", "City", 47.15, 27.58);
        Location v2 = new Location("Bucuresti", "City", 44.42, 26.10);
        
        Road r1 = new Road("Highway", 389.0, 130);

        System.out.println(v1);
        System.out.println(v2);
        System.out.println(r1);
    }
}