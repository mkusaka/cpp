FROM ubuntu:xenial-20190122

WORKDIR /workdir/

COPY ./scripts/installer.sh .

RUN ./installer.sh && rm installer.sh
