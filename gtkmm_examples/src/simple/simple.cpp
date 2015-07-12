/*
 * simple.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <iostream>
#include <gtkmm.h>

int main(int argc, char * argv[]) {
	Glib::RefPtr<Gtk::Application> app =
			Gtk::Application::create(argc, argv,
					"com.hamedapps.example.simple");

	Gtk::Window window;
	window.set_default_size(300, 200);

	Gtk::Label label("Simple Gtkmm application!");
	window.add(label);
	window.show_all_children(true);

	Glib::ustring id = app->get_id();
	std::cout << "Application ID: " << id << std::endl;

	return app->run(window);
}

