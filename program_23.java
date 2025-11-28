// program23.java
public class Lambda {
    public static void main(String[] args) {
        java.util.List<Integer> list = java.util.Arrays.asList(1, 2, 3, 4, 5);
        list.forEach(n -> System.out.println(n * 2));
    }
}
