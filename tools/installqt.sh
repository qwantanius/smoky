#!/usr/bin bash
wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run
chomd 777 qt-opensource-linux-x64-5.7.0.run
sudo apt-get install build-essential
sudo apt-get install libfontconfig1
sudo apt-get install mesa-common-dev
sudo apt-get install libglu1-mesa-dev -y
sudo update-mime-database /usr/share/mime
sudo apt-get install qt5-default
