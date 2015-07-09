/*
 * main.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: hamed
 */

#include <gtkmm/application.h>
#include "myranges.h"

int main(int argc, char * argv[]) {
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv,
			"com.hamedapps.gtkmm.ranges.example");

	MyRanges window;

	return app->run(window);
}

