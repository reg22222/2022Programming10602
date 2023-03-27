class A01{
    int a;
    int b;

    public A01(int a){
        a = 10;
        b = 20;

    }
    public void disp(){
        System.out.println("a = "+a);
        System.out.println("b = "+b);
    }
}
class B01 extends A01{
    int c;
    int b;

    public B01(){
        super(10);
        c = 30;
        b = 100;
    }
}

public class Javagod0327_2 {
    public static void main(String[] args) {
        B01 bp = new B01();
        
        bp.disp();

    }
}