from debian:jessie

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    cmake-curses-gui \
    python-dev \
    libboost-all-dev

ADD src /code
