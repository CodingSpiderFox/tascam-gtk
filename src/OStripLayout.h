/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OStripLayout.h
 * Author: onkel
 *
 * Created on January 1, 2017, 2:35 PM
 */

#ifndef OSTRIPLAYOUT_H
#define OSTRIPLAYOUT_H

#include "OComp.h"
#include "ODial.h"
#include "OEq.h"
#include "OMeter.h"
#include "OAlsa.h"

class OStripLayout : public Gtk::VBox {
public:
    OStripLayout();
    virtual ~OStripLayout();

    void init(int index, OAlsa* alsa);

    OMeter m_meter;
    
private:
    Gtk::HBox m_hbox;
    Gtk::VBox m_box;

    Gtk::HBox m_fader_box;
    Gtk::VScale m_fader;
    
    ODial m_Pan;
    Gtk::ToggleButton m_MuteEnable;
    Gtk::ToggleButton m_SoloEnable;
    Gtk::ToggleButton m_PhaseEnable;    
    Gtk::VSeparator m_sep;


    Gtk::Label m_title;
    Gtk::HSeparator m_title_sep;


    Gtk::HBox m_panbox;
    Gtk::VBox m_pan_button_box;

    
    OComp m_comp;
    Gtk::HSeparator m_comp_sep;

    OEq m_eq;
    Gtk::HSeparator m_eq_sep;

    

};

#endif /* OSTRIPLAYOUT_H */
