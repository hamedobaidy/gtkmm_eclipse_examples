/*
 ============================================================================
 Name        : gtkmm_clipboard_ideal.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "examplewindow.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
  //APPLICATION_NON_UNIQUE because it shall be possible to run several
  //instances of this application simultaneously.
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(
    argc, argv, "org.gtkmm.example", Gio::APPLICATION_NON_UNIQUE);

  ExampleWindow window;

  //Shows the window and returns when it is closed.
  return app->run(window);
}
