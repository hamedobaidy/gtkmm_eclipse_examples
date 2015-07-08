/*
 * my_togglebutton.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <iostream>

#include "my_togglebutton.h"

MyToggleButton::MyToggleButton() :
		m_toggle("My Toggle Button!") {
	set_default_size(300, 200);
	set_title("ToggleButton Example!");
	set_position(Gtk::WIN_POS_CENTER);
	set_border_width(25);

	add(m_toggle);

	m_toggle.signal_clicked().connect(
			sigc::mem_fun(*this, &MyToggleButton::on_button_clicked));

	m_toggle.show();
}

MyToggleButton::~MyToggleButton() {
}

void MyToggleButton::on_button_clicked() {
	if (m_toggle.get_active())
		std::cout << "Toggle Button activated!\n";
	else
		std::cout << "Toggle Button deactivated!\n";
}
