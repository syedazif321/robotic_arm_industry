#!/usr/bin/env python3


from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import QTimer

import signal
import math

import ros
import json
import os
import sys
import time

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(895, 586)
        MainWindow.setAutoFillBackground(False)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")


        self.controller = ros.Xarm7Controller()
        self.target_file = '/home/azif/xarm7_ros2_simulation/robot_data/saved_joint_poses.json'
        self.program_file = '/home/azif/xarm7_ros2_simulation/robot_data/program.json'
        self.box_file = '/home/azif/xarm7_ros2_simulation/robot_data/boxes.json'


   
        self.jog_timer = QTimer()
        self.jog_timer.timeout.connect(self.send_continuous_jog)
        self.current_axis = None
        self.current_direction = 0


        self.line = QtWidgets.QFrame(self.centralwidget)
        self.line.setGeometry(QtCore.QRect(460, 5, 20, 461))
        self.line.setFrameShape(QtWidgets.QFrame.VLine)
        self.line.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line.setObjectName("line")
        self.line_2 = QtWidgets.QFrame(self.centralwidget)
        self.line_2.setGeometry(QtCore.QRect(-60, 160, 1061, 20))
        self.line_2.setFrameShape(QtWidgets.QFrame.HLine)
        self.line_2.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line_2.setObjectName("line_2")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(10, 15, 67, 17))
        self.label.setObjectName("label")
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setGeometry(QtCore.QRect(10, 45, 67, 17))
        self.label_2.setObjectName("label_2")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        self.label_3.setGeometry(QtCore.QRect(10, 75, 67, 17))
        self.label_3.setObjectName("label_3")
        self.label_4 = QtWidgets.QLabel(self.centralwidget)
        self.label_4.setGeometry(QtCore.QRect(190, 15, 67, 17))
        self.label_4.setObjectName("label_4")
        self.label_5 = QtWidgets.QLabel(self.centralwidget)
        self.label_5.setGeometry(QtCore.QRect(190, 45, 67, 17))
        self.label_5.setObjectName("label_5")
        self.label_6 = QtWidgets.QLabel(self.centralwidget)
        self.label_6.setGeometry(QtCore.QRect(190, 75, 67, 17))
        self.label_6.setObjectName("label_6")
        self.pushButton = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton.setGeometry(QtCore.QRect(370, 15, 89, 41))
        self.pushButton.setObjectName("pushButton")
        self.comboBox = QtWidgets.QComboBox(self.centralwidget)
        self.comboBox.setGeometry(QtCore.QRect(100, 205, 211, 25))
        self.comboBox.setObjectName("comboBox")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.label_13 = QtWidgets.QLabel(self.centralwidget)
        self.label_13.setGeometry(QtCore.QRect(10, 150, 451, 17))
        self.label_13.setObjectName("label_13")
        self.label_15 = QtWidgets.QLabel(self.centralwidget)
        self.label_15.setGeometry(QtCore.QRect(10, 235, 441, 20))
        self.label_15.setObjectName("label_15")
        self.label_16 = QtWidgets.QLabel(self.centralwidget)
        self.label_16.setGeometry(QtCore.QRect(10, 255, 441, 20))
        self.label_16.setObjectName("label_16")
        self.pushButton_3 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_3.setGeometry(QtCore.QRect(320, 205, 141, 25))
        self.pushButton_3.setObjectName("pushButton_3")
        self.label_17 = QtWidgets.QLabel(self.centralwidget)
        self.label_17.setGeometry(QtCore.QRect(10, 285, 451, 17))
        self.label_17.setObjectName("label_17")
        self.line_4 = QtWidgets.QFrame(self.centralwidget)
        self.line_4.setGeometry(QtCore.QRect(-40, 295, 511, 20))
        self.line_4.setFrameShape(QtWidgets.QFrame.HLine)
        self.line_4.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line_4.setObjectName("line_4")
        self.label_25 = QtWidgets.QLabel(self.centralwidget)
        self.label_25.setGeometry(QtCore.QRect(20, 205, 67, 17))
        self.label_25.setObjectName("label_25")
        self.label_26 = QtWidgets.QLabel(self.centralwidget)
        self.label_26.setGeometry(QtCore.QRect(480, 20, 91, 17))
        self.label_26.setObjectName("label_26")
        self.textBrowser = QtWidgets.QTextBrowser(self.centralwidget)
        self.textBrowser.setGeometry(QtCore.QRect(480, 40, 381, 91))
        self.textBrowser.setObjectName("textBrowser")
        self.pushButton_9 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_9.setGeometry(QtCore.QRect(370, 65, 89, 31))
        self.pushButton_9.setObjectName("pushButton_9")
        self.lineEdit_14 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_14.setGeometry(QtCore.QRect(350, 105, 111, 25))
        self.lineEdit_14.setObjectName("lineEdit_14")
        self.label_27 = QtWidgets.QLabel(self.centralwidget)
        self.label_27.setGeometry(QtCore.QRect(250, 105, 91, 17))
        self.label_27.setObjectName("label_27")
        self.line_5 = QtWidgets.QFrame(self.centralwidget)
        self.line_5.setGeometry(QtCore.QRect(-10, 460, 931, 20))
        self.line_5.setFrameShape(QtWidgets.QFrame.HLine)
        self.line_5.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line_5.setObjectName("line_5")
        self.label_28 = QtWidgets.QLabel(self.centralwidget)
        self.label_28.setGeometry(QtCore.QRect(20, 325, 71, 17))
        self.label_28.setObjectName("label_28")
        self.comboBox_3 = QtWidgets.QComboBox(self.centralwidget)
        self.comboBox_3.setGeometry(QtCore.QRect(90, 315, 201, 25))
        self.comboBox_3.setObjectName("comboBox_3")
        self.comboBox_3.addItem("")
        self.comboBox_3.addItem("")
        self.pushButton_10 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_10.setGeometry(QtCore.QRect(310, 315, 141, 25))
        self.pushButton_10.setObjectName("pushButton_10")
        self.label_29 = QtWidgets.QLabel(self.centralwidget)
        self.label_29.setGeometry(QtCore.QRect(20, 355, 101, 17))
        self.label_29.setObjectName("label_29")
        self.lineEdit_15 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_15.setGeometry(QtCore.QRect(130, 355, 151, 25))
        self.lineEdit_15.setObjectName("lineEdit_15")
        self.label_30 = QtWidgets.QLabel(self.centralwidget)
        self.label_30.setGeometry(QtCore.QRect(20, 385, 111, 17))
        self.label_30.setObjectName("label_30")
        self.lineEdit_16 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_16.setGeometry(QtCore.QRect(130, 385, 151, 25))
        self.lineEdit_16.setObjectName("lineEdit_16")
        self.pushButton_11 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_11.setGeometry(QtCore.QRect(300, 355, 61, 51))
        self.pushButton_11.setObjectName("pushButton_11")
        self.pushButton_12 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_12.setGeometry(QtCore.QRect(530, 220, 31, 31))
        self.pushButton_12.setObjectName("pushButton_12")
        self.pushButton_13 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_13.setGeometry(QtCore.QRect(530, 280, 31, 31))
        self.pushButton_13.setObjectName("pushButton_13")
        self.pushButton_14 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_14.setGeometry(QtCore.QRect(490, 250, 31, 31))
        self.pushButton_14.setObjectName("pushButton_14")
        self.pushButton_15 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_15.setGeometry(QtCore.QRect(570, 250, 31, 31))
        self.pushButton_15.setObjectName("pushButton_15")
        self.line_6 = QtWidgets.QFrame(self.centralwidget)
        self.line_6.setGeometry(QtCore.QRect(660, 240, 3, 61))
        self.line_6.setFrameShape(QtWidgets.QFrame.VLine)
        self.line_6.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line_6.setObjectName("line_6")
        self.pushButton_16 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_16.setGeometry(QtCore.QRect(610, 280, 31, 31))
        self.pushButton_16.setObjectName("pushButton_16")
        self.pushButton_17 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_17.setGeometry(QtCore.QRect(610, 230, 31, 31))
        self.pushButton_17.setObjectName("pushButton_17")
        self.pushButton_18 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_18.setGeometry(QtCore.QRect(760, 250, 31, 31))
        self.pushButton_18.setObjectName("pushButton_18")
        self.pushButton_19 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_19.setGeometry(QtCore.QRect(820, 220, 31, 31))
        self.pushButton_19.setObjectName("pushButton_19")
        self.pushButton_20 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_20.setGeometry(QtCore.QRect(820, 280, 31, 31))
        self.pushButton_20.setObjectName("pushButton_20")
        self.pushButton_21 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_21.setGeometry(QtCore.QRect(720, 280, 31, 31))
        self.pushButton_21.setObjectName("pushButton_21")
        self.pushButton_22 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_22.setGeometry(QtCore.QRect(720, 220, 31, 31))
        self.pushButton_22.setObjectName("pushButton_22")
        self.pushButton_23 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_23.setGeometry(QtCore.QRect(680, 250, 31, 31))
        self.pushButton_23.setObjectName("pushButton_23")
        self.label_31 = QtWidgets.QLabel(self.centralwidget)
        self.label_31.setGeometry(QtCore.QRect(470, 180, 121, 21))
        self.label_31.setObjectName("label_31")
        self.pushButton_26 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_26.setGeometry(QtCore.QRect(370, 245, 89, 41))
        self.pushButton_26.setObjectName("pushButton_26")
        self.doubleSpinBox_4 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_4.setGeometry(QtCore.QRect(70, 15, 111, 26))
        self.doubleSpinBox_4.setMinimum(-3.1416)
        self.doubleSpinBox_4.setMaximum(3.1416)
        self.doubleSpinBox_4.setSingleStep(0.01)
        self.doubleSpinBox_4.setObjectName("doubleSpinBox_4")
        self.doubleSpinBox_5 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_5.setGeometry(QtCore.QRect(70, 45, 111, 26))
        self.doubleSpinBox_5.setMinimum(-3.1416)
        self.doubleSpinBox_5.setMaximum(3.1416)
        self.doubleSpinBox_5.setObjectName("doubleSpinBox_5")
        self.doubleSpinBox_6 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_6.setGeometry(QtCore.QRect(70, 70, 111, 26))
        self.doubleSpinBox_6.setMinimum(-3.1416)
        self.doubleSpinBox_6.setMaximum(3.1416)
        self.doubleSpinBox_6.setObjectName("doubleSpinBox_6")
        self.doubleSpinBox_7 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_7.setGeometry(QtCore.QRect(250, 15, 111, 26))
        self.doubleSpinBox_7.setMinimum(-3.1416)
        self.doubleSpinBox_7.setMaximum(3.1416)
        self.doubleSpinBox_7.setObjectName("doubleSpinBox_7")
        self.doubleSpinBox_8 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_8.setGeometry(QtCore.QRect(250, 45, 111, 26))
        self.doubleSpinBox_8.setMinimum(-3.1416)
        self.doubleSpinBox_8.setMaximum(3.1416)
        self.doubleSpinBox_8.setObjectName("doubleSpinBox_8")
        self.doubleSpinBox_9 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_9.setGeometry(QtCore.QRect(250, 75, 111, 26))
        self.doubleSpinBox_9.setMinimum(-3.1416)
        self.doubleSpinBox_9.setMaximum(3.1416)
        self.doubleSpinBox_9.setSingleStep(0.01)
        self.doubleSpinBox_9.setObjectName("doubleSpinBox_9")
        self.label_35 = QtWidgets.QLabel(self.centralwidget)
        self.label_35.setGeometry(QtCore.QRect(130, 140, 31, 20))
        self.label_35.setObjectName("label_35")
        self.label_36 = QtWidgets.QLabel(self.centralwidget)
        self.label_36.setGeometry(QtCore.QRect(0, 130, 41, 20))
        self.label_36.setObjectName("label_36")
        self.spinBox_7 = QtWidgets.QSpinBox(self.centralwidget)
        self.spinBox_7.setGeometry(QtCore.QRect(180, 130, 61, 26))
        self.spinBox_7.setMaximum(500)
        self.spinBox_7.setSingleStep(10)
        self.spinBox_7.setProperty("value", 100)
        self.spinBox_7.setObjectName("spinBox_7")
        self.spinBox_8 = QtWidgets.QSpinBox(self.centralwidget)
        self.spinBox_8.setGeometry(QtCore.QRect(50, 130, 61, 26))
        self.spinBox_8.setMinimum(0)
        self.spinBox_8.setSingleStep(1)
        self.spinBox_8.setProperty("value", 99)
        self.spinBox_8.setObjectName("spinBox_8")
        self.line_7 = QtWidgets.QFrame(self.centralwidget)
        self.line_7.setGeometry(QtCore.QRect(470, 310, 511, 20))
        self.line_7.setFrameShape(QtWidgets.QFrame.HLine)
        self.line_7.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line_7.setObjectName("line_7")
        self.pushButton_27 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_27.setGeometry(QtCore.QRect(710, 410, 89, 21))
        self.pushButton_27.setObjectName("pushButton_27")
        self.pushButton_28 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_28.setGeometry(QtCore.QRect(710, 360, 89, 21))
        self.pushButton_28.setObjectName("pushButton_28")
        self.label_32 = QtWidgets.QLabel(self.centralwidget)
        self.label_32.setGeometry(QtCore.QRect(480, 330, 101, 17))
        self.label_32.setObjectName("label_32")
        self.label_33 = QtWidgets.QLabel(self.centralwidget)
        self.label_33.setGeometry(QtCore.QRect(480, 350, 61, 17))
        self.label_33.setObjectName("label_33")
        self.label_34 = QtWidgets.QLabel(self.centralwidget)
        self.label_34.setGeometry(QtCore.QRect(480, 380, 41, 17))
        self.label_34.setObjectName("label_34")
        self.lineEdit_17 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_17.setGeometry(QtCore.QRect(540, 350, 141, 25))
        self.lineEdit_17.setObjectName("lineEdit_17")
        self.lineEdit_18 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_18.setGeometry(QtCore.QRect(540, 380, 141, 25))
        self.lineEdit_18.setObjectName("lineEdit_18")
        self.label_37 = QtWidgets.QLabel(self.centralwidget)
        self.label_37.setGeometry(QtCore.QRect(480, 410, 61, 17))
        self.label_37.setObjectName("label_37")
        self.label_38 = QtWidgets.QLabel(self.centralwidget)
        self.label_38.setGeometry(QtCore.QRect(480, 440, 51, 17))
        self.label_38.setObjectName("label_38")
        self.lineEdit_19 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_19.setGeometry(QtCore.QRect(540, 440, 141, 25))
        self.lineEdit_19.setObjectName("lineEdit_19")
        self.lineEdit_20 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_20.setGeometry(QtCore.QRect(540, 410, 141, 25))
        self.lineEdit_20.setObjectName("lineEdit_20")
        self.label_7 = QtWidgets.QLabel(self.centralwidget)
        self.label_7.setGeometry(QtCore.QRect(10, 100, 67, 17))
        self.label_7.setObjectName("label_7")
        self.doubleSpinBox_10 = QtWidgets.QDoubleSpinBox(self.centralwidget)
        self.doubleSpinBox_10.setGeometry(QtCore.QRect(70, 100, 111, 26))
        self.doubleSpinBox_10.setMinimum(-3.1416)
        self.doubleSpinBox_10.setMaximum(3.1416)
        self.doubleSpinBox_10.setSingleStep(0.01)
        self.doubleSpinBox_10.setObjectName("doubleSpinBox_10")
        MainWindow.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)


        # try:
        #     with open(self.target_file, 'r') as f:
        #         self.targets = json.load(f)
        # except:
        #     self.targets = {}

        # for name in self.targets.keys():
        #     self.comboBox.addItem(name)

        # try:
        #     with open(self.program_file, 'r') as f:
        #         self.programs = json.load(f)
        # except:
        #     self.programs = {}


        # try:
        #     with open(self.program_file, 'r') as f:
        #         self.programs = json.load(f)
        # except:
        #     self.programs = {}

        # self.comboBox_3.clear()
        # for program_name in self.programs.keys():
        #     self.comboBox_3.addItem(program_name)



        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

        self.pushButton_26.clicked.connect(self.handle_get_joint_state)
        self.pushButton_9.clicked.connect(self.handle_save_targets)
        self.comboBox.currentTextChanged.connect(self.update_spinboxes_from_target)
        self.pushButton_28.clicked.connect(self.handle_attach_button)
        self.pushButton_27.clicked.connect(self.handle_detach_button)
        self.pushButton_11.clicked.connect(self.handle_save_program_step)
        self.pushButton.clicked.connect(self.handle_go_to_joint_goal)
        self.pushButton_10.clicked.connect(self.run_program_from_combo)

        self.pushButton_12.pressed.connect(lambda: self.start_jog('x', 1))
        self.pushButton_12.released.connect(self.stop_jog)
        self.pushButton_13.pressed.connect(lambda: self.start_jog('x', -1))
        self.pushButton_13.released.connect(self.stop_jog)

        self.pushButton_15.pressed.connect(lambda: self.start_jog('y', 1))
        self.pushButton_15.released.connect(self.stop_jog)
        self.pushButton_14.pressed.connect(lambda: self.start_jog('y', -1))
        self.pushButton_14.released.connect(self.stop_jog)

        self.pushButton_17.pressed.connect(lambda: self.start_jog('z', 1))
        self.pushButton_17.released.connect(self.stop_jog)
        self.pushButton_16.pressed.connect(lambda: self.start_jog('z', -1))
        self.pushButton_16.released.connect(self.stop_jog)

        self.pushButton_19.pressed.connect(lambda: self.start_jog('rx', 1))
        self.pushButton_19.released.connect(self.stop_jog)
        self.pushButton_20.pressed.connect(lambda: self.start_jog('rx', -1))
        self.pushButton_20.released.connect(self.stop_jog)

        self.pushButton_22.pressed.connect(lambda: self.start_jog('py', 1))
        self.pushButton_22.released.connect(self.stop_jog)
        self.pushButton_21.pressed.connect(lambda: self.start_jog('py', -1))
        self.pushButton_21.released.connect(self.stop_jog)

        self.pushButton_18.pressed.connect(lambda: self.start_jog('rz', 1))
        self.pushButton_18.released.connect(self.stop_jog)
        self.pushButton_23.pressed.connect(lambda: self.start_jog('rz', -1))
        self.pushButton_23.released.connect(self.stop_jog)


    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.label.setText(_translate("MainWindow", "Joint_1 :"))
        self.label_2.setText(_translate("MainWindow", "Joint_2 :"))
        self.label_3.setText(_translate("MainWindow", "Joint_3 :"))
        self.label_4.setText(_translate("MainWindow", "Joint_4 :"))
        self.label_5.setText(_translate("MainWindow", "Joint_5 :"))
        self.label_6.setText(_translate("MainWindow", "Joint_6 :"))
        self.label_7.setText(_translate("MainWindow", "Joint_7 :"))
        self.pushButton.setText(_translate("MainWindow", "Go To\n"
"Joint Goal"))
        self.comboBox.setItemText(0, _translate("MainWindow", "Default"))
        self.comboBox.setItemText(1, _translate("MainWindow", "Look"))
        self.comboBox.setItemText(2, _translate("MainWindow", "Ready"))
        self.label_13.setText(_translate("MainWindow", "Status: "))
        self.label_15.setText(_translate("MainWindow", "Joint Details: "))
        self.label_16.setText(_translate("MainWindow", "Position Details: "))
        self.pushButton_3.setText(_translate("MainWindow", "Go"))
        self.label_17.setText(_translate("MainWindow", "Status: "))
        self.label_25.setText(_translate("MainWindow", "Targets :"))
        self.label_26.setText(_translate("MainWindow", "Debug Logs :"))
        self.pushButton_9.setText(_translate("MainWindow", "Save Target"))
        self.label_27.setText(_translate("MainWindow", "Target Name:"))
        self.label_28.setText(_translate("MainWindow", "Program:"))
        self.comboBox_3.setItemText(0, _translate("MainWindow", "Prog_1"))
        self.comboBox_3.setItemText(1, _translate("MainWindow", "Prog_2"))
        self.pushButton_10.setText(_translate("MainWindow", "Go"))
        self.label_29.setText(_translate("MainWindow", "Target Name:"))
        self.label_30.setText(_translate("MainWindow", "Program Name:"))
        self.pushButton_11.setText(_translate("MainWindow", "Save"))
        self.pushButton_12.setText(_translate("MainWindow", "X+"))
        self.pushButton_13.setText(_translate("MainWindow", "X-"))
        self.pushButton_14.setText(_translate("MainWindow", "Y-"))
        self.pushButton_15.setText(_translate("MainWindow", "Y+"))
        self.pushButton_16.setText(_translate("MainWindow", "Z-"))
        self.pushButton_17.setText(_translate("MainWindow", "Z+"))
        self.pushButton_18.setText(_translate("MainWindow", "R+"))
        self.pushButton_19.setText(_translate("MainWindow", "Y+"))
        self.pushButton_20.setText(_translate("MainWindow", "Y-"))
        self.pushButton_21.setText(_translate("MainWindow", "P-"))
        self.pushButton_22.setText(_translate("MainWindow", "P+"))
        self.pushButton_23.setText(_translate("MainWindow", "R-"))
        self.label_31.setText(_translate("MainWindow", "Jog Movement: "))
        self.pushButton_26.setText(_translate("MainWindow", "Current\n"
"States"))
        self.label_35.setText(_translate("MainWindow", "Acc:"))
        self.label_36.setText(_translate("MainWindow", "Vel:"))
        self.pushButton_27.setText(_translate("MainWindow", "Dettach"))
        self.pushButton_28.setText(_translate("MainWindow", "Attach"))
        self.label_32.setText(_translate("MainWindow", "suction plugin :"))
        self.label_33.setText(_translate("MainWindow", "Model1:"))
        self.label_34.setText(_translate("MainWindow", "Link:"))
        self.label_37.setText(_translate("MainWindow", "Model1:"))
        self.label_38.setText(_translate("MainWindow", "Link:"))


    

        

    def handle_get_joint_state(self):
        joint_state = self.controller.get_joint_positions()
        self.textBrowser.append(f"Joint State: {joint_state}")

        self.doubleSpinBox_4.setValue(joint_state[0])
        self.doubleSpinBox_5.setValue(joint_state[1])
        self.doubleSpinBox_6.setValue(joint_state[2])
        self.doubleSpinBox_7.setValue(joint_state[3])
        self.doubleSpinBox_8.setValue(joint_state[4])
        self.doubleSpinBox_9.setValue(joint_state[5])
        self.doubleSpinBox_10.setValue(joint_state[6])

    def update_spinboxes_from_target(self, pose_name):
        if pose_name in self.targets:
            joints = self.targets[pose_name]

            if len(joints) == 7:
                self.doubleSpinBox_4.setValue(float(joints[0]))
                self.doubleSpinBox_5.setValue(float(joints[1]))
                self.doubleSpinBox_6.setValue(float(joints[2]))
                self.doubleSpinBox_7.setValue(float(joints[3]))
                self.doubleSpinBox_8.setValue(float(joints[4]))
                self.doubleSpinBox_9.setValue(float(joints[5]))
                self.doubleSpinBox_10.setValue(float(joints[6]))

                self.textBrowser.append(f"Loaded target '{pose_name}': {joints}")
            else:
                self.label_13.setText("Status: Invalid joint data.")
        else:
            self.label_13.setText("Status: Pose not found.")

    def start_jog(self, axis, direction):
        self.current_axis = axis
        self.current_direction = direction
        self.jog_timer.start(100)  # every 100ms

    def stop_jog(self):
        self.jog_timer.stop()
        self.current_axis = None

    def send_continuous_jog(self):
        if self.current_axis is not None:
            self.controller.send_cartesian_command(self.current_axis, self.current_direction)



    def handle_run_program(self, program_name):
        program_name = self.comboBox_3.currentText().strip()

        if program_name not in self.programs:
            self.textBrowser.append(f" Program '{program_name}' not found.")
            return

        steps = self.programs[program_name]

        for step in steps:
            target = step.get("target", "")

            if target in ["attach", "detach"]:
                model2 = step.get("model", "")
                link2 = step.get("link", "")

                if not model2 or not link2:
                    self.textBrowser.append(f" Missing model/link in '{target}' step.")
                    continue

                self.textBrowser.append(f" {target.capitalize()} {model2}, {link2}")
                if target == "attach":
                    success, msg = self.controller.call_attach_service(model2, link2)
                else:
                    success, msg = self.controller.call_detach_service(model2, link2)

                if success:
                    self.textBrowser.append(f" {target.capitalize()} succeeded.")
                else:
                    self.textBrowser.append(f" {target.capitalize()} failed: {msg}")

            else:
                joints = self.targets.get(target)
                if joints:
                    self.textBrowser.append(f" Moving to '{target}'")
                    success, msg = self.controller.move_to_joint_goal(joints)
                    if not success:
                        self.textBrowser.append(f" Failed to move to '{target}'")
                else:
                    self.textBrowser.append(f"Target '{target}' not found in saved poses.")

            delay = step.get("delay", 1.0)  # use 1 second default
            self.textBrowser.append(f" Waiting {delay} seconds...")
            time.sleep(delay)

    def run_program_from_combo(self):
        program_name = self.comboBox.currentText().strip()
        self.handle_run_program(program_name)

    def handle_save_program_step(self):
        program_name = self.lineEdit_16.text().strip()
        target_name = self.lineEdit_15.text().strip()

        if not program_name or not target_name:
            self.textBrowser.setText(" Please enter both program and target name.")
            return

        if program_name not in self.programs:
            self.programs[program_name] = []

        step_entry = {"target": target_name}

        # If the target is 'attach' or 'detach', also save model/link
        if target_name in ["attach", "detach"]:
            model = self.lineEdit_20.text().strip()
            link = self.lineEdit_19.text().strip()

            if not model or not link:
                self.textBrowser.setText(f" Please enter model and link for '{target_name}' step.")
                return

            step_entry["model"] = model
            step_entry["link"] = link

        self.programs[program_name].append(step_entry)

        with open(self.program_file, 'w') as f:
            json.dump(self.programs, f, indent=2)

        self.load_targets_and_programs() 

        # Save the entire program structure to JSON
        with open(self.program_file, 'w') as f:
            json.dump(self.programs, f, indent=2)

        self.textBrowser.append(f"Saved step '{target_name}' to program '{program_name}'")
        self.lineEdit_15.clear()



    def handle_manual_attach(self):
        model2 = self.lineEdit_20.text().strip()
        link2 = self.lineEdit_19.text().strip()
        if not model2 or not link2:
            self.textBrowser.append(" Enter model/link to attach.")
            return

        self.textBrowser.append(f" Attaching {model2}, {link2}")
        success, msg = self.controller.call_attach_service(model2, link2)
        self.textBrowser.append(" Attached" if success else f" Failed: {msg}")

    def handle_manual_detach(self):
        model2 = self.lineEdit_20.text().strip()
        link2 = self.lineEdit_20.text().strip()
        if not model2 or not link2:
            self.textBrowser.append(" Enter model/link to detach.")
            return

        self.textBrowser.append(f"🔓 Detaching {model2}, {link2}")
        success, msg = self.controller.call_detach_service(model2, link2)
        self.textBrowser.append("Detached" if success else f" failed: {msg}")


    def handle_save_targets(self):
        try:
            j1 = float(self.doubleSpinBox_4.value()) if self.doubleSpinBox_4.value() else 0.0
            j2 = float(self.doubleSpinBox_5.value()) if self.doubleSpinBox_5.value() else 0.0
            j3 = float(self.doubleSpinBox_6.value()) if self.doubleSpinBox_6.value() else 0.0
            j4 = float(self.doubleSpinBox_7.value()) if self.doubleSpinBox_7.value() else 0.0
            j5 = float(self.doubleSpinBox_8.value()) if self.doubleSpinBox_8.value() else 0.0
            j6 = float(self.doubleSpinBox_9.value()) if self.doubleSpinBox_9.value() else 0.0
            j7 = float(self.doubleSpinBox_10.value()) if self.doubleSpinBox_10.value() else 0.0
        except ValueError:
            self.label_13.setText("Status: Error: Please enter valid numbers in all fields.")
            return
        

        joint_angles = [j1, j2, j3, j4, j5, j6, j7]
        
        target_name = self.lineEdit_14.text() if self.lineEdit_14.text() else str(len(self.targets))

        if not self.targets.get(target_name):
            self.comboBox.addItem("")
            self.comboBox.setItemText(self.comboBox.count() - 1, target_name)

        self.targets[target_name] = joint_angles

        self.save_targets()
        self.textBrowser.append(f'Saving {target_name}: {joint_angles}')

        self.lineEdit_14.clear()
        self.label_13.setText(f'Status: Saved {target_name}')
        
    def save_targets(self):
        with open(self.target_file, 'w') as f:
            json.dump(self.targets, f, indent=2)


    def handle_joint_button(self):
        try:
            j1 = float(self.doubleSpinBox_4.value()) if self.doubleSpinBox_4.value() else 0.0
            j2 = float(self.doubleSpinBox_5.value()) if self.doubleSpinBox_5.value() else 0.0
            j3 = float(self.doubleSpinBox_6.value()) if self.doubleSpinBox_6.value() else 0.0
            j4 = float(self.doubleSpinBox_7.value()) if self.doubleSpinBox_7.value() else 0.0
            j5 = float(self.doubleSpinBox_8.value()) if self.doubleSpinBox_8.value() else 0.0
            j6 = float(self.doubleSpinBox_9.value()) if self.doubleSpinBox_9.value() else 0.0
            j7 = float(self.doubleSpinBox_10.value()) if self.doubleSpinBox_10.value() else 0.0
        except ValueError:
            self.label_13.setText("Status: Error: Please enter valid numbers in all fields.")
            return
        
        joint_angles = [j1, j2, j3, j4, j5, j6, j7]

        self.controller.move_to_joint_goal(joint_angles)
        self.label_13.setText(f'Status: Exectued')

    def handle_attach_button(self):
        model2 = self.lineEdit_20.text()
        link2 = self.lineEdit_19.text()
        if model2 and link2:
            self.controller.call_attach_service(model2, link2)
        else:
            self.label_13.setText("Status: Enter both model2 and link2.")

    def handle_detach_button(self):
        model2 = self.lineEdit_20.text()
        link2 = self.lineEdit_19.text()
        if model2 and link2:
            self.controller.call_detach_service(model2, link2)
        else:
            self.label_13.setText("Status: Enter both model2 and link2.")

    def handle_go_to_joint_goal(self):
        target_name = self.comboBox.currentText()

        if not target_name or target_name not in self.targets:
            self.label_13.setText("Invalid or missing target.")
            return

        joint_values = self.targets[target_name]

        success, message = self.controller.move_to_joint_goal(joint_values)

        if success:
            self.label_13.setText(f"Success: {message}")
            self.textBrowser.append(f"[Moved to] {target_name}")
        else:
            self.label_13.setText(f"Failed: {message}")


    def load_targets_and_programs(self):
        # Load targets
        try:
            with open(self.target_file, 'r') as f:
                self.targets = json.load(f)
        except:
            self.targets = {}

        self.comboBox.clear()
        for name in self.targets.keys():
            self.comboBox.addItem(name)

        # Load programs
        try:
            with open(self.program_file, 'r') as f:
                self.programs = json.load(f)
        except:
            self.programs = {}

        self.comboBox_3.clear()
        for program_name in self.programs.keys():
            self.comboBox_3.addItem(program_name)


class MainWindow(QtWidgets.QMainWindow):
    def __init__(self):
        super().__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.ui.load_targets_and_programs()

    def closeEvent(self, event):
        # Call your stop functions before closing
        self.ui.controller.executor.shutdown()
        # self.ui.controller.executor_thread.join()
        event.accept()  # Accept the event to close the window

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    try:
        signal.signal(signal.SIGINT, signal.SIG_DFL)
        sys.exit(app.exec_())
    except:
        pass

