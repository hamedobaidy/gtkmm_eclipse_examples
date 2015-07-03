/*
 * example_window.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */


#include "examplewindow.h"
#include <iostream>

ExampleWindow::ExampleWindow()
: m_button("something special!")
{
  set_title("checkbutton example");
  set_border_width(60);

  m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &ExampleWindow::on_button_clicked) );

  add(m_button);

  show_all_children();
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_clicked()
{
  std::cout << "The Button was clicked: state="
      << (m_button.get_active() ? "true" : "false")
      << std::endl;
}

