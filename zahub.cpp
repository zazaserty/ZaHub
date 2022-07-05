# include <iostream>
# include <string>

using namespace std;

int main()
{
    std::cout << R"(
        __________      .__         ___.    
        \____    /____  |  |__  __ _\_ |__  
          /     /\__  \ |  |  \|  |  \ __ \ 
         /     /_ / __ \|   Y  \  |  / \_\ \
        /_______ (____  /___|  /____/|___  /
                \/    \/     \/          \/
    )" << '\n';
    cout << "" << endl;
    cout << "What are you here for?" << endl;
    cout << "·Option 1: Im here to rice termux" << endl;
    cout << "·Option 2: Im here to rice bspwm" << endl;
    cout << "Choose, it's either 1 or 2" << endl;
    int option;
    cin >> option;

    if (option == 1) {
        system ("pkg update && pkg clean && pkg install git make bat exa zsh bash neofetch no-more-secrets && rm -rf ~/.p10k.zsh ~/.zshrc ~/.bashrc ~/powerlevel10k ; git clone https://github.com/zazaserty/Termux-rice && cd Termux-rice && cp -r .bashrc .zshrc ~/ && git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ~/powerlevel10k && echo 'source ~/powerlevel10k/powerlevel10k.zsh-theme' >>~/.zshrc && cd .. && rm -rf Zahub/  Termux-rice/ ; git clone https://github.com/dylanaraps/pfetch && cd pfetch && make && make install && cd .. && rm -rf pfetch && rm -rf ~/Zahub ~/pfetch");
        cout << "Rice completed! You are now one of the cool kids" << endl;
        return 0;
    }

    else if (option == 2) {
        cout << "This option will not install dependencies since there are a wide range of distros and I obviously cannot support them but if you are on a Gentoo-like system it can try";
        cout << "Do you want the script to try to install the dependencies y/n" << endl;
        string installdeps;
        cin >> installdeps; 
 
        if (installdeps == "yes" || "Yes" || "y" || "YES") {
            system ("sudo --ask --newuse --verbose emerge rofi polybar sxhkd setxkbmap bspwm feh kitty dash bash");
        }
 
        cout << "We are now going to install the config files" << endl;
        system ("git clone https://github.com/zazaserty/Za.dots && mkdir ~/Documents ; mv Za.dots/home/zazaserty/Documents/wallpaper.jpg ~/Documents && mkdir ~/.config && rm -rf ~/.config/bspwm ~/.config/sxhkd ~/.config/polybar ; mkdir ~/.config/bspwm ~/.config/polybar ~/.config/sxhkd && mv Za.dots/home/zazaserty/.config/bspwm Za.dots/home/zazaserty/polybar Za.dots/home/zazaserty/sxhkd ~/.config && rm -rf Za.dots");
        cout << "Do you also want to install zazaserty's make.conf? y/n" << endl;
        string makeconfig;
        cin >> makeconfig;
        if (makeconfig == "y" || "yes" || "Yes" || "YES") {
            system ("git clone https://github.com/zazaserty/Za.dots && sudo rm -rf /etc/portage/make.conf && sudo mv Za.dots/etc/portage/make.conf /etc/portage/make.conf && rm -rf Za.dots/");   
        }
        cout << "Setup completed, have a nice day" << endl;
        return 0;
    }

    else {
        cout << "That is not a valid option..." << endl;
        return 0;
    }
}
