//Image Averaging
#include <iostream>
using namespace std;
#define maxPixelSize 255
class ImageProccessor{
private:
    int *imageOne,*imageSecond,
    imageSize,*imageAverage,maxPixel=0;
public:
    void setImageProccessor(int*,int*,int);
    void averageImageConvertor();
    void normalizeImage();
    int* getNormalizeImage();
};

void ImageProccessor::setImageProccessor(int *imageOne,int *imageSecond,int imageSize){
    this->imageOne=imageOne;
    this->imageSecond=imageSecond;
    this->imageSize= imageSize;
    imageAverage = new int[imageSize];
    averageImageConvertor();
}

int largerNumber(int,int);
void ImageProccessor::averageImageConvertor(){
    for(int i=0;i<imageSize;i++){
        imageAverage[i] = (imageOne[i]+imageSecond[i])/2;
        maxPixel = largerNumber(maxPixel,imageAverage[i]);
    }
    normalizeImage();
}

void ImageProccessor::normalizeImage(){
    if(maxPixel>maxPixelSize)
        throw 1;
    
    float imageNormalizer = ((float)maxPixelSize)/maxPixel;
    for(int i=0;i<imageSize;i++)
        imageAverage[i] *=imageNormalizer;
}

int* ImageProccessor::getNormalizeImage(){
    return imageAverage;
}

int largerNumber(int a,int b){
    return (a>b)?a:b;
}

int main(){
    ImageProccessor imageProcessor;
    int imageSize=0;
    int *imageOne,*imageSecond,*imageNormalized;
    cout<<"Enter the images size\n";
    cin>>imageSize;
    imageOne = new int[imageSize];
    imageSecond = new int(imageSize);
    cout<<"Enter the pixels of first:-\n";
    for(int i=0;i<(imageSize);i++)
        cin>>imageOne[i];
    cout<<"Enter the pixels of Second:-\n";
    for(int i=0;i<(imageSize);i++)
        cin>>imageSecond[i];
    try{
    imageProcessor.setImageProccessor(imageOne,imageSecond,imageSize);
    }catch(int exception){
        cout<<"The Average of pixel you enter is greater than 255.\nCan't normalize\nInvalid Pixel size.\n";
        exit(1);
    }
    imageNormalized = imageProcessor.getNormalizeImage();
    cout<<"Procced Image: \n";
    for(int i=0;i<imageSize;i++)
        cout<<imageNormalized[i]<<" ";
    
    return 0;
}


