# SoulDinky


## About SoulDinky


Welcome to SoulDinky. 
These are the configuration files I use for flavors of arch linux.

## Project Structure

The structure of the files in this repository is easy to understand:

- `arch` contains configuration files for Arch Linux and derived distros

Each directory contains a file called `autoapp.sh`: this is a script I use to
easily install all the packages I want. You may have to install
`git` with your distro's package manager before you can clone this repository
and use these files.


## Usage

Installing these files is very simple:

1. Make sure `git` is installed on your system
2. Clone this repo
3. (Optional) Run `./autoapp.sh` if you would like to install the packages I use
4. Copy the configuration files from the repo to your home folder using the `./runconfigs.sh` file. 
5. You may need to log out and log back in for some changes to take effect.
6. You're done!
