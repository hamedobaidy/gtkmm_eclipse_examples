/*
 * examplewindow.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */


#include "examplewindow.h"
#include <iostream>

ExampleWindow::ExampleWindow()
: m_VBox(Gtk::ORIENTATION_VERTICAL),
  m_Button_Close("Close")
{
  set_title("Gtk::Entry");

  add(m_VBox);

  m_Entry.set_max_length(50);
  m_Entry.set_text("Hello world");
  m_VBox.pack_start(m_Entry, Gtk::PACK_SHRINK);

  //Change the progress fraction every 0.1 second:
  Glib::signal_timeout().connect(
    sigc::mem_fun(*this, &ExampleWindow::on_timeout),
    100
  );

  m_Button_Close.signal_clicked().connect( sigc::mem_fun(*this,
              &ExampleWindow::on_button_close) );
  m_VBox.pack_start(m_Button_Close, Gtk::PACK_SHRINK);
  m_Button_Close.set_can_default();
  m_Button_Close.grab_default();

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

bool ExampleWindow::on_timeout()
{
  static double fraction = 0;
  m_Entry.set_progress_fraction(fraction);

  fraction += 0.01;
  if(fraction > 1)
    fraction = 0;

  return true;
}

void ExampleWindow::on_button_close()
{
  hide();
}

