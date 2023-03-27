interface A11{
	public static final int A = 1;
	public static int B = 2;
	public final int C = 3;
	public int D = 4;
	int E = 5;
	//private int F = 6;
	public abstract void disp();
	public void disp2();// {System.out.println("aaa");}
	void disp3();
	//private void disp4();
	class Inner11{}
}

public class JavaGod0327_3{
    public static void main(String[] args) {
        
        A11.Inner11 ai = new A11.Inner11();
	}
    }
}