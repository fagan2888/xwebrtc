#include "xwebrtc/xroom_mqtt.hpp"

template class XWEBRTC_API xw::xmaterialize<xwebrtc::xroom_mqtt>;
template xw::xmaterialize<xwebrtc::xroom_mqtt>::xmaterialize();
template class XWEBRTC_API xw::xtransport<xw::xmaterialize<xwebrtc::xroom_mqtt>>;
