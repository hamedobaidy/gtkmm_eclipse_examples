/*
 ============================================================================
 Name        : gtkmm_drawing_text.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "myarea.h"
#include <gtkmm/application.h>
#include <gtkmm/window.h>

int main(int argc, char* argv[])
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  Gtk::Window window;
  window.set_title("Drawing text example");

  MyArea area;
  window.add(area);
  area.show();

  return app->run(window);
}
