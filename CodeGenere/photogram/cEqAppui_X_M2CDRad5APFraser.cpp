// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_X_M2CDRad5APFraser.h"


cEqAppui_X_M2CDRad5APFraser::cEqAppui_X_M2CDRad5APFraser():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,14));
   AddIntRef (cIncIntervale("Orient",14,20));
   Close(false);
}



void cEqAppui_X_M2CDRad5APFraser::ComputeVal()
{
   double tmp0_ = mCompCoord[14];
   double tmp1_ = mCompCoord[15];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[16];
   double tmp7_ = mCompCoord[17];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[18];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[19];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[3];
   double tmp18_ = mCompCoord[1];
   double tmp19_ = mCompCoord[0];
   double tmp20_ = tmp4_*tmp2_;
   double tmp21_ = tmp20_*(tmp8_);
   double tmp22_ = tmp3_*tmp2_;
   double tmp23_ = tmp22_*(tmp14_);
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = tmp5_*(tmp16_);
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = -(tmp3_);
   double tmp28_ = tmp27_*tmp10_;
   double tmp29_ = tmp4_*tmp11_;
   double tmp30_ = tmp29_*tmp12_;
   double tmp31_ = tmp28_+tmp30_;
   double tmp32_ = (tmp31_)*(tmp8_);
   double tmp33_ = tmp4_*tmp10_;
   double tmp34_ = tmp3_*tmp11_;
   double tmp35_ = tmp34_*tmp12_;
   double tmp36_ = tmp33_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp14_);
   double tmp38_ = tmp32_+tmp37_;
   double tmp39_ = tmp2_*tmp12_;
   double tmp40_ = tmp39_*(tmp16_);
   double tmp41_ = tmp38_+tmp40_;
   double tmp42_ = (tmp26_)/(tmp41_);
   double tmp43_ = tmp19_*(tmp42_);
   double tmp44_ = tmp18_+tmp43_;
   double tmp45_ = (tmp44_)-tmp17_;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp27_*tmp12_;
   double tmp48_ = tmp29_*tmp9_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp8_);
   double tmp51_ = tmp4_*tmp12_;
   double tmp52_ = tmp34_*tmp9_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp14_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp2_*tmp9_;
   double tmp57_ = tmp56_*(tmp16_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp41_);
   double tmp60_ = tmp19_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = mCompCoord[4];
   double tmp63_ = (tmp61_)-tmp62_;
   double tmp64_ = (tmp45_)*(tmp45_);
   double tmp65_ = (tmp63_)*(tmp63_);
   double tmp66_ = tmp64_+tmp65_;
   double tmp67_ = (tmp66_)*(tmp66_);
   double tmp68_ = tmp67_*(tmp66_);
   double tmp69_ = tmp68_*(tmp66_);
   double tmp70_ = ElSquare(tmp45_);

  mVal[0] = (tmp17_+(tmp45_)*(1+(tmp66_)*mCompCoord[5]+tmp67_*mCompCoord[6]+tmp68_*mCompCoord[7]+tmp69_*mCompCoord[8]+tmp69_*(tmp66_)*mCompCoord[9])+(2*tmp70_+tmp70_+ElSquare(tmp63_))*mCompCoord[10]+2*(tmp45_)*(tmp63_)*mCompCoord[11]+mCompCoord[12]*(tmp45_)+mCompCoord[13]*(tmp63_))-mLocXIm;

}


void cEqAppui_X_M2CDRad5APFraser::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[14];
   double tmp1_ = mCompCoord[15];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[16];
   double tmp7_ = mCompCoord[17];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[18];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[19];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[3];
   double tmp18_ = mCompCoord[1];
   double tmp19_ = mCompCoord[0];
   double tmp20_ = tmp4_*tmp2_;
   double tmp21_ = tmp20_*(tmp8_);
   double tmp22_ = tmp3_*tmp2_;
   double tmp23_ = tmp22_*(tmp14_);
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = tmp5_*(tmp16_);
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = -(tmp3_);
   double tmp28_ = tmp27_*tmp10_;
   double tmp29_ = tmp4_*tmp11_;
   double tmp30_ = tmp29_*tmp12_;
   double tmp31_ = tmp28_+tmp30_;
   double tmp32_ = (tmp31_)*(tmp8_);
   double tmp33_ = tmp4_*tmp10_;
   double tmp34_ = tmp3_*tmp11_;
   double tmp35_ = tmp34_*tmp12_;
   double tmp36_ = tmp33_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp14_);
   double tmp38_ = tmp32_+tmp37_;
   double tmp39_ = tmp2_*tmp12_;
   double tmp40_ = tmp39_*(tmp16_);
   double tmp41_ = tmp38_+tmp40_;
   double tmp42_ = (tmp26_)/(tmp41_);
   double tmp43_ = tmp19_*(tmp42_);
   double tmp44_ = tmp18_+tmp43_;
   double tmp45_ = (tmp44_)-tmp17_;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp27_*tmp12_;
   double tmp48_ = tmp29_*tmp9_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp8_);
   double tmp51_ = tmp4_*tmp12_;
   double tmp52_ = tmp34_*tmp9_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp14_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp2_*tmp9_;
   double tmp57_ = tmp56_*(tmp16_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp41_);
   double tmp60_ = tmp19_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = mCompCoord[4];
   double tmp63_ = (tmp61_)-tmp62_;
   double tmp64_ = (tmp45_)*(tmp45_);
   double tmp65_ = (tmp63_)*(tmp63_);
   double tmp66_ = tmp64_+tmp65_;
   double tmp67_ = (tmp66_)*(tmp66_);
   double tmp68_ = tmp67_*(tmp66_);
   double tmp69_ = tmp68_*(tmp66_);
   double tmp70_ = ElSquare(tmp45_);
   double tmp71_ = mCompCoord[5];
   double tmp72_ = (tmp66_)*tmp71_;
   double tmp73_ = 1+tmp72_;
   double tmp74_ = mCompCoord[6];
   double tmp75_ = tmp67_*tmp74_;
   double tmp76_ = tmp73_+tmp75_;
   double tmp77_ = mCompCoord[7];
   double tmp78_ = tmp68_*tmp77_;
   double tmp79_ = tmp76_+tmp78_;
   double tmp80_ = mCompCoord[8];
   double tmp81_ = tmp69_*tmp80_;
   double tmp82_ = tmp79_+tmp81_;
   double tmp83_ = tmp69_*(tmp66_);
   double tmp84_ = mCompCoord[9];
   double tmp85_ = tmp83_*tmp84_;
   double tmp86_ = tmp82_+tmp85_;
   double tmp87_ = (tmp42_)*(tmp45_);
   double tmp88_ = (tmp59_)*(tmp63_);
   double tmp89_ = tmp87_+tmp87_;
   double tmp90_ = tmp88_+tmp88_;
   double tmp91_ = tmp89_+tmp90_;
   double tmp92_ = (tmp91_)*(tmp66_);
   double tmp93_ = tmp92_+tmp92_;
   double tmp94_ = (tmp93_)*(tmp66_);
   double tmp95_ = (tmp91_)*tmp67_;
   double tmp96_ = tmp94_+tmp95_;
   double tmp97_ = (tmp96_)*(tmp66_);
   double tmp98_ = (tmp91_)*tmp68_;
   double tmp99_ = tmp97_+tmp98_;
   double tmp100_ = 2*(tmp42_);
   double tmp101_ = tmp100_*(tmp45_);
   double tmp102_ = mCompCoord[10];
   double tmp103_ = 2*(tmp45_);
   double tmp104_ = mCompCoord[11];
   double tmp105_ = mCompCoord[12];
   double tmp106_ = mCompCoord[13];
   double tmp107_ = tmp45_+tmp45_;
   double tmp108_ = (tmp107_)*(tmp66_);
   double tmp109_ = tmp108_+tmp108_;
   double tmp110_ = (tmp109_)*(tmp66_);
   double tmp111_ = (tmp107_)*tmp67_;
   double tmp112_ = tmp110_+tmp111_;
   double tmp113_ = (tmp112_)*(tmp66_);
   double tmp114_ = (tmp107_)*tmp68_;
   double tmp115_ = tmp113_+tmp114_;
   double tmp116_ = tmp63_+tmp63_;
   double tmp117_ = (tmp116_)*(tmp66_);
   double tmp118_ = tmp117_+tmp117_;
   double tmp119_ = (tmp118_)*(tmp66_);
   double tmp120_ = (tmp116_)*tmp67_;
   double tmp121_ = tmp119_+tmp120_;
   double tmp122_ = (tmp121_)*(tmp66_);
   double tmp123_ = (tmp116_)*tmp68_;
   double tmp124_ = tmp122_+tmp123_;
   double tmp125_ = 2*(tmp63_);
   double tmp126_ = -(1);
   double tmp127_ = tmp126_*(tmp45_);
   double tmp128_ = tmp127_+tmp127_;
   double tmp129_ = (tmp128_)*(tmp66_);
   double tmp130_ = tmp129_+tmp129_;
   double tmp131_ = (tmp130_)*(tmp66_);
   double tmp132_ = (tmp128_)*tmp67_;
   double tmp133_ = tmp131_+tmp132_;
   double tmp134_ = (tmp133_)*(tmp66_);
   double tmp135_ = (tmp128_)*tmp68_;
   double tmp136_ = tmp134_+tmp135_;
   double tmp137_ = 2*tmp126_;
   double tmp138_ = tmp137_*(tmp45_);
   double tmp139_ = tmp126_*(tmp63_);
   double tmp140_ = tmp139_+tmp139_;
   double tmp141_ = (tmp140_)*(tmp66_);
   double tmp142_ = tmp141_+tmp141_;
   double tmp143_ = (tmp142_)*(tmp66_);
   double tmp144_ = (tmp140_)*tmp67_;
   double tmp145_ = tmp143_+tmp144_;
   double tmp146_ = (tmp145_)*(tmp66_);
   double tmp147_ = (tmp140_)*tmp68_;
   double tmp148_ = tmp146_+tmp147_;
   double tmp149_ = 2*tmp70_;
   double tmp150_ = ElSquare(tmp63_);
   double tmp151_ = tmp70_+tmp150_;
   double tmp152_ = tmp149_+tmp151_;
   double tmp153_ = tmp103_*(tmp63_);
   double tmp154_ = tmp126_*tmp3_;
   double tmp155_ = tmp154_*tmp2_;
   double tmp156_ = tmp155_*(tmp8_);
   double tmp157_ = tmp20_*(tmp14_);
   double tmp158_ = tmp156_+tmp157_;
   double tmp159_ = (tmp158_)*(tmp41_);
   double tmp160_ = -(tmp4_);
   double tmp161_ = tmp160_*tmp10_;
   double tmp162_ = tmp154_*tmp11_;
   double tmp163_ = tmp162_*tmp12_;
   double tmp164_ = tmp161_+tmp163_;
   double tmp165_ = (tmp164_)*(tmp8_);
   double tmp166_ = tmp154_*tmp10_;
   double tmp167_ = tmp166_+tmp30_;
   double tmp168_ = (tmp167_)*(tmp14_);
   double tmp169_ = tmp165_+tmp168_;
   double tmp170_ = (tmp26_)*(tmp169_);
   double tmp171_ = tmp159_-tmp170_;
   double tmp172_ = ElSquare(tmp41_);
   double tmp173_ = (tmp171_)/tmp172_;
   double tmp174_ = (tmp173_)*tmp19_;
   double tmp175_ = tmp174_*(tmp45_);
   double tmp176_ = tmp160_*tmp12_;
   double tmp177_ = tmp162_*tmp9_;
   double tmp178_ = tmp176_+tmp177_;
   double tmp179_ = (tmp178_)*(tmp8_);
   double tmp180_ = tmp154_*tmp12_;
   double tmp181_ = tmp180_+tmp48_;
   double tmp182_ = (tmp181_)*(tmp14_);
   double tmp183_ = tmp179_+tmp182_;
   double tmp184_ = (tmp183_)*(tmp41_);
   double tmp185_ = (tmp58_)*(tmp169_);
   double tmp186_ = tmp184_-tmp185_;
   double tmp187_ = (tmp186_)/tmp172_;
   double tmp188_ = (tmp187_)*tmp19_;
   double tmp189_ = tmp188_*(tmp63_);
   double tmp190_ = tmp175_+tmp175_;
   double tmp191_ = tmp189_+tmp189_;
   double tmp192_ = tmp190_+tmp191_;
   double tmp193_ = (tmp192_)*(tmp66_);
   double tmp194_ = tmp193_+tmp193_;
   double tmp195_ = (tmp194_)*(tmp66_);
   double tmp196_ = (tmp192_)*tmp67_;
   double tmp197_ = tmp195_+tmp196_;
   double tmp198_ = (tmp197_)*(tmp66_);
   double tmp199_ = (tmp192_)*tmp68_;
   double tmp200_ = tmp198_+tmp199_;
   double tmp201_ = 2*tmp174_;
   double tmp202_ = tmp201_*(tmp45_);
   double tmp203_ = tmp126_*tmp5_;
   double tmp204_ = -(tmp2_);
   double tmp205_ = tmp203_*tmp4_;
   double tmp206_ = tmp205_*(tmp8_);
   double tmp207_ = tmp203_*tmp3_;
   double tmp208_ = tmp207_*(tmp14_);
   double tmp209_ = tmp206_+tmp208_;
   double tmp210_ = tmp2_*(tmp16_);
   double tmp211_ = tmp209_+tmp210_;
   double tmp212_ = (tmp211_)*(tmp41_);
   double tmp213_ = tmp204_*tmp4_;
   double tmp214_ = tmp213_*tmp12_;
   double tmp215_ = tmp214_*(tmp8_);
   double tmp216_ = tmp204_*tmp3_;
   double tmp217_ = tmp216_*tmp12_;
   double tmp218_ = tmp217_*(tmp14_);
   double tmp219_ = tmp215_+tmp218_;
   double tmp220_ = tmp203_*tmp12_;
   double tmp221_ = tmp220_*(tmp16_);
   double tmp222_ = tmp219_+tmp221_;
   double tmp223_ = (tmp26_)*(tmp222_);
   double tmp224_ = tmp212_-tmp223_;
   double tmp225_ = (tmp224_)/tmp172_;
   double tmp226_ = (tmp225_)*tmp19_;
   double tmp227_ = tmp226_*(tmp45_);
   double tmp228_ = tmp213_*tmp9_;
   double tmp229_ = tmp228_*(tmp8_);
   double tmp230_ = tmp216_*tmp9_;
   double tmp231_ = tmp230_*(tmp14_);
   double tmp232_ = tmp229_+tmp231_;
   double tmp233_ = tmp203_*tmp9_;
   double tmp234_ = tmp233_*(tmp16_);
   double tmp235_ = tmp232_+tmp234_;
   double tmp236_ = (tmp235_)*(tmp41_);
   double tmp237_ = (tmp58_)*(tmp222_);
   double tmp238_ = tmp236_-tmp237_;
   double tmp239_ = (tmp238_)/tmp172_;
   double tmp240_ = (tmp239_)*tmp19_;
   double tmp241_ = tmp240_*(tmp63_);
   double tmp242_ = tmp227_+tmp227_;
   double tmp243_ = tmp241_+tmp241_;
   double tmp244_ = tmp242_+tmp243_;
   double tmp245_ = (tmp244_)*(tmp66_);
   double tmp246_ = tmp245_+tmp245_;
   double tmp247_ = (tmp246_)*(tmp66_);
   double tmp248_ = (tmp244_)*tmp67_;
   double tmp249_ = tmp247_+tmp248_;
   double tmp250_ = (tmp249_)*(tmp66_);
   double tmp251_ = (tmp244_)*tmp68_;
   double tmp252_ = tmp250_+tmp251_;
   double tmp253_ = 2*tmp226_;
   double tmp254_ = tmp253_*(tmp45_);
   double tmp255_ = -(tmp12_);
   double tmp256_ = tmp126_*tmp9_;
   double tmp257_ = tmp255_*tmp27_;
   double tmp258_ = tmp256_*tmp29_;
   double tmp259_ = tmp257_+tmp258_;
   double tmp260_ = (tmp259_)*(tmp8_);
   double tmp261_ = tmp255_*tmp4_;
   double tmp262_ = tmp256_*tmp34_;
   double tmp263_ = tmp261_+tmp262_;
   double tmp264_ = (tmp263_)*(tmp14_);
   double tmp265_ = tmp260_+tmp264_;
   double tmp266_ = tmp256_*tmp2_;
   double tmp267_ = tmp266_*(tmp16_);
   double tmp268_ = tmp265_+tmp267_;
   double tmp269_ = (tmp26_)*(tmp268_);
   double tmp270_ = -(tmp269_);
   double tmp271_ = tmp270_/tmp172_;
   double tmp272_ = (tmp271_)*tmp19_;
   double tmp273_ = tmp272_*(tmp45_);
   double tmp274_ = tmp256_*tmp27_;
   double tmp275_ = tmp12_*tmp29_;
   double tmp276_ = tmp274_+tmp275_;
   double tmp277_ = (tmp276_)*(tmp8_);
   double tmp278_ = tmp256_*tmp4_;
   double tmp279_ = tmp12_*tmp34_;
   double tmp280_ = tmp278_+tmp279_;
   double tmp281_ = (tmp280_)*(tmp14_);
   double tmp282_ = tmp277_+tmp281_;
   double tmp283_ = tmp12_*tmp2_;
   double tmp284_ = tmp283_*(tmp16_);
   double tmp285_ = tmp282_+tmp284_;
   double tmp286_ = (tmp285_)*(tmp41_);
   double tmp287_ = (tmp58_)*(tmp268_);
   double tmp288_ = tmp286_-tmp287_;
   double tmp289_ = (tmp288_)/tmp172_;
   double tmp290_ = (tmp289_)*tmp19_;
   double tmp291_ = tmp290_*(tmp63_);
   double tmp292_ = tmp273_+tmp273_;
   double tmp293_ = tmp291_+tmp291_;
   double tmp294_ = tmp292_+tmp293_;
   double tmp295_ = (tmp294_)*(tmp66_);
   double tmp296_ = tmp295_+tmp295_;
   double tmp297_ = (tmp296_)*(tmp66_);
   double tmp298_ = (tmp294_)*tmp67_;
   double tmp299_ = tmp297_+tmp298_;
   double tmp300_ = (tmp299_)*(tmp66_);
   double tmp301_ = (tmp294_)*tmp68_;
   double tmp302_ = tmp300_+tmp301_;
   double tmp303_ = 2*tmp272_;
   double tmp304_ = tmp303_*(tmp45_);
   double tmp305_ = tmp126_*tmp20_;
   double tmp306_ = tmp305_*(tmp41_);
   double tmp307_ = tmp126_*(tmp31_);
   double tmp308_ = (tmp26_)*tmp307_;
   double tmp309_ = tmp306_-tmp308_;
   double tmp310_ = (tmp309_)/tmp172_;
   double tmp311_ = (tmp310_)*tmp19_;
   double tmp312_ = tmp311_*(tmp45_);
   double tmp313_ = tmp126_*(tmp49_);
   double tmp314_ = tmp313_*(tmp41_);
   double tmp315_ = (tmp58_)*tmp307_;
   double tmp316_ = tmp314_-tmp315_;
   double tmp317_ = (tmp316_)/tmp172_;
   double tmp318_ = (tmp317_)*tmp19_;
   double tmp319_ = tmp318_*(tmp63_);
   double tmp320_ = tmp312_+tmp312_;
   double tmp321_ = tmp319_+tmp319_;
   double tmp322_ = tmp320_+tmp321_;
   double tmp323_ = (tmp322_)*(tmp66_);
   double tmp324_ = tmp323_+tmp323_;
   double tmp325_ = (tmp324_)*(tmp66_);
   double tmp326_ = (tmp322_)*tmp67_;
   double tmp327_ = tmp325_+tmp326_;
   double tmp328_ = (tmp327_)*(tmp66_);
   double tmp329_ = (tmp322_)*tmp68_;
   double tmp330_ = tmp328_+tmp329_;
   double tmp331_ = 2*tmp311_;
   double tmp332_ = tmp331_*(tmp45_);
   double tmp333_ = tmp126_*tmp22_;
   double tmp334_ = tmp333_*(tmp41_);
   double tmp335_ = tmp126_*(tmp36_);
   double tmp336_ = (tmp26_)*tmp335_;
   double tmp337_ = tmp334_-tmp336_;
   double tmp338_ = (tmp337_)/tmp172_;
   double tmp339_ = (tmp338_)*tmp19_;
   double tmp340_ = tmp339_*(tmp45_);
   double tmp341_ = tmp126_*(tmp53_);
   double tmp342_ = tmp341_*(tmp41_);
   double tmp343_ = (tmp58_)*tmp335_;
   double tmp344_ = tmp342_-tmp343_;
   double tmp345_ = (tmp344_)/tmp172_;
   double tmp346_ = (tmp345_)*tmp19_;
   double tmp347_ = tmp346_*(tmp63_);
   double tmp348_ = tmp340_+tmp340_;
   double tmp349_ = tmp347_+tmp347_;
   double tmp350_ = tmp348_+tmp349_;
   double tmp351_ = (tmp350_)*(tmp66_);
   double tmp352_ = tmp351_+tmp351_;
   double tmp353_ = (tmp352_)*(tmp66_);
   double tmp354_ = (tmp350_)*tmp67_;
   double tmp355_ = tmp353_+tmp354_;
   double tmp356_ = (tmp355_)*(tmp66_);
   double tmp357_ = (tmp350_)*tmp68_;
   double tmp358_ = tmp356_+tmp357_;
   double tmp359_ = 2*tmp339_;
   double tmp360_ = tmp359_*(tmp45_);
   double tmp361_ = tmp203_*(tmp41_);
   double tmp362_ = tmp126_*tmp39_;
   double tmp363_ = (tmp26_)*tmp362_;
   double tmp364_ = tmp361_-tmp363_;
   double tmp365_ = (tmp364_)/tmp172_;
   double tmp366_ = (tmp365_)*tmp19_;
   double tmp367_ = tmp366_*(tmp45_);
   double tmp368_ = tmp126_*tmp56_;
   double tmp369_ = tmp368_*(tmp41_);
   double tmp370_ = (tmp58_)*tmp362_;
   double tmp371_ = tmp369_-tmp370_;
   double tmp372_ = (tmp371_)/tmp172_;
   double tmp373_ = (tmp372_)*tmp19_;
   double tmp374_ = tmp373_*(tmp63_);
   double tmp375_ = tmp367_+tmp367_;
   double tmp376_ = tmp374_+tmp374_;
   double tmp377_ = tmp375_+tmp376_;
   double tmp378_ = (tmp377_)*(tmp66_);
   double tmp379_ = tmp378_+tmp378_;
   double tmp380_ = (tmp379_)*(tmp66_);
   double tmp381_ = (tmp377_)*tmp67_;
   double tmp382_ = tmp380_+tmp381_;
   double tmp383_ = (tmp382_)*(tmp66_);
   double tmp384_ = (tmp377_)*tmp68_;
   double tmp385_ = tmp383_+tmp384_;
   double tmp386_ = 2*tmp366_;
   double tmp387_ = tmp386_*(tmp45_);

  mVal[0] = (tmp17_+(tmp45_)*(tmp86_)+(tmp152_)*tmp102_+tmp153_*tmp104_+tmp105_*(tmp45_)+tmp106_*(tmp63_))-mLocXIm;

  mCompDer[0][0] = (tmp42_)*(tmp86_)+((tmp91_)*tmp71_+(tmp93_)*tmp74_+(tmp96_)*tmp77_+(tmp99_)*tmp80_+((tmp99_)*(tmp66_)+(tmp91_)*tmp69_)*tmp84_)*(tmp45_)+(tmp101_*2+tmp101_+2*(tmp59_)*(tmp63_))*tmp102_+((tmp42_)*2*(tmp63_)+(tmp59_)*tmp103_)*tmp104_+(tmp42_)*tmp105_+(tmp59_)*tmp106_;
  mCompDer[0][1] = tmp86_+((tmp107_)*tmp71_+(tmp109_)*tmp74_+(tmp112_)*tmp77_+(tmp115_)*tmp80_+((tmp115_)*(tmp66_)+(tmp107_)*tmp69_)*tmp84_)*(tmp45_)+(tmp103_*2+tmp103_)*tmp102_+tmp125_*tmp104_+tmp105_;
  mCompDer[0][2] = ((tmp116_)*tmp71_+(tmp118_)*tmp74_+(tmp121_)*tmp77_+(tmp124_)*tmp80_+((tmp124_)*(tmp66_)+(tmp116_)*tmp69_)*tmp84_)*(tmp45_)+tmp125_*tmp102_+tmp103_*tmp104_+tmp106_;
  mCompDer[0][3] = 1+tmp126_*(tmp86_)+((tmp128_)*tmp71_+(tmp130_)*tmp74_+(tmp133_)*tmp77_+(tmp136_)*tmp80_+((tmp136_)*(tmp66_)+(tmp128_)*tmp69_)*tmp84_)*(tmp45_)+(tmp138_*2+tmp138_)*tmp102_+tmp126_*2*(tmp63_)*tmp104_+tmp126_*tmp105_;
  mCompDer[0][4] = ((tmp140_)*tmp71_+(tmp142_)*tmp74_+(tmp145_)*tmp77_+(tmp148_)*tmp80_+((tmp148_)*(tmp66_)+(tmp140_)*tmp69_)*tmp84_)*(tmp45_)+tmp137_*(tmp63_)*tmp102_+tmp126_*tmp103_*tmp104_+tmp126_*tmp106_;
  mCompDer[0][5] = (tmp66_)*(tmp45_);
  mCompDer[0][6] = tmp67_*(tmp45_);
  mCompDer[0][7] = tmp68_*(tmp45_);
  mCompDer[0][8] = tmp69_*(tmp45_);
  mCompDer[0][9] = tmp83_*(tmp45_);
  mCompDer[0][10] = tmp152_;
  mCompDer[0][11] = tmp153_;
  mCompDer[0][12] = tmp45_;
  mCompDer[0][13] = tmp63_;
  mCompDer[0][14] = tmp174_*(tmp86_)+((tmp192_)*tmp71_+(tmp194_)*tmp74_+(tmp197_)*tmp77_+(tmp200_)*tmp80_+((tmp200_)*(tmp66_)+(tmp192_)*tmp69_)*tmp84_)*(tmp45_)+(tmp202_*2+tmp202_+2*tmp188_*(tmp63_))*tmp102_+(tmp174_*2*(tmp63_)+tmp188_*tmp103_)*tmp104_+tmp174_*tmp105_+tmp188_*tmp106_;
  mCompDer[0][15] = tmp226_*(tmp86_)+((tmp244_)*tmp71_+(tmp246_)*tmp74_+(tmp249_)*tmp77_+(tmp252_)*tmp80_+((tmp252_)*(tmp66_)+(tmp244_)*tmp69_)*tmp84_)*(tmp45_)+(tmp254_*2+tmp254_+2*tmp240_*(tmp63_))*tmp102_+(tmp226_*2*(tmp63_)+tmp240_*tmp103_)*tmp104_+tmp226_*tmp105_+tmp240_*tmp106_;
  mCompDer[0][16] = tmp272_*(tmp86_)+((tmp294_)*tmp71_+(tmp296_)*tmp74_+(tmp299_)*tmp77_+(tmp302_)*tmp80_+((tmp302_)*(tmp66_)+(tmp294_)*tmp69_)*tmp84_)*(tmp45_)+(tmp304_*2+tmp304_+2*tmp290_*(tmp63_))*tmp102_+(tmp272_*2*(tmp63_)+tmp290_*tmp103_)*tmp104_+tmp272_*tmp105_+tmp290_*tmp106_;
  mCompDer[0][17] = tmp311_*(tmp86_)+((tmp322_)*tmp71_+(tmp324_)*tmp74_+(tmp327_)*tmp77_+(tmp330_)*tmp80_+((tmp330_)*(tmp66_)+(tmp322_)*tmp69_)*tmp84_)*(tmp45_)+(tmp332_*2+tmp332_+2*tmp318_*(tmp63_))*tmp102_+(tmp311_*2*(tmp63_)+tmp318_*tmp103_)*tmp104_+tmp311_*tmp105_+tmp318_*tmp106_;
  mCompDer[0][18] = tmp339_*(tmp86_)+((tmp350_)*tmp71_+(tmp352_)*tmp74_+(tmp355_)*tmp77_+(tmp358_)*tmp80_+((tmp358_)*(tmp66_)+(tmp350_)*tmp69_)*tmp84_)*(tmp45_)+(tmp360_*2+tmp360_+2*tmp346_*(tmp63_))*tmp102_+(tmp339_*2*(tmp63_)+tmp346_*tmp103_)*tmp104_+tmp339_*tmp105_+tmp346_*tmp106_;
  mCompDer[0][19] = tmp366_*(tmp86_)+((tmp377_)*tmp71_+(tmp379_)*tmp74_+(tmp382_)*tmp77_+(tmp385_)*tmp80_+((tmp385_)*(tmp66_)+(tmp377_)*tmp69_)*tmp84_)*(tmp45_)+(tmp387_*2+tmp387_+2*tmp373_*(tmp63_))*tmp102_+(tmp366_*2*(tmp63_)+tmp373_*tmp103_)*tmp104_+tmp366_*tmp105_+tmp373_*tmp106_;
}


void cEqAppui_X_M2CDRad5APFraser::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_X_M2CDRad5APFraser Has no Der Sec");
}

void cEqAppui_X_M2CDRad5APFraser::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_X_M2CDRad5APFraser::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_X_M2CDRad5APFraser::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_X_M2CDRad5APFraser::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_X_M2CDRad5APFraser::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_X_M2CDRad5APFraser::mTheAuto("cEqAppui_X_M2CDRad5APFraser",cEqAppui_X_M2CDRad5APFraser::Alloc);


cElCompiledFonc *  cEqAppui_X_M2CDRad5APFraser::Alloc()
{  return new cEqAppui_X_M2CDRad5APFraser();
}


