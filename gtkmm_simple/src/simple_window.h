/*
 * simple_window.h
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#ifndef SIMPLE_WINDOW_H_
#define SIMPLE_WINDOW_H_


#include <gtkmm/window.h>
#include <gtkmm/label.h>

class SimpleWindow : public Gtk::Window {
public:
	SimpleWindow();
	virtual ~SimpleWindow();

protected:
	Gtk::Label label;
};

#endif /* SIMPLE_WINDOW_H_ */
