/// \file chunker.h
/// \author Zuoru YANG (zryang@cse.cuhk.edu.hk)
/// \brief declear the API of chunking a given file
/// \version 0.1
/// \date 2019-03-18
///
/// \copyright Copyright (c) 2019
///

#ifndef SSLIB_CHUNKER_H
#define SSLIB_CHUNKER_H

#include <stdlib.h>
#include <iostream>

class Chunker{
    private:
        bool chunkerType_; /// the type of the chunker (Fix-Size or Var-Size)

        int avgChunkSize_; /// minimum chunk size

        int minChunkSize_; /// maximum chunk size


    
    public:

        Chunker();

        ~Chunker();

        /// \brief divide a buffer into a number of chunks 
        ///
        /// \param buffer a buffer to be chunked 
        /// \param bufferSize the size of the buffer
        /// \param chunkEndIndexList a list for returning the end index of each chunk <return>
        /// \param numOfChunks the number of chunks <return>
         
        void chunking(unsigned char *buffer, int bufferSize, int *chunkEndIndexList, int *numOfChunks);

};

#endif // 