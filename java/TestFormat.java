import java.util.Date;

/*
   Format

   % [인자 번호] [플래그] [너비] [.정밀도] 유형

   인자 번호 : 인자가 2개 이상일 때, 어떤 인자를 쓸지 지정
   플래그 : 쉼표, 음수, 정렬 등 표현
   너비 : 최소 문자 개수
   정밀도 : 소수점 아래로 몇 자리인지
   유형 : 인자 유형 (d, f, x, c, ...)
 */
class TestFormat {
	public static void main (String[] args) {
		// 기본 데이타
		System.out.println(String.format("%d", 1000000000));
		System.out.println(String.format("%,d", 1000000000));
		System.out.println(String.format("%, d", 1000000000));
		System.out.println(String.format("%d", 42));
		System.out.println(String.format("%.3f", 42.0));
		System.out.println(String.format("%x", 42));
		System.out.println(String.format("%X", 42));
		System.out.println(String.format("%c", 42));

		// Date
		Date today = new Date();
		System.out.println(String.format("%tc", today));
		System.out.println(String.format("%tr", today));
		System.out.println(String.format("%tA, %tB %td", today, today, today));
		System.out.println(String.format("%tA, %<tB %<td", today));

	}
}

