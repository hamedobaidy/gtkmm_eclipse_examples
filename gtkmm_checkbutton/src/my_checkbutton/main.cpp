/*
 * main.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <gtkmm.h>

#include "my_checkbutton.h"

int main(int argc, char * argv[]) {
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv,
			"com.hamedapps.gtkmm.checkbutton.example");

	MyCheckButton window;

	return app->run(window);
}

