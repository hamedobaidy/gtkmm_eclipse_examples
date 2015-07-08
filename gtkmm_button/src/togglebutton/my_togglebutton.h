/*
 * my_togglebutton.h
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#ifndef MY_TOGGLEBUTTON_H_
#define MY_TOGGLEBUTTON_H_


#include <gtkmm/window.h>
#include <gtkmm/togglebutton.h>

class MyToggleButton : public Gtk::Window {
public:
	MyToggleButton();
	virtual ~MyToggleButton();

protected:
	// signals
	void on_button_clicked();

	// member widgets
	Gtk::ToggleButton m_toggle;
};


#endif /* MY_TOGGLEBUTTON_H_ */
