#include"VIP.h"
VIP::VIP()
{

}
float VIP::getAdcionalVIP()
{
    return adcional;
}
float VIP::calculaValorIngresso()
{
    return (getValorEmReais()+getAdcionalVIP());
}
