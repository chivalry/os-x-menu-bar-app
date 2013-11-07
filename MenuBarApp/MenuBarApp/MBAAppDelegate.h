#import <Cocoa/Cocoa.h>

@interface MBAAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readwrite, retain) IBOutlet NSMenu *menu;
@property (readwrite, retain) IBOutlet NSStatusItem *statusItem;

- (IBAction)menuAction:(id)sender;

@end