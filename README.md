# How to: install dependencies using homebrew

---

1. Install homebrew
   a. Check if you have it already

    ```terminal
    $ brew -v
    Homebrew 3.6.18
    Homebrew/homebrew-core (......)
    Homebrew/homebrew-cask (......)
    ```

   b. if not, install homebrew

    ```terminal
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
    ```

   c. And after the installation, make sure you run these commands in **Next steps**:

   ```terminal
   $ (echo; echo 'eval "$(/opt/homebrew/bin/brew shellenv)"') >> /Users/leo/.zprofile 
   $ eval "$(/opt/homebrew/bin/brew shellenv)"
   ```

2. install `glm` and `glfw`

    ```terminal
    brew install glm glfw
    ```

3. check installation using

    ```terminal
    brew info glm glfw
    ```

    if you are on Intel chip (you can check this by `arch` in terminal, if it returns `i386`, you are), you should expect libraries installed in `/usr/local/...`. Otherwise, libraries should be installed in `/opt/homebrew/...`

4. Contact your TA (Piazza or Lab hours) for further help.
