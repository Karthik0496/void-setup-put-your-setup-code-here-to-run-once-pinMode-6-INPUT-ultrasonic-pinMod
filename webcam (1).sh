

echo "System update...."
sleep 4;
sudo apt-get update
sleep 1
echo "Cloning the code...."
sleep 4;
git clone https://github.com/silvanmelchior/RPi_Cam_Web_Interface.git
sleep 1;
cd RPi_Cam_Web_Interface
echo "Installling"
chmod u+x RPi_Cam_Web_Interface_Installer.sh
sleep 1;
./RPi_Cam_Web_Interface_Installer.sh install
while [ 1 ]
do
	echo "Please reboot the device by enabling the camera"
	sleep 4;
done

