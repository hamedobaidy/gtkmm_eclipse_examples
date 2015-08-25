/*
 ============================================================================
 Name        : gtkmm_examples.cpp
 Author      : Hamed Mohammdi
 Version     :
 Copyright   : GNU General Public License
 Description : Simple Gtkmm example
 ============================================================================
 */

#include <gtkmm.h>

int main(int argc, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app =
    Gtk::Application::create(argc, argv,
      "org.gtkmm.examples.base");

  Gtk::Window window;
  window.set_default_size(200, 200);

  return app->run(window);
}
