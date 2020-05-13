ARG K_COMMIT
FROM runtimeverificationincink/kframework-k:ubuntu-bionic-${K_COMMIT}

#####################
# Install packages. #
#####################

RUN     apt-get update -q \
    &&  apt install --yes \
          libstdc++6      \
          llvm-6.0        \
          clang++-6.0     \
          clang-6.0

# This user is set up in the runtimeverificationinc/kframework:* images.
ARG USER_ID=1000
ARG GROUP_ID=1000
RUN groupadd -g $GROUP_ID user && useradd -m -u $USER_ID -s /bin/sh -g user user

USER user:user
WORKDIR /home/user
