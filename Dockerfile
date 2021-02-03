FROM gitpod/workspace-full-vnc:latest

USER root

RUN apt-get update && apt-get install -y \
libgl1

RUN useradd --create-home --shell /bin/bash user \
&& echo "user ALL=(ALL:ALL) NOPASSWD: ALL" > /etc/sudoers.d/user
 
USER user

RUN wget -qO - https://packages.lunarg.com/lunarg-signing-key-pub.asc | sudo apt-key add -
RUN sudo wget -qO /etc/apt/sources.list.d/lunarg-vulkan-1.2.162-focal.list https://packages.lunarg.com/vulkan/1.2.162/lunarg-vulkan-1.2.162-focal.list
RUN sudo apt update &&
RUN sudo apt install vulkan-sdk
