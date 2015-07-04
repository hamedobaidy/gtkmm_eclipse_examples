/*
 * examplewindow.cpp
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */


#include <iostream>
#include "examplewindow.h"

ExampleWindow::ExampleWindow()
: m_VBox(Gtk::ORIENTATION_VERTICAL),
  m_Button_One("Child One"),
  m_Label_Two("Child 2"),
  m_Button_Quit("Quit")
{
  set_title("Custom Container example");
  set_border_width(6);
  set_default_size(400, 200);

  add(m_VBox);

  //Add the child widgets to the custom container:
  m_MyContainer.set_child_widgets(m_Button_One, m_Label_Two);

  m_Label_Two.set_alignment(1.0, 0.5);

  m_VBox.pack_start(m_MyContainer, Gtk::PACK_EXPAND_WIDGET);
  m_VBox.pack_start(m_ButtonBox, Gtk::PACK_SHRINK);

  m_ButtonBox.pack_start(m_Button_Quit, Gtk::PACK_SHRINK);
  m_ButtonBox.set_border_width(6);
  m_ButtonBox.set_layout(Gtk::BUTTONBOX_END);
  m_Button_Quit.signal_clicked().connect( sigc::mem_fun(*this,
              &ExampleWindow::on_button_quit) );

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_quit()
{
  hide();
}

