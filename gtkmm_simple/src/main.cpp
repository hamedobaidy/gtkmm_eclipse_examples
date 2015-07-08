/*
 * main.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <gtkmm.h>
#include "simple_window.h"

int main(int argc, char * argv[]) {
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "com.hamedapps.gtkmm.simple_window");

	SimpleWindow window;

	return app->run(window);
}
