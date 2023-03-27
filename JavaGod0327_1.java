import javax.swing.plaf.synth.SynthSpinnerUI;

class A01{
    protected int a;
}
class B01 extends A01{
    int b = 0;

    public void disp(){
        System.out.println("a = "+a);
        System.out.println("b = "+b);
    }


}
class C01 extends B01{
    int c;
    public void disp2(){
        System.out.println("a = "+a);
        System.out.println("b = "+b);
        System.out.println("c = "+c);
    }
}

public class JavaGod0327_1 {
    public static void main(String[] args) {
        C01 ap = new C01();

        ap.disp2();


    }
    
}
