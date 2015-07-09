/*
 ============================================================================
 Name        : gtkmm_dnd.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "dndwindow.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  DnDWindow dndWindow;

  //Shows the window and returns when it is closed.
  return app->run(dndWindow);
}
