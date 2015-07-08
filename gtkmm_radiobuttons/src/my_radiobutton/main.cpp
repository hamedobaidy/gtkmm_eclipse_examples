/*
 * main.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <gtkmm/application.h>

#include <my_radiobutton.h>

int main(int argc, char * argv[]) {
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv,
			"com.hamedapps.gtkmm.radiobutton.example");

	MyRadioButton window;
	;

	return app->run(window);
}

