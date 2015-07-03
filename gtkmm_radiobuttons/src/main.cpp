/*
 * main.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */

#include "radiobuttons.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  RadioButtons buttons;

  //Shows the window and returns when it is closed.
  return app->run(buttons);
}


