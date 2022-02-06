// CMakeProject1.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "CMakeProject1.h"
#include "./Player/player.h"
#include <thread>
//#include <boost/asio.hpp>

int main()
{
	/*boost::asio::io_context context;
	boost::asio::deadline_timer timer(context);
	timer.expires_from_now(boost::posix_time::seconds(1));

	timer.async_wait([](const boost::system::error_code& code) {
		std::cout << "this is timer..." << std::endl;
	});	

	context.run();*/

	std::thread t = std::thread([]() {
		player p("kkr");
		p.move();
		p.attack();

		while (true)
		{
			std::cout << "run thread..." << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
	});

	getchar();

	return 0;
}