<div align="center">

<img src="./assets/Climafetch_Logo.png" alt="Climafetch Logo" style="width:800px;height:auto;">

### Fun Bash Scripts 📃  Climafetch  ⛅

</div>

See the current outdoor climate like [wthrr](https://github.com/ttytm/wthrr-the-weathercrab) or [wego](https://github.com/schachmat/wego) but display it like [neofetch](https://github.com/dylanaraps/neofetch)

**Climafetch** aims to be an easy to use weather app that retrieves the current weather conditions and displays them in a Linux bash terminal.  Here's some examples!

## ✨ Features
<div align="center">

<img src="./assets/Climafetch_Sunny.png" alt="Climafetch Sunny" style="width:800px;height:auto;">

### Day Time 🌞

<img src="./assets/Climafetch_Night.png" alt="Climafetch Night" style="width:800px;height:auto;">

### Night Time 💫
</div>

## 🧩 Install

Thank you for wanting to try **Climafetch** 🥰️  Hopefully, this guide will get you started!

>[!IMPORTANT]
>**Climafetch** is in development and is unstable.  
>**Climafetch** has only been tested on Debian Linux system, but will probably work on other distros.  
>Mac and Windows is currently unsupported.

>[!NOTE]
>Windows users!  Because Windows doesn't have bash, you need [WSL](https://learn.microsoft.com/en-us/windows/wsl/install).  There is an issue open to try and integrate Windows for the next version!

- Open a bash terminal

- Install dependencies (they may already be installed):
  ```
  sudo apt install inxi wget figlet lolcat
  ```
- Download latest release:
  ```
  wget https://github.com/AptGetMe/Climafetch/releases/latest/download/climafetch
  ```
- Allow execution permissions:
  ```
  chmod +x climafetch
  ```
- Move to /usr/local/bin:
  ```
  sudo mv climafetch /usr/local/bin
  ```

## 🚀 Run

Open a new terminal and execute app.
```
climafetch
```
Here are some commandline options you can use
```
climafetch -v  # show version
climafect -h   # show help page
```

## 🗑️ Uninstall

Open a terminal and remove script.
```
sudo rm /usr/local/bin/climafetch
```

## 🛠️ Build Contribute

A bash terminal and a text editor is sufficient for developing bash scripts! However, here are my recommendations that may make the task easier.

- Clone Github Repository
  ```
  git clone https://github.com/AptGetMe/Climafetch.git
  ```
- Install the development dependencies
  ```
  sudo apt install inxi figlet lolcat
  ```
- In *Pulsar* (or *VSCode* if you prefer), open the cloned folder as a new project
- Test to make sure the environment is working by running script in the intergrated terminal
  ```
  ./climafetch
  ```
- Program away!

>[!TIP]
>Develop on a **Linux** installation because *Bash* is the default shell
>(**Debian 12** is what I use) and use the *ShellCheck* extention

- Open a new pull request to submit changes!

## ⭐ Support the Project

If you enjoy this app, please star this repository and share it with your friends online! 😊

## 📝 License
This project is licensed under the **MIT License**.
