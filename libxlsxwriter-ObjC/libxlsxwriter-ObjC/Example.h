//
//  Example.h
//  libxlsxwriter-ObjC
//
//  Created by Ludovico Rossi on 11/11/15.
//  Copyright © 2015 Ludovico Rossi. All rights reserved.
//

@import Foundation;


@interface Example : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *outputFileName;
@property (readonly, nonatomic) NSString *outputFilePath;

- (void)run;

@end
