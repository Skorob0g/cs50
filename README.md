Stuff that need to be installed to avoid using cloud-based VS code editor provided by the course:

    - libcs50: C library to ease basic stuff in C
        -- add cs50 repo to yum `curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash`
        -- install the `libcs50` package `yum install libcs50`
        -- use -lcs50 flag for gcc

    - check50: client for cloud-based checkers
        -- pip install check50

    - style50: client for cloud-based linter
        -- pip install style50
