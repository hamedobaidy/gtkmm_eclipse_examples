/*
 ============================================================================
 Name        : gtkmm_timeout.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "timerexample.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  TimerExample example;
  return app->run(example);
}

