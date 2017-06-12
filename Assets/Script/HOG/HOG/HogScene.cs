using UnityEngine;
using System.Collections;

//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
public class HogScene
{
	public Layer[] layers;

	public enum LayerStatus { Active, Found }; 
	public enum LayerType { Custom, Item, Scenery }; 
	public class Layer
	{
		public LayerType type;
		public string name;
		public LayerStatus layerStatus;
		public Rect bounds;
		public Image[] images;
	}
	
	public enum ImageType { Hotspot, Obscured, Whole, Shadow, Custom, Count }; 
	public class Image
	{
		public ImageType type;
		public string name;
		public float x;
		public float y;
		public float z;
	}	
}

