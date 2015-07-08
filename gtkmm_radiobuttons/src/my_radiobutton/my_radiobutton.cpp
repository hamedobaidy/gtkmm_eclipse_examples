/*
 * my_radiobutton.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <iostream>

#include "my_radiobutton.h"

MyRadioButton::MyRadioButton() :
		m_Box_Top(Gtk::ORIENTATION_VERTICAL), m_Box_Up(
				Gtk::ORIENTATION_VERTICAL), m_Box_Down(
				Gtk::ORIENTATION_VERTICAL), m_RadioButton1("Select First!"), m_RadioButton2(
				"Select Second!"), m_RadioButton3("Select Third!"), m_Button_Close(
				"Close") {
	set_default_size(300, 200);
	set_title("RadioButton Example!");
	set_border_width(25);
	set_position(Gtk::WIN_POS_CENTER);

	// Get group from m_RadioButton1 and set other radiobuttons to this
	Gtk::RadioButton::Group group = m_RadioButton1.get_group();
	m_RadioButton2.set_group(group);
	m_RadioButton3.set_group(group);

	// Add outer box to the window (because the window
	// can only contain a single widget)
	add(m_Box_Top);

	//Put the inner boxes and the separator in the outer box:
	m_Box_Top.pack_start(m_Box_Up);
	m_Box_Top.pack_start(m_Separator);
	m_Box_Top.pack_start(m_Box_Down);

	// set inner boxes border
	m_Box_Up.set_border_width(10);
	m_Box_Down.set_border_width(10);

	// add radiobuttons to upper box
	m_Box_Up.pack_start(m_RadioButton1);
	m_Box_Up.pack_start(m_RadioButton2);
	m_Box_Up.pack_start(m_RadioButton3);

	// set the first button active
	m_RadioButton1.set_active(true);

	// Add close button to lower box
	m_Box_Down.pack_start(m_Button_Close);

	// make the button the default widget
	m_Button_Close.set_can_default(true);
	m_Button_Close.grab_default();

	// Connect signals
	m_Button_Close.signal_clicked().connect(
			sigc::mem_fun(*this, &MyRadioButton::on_button_clicked));
	m_RadioButton1.signal_clicked().connect(
			sigc::mem_fun(*this, &MyRadioButton::on_radiobuttons_selection));
	m_RadioButton2.signal_clicked().connect(
			sigc::mem_fun(*this, &MyRadioButton::on_radiobuttons_selection));
	m_RadioButton3.signal_clicked().connect(
			sigc::mem_fun(*this, &MyRadioButton::on_radiobuttons_selection));

	// show all childs of window
	show_all_children();
}

MyRadioButton::~MyRadioButton() {
	// TODO Auto-generated destructor stub
}

void MyRadioButton::on_button_clicked() {
	close();
}

void MyRadioButton::on_radiobuttons_selection() {
	if (m_RadioButton1.get_active())
		std::cout << "First is selected!\n";

	if (m_RadioButton2.get_active())
		std::cout << "Second is selected!\n";

	if (m_RadioButton3.get_active())
		std::cout << "Third is selected!\n";
}
