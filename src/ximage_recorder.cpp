#include "xwebrtc/ximage_recorder.hpp"

template class XWEBRTC_API xw::xmaterialize<xwebrtc::ximage_recorder>;
template xw::xmaterialize<xwebrtc::ximage_recorder>::xmaterialize();
template class XWEBRTC_API xw::xtransport<xw::xmaterialize<xwebrtc::ximage_recorder>>;
