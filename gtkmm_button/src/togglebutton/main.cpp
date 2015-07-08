/*
 * main.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <gtkmm.h>
#include "my_togglebutton.h"

int main(int argc, char * argv[]) {
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "com.hamedapps.gtkmm.togglebutton.example");

	MyToggleButton window;

	app->run(window);
}


