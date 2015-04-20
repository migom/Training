import java.util.Date;

/**
 * 기본 데이타 타입의 범위 (하한 ~ 상한)
 */
class PrimitiveType {
	public static void main (String[] args) {
		// 기본 데이타
		System.out.println("Byte : " + Byte.MIN_VALUE + " ~ " + Byte.MAX_VALUE);
		System.out.println("Short : " + Short.MIN_VALUE + " ~ " + Short.MAX_VALUE);
		System.out.println("Integer : " + Integer.MIN_VALUE + " ~ " + Integer.MAX_VALUE);
		System.out.println("Long : " + Long.MIN_VALUE + " ~ " + Long.MAX_VALUE);
		System.out.println("Float : " + Float.MIN_VALUE + " ~ " + Float.MAX_VALUE);
		System.out.println("Double : " + Double.MIN_VALUE + " ~ " + Double.MAX_VALUE);
		System.out.println("Character : " + Character.MIN_VALUE + " ~ " + Character.MAX_VALUE);
	}
}

