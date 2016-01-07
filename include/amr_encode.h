#ifndef _amr_encode_h
#define _amr_encode_h





void *amr_enc_open(int nChannels, int nSampleRate,int nBitsPerSample);
int  amr_enc_close(void *handle);
int amr_encode( void * encode_handle, unsigned char * pRawData, unsigned int nRawDataSize, unsigned char * pEncBuf, unsigned int nEncBufSize );

#endif /*_amr_encode_h*/