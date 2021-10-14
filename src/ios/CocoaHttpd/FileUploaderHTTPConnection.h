
#import "HTTPConnection.h"

@class MultipartFormDataParser;

@interface FileUploaderHTTPConnection : HTTPConnection  {
    MultipartFormDataParser*        parser;
	NSFileHandle*					storeFile;
	
	NSMutableArray*					uploadedFiles;
}

@end
