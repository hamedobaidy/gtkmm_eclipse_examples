/*
 ============================================================================
 Name        : gtkmm_builder_derived.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "deriveddialog.h"
#include <iostream>

int main (int argc, char **argv)
{
  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  //Load the Glade file and instiate its widgets:
  Glib::RefPtr<Gtk::Builder> refBuilder = Gtk::Builder::create();
  try
  {
    refBuilder->add_from_file("derived.glade");
  }
  catch(const Glib::FileError& ex)
  {
    std::cerr << "FileError: " << ex.what() << std::endl;
    return 1;
  }
  catch(const Glib::MarkupError& ex)
  {
    std::cerr << "MarkupError: " << ex.what() << std::endl;
    return 1;
  }
  catch(const Gtk::BuilderError& ex)
  {
    std::cerr << "BuilderError: " << ex.what() << std::endl;
    return 1;
  }

  //Get the GtkBuilder-instantiated dialog::
  DerivedDialog* pDialog = 0;
  refBuilder->get_widget_derived("DialogDerived", pDialog);
  if(pDialog)
  {
    //Start:
    app->run(*pDialog);
  }

  delete pDialog;

  return 0;
}
