//
//  KeyboardSupport.h
//  Moonlight
//
//  Created by Diego Waxemberg on 8/25/18.
//  Copyright © 2018 Moonlight Game Streaming Project. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface KeyboardSupport : NSObject

struct KeyEvent {
    u_short keycode;
    u_short modifierKeycode;
    u_char modifier;
};

+ (struct KeyEvent) translateKeyEvent:(unichar) inputChar withModifierFlags:(UIKeyModifierFlags)modifierFlags;

+ (void) addShiftModifier:(struct KeyEvent*)event;

+ (void) addControlModifier:(struct KeyEvent*)event;

+ (void) addAltModifier:(struct KeyEvent*)event;

+ (void) addcmdModifier:(struct KeyEvent*)event;


@end
