<div align="center">

<img src="./assets/Climafetch_Logo.png" alt="Climafetch Logo" style="width:800px;height:auto;">

### Fun Bash Scripts 📃  Climafetch  ⛅

See the current outdoor climate in bash terminal like [wthrr](https://github.com/ttytm/wthrr-the-weathercrab) or [wego](https://github.com/schachmat/wego) but display it like [neofetch](https://github.com/dylanaraps/neofetch)

</div>

**Climafetch** aims to be a free, easy-to-use weather app that retrieves the current weather conditions and displays them in a Linux bash terminal.  Here's some examples!

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
>**Open-Metro** is the weather service that climafetch uses.  The free version of Open-Metro is pretty generous, but only allows non-commercial use and reasonable traffic.  Since climafetch uses Open-Metro free API, please make sure you use it within their [guidelines](https://open-meteo.com/en/pricing)!
>**Mac** and **Windows** are currently untested/unsupported.

>[!NOTE]
>Windows users!  Because Windows doesn't have bash, you need [WSL](https://learn.microsoft.com/en-us/windows/wsl/install).  There is an issue open to try and integrate Windows for a future version!  (which I have no idea when...)
>Location is currently only recognized as gps coordinates.

- Open a bash terminal

- Install dependencies (they may already be installed):
  ```
  sudo apt install curl jq figlet lolcat bc
  ```
- Download latest release via commandline or by going to the [release page](https://github.com/AptGetMe/Climafetch/releases):
  ```
  wget https://github.com/AptGetMe/Climafetch/releases/latest/download/climafetch
  ```
- Navigate to the folder that you downloaded the script into and allow execution permissions:
  ```
  chmod +x climafetch
  ```
- Move to /usr/local/bin so it is a visible command
  ```
  sudo mv climafetch /usr/local/bin
  ```
- All done installing!
## 🚀 Run

Open a new terminal and execute app.
```
climafetch                  # defaults location to 41.65° N and -83.54° W (Toledo Ohio US)
climafetch -- 46.78 -92.10  # set location to 46.78°N 92.10°W (Duluth Minnesoda US)
```
Here are some commandline options you can use
```
climafetch -v  # show version
climafetch -h  # show help page
```

## 🗑️ Uninstall

Open a terminal and remove script.
```
sudo rm /usr/local/bin/climafetch
```

## 🛠️ Build It Yourself or Contribute

A bash terminal and a text editor is sufficient for developing bash scripts! However, here are my recommendations that may make the task easier.

- Clone Github Repository
  ```
  git clone https://github.com/AptGetMe/Climafetch.git
  ```
- Make sure to install the dependencies mentioned above

- In a code editor (like *Zed* or *VSCode*), open the cloned folder as a new project
- Test to make sure the environment is working by running script in the intergrated terminal
  ```
  ./climafetch
  ./climafetch -- TestApiData  # will use the test data file included in the cloned repo
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
