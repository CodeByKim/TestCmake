// CMakeProject1.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "CMakeProject1.h"
#include "./Player/player.h"
#include <thread>
//#include <boost/asio.hpp>

int main()
{
    std::thread t = std::thread([](){
        while(true)
        {
            player p("kkr");
            p.move();
            p.attack();
            p.print();
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

    });

	/*boost::asio::io_context context;
	boost::asio::deadline_timer timer(context);
	timer.expires_from_now(boost::posix_time::seconds(1));

	timer.async_wait([](const boost::system::error_code& code) {
		std::cout << "this is timer..." << std::endl;
	});	

	context.run();*/



	getchar();

	return 0;
}