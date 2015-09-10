#ifndef  DATALINK_DATASOURCE_H
#define  DATALINK_DATASOURCE_H



template<typename T>
class  DataSource {

public :

  virtual long open(DataSpec dataSpec) = 0 ;

  virtual void close() = 0;

  virtual int read(T* buffer, int offset, int readLength) = 0;

}

#endif
