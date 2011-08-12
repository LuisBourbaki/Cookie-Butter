#import <UIKit/UIKit.h>

@interface miAppViewController : UIViewController {
	
	UILabel *miEtiqueta;
	
}

@property (nonatomic,retain) IBOutlet UILabel *miEtiqueta;

-(IBAction)cambiarEtiqueta;

@end