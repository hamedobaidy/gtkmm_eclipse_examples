/*
 * my_radiobutton.h
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#ifndef MY_RADIOBUTTON_H_
#define MY_RADIOBUTTON_H_

#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/separator.h>

class MyRadioButton: public Gtk::Window {
public:
	MyRadioButton();
	virtual ~MyRadioButton();

protected:
	// signals
	void on_button_clicked();
	void on_radiobuttons_selection();

	// member widgets
	Gtk::Box m_Box_Top, m_Box_Up, m_Box_Down;
	Gtk::RadioButton m_RadioButton1, m_RadioButton2, m_RadioButton3;
	Gtk::Separator m_Separator;
	Gtk::Button m_Button_Close;
};

#endif /* MY_RADIOBUTTON_H_ */
