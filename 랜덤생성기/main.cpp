#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

float random_float() 
{
	int max = 0x7fff;
	float value = (float)(rand() % (max + 1) / (float)max);

	/*
	for (float i = 0.0; i < max; i++) {
		cout << (int)i % (max + 1) / (float)max << "\n";
	}
	*/

	return value;
}

class Sum 
{
public:
	void callsum(const char* Arr[], int size);

private:
	const char* sum;
};

void Sum::callsum(const char* Arr[], int size) 
{
	/*
	for (int i = 0; i < size; i++) {
		cout << "Arr : " << Arr[i] << "\t\t" << i % size << "\n";
	}
	*/

	cout << "size : " << size << "\n";

	sum = Arr[rand() % (size)];

	cout << "sum : " << sum << "\n";
}

int main() 
{
	srand((unsigned int)time(NULL));

	const char* platformArr[] = { "ps2", "ps3", "ps4", "ps5", "ps vita", "3ds", "wii", "switch", "pc" };

	const char* fresh_gameArr[] = {
		"천수의 사쿠나히메", "while true : learn()", "pes2021", "바이오쇼크1",
		"저스트댄스 2020", "디스코 엘리시움", "로스트아크", "스타크래프트2", "PC빌딩시뮬레이션",
		"스타워즈 스쿼드론", "엘든링", "바이오하자드4", "그란투리스모 스포츠", "그란투리스모6",
		"풋볼메니저2020", "카 머신 시뮬레이션", "위쳐3",
		"유니티", "쉐이더", "모델링", "페인팅", "게임 알고리즘",
	};

	const char* play_gameArr[] = {
		"시간의 오카리나3d", "무쥬라의 가면 3d", "메트로이드 사무스리턴즈", 

		"잭&위키 발바로스의 모험", "피크민",
	
		"셀레스테", "스플래툰3", "젤다의전설 스카이워드소드", "젤다의전설 야생의숨결",
		"제노블3", "다크소울 리마스터", "노모어 히어로즈 컬렉션", "애스트럴 체인", "할로우 나이트",
		"데빌메이크라이 3 SE", "데드셀", "동키콩컨트리 트로피컬 프리즈",
		"닌텐도 마무리(페르소나q, 슈퍼마리오3d world, 별의커비2 등)",

		"파이널판타지X", "닌자가이덴 시그마", "소피의 아틀리에",
		
		"존오브 앤드레스 세컨드러너", "어반레인", "메탈기어솔리드2", "갓오브워",

		"아머드코어V", "헤비레인", "철권태그1", "인퍼머스1", "레드 데드 디뎀션",
		"톰클랜시 블랙리스트", "드래곤즈크라운", "데드스페이스1", "닌자가이덴2", "어쌔신크리드2",

		"테이어웨이", "스나이퍼엘리트4", "어쌔신크리드 오리진","원피스 해적무쌍4", "아스트로봇 레스큐미션",
		"포아너", "뱅퀴시", "캡콤 밸트 스크롤 컬렉션", "어쌔신크리드 신디게이트", "인저스티스2 골드에디션",
		"몬스터헌터 월드 아이스본", "메탈기어솔리드V 팬텀페인", "진여신전생3 녹턴 리마스터",
		"니어레플리칸트 ver 1.3", "울트라에이지", "슬리핑 독스", "마피아 디피니티브 에디션",
		"와이프아웃 오메가 컬렉션", "용과같이0", "세키로", "다잉라이트 인핸스드에디션",
		"플스 마무리(다크소울3, 소닉매니아, 와치독스2, 림보, 오딘스피어 등)", 
		"트로피헌터(페르소나4 골든, 리버시티걸즈, 라쳇앤클랭크, 인퍼먼스 세컨드선 등)",

		"데스루프", "리터널", "컨트롤", "고스트와이어: 도쿄", "호라이즌 포비든 웨스트",
		"사이버펑크 2077",

		"배트맨 아캄어사일럼", "디스아너드", "폴아웃 뉴베가스", "히트맨", "원신",
		"아우터 와일드", "파크라이2", "인스크리피션", "롤러드롬",
		"탈로스 원칙", "프로젝트 윙맨", "아이돌마스터 스탈릿 시즌",

		"다잉라이트2", "셜록홈즈 게임",
	};
	
	// 프로그래밍(유니티, 쉐이더) + 추가적인 도전("하드로더", "ai 그림", "등산", "헬스", "기판 테스트", "깃허브", "일찍 기상", "발성", )

	// 영상편집, 태블릿 그림, 사진 보정, 모델링, 애니메이션, 스컬핑 + 독서(경제, 역사, 지리, 과학, 논리)

	// 요리, 피아노, 기타, 자격증, 미용(스타일), 토익 공부, 자소서 준비, 제안서 + 독서(기획, 알고리즘, 플밍, 게임수학)
	// 자격증은 상황에 따라 2주

	const char* workArr[] = {
		"요리", "자격증", "토익 공부", "자소서", "글쓰기",
		"도전(등산, 일찍 기상, 유니티)",
		"도전(청소, diy, 기판 테스트, 유니티)",
	};

	const char* bookArr[] = { 
		"한국사", "세계사", "공학", "논리", "자기계발", "it", "경제", "인문학", "전공", "인체",
	};

	// "유니티 실습", "쉐이더", "겜플패턴", "그래픽스",

	// "인체", "음악", "경제학", "지리", "글쓰기", "애니메이션", "인류학", "경영", "건축", "수학", "관리", "연설", "심리학", "상식", "시사", "역사", "의사소통",

	int fresh_gameArr_size	= sizeof(fresh_gameArr) / sizeof(fresh_gameArr[0]);
	int play_gameArr_size	= sizeof(play_gameArr) / sizeof(play_gameArr[0]);
	int workArr_size		= sizeof(workArr) / sizeof(workArr[0]);
	int bookArr_size		= sizeof(bookArr) / sizeof(bookArr[0]);

	Sum Fresh_Games;
	Fresh_Games.callsum(fresh_gameArr, fresh_gameArr_size);

	cout << "\n";

	Sum Play_Games;
	Play_Games.callsum(play_gameArr, play_gameArr_size);

	cout << "\n";

	Sum Works;
	Works.callsum(workArr, workArr_size);

	cout << "\n";

	Sum Books;
	Books.callsum(bookArr, bookArr_size);

	// cout << random_float() << "\n";

	return 0;

}
