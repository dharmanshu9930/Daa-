class  abc{
    private String name;
    private String designation;

    public abc(String a, String b){
        name = a;
        designation =b;
    }
    public void print (){
        System.out.println(name);
        System.out.println(designation);
    }
}
public class lab5 {
    public static void main(String[] args) {
        abc a1 = new abc("Ayush", "Manager");
        a1.print();
    }
}
