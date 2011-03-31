
GstCheckABIStruct list[] = {
  {"GstAppSinkCallbacks", sizeof (GstAppSinkCallbacks), 56},
  {"GstAppSinkClass", sizeof (GstAppSinkClass), 800},
  {"GstAppSink", sizeof (GstAppSink), 640},
  {"GstAppSrcCallbacks", sizeof (GstAppSrcCallbacks), 56},
  {"GstAppSrcClass", sizeof (GstAppSrcClass), 816},
  {"GstAppSrc", sizeof (GstAppSrc), 640},
  {"GstAudioClockClass", sizeof (GstAudioClockClass), 384},
  {"GstAudioClock", sizeof (GstAudioClock), 344},
  {"GstAudioFilterClass", sizeof (GstAudioFilterClass), 784},
  {"GstAudioFilter", sizeof (GstAudioFilter), 744},
  {"GstAudioSinkClass", sizeof (GstAudioSinkClass), 856},
  {"GstAudioSink", sizeof (GstAudioSink), 720},
  {"GstAudioSrcClass", sizeof (GstAudioSrcClass), 912},
  {"GstAudioSrc", sizeof (GstAudioSrc), 744},
  {"GstBaseAudioSinkClass", sizeof (GstBaseAudioSinkClass), 768},
  {"GstBaseAudioSink", sizeof (GstBaseAudioSink), 680},
  {"GstBaseAudioSrcClass", sizeof (GstBaseAudioSrcClass), 824},
  {"GstBaseAudioSrc", sizeof (GstBaseAudioSrc), 704},
  {"GstBaseRTPAudioPayloadClass", sizeof (GstBaseRTPAudioPayloadClass), 568},
  {"GstBaseRTPAudioPayload", sizeof (GstBaseRTPAudioPayload), 544},
  {"GstBaseRTPDepayloadClass", sizeof (GstBaseRTPDepayloadClass), 552},
  {"GstBaseRTPDepayload", sizeof (GstBaseRTPDepayload), 488},
  {"GstBaseRTPPayloadClass", sizeof (GstBaseRTPPayloadClass), 536},
  {"GstBaseRTPPayload", sizeof (GstBaseRTPPayload), 480},
  {"GstCddaBaseSrcClass", sizeof (GstCddaBaseSrcClass), 856},
  {"GstCddaBaseSrc", sizeof (GstCddaBaseSrc), 792},
  {"GstCddaBaseSrcTrack", sizeof (GstCddaBaseSrcTrack), 48},
  {"GstColorBalanceChannelClass", sizeof (GstColorBalanceChannelClass), 176},
  {"GstColorBalanceChannel", sizeof (GstColorBalanceChannel), 40},
  {"GstColorBalanceClass", sizeof (GstColorBalanceClass), 88},
  {"GstDiscovererClass", sizeof (GstDiscovererClass), 192},
  {"GstDiscoverer", sizeof (GstDiscoverer), 64},
  {"GstFFTF32Complex", sizeof (GstFFTF32Complex), 8},
  {"GstFFTF32", sizeof (GstFFTF32), 48},
  {"GstFFTF64Complex", sizeof (GstFFTF64Complex), 16},
  {"GstFFTF64", sizeof (GstFFTF64), 48},
  {"GstFFTS16Complex", sizeof (GstFFTS16Complex), 4},
  {"GstFFTS16", sizeof (GstFFTS16), 48},
  {"GstFFTS32Complex", sizeof (GstFFTS32Complex), 8},
  {"GstFFTS32", sizeof (GstFFTS32), 48},
  {"GstMixerClass", sizeof (GstMixerClass), 144},
  {"GstMixerOptionsClass", sizeof (GstMixerOptionsClass), 200},
  {"GstMixerOptions", sizeof (GstMixerOptions), 88},
  {"GstMixerTrackClass", sizeof (GstMixerTrackClass), 168},
  {"GstMixerTrack", sizeof (GstMixerTrack), 48},
  {"GstNavigationInterface", sizeof (GstNavigationInterface), 56},
  {"GstNetAddress", sizeof (GstNetAddress), 56},
  {"GstPropertyProbeInterface", sizeof (GstPropertyProbeInterface), 88},
  {"gst_riff_acid", sizeof (gst_riff_acid), 24},
  {"gst_riff_dmlh", sizeof (gst_riff_dmlh), 4},
  {"gst_riff_index_entry", sizeof (gst_riff_index_entry), 16},
  {"gst_riff_strf_auds", sizeof (gst_riff_strf_auds), 16},
  {"gst_riff_strf_iavs", sizeof (gst_riff_strf_iavs), 32},
  {"gst_riff_strf_vids", sizeof (gst_riff_strf_vids), 40},
  {"gst_riff_strh", sizeof (gst_riff_strh), 48},
  {"GstRingBufferClass", sizeof (GstRingBufferClass), 344},
  {"GstRingBuffer", sizeof (GstRingBuffer), 328},
  {"GstRingBufferSpec", sizeof (GstRingBufferSpec), 136},
  {"GstRTCPPacket", sizeof (GstRTCPPacket), 40},
  {"GstRTPPayloadInfo", sizeof (GstRTPPayloadInfo), 48},
  {"GstRTSPExtensionInterface", sizeof (GstRTSPExtensionInterface), 120},
  {"GstRTSPMessage", sizeof (GstRTSPMessage), 56},
  {"GstRTSPRange", sizeof (GstRTSPRange), 8},
  {"GstRTSPTime", sizeof (GstRTSPTime), 16},
  {"GstRTSPTimeRange", sizeof (GstRTSPTimeRange), 40},
  {"GstRTSPTransport", sizeof (GstRTSPTransport), 88},
  {"GstRTSPUrl", sizeof (GstRTSPUrl), 56},
  {"GstRTSPWatchFuncs", sizeof (GstRTSPWatchFuncs), 80},
  {"GstSDPAttribute", sizeof (GstSDPAttribute), 16},
  {"GstSDPBandwidth", sizeof (GstSDPBandwidth), 16},
  {"GstSDPConnection", sizeof (GstSDPConnection), 32},
  {"GstSDPKey", sizeof (GstSDPKey), 16},
  {"GstSDPMedia", sizeof (GstSDPMedia), 80},
  {"GstSDPMessage", sizeof (GstSDPMessage), 184},
  {"GstSDPOrigin", sizeof (GstSDPOrigin), 48},
  {"GstSDPTime", sizeof (GstSDPTime), 24},
  {"GstSDPZone", sizeof (GstSDPZone), 16},
  {"GstStreamVolumeInterface", sizeof (GstStreamVolumeInterface), 48},
  {"GstTagDemuxClass", sizeof (GstTagDemuxClass), 552},
  {"GstTagDemux", sizeof (GstTagDemux), 272},
  {"GstTunerChannelClass", sizeof (GstTunerChannelClass), 184},
  {"GstTunerChannel", sizeof (GstTunerChannel), 64},
  {"GstTunerClass", sizeof (GstTunerClass), 152},
  {"GstTunerNormClass", sizeof (GstTunerNormClass), 168},
  {"GstTunerNorm", sizeof (GstTunerNorm), 56},
  {"GstVideoFilterClass", sizeof (GstVideoFilterClass), 744},
  {"GstVideoFilter", sizeof (GstVideoFilter), 584},
  {"GstVideoOrientationInterface", sizeof (GstVideoOrientationInterface), 112},
  {"GstVideoRectangle", sizeof (GstVideoRectangle), 16},
  {"GstVideoSinkClass", sizeof (GstVideoSinkClass), 760},
  {"GstVideoSink", sizeof (GstVideoSink), 640},
  {"GstXOverlayClass", sizeof (GstXOverlayClass), 64},
  {NULL, 0, 0}
};
