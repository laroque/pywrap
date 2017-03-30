from debian:jessie

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    cmake-curses-gui

RUN apt-get install -y python-dev \
                       libboost-all-dev

ADD cmake /code
