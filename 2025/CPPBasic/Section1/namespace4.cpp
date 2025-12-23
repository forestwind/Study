namespace Video
{
	void init() 
	{		
	}

	namespace Render
	{
		void start()
		{
		}
	}
}
int main()
{
	Video::init();
	Video::Render::start();

	using namespace Video;
	init();
	Render::start();
}

// std::filesystem -> 파일 관련 표준 라이브러리 c++17
// std::chrono -> 날짜/시간 관련 표준 라이브러리 c++11
// std::this_thread -> 스레드 관련 표준 라이브러리 c++11