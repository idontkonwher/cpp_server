FROM celiangarcia/gcc8-cmake:3.18.0
WORKDIR "/root/server"
ADD ./* /root/server/
RUN echo "building..." \
    && mkdir -p "build" \
    && cd "build" \
    && cmake .. \
    && make
RUN cd "/root/server/bin" \
    && ./server