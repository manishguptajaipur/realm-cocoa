//
//  RLMPopupWindow.h
//  RealmBrowser
//
//  Created by Gustaf Kugelberg on 29/09/14.
//  Copyright (c) 2014 Realm inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class RLMArrayNode;
@interface RLMPopupWindow : NSWindow

-(instancetype)initWithView:(NSView *)view atPoint:(NSPoint)point inWindow:(NSWindow *)window;

@end
