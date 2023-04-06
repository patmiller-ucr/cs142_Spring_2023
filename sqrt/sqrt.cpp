#include "sqrt.h"
#include <cmath>

namespace CS142 {

  void fast_sqrt(const std::vector<double>& inputs, std::vector<double>& outputs) {
    const size_t N = inputs.size();
    outputs.resize(N);
    for(unsigned i=0;i<N;++i) {
      outputs[i] = ::sqrt(inputs[i]);
    }
  }

  void accurate_sqrt(const std::vector<double>& inputs, std::vector<double>& outputs ) {
    const size_t N = inputs.size();
    outputs.resize(N);
    for(unsigned i=0;i<N;++i) {
      outputs[i] = ::sqrt(inputs[i]);
    }
}

}
