//
//  BDRowInfo.h
//  BDDynamicGridViewDemo
//
//  Created by MobileAge Team on 6/23/12.
//
//  Copyright (c) 2014, MobileAge Team All Rights Reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice, 
//  this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice, 
//  this list of conditions and the following disclaimer in the documentation 
//  and/or other materials provided with the distribution.
//
//  3. Neither the name of Bluedot nor the names of its contributors may be used 
//  to endorse or promote products derived from this software without specific
//  prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
//  POSSIBILITY OF SUCH DAMAGE.



#import <Foundation/Foundation.h>

/**
 Data transfer object class for a table row/cell's metadata.
 
 The data in this object is computed, filled and used by BDDynamicGridViewController.
 
 __Note__ Row in BDDynamicGridViewController is represented by 
 a subclass UITableViewCell. So you can think of a row as a cell 
 on the UITableViewCell. But _row_ is a better term for describing
 the dynamic grid layout.
 */
@interface BDRowInfo : NSObject <NSCoding, NSCopying>

- (id)copy;

/**
  The number of views contained in this row. 
 */
@property (nonatomic, assign) NSUInteger viewsPerCell;
/**
 The number of views existing before this row.
 */
@property (nonatomic, assign) NSUInteger accumulatedViews;
/**
 The order of this row.
 */
@property (nonatomic, assign) NSUInteger order;
/**
 Whether row is the last row.
 */
@property (nonatomic, assign) BOOL isLastCell;
@end