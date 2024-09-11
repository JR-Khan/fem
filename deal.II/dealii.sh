# You can change this location to something else if you want.
DEAL_II_DIR=$HOME/deal.II

cmake \
   -DCMAKE_INSTALL_PREFIX=$DEAL_II_DIR \
   -DDEAL_II_COMPONENT_EXAMPLES=ON  \
   -DDEAL_II_COMPILE_EXAMPLES=OFF \
   ..
