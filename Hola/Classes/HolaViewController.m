@synthesize miEtiqueta;

-(IBAction)cambiarEtiqueta{
	
	miEtiqueta.text = @&quot;Bazzinga!&quot;;
	
}

- (void)dealloc {
	
	[miEtiqueta release];
	
	[super dealloc];
	
}