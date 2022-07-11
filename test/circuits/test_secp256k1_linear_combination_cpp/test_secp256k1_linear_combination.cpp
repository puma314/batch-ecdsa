#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "circom.hpp"
#include "calcwit.hpp"
void Secp256k1Double_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Secp256k1Double_0_run(uint ctx_index,Circom_CalcWit* ctx);
void Secp256k1AddUnequal_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Secp256k1AddUnequal_1_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_2_run(uint ctx_index,Circom_CalcWit* ctx);
void Bits2Num_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Bits2Num_3_run(uint ctx_index,Circom_CalcWit* ctx);
void Decoder_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Decoder_4_run(uint ctx_index,Circom_CalcWit* ctx);
void EscalarProduct_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void EscalarProduct_5_run(uint ctx_index,Circom_CalcWit* ctx);
void Multiplexer_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Multiplexer_6_run(uint ctx_index,Circom_CalcWit* ctx);
void IsZero_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void IsZero_7_run(uint ctx_index,Circom_CalcWit* ctx);
void OR_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void OR_8_run(uint ctx_index,Circom_CalcWit* ctx);
void BigMultNoCarry_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BigMultNoCarry_9_run(uint ctx_index,Circom_CalcWit* ctx);
void BigMultNoCarry_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BigMultNoCarry_10_run(uint ctx_index,Circom_CalcWit* ctx);
void A3NoCarry_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void A3NoCarry_11_run(uint ctx_index,Circom_CalcWit* ctx);
void A2NoCarry_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void A2NoCarry_12_run(uint ctx_index,Circom_CalcWit* ctx);
void Secp256k1PrimeReduce10Registers_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Secp256k1PrimeReduce10Registers_13_run(uint ctx_index,Circom_CalcWit* ctx);
void BigMultNoCarry_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BigMultNoCarry_14_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_15_run(uint ctx_index,Circom_CalcWit* ctx);
void CheckCarryToZero_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CheckCarryToZero_16_run(uint ctx_index,Circom_CalcWit* ctx);
void CheckCubicModPIsZero_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CheckCubicModPIsZero_17_run(uint ctx_index,Circom_CalcWit* ctx);
void Secp256k1PointOnCurve_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Secp256k1PointOnCurve_18_run(uint ctx_index,Circom_CalcWit* ctx);
void Secp256k1DoubleRepeat_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Secp256k1DoubleRepeat_19_run(uint ctx_index,Circom_CalcWit* ctx);
void Secp256k1LinearCombination_20_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Secp256k1LinearCombination_20_run(uint ctx_index,Circom_CalcWit* ctx);
void secp256k1_double_func_0(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void secp256k1_addunequal_func_1(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void getProperRepresentation_2(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_div_3(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void get_secp256k1_order_4(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void get_dummy_point_5(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void get_secp256k1_prime_6(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void prod_mod_p_7(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void mod_inv_8(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_sub_mod_p_9(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void isNegative_10(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void splitOverflowedRegister_11(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void short_div_12(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_scalar_mult_13(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_sub_14(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void prod_15(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_div_16(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_sub_17(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void mod_exp_18(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_gt_19(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void div_ceil_20(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_scalar_mult_21(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void short_div_norm_22(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void SplitThreeFn_23(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void SplitFn_24(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void short_div_25(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_scalar_mult_26(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_div_27(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_gt_28(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
void long_sub_29(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size);
Circom_TemplateFunction _functionTable[21] = { 
Secp256k1Double_0_run,
Secp256k1AddUnequal_1_run,
Num2Bits_2_run,
Bits2Num_3_run,
Decoder_4_run,
EscalarProduct_5_run,
Multiplexer_6_run,
IsZero_7_run,
OR_8_run,
BigMultNoCarry_9_run,
BigMultNoCarry_10_run,
A3NoCarry_11_run,
A2NoCarry_12_run,
Secp256k1PrimeReduce10Registers_13_run,
BigMultNoCarry_14_run,
Num2Bits_15_run,
CheckCarryToZero_16_run,
CheckCubicModPIsZero_17_run,
Secp256k1PointOnCurve_18_run,
Secp256k1DoubleRepeat_19_run,
Secp256k1LinearCombination_20_run };
uint get_main_input_signal_start() {return 9;}

uint get_main_input_signal_no() {return 24;}

uint get_total_signal_no() {return 330641;}

uint get_number_of_components() {return 5866;}

uint get_size_of_input_hashmap() {return 256;}

uint get_size_of_witness() {return 238103;}

uint get_size_of_constants() {return 51;}

uint get_size_of_io_map() {return 0;}

// function declarations
void secp256k1_double_func_0(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "secp256k1_double_func";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[410];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[410],&lvar[1]); // line circom 142
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((0 + (1 * Fr_toInt(&lvar[410]))) + 10)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[410])) + 2)]);
}
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[410]))) + 10)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[410])) + 6)]);
}
{
PFrElement aux_dest = &lvar[410];
// load src
Fr_add(&expaux[0],&lvar[410],&circuitConstants[2]); // line circom 142
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[410],&lvar[1]); // line circom 142
}
{

// start of call bucket
FrElement lvarcall[102];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
get_secp256k1_prime_6(ctx,lvarcall,myId,&lvar[610],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[10],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[10],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[710],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[910];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[910],&circuitConstants[26]); // line circom 154
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[910],&circuitConstants[3]); // line circom 154
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[910])) + 810)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[910])) + 810)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
{
PFrElement aux_dest = &lvar[910];
// load src
Fr_add(&expaux[0],&lvar[910],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[910],&circuitConstants[26]); // line circom 154
}
{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[710],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[810],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[910],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1110];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1110],&circuitConstants[26]); // line circom 159
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1110],&circuitConstants[3]); // line circom 159
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1110])) + 1010)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1110])) + 1010)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
{
PFrElement aux_dest = &lvar[1110];
// load src
Fr_add(&expaux[0],&lvar[1110],&circuitConstants[2]); // line circom 159
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1110],&circuitConstants[26]); // line circom 159
}
{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[110],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[1010],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1110],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[603];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1110],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[610],100);
// end copying argument 3
mod_inv_8(ctx,lvarcall,myId,&lvar[1210],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[910],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[1210],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1310],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1310],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[1310],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1410],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1410],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[10],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1510],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1510],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[10],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1610],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1710];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1710],&lvar[1]); // line circom 170
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((0 + (1 * Fr_toInt(&lvar[1710]))) + 410)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1710])) + 1610)]);
}
{
PFrElement aux_dest = &lvar[1710];
// load src
Fr_add(&expaux[0],&lvar[1710],&circuitConstants[2]); // line circom 170
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1710],&lvar[1]); // line circom 170
}
{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[10],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[410],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1710],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1310],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[1710],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1810],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1810],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[110],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[610],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1910],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[2010];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[2010],&lvar[1]); // line circom 178
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[2010]))) + 410)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[2010])) + 1910)]);
}
{
PFrElement aux_dest = &lvar[2010];
// load src
Fr_add(&expaux[0],&lvar[2010],&circuitConstants[2]); // line circom 178
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2010],&lvar[1]); // line circom 178
}
// return bucket
Fr_copyn(destination,&lvar[410],destination_size);
return;
}

void secp256k1_addunequal_func_1(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "secp256k1_addunequal_func";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[418];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[418],&lvar[1]); // line circom 94
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((0 + (1 * Fr_toInt(&lvar[418]))) + 18)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[418])) + 2)]);
}
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[418]))) + 18)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[418])) + 6)]);
}
{
PFrElement aux_dest = &lvar[((0 + (1 * Fr_toInt(&lvar[418]))) + 218)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[418])) + 10)]);
}
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[418]))) + 218)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[418])) + 14)]);
}
{
PFrElement aux_dest = &lvar[418];
// load src
Fr_add(&expaux[0],&lvar[418],&circuitConstants[2]); // line circom 94
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[418],&lvar[1]); // line circom 94
}
{

// start of call bucket
FrElement lvarcall[102];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
get_secp256k1_prime_6(ctx,lvarcall,myId,&lvar[618],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[318],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[118],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[718],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[218],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[18],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[818],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[603];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[818],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[618],100);
// end copying argument 3
mod_inv_8(ctx,lvarcall,myId,&lvar[918],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[718],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[918],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1018],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1018],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[1018],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1118],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1118],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[18],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1218],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1218],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[218],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1318],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1418];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1418],&lvar[1]); // line circom 119
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((0 + (1 * Fr_toInt(&lvar[1418]))) + 418)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1418])) + 1318)]);
}
{
PFrElement aux_dest = &lvar[1418];
// load src
Fr_add(&expaux[0],&lvar[1418],&circuitConstants[2]); // line circom 119
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1418],&lvar[1]); // line circom 119
}
{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[18],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[418],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1418],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[602];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1018],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[1418],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
prod_mod_p_7(ctx,lvarcall,myId,&lvar[1518],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[604];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[1518],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[118],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[618],100);
// end copying argument 4
long_sub_mod_p_9(ctx,lvarcall,myId,&lvar[1618],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1718];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1718],&lvar[1]); // line circom 127
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[1718]))) + 418)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1718])) + 1618)]);
}
{
PFrElement aux_dest = &lvar[1718];
// load src
Fr_add(&expaux[0],&lvar[1718],&circuitConstants[2]); // line circom 127
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1718],&lvar[1]); // line circom 127
}
// return bucket
Fr_copyn(destination,&lvar[418],destination_size);
return;
}

void getProperRepresentation_2(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "getProperRepresentation";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_mod(&expaux[1],&lvar[0],&lvar[1]); // line circom 65
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 65
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_idiv(&expaux[0],&lvar[0],&lvar[1]); // line circom 66
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_idiv(&expaux[1],&lvar[0],&lvar[1]); // line circom 68
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 68
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &lvar[10008];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[10008],&lvar[2]); // line circom 72
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[10009];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[10009],&circuitConstants[26]); // line circom 73
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[(((100 * Fr_toInt(&lvar[10008])) + (1 * Fr_toInt(&lvar[10009]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[10009];
// load src
Fr_add(&expaux[0],&lvar[10009],&circuitConstants[2]); // line circom 73
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[10009],&circuitConstants[26]); // line circom 73
}
{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[((1 * Fr_toInt(&lvar[10008])) + 3)]);
// end copying argument 0
isNegative_10(ctx,lvarcall,myId,&lvar[10009],1);
// end call bucket
}

Fr_eq(&expaux[0],&lvar[10009],&circuitConstants[2]); // line circom 76
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[106];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_neg(&expaux[4],&circuitConstants[2]); // line circom 77
Fr_mul(&expaux[3],&expaux[4],&lvar[((1 * Fr_toInt(&lvar[10008])) + 3)]); // line circom 77
Fr_copy(&lvarcall[2],&expaux[3]);
// end copying argument 2
splitOverflowedRegister_11(ctx,lvarcall,myId,&lvar[10010],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[10110];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[10110],&lvar[7]); // line circom 78
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[(((100 * Fr_toInt(&lvar[10008])) + (1 * Fr_toInt(&lvar[10110]))) + 8)];
// load src
Fr_neg(&expaux[1],&circuitConstants[2]); // line circom 79
Fr_mul(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&lvar[10110])) + 10010)]); // line circom 79
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[10110];
// load src
Fr_add(&expaux[0],&lvar[10110],&circuitConstants[2]); // line circom 78
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[10110],&lvar[7]); // line circom 78
}
}else{
{

// start of call bucket
FrElement lvarcall[106];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[((1 * Fr_toInt(&lvar[10008])) + 3)]);
// end copying argument 2
splitOverflowedRegister_11(ctx,lvarcall,myId,&lvar[((100 * Fr_toInt(&lvar[10008])) + 8)],100);
// end call bucket
}

}
{
PFrElement aux_dest = &lvar[10008];
// load src
Fr_add(&expaux[0],&lvar[10008],&circuitConstants[2]); // line circom 72
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[10008],&lvar[2]); // line circom 72
}
{
PFrElement aux_dest = &lvar[10208];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[10208],&circuitConstants[26]); // line circom 88
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10208])) + 10008)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10208])) + 10108)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[10208];
// load src
Fr_add(&expaux[0],&lvar[10208],&circuitConstants[2]); // line circom 88
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[10208],&circuitConstants[26]); // line circom 88
}
{
PFrElement aux_dest = &lvar[10208];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[7]); // line circom 92
Fr_lt(&expaux[0],&lvar[10208],&expaux[2]); // line circom 92
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[10209];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_gt(&expaux[0],&lvar[10208],&circuitConstants[3]); // line circom 94
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[10209];
// load src
Fr_sub(&expaux[0],&lvar[10208],&circuitConstants[2]); // line circom 95
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&expaux[0])) + 10108)]);
}
}
{
PFrElement aux_dest = &lvar[10210];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_geq(&expaux[0],&lvar[10208],&lvar[7]); // line circom 99
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[10210];
// load src
Fr_sub(&expaux[1],&lvar[10208],&lvar[7]); // line circom 100
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 100
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &lvar[10211];
// load src
// end load src
Fr_copy(aux_dest,&lvar[10210]);
}
Fr_leq(&expaux[0],&lvar[10211],&lvar[10208]); // line circom 104
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[10211],&lvar[2]); // line circom 105
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[10209];
// load src
Fr_sub(&expaux[2],&lvar[10208],&lvar[10211]); // line circom 106
Fr_add(&expaux[0],&lvar[10209],&lvar[(((100 * Fr_toInt(&lvar[10211])) + (1 * Fr_toInt(&expaux[2]))) + 8)]); // line circom 106
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &lvar[10211];
// load src
Fr_add(&expaux[0],&lvar[10211],&circuitConstants[2]); // line circom 104
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_leq(&expaux[0],&lvar[10211],&lvar[10208]); // line circom 104
}
{

// start of call bucket
FrElement lvarcall[2];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[10209]);
// end copying argument 0
isNegative_10(ctx,lvarcall,myId,&lvar[10211],1);
// end call bucket
}

Fr_eq(&expaux[0],&lvar[10211],&circuitConstants[2]); // line circom 110
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[10212];
// load src
Fr_neg(&expaux[1],&circuitConstants[2]); // line circom 111
Fr_mul(&expaux[0],&expaux[1],&lvar[10209]); // line circom 111
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10208])) + 10008)];
// load src
Fr_shl(&expaux[1],&circuitConstants[2],&lvar[1]); // line circom 112
Fr_shl(&expaux[4],&circuitConstants[2],&lvar[1]); // line circom 112
Fr_mod(&expaux[2],&lvar[10212],&expaux[4]); // line circom 112
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 112
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10208])) + 10108)];
// load src
Fr_neg(&expaux[2],&circuitConstants[2]); // line circom 113
Fr_shr(&expaux[3],&lvar[10212],&lvar[1]); // line circom 113
Fr_mul(&expaux[1],&expaux[2],&expaux[3]); // line circom 113
Fr_sub(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 113
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10208])) + 10008)];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[1]); // line circom 115
Fr_mod(&expaux[0],&lvar[10209],&expaux[2]); // line circom 115
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10208])) + 10108)];
// load src
Fr_shr(&expaux[0],&lvar[10209],&lvar[1]); // line circom 116
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &lvar[10208];
// load src
Fr_add(&expaux[0],&lvar[10208],&circuitConstants[2]); // line circom 92
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[7]); // line circom 92
Fr_lt(&expaux[0],&lvar[10208],&expaux[2]); // line circom 92
}
// return bucket
Fr_copyn(destination,&lvar[10008],destination_size);
return;
}

void long_div_3(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[5];
std::string myTemplateName = "long_div";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[415];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 192
Fr_lt(&expaux[0],&lvar[415],&expaux[2]); // line circom 192
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[415])) + 215)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[415])) + 3)]);
}
{
PFrElement aux_dest = &lvar[415];
// load src
Fr_add(&expaux[0],&lvar[415],&circuitConstants[2]); // line circom 192
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 192
Fr_lt(&expaux[0],&lvar[415],&expaux[2]); // line circom 192
}
{
PFrElement aux_dest = &lvar[815];
// load src
// end load src
Fr_copy(aux_dest,&lvar[2]);
}
Fr_geq(&expaux[0],&lvar[815],&circuitConstants[3]); // line circom 198
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[815],&lvar[2]); // line circom 199
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1])) + 615)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[816];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[816],&circuitConstants[3]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[816])) + 615)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * (Fr_toInt(&lvar[816]) + Fr_toInt(&lvar[2]))) + 215)]);
}
{
PFrElement aux_dest = &lvar[816];
// load src
Fr_sub(&expaux[0],&lvar[816],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[816],&circuitConstants[3]); // line circom 201
}
}else{
{
PFrElement aux_dest = &lvar[816];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
Fr_geq(&expaux[0],&lvar[816],&circuitConstants[3]); // line circom 205
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[816])) + 615)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * (Fr_toInt(&lvar[816]) + Fr_toInt(&lvar[815]))) + 215)]);
}
{
PFrElement aux_dest = &lvar[816];
// load src
Fr_sub(&expaux[0],&lvar[816],&circuitConstants[2]); // line circom 205
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[816],&circuitConstants[3]); // line circom 205
}
}
{

// start of call bucket
FrElement lvarcall[608];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[615],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[11],4);
// end copying argument 3
short_div_12(ctx,lvarcall,myId,&lvar[((0 + (1 * Fr_toInt(&lvar[815]))) + 15)],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[109];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[((0 + (1 * Fr_toInt(&lvar[815]))) + 15)]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[11],4);
// end copying argument 3
long_scalar_mult_13(ctx,lvarcall,myId,&lvar[816],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1116];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 214
Fr_lt(&expaux[0],&lvar[1116],&expaux[2]); // line circom 214
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1116])) + 916)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[1116];
// load src
Fr_add(&expaux[0],&lvar[1116],&circuitConstants[2]); // line circom 214
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 214
Fr_lt(&expaux[0],&lvar[1116],&expaux[2]); // line circom 214
}
{
PFrElement aux_dest = &lvar[1116];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_leq(&expaux[0],&lvar[1116],&lvar[1]); // line circom 217
while(Fr_isTrue(&expaux[0])){
Fr_add(&expaux[1],&lvar[815],&lvar[1116]); // line circom 218
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 218
Fr_lt(&expaux[0],&expaux[1],&expaux[2]); // line circom 218
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[815]) + Fr_toInt(&lvar[1116]))) + 916)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1116])) + 816)]);
}
}
{
PFrElement aux_dest = &lvar[1116];
// load src
Fr_add(&expaux[0],&lvar[1116],&circuitConstants[2]); // line circom 217
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_leq(&expaux[0],&lvar[1116],&lvar[1]); // line circom 217
}
{

// start of call bucket
FrElement lvarcall[603];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 222
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[215],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[916],200);
// end copying argument 3
long_sub_14(ctx,lvarcall,myId,&lvar[215],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[815];
// load src
Fr_sub(&expaux[0],&lvar[815],&circuitConstants[2]); // line circom 198
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[815],&circuitConstants[3]); // line circom 198
}
{
PFrElement aux_dest = &lvar[815];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[815],&lvar[1]); // line circom 224
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[815]))) + 15)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[815])) + 215)]);
}
{
PFrElement aux_dest = &lvar[815];
// load src
Fr_add(&expaux[0],&lvar[815],&circuitConstants[2]); // line circom 224
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[815],&lvar[1]); // line circom 224
}
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[1]))) + 15)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
// return bucket
Fr_copyn(destination,&lvar[15],destination_size);
return;
}

void get_secp256k1_order_4(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "get_secp256k1_order";
u64 myId = componentFather;
Fr_eq(&expaux[2],&lvar[0],&circuitConstants[27]); // line circom 44
Fr_eq(&expaux[3],&lvar[1],&circuitConstants[10]); // line circom 44
Fr_land(&expaux[1],&expaux[2],&expaux[3]); // line circom 44
Fr_eq(&expaux[3],&lvar[0],&circuitConstants[1]); // line circom 44
Fr_eq(&expaux[4],&lvar[1],&circuitConstants[0]); // line circom 44
Fr_land(&expaux[2],&expaux[3],&expaux[4]); // line circom 44
Fr_lor(&expaux[0],&expaux[1],&expaux[2]); // line circom 44
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 44. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_eq(&expaux[1],&lvar[0],&circuitConstants[27]); // line circom 46
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[10]); // line circom 46
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 46
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
}
Fr_eq(&expaux[1],&lvar[0],&circuitConstants[1]); // line circom 51
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[0]); // line circom 51
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 51
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[32]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
}
// return bucket
Fr_copyn(destination,&lvar[2],destination_size);
return;
}

void get_dummy_point_5(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "get_dummy_point";
u64 myId = componentFather;
Fr_eq(&expaux[2],&lvar[0],&circuitConstants[27]); // line circom 63
Fr_eq(&expaux[3],&lvar[1],&circuitConstants[10]); // line circom 63
Fr_land(&expaux[1],&expaux[2],&expaux[3]); // line circom 63
Fr_eq(&expaux[3],&lvar[0],&circuitConstants[1]); // line circom 63
Fr_eq(&expaux[4],&lvar[1],&circuitConstants[0]); // line circom 63
Fr_land(&expaux[2],&expaux[3],&expaux[4]); // line circom 63
Fr_lor(&expaux[0],&expaux[1],&expaux[2]); // line circom 63
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 63. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[10]); // line circom 65
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[102];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[103];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[38]);
}
{
PFrElement aux_dest = &lvar[104];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[39]);
}
}else{
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[43]);
}
{
PFrElement aux_dest = &lvar[102];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[103];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[45]);
}
{
PFrElement aux_dest = &lvar[104];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[105];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
}
// return bucket
Fr_copyn(destination,&lvar[2],destination_size);
return;
}

void get_secp256k1_prime_6(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "get_secp256k1_prime";
u64 myId = componentFather;
Fr_eq(&expaux[2],&lvar[0],&circuitConstants[27]); // line circom 27
Fr_eq(&expaux[3],&lvar[1],&circuitConstants[10]); // line circom 27
Fr_land(&expaux[1],&expaux[2],&expaux[3]); // line circom 27
Fr_eq(&expaux[3],&lvar[0],&circuitConstants[1]); // line circom 27
Fr_eq(&expaux[4],&lvar[1],&circuitConstants[0]); // line circom 27
Fr_land(&expaux[2],&expaux[3],&expaux[4]); // line circom 27
Fr_lor(&expaux[0],&expaux[1],&expaux[2]); // line circom 27
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 27. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_eq(&expaux[1],&lvar[0],&circuitConstants[27]); // line circom 29
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[10]); // line circom 29
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 29
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
}
Fr_eq(&expaux[1],&lvar[0],&circuitConstants[1]); // line circom 34
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[0]); // line circom 34
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 34
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
}
// return bucket
Fr_copyn(destination,&lvar[2],destination_size);
return;
}

void prod_mod_p_7(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "prod_mod_p";
u64 myId = componentFather;
{

// start of call bucket
FrElement lvarcall[805];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[2],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[102],100);
// end copying argument 3
prod_15(ctx,lvarcall,myId,&lvar[302],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[1305];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[1]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[302],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[103],&lvar[202],100);
// end copying argument 4
long_div_16(ctx,lvarcall,myId,&lvar[402],200);
// end call bucket
}

// return bucket
Fr_copyn(destination,&lvar[502],destination_size);
return;
}

void mod_inv_8(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "mod_inv";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[202];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[203];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[203],&lvar[1]); // line circom 379
while(Fr_isTrue(&expaux[0])){
Fr_neq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[203])) + 2)],&circuitConstants[3]); // line circom 380
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[202];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
{
PFrElement aux_dest = &lvar[203];
// load src
Fr_add(&expaux[0],&lvar[203],&circuitConstants[2]); // line circom 379
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[203],&lvar[1]); // line circom 379
}
Fr_eq(&expaux[0],&lvar[202],&circuitConstants[2]); // line circom 384
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 386
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[303])) + 203)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_add(&expaux[0],&lvar[303],&circuitConstants[2]); // line circom 386
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 386
}
// return bucket
Fr_copyn(destination,&lvar[203],destination_size);
return;
}
{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[303],&circuitConstants[26]); // line circom 393
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 394
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[303])) + 203)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[303])) + 102)]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[303])) + 203)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_add(&expaux[0],&lvar[303],&circuitConstants[2]); // line circom 393
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[303],&circuitConstants[26]); // line circom 393
}
{
PFrElement aux_dest = &lvar[403];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[403],&circuitConstants[26]); // line circom 402
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[403])) + 303)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[403];
// load src
Fr_add(&expaux[0],&lvar[403],&circuitConstants[2]); // line circom 402
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[403],&circuitConstants[26]); // line circom 402
}
{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{

// start of call bucket
FrElement lvarcall[403];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[203],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[303],100);
// end copying argument 3
long_sub_17(ctx,lvarcall,myId,&lvar[403],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[1303];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[2],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[203],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[202],&lvar[403],100);
// end copying argument 4
mod_exp_18(ctx,lvarcall,myId,&lvar[503],100);
// end call bucket
}

// return bucket
Fr_copyn(destination,&lvar[503],destination_size);
return;
}

void long_sub_mod_p_9(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "long_sub_mod_p";
u64 myId = componentFather;
{

// start of call bucket
FrElement lvarcall[203];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[2],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[102],100);
// end copying argument 3
long_gt_19(ctx,lvarcall,myId,&lvar[302],1);
// end call bucket
}

if(Fr_isTrue(&lvar[302])){
{

// start of call bucket
FrElement lvarcall[403];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[2],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[102],100);
// end copying argument 3
long_sub_17(ctx,lvarcall,myId,&lvar[303],100);
// end call bucket
}

}else{
{

// start of call bucket
FrElement lvarcall[403];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[102],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[2],100);
// end copying argument 3
long_sub_17(ctx,lvarcall,myId,&lvar[303],100);
// end call bucket
}

}
{
PFrElement aux_dest = &lvar[603];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
Fr_mul(&expaux[2],&circuitConstants[11],&lvar[1]); // line circom 425
Fr_lt(&expaux[0],&lvar[603],&expaux[2]); // line circom 425
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[603])) + 303)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[603];
// load src
Fr_add(&expaux[0],&lvar[603],&circuitConstants[2]); // line circom 425
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[2],&circuitConstants[11],&lvar[1]); // line circom 425
Fr_lt(&expaux[0],&lvar[603],&expaux[2]); // line circom 425
}
{

// start of call bucket
FrElement lvarcall[1305];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[1]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[303],100);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[103],&lvar[202],100);
// end copying argument 4
long_div_16(ctx,lvarcall,myId,&lvar[403],200);
// end call bucket
}

Fr_eq(&expaux[0],&lvar[302],&circuitConstants[3]); // line circom 429
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[403];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[202],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[503],100);
// end copying argument 3
long_sub_17(ctx,lvarcall,myId,&lvar[303],100);
// end call bucket
}

}
// return bucket
Fr_copyn(destination,&lvar[303],destination_size);
return;
}

void isNegative_10(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[3];
std::string myTemplateName = "isNegative";
u64 myId = componentFather;
Fr_gt(&expaux[0],&lvar[0],&circuitConstants[50]); // line circom 5
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}else{
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
// return bucket
Fr_copy(destination,&lvar[1]);
return;
}

void splitOverflowedRegister_11(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[5];
std::string myTemplateName = "splitOverflowedRegister";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[103];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[103],&circuitConstants[26]); // line circom 42
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[103])) + 3)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[103];
// load src
Fr_add(&expaux[0],&lvar[103],&circuitConstants[2]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[103],&circuitConstants[26]); // line circom 42
}
{

// start of call bucket
FrElement lvarcall[3];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
div_ceil_20(ctx,lvarcall,myId,&lvar[103],1);
// end call bucket
}

{
PFrElement aux_dest = &lvar[104];
// load src
// end load src
Fr_copy(aux_dest,&lvar[2]);
}
{
PFrElement aux_dest = &lvar[105];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[105],&lvar[103]); // line circom 48
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[105])) + 3)];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[1]); // line circom 49
Fr_mod(&expaux[0],&lvar[104],&expaux[2]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[104];
// load src
Fr_shr(&expaux[0],&lvar[104],&lvar[1]); // line circom 50
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[105];
// load src
Fr_add(&expaux[0],&lvar[105],&circuitConstants[2]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[105],&lvar[103]); // line circom 48
}
// return bucket
Fr_copyn(destination,&lvar[3],destination_size);
return;
}

void short_div_12(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "short_div";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[206];
// load src
Fr_shl(&expaux[1],&circuitConstants[2],&lvar[0]); // line circom 262
Fr_sub(&expaux[4],&lvar[1],&circuitConstants[2]); // line circom 262
Fr_add(&expaux[2],&circuitConstants[2],&lvar[((1 * Fr_toInt(&expaux[4])) + 202)]); // line circom 262
Fr_idiv(&expaux[0],&expaux[1],&expaux[2]); // line circom 262
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{

// start of call bucket
FrElement lvarcall[305];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 265
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[206]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[2],200);
// end copying argument 3
long_scalar_mult_21(ctx,lvarcall,myId,&lvar[207],200);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[109];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[206]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[202],4);
// end copying argument 3
long_scalar_mult_13(ctx,lvarcall,myId,&lvar[407],200);
// end call bucket
}

Fr_neq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[1])) + 407)],&circuitConstants[3]); // line circom 270
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[505];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 271
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[207],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[407],200);
// end copying argument 3
short_div_norm_22(ctx,lvarcall,myId,&lvar[607],1);
// end call bucket
}

}else{
{

// start of call bucket
FrElement lvarcall[505];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[207],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[407],200);
// end copying argument 3
short_div_norm_22(ctx,lvarcall,myId,&lvar[607],1);
// end call bucket
}

}
// return bucket
Fr_copy(destination,&lvar[607]);
return;
}

void long_scalar_mult_13(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "long_scalar_mult";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[107];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[107],&circuitConstants[26]); // line circom 169
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[107])) + 7)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[107];
// load src
Fr_add(&expaux[0],&lvar[107],&circuitConstants[2]); // line circom 169
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[107],&circuitConstants[26]); // line circom 169
}
{
PFrElement aux_dest = &lvar[107];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[107],&lvar[1]); // line circom 172
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[108];
// load src
Fr_mul(&expaux[2],&lvar[2],&lvar[((1 * Fr_toInt(&lvar[107])) + 3)]); // line circom 173
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[107])) + 7)],&expaux[2]); // line circom 173
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[107])) + 7)];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[0]); // line circom 174
Fr_mod(&expaux[0],&lvar[108],&expaux[2]); // line circom 174
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[107]) + 1)) + 7)];
// load src
Fr_shl(&expaux[4],&circuitConstants[2],&lvar[0]); // line circom 175
Fr_idiv(&expaux[2],&lvar[108],&expaux[4]); // line circom 175
Fr_add(&expaux[0],&lvar[((1 * (Fr_toInt(&lvar[107]) + 1)) + 7)],&expaux[2]); // line circom 175
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[107];
// load src
Fr_add(&expaux[0],&lvar[107],&circuitConstants[2]); // line circom 172
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[107],&lvar[1]); // line circom 172
}
// return bucket
Fr_copyn(destination,&lvar[7],destination_size);
return;
}

void long_sub_14(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "long_sub";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[602];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[602],&lvar[1]); // line circom 143
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[602],&circuitConstants[3]); // line circom 144
if(Fr_isTrue(&expaux[0])){
Fr_geq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[602])) + 2)],&lvar[((1 * Fr_toInt(&lvar[602])) + 202)]); // line circom 145
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 402)];
// load src
Fr_sub(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[602])) + 2)],&lvar[((1 * Fr_toInt(&lvar[602])) + 202)]); // line circom 146
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 502)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 402)];
// load src
Fr_sub(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[602])) + 2)],&lvar[((1 * Fr_toInt(&lvar[602])) + 202)]); // line circom 149
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[0]); // line circom 149
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 149
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 502)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}
}else{
Fr_sub(&expaux[4],&lvar[602],&circuitConstants[2]); // line circom 153
Fr_add(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[602])) + 202)],&lvar[((1 * Fr_toInt(&expaux[4])) + 502)]); // line circom 153
Fr_geq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[602])) + 2)],&expaux[2]); // line circom 153
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 402)];
// load src
Fr_sub(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[602])) + 2)],&lvar[((1 * Fr_toInt(&lvar[602])) + 202)]); // line circom 154
Fr_sub(&expaux[2],&lvar[602],&circuitConstants[2]); // line circom 154
Fr_sub(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 502)]); // line circom 154
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 502)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 402)];
// load src
Fr_shl(&expaux[3],&circuitConstants[2],&lvar[0]); // line circom 157
Fr_add(&expaux[2],&expaux[3],&lvar[((1 * Fr_toInt(&lvar[602])) + 2)]); // line circom 157
Fr_sub(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&lvar[602])) + 202)]); // line circom 157
Fr_sub(&expaux[2],&lvar[602],&circuitConstants[2]); // line circom 157
Fr_sub(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 502)]); // line circom 157
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[602])) + 502)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}
}
{
PFrElement aux_dest = &lvar[602];
// load src
Fr_add(&expaux[0],&lvar[602],&circuitConstants[2]); // line circom 143
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[602],&lvar[1]); // line circom 143
}
// return bucket
Fr_copyn(destination,&lvar[402],destination_size);
return;
}

void prod_15(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[8];
std::string myTemplateName = "prod";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[302];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 285
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 285
Fr_lt(&expaux[0],&lvar[302],&expaux[2]); // line circom 285
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[302])) + 202)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[302],&lvar[1]); // line circom 287
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_leq(&expaux[0],&lvar[303],&lvar[302]); // line circom 288
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[302])) + 202)];
// load src
Fr_sub(&expaux[4],&lvar[302],&lvar[303]); // line circom 289
Fr_mul(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[303])) + 2)],&lvar[((1 * Fr_toInt(&expaux[4])) + 102)]); // line circom 289
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[302])) + 202)],&expaux[2]); // line circom 289
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_add(&expaux[0],&lvar[303],&circuitConstants[2]); // line circom 288
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_leq(&expaux[0],&lvar[303],&lvar[302]); // line circom 288
}
}else{
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_sub(&expaux[1],&lvar[302],&lvar[1]); // line circom 292
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 292
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 292
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[302])) + 202)];
// load src
Fr_sub(&expaux[4],&lvar[302],&lvar[303]); // line circom 293
Fr_mul(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[303])) + 2)],&lvar[((1 * Fr_toInt(&expaux[4])) + 102)]); // line circom 293
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[302])) + 202)],&expaux[2]); // line circom 293
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_add(&expaux[0],&lvar[303],&circuitConstants[2]); // line circom 292
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 292
}
}
{
PFrElement aux_dest = &lvar[302];
// load src
Fr_add(&expaux[0],&lvar[302],&circuitConstants[2]); // line circom 285
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 285
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 285
Fr_lt(&expaux[0],&lvar[302],&expaux[2]); // line circom 285
}
{
PFrElement aux_dest = &lvar[702];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 302
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 302
Fr_lt(&expaux[0],&lvar[702],&expaux[2]); // line circom 302
while(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[7];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[((1 * Fr_toInt(&lvar[702])) + 202)]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[0]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[0]);
// end copying argument 2
// copying argument 3
Fr_copy(&lvarcall[3],&lvar[0]);
// end copying argument 3
SplitThreeFn_23(ctx,lvarcall,myId,&lvar[((3 * Fr_toInt(&lvar[702])) + 402)],3);
// end call bucket
}

{
PFrElement aux_dest = &lvar[702];
// load src
Fr_add(&expaux[0],&lvar[702],&circuitConstants[2]); // line circom 302
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 302
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 302
Fr_lt(&expaux[0],&lvar[702],&expaux[2]); // line circom 302
}
{
PFrElement aux_dest = &lvar[702];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[302];
// load src
// end load src
Fr_copy(aux_dest,&lvar[402]);
}
Fr_mul(&expaux[2],&circuitConstants[11],&lvar[1]); // line circom 309
Fr_sub(&expaux[1],&expaux[2],&circuitConstants[2]); // line circom 309
Fr_gt(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 309
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[5];
// copying argument 0
Fr_add(&expaux[1],&lvar[403],&lvar[405]); // line circom 310
Fr_copy(&lvarcall[0],&expaux[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[0]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[0]);
// end copying argument 2
SplitFn_24(ctx,lvarcall,myId,&lvar[802],2);
// end call bucket
}

{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&lvar[802]);
}
{
PFrElement aux_dest = &lvar[703];
// load src
// end load src
Fr_copy(aux_dest,&lvar[803]);
}
}
Fr_mul(&expaux[2],&circuitConstants[11],&lvar[1]); // line circom 314
Fr_sub(&expaux[1],&expaux[2],&circuitConstants[2]); // line circom 314
Fr_gt(&expaux[0],&expaux[1],&circuitConstants[11]); // line circom 314
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[802];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 315
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 315
Fr_lt(&expaux[0],&lvar[802],&expaux[2]); // line circom 315
while(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[5];
// copying argument 0
Fr_sub(&expaux[5],&lvar[802],&circuitConstants[2]); // line circom 316
Fr_add(&expaux[3],&lvar[(((3 * Fr_toInt(&lvar[802])) + 0) + 402)],&lvar[(((3 * Fr_toInt(&expaux[5])) + 1) + 402)]); // line circom 316
Fr_sub(&expaux[4],&lvar[802],&circuitConstants[11]); // line circom 316
Fr_add(&expaux[2],&expaux[3],&lvar[(((3 * Fr_toInt(&expaux[4])) + 2) + 402)]); // line circom 316
Fr_sub(&expaux[3],&lvar[802],&circuitConstants[2]); // line circom 316
Fr_add(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&expaux[3])) + 702)]); // line circom 316
Fr_copy(&lvarcall[0],&expaux[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[0]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[0]);
// end copying argument 2
SplitFn_24(ctx,lvarcall,myId,&lvar[803],2);
// end call bucket
}

{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[802])) + 302)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[803]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[802])) + 702)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[804]);
}
{
PFrElement aux_dest = &lvar[802];
// load src
Fr_add(&expaux[0],&lvar[802],&circuitConstants[2]); // line circom 315
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 315
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 315
Fr_lt(&expaux[0],&lvar[802],&expaux[2]); // line circom 315
}
Fr_mul(&expaux[1],&circuitConstants[11],&lvar[1]); // line circom 320
Fr_sub(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 320
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&expaux[0])) + 302)];
// load src
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 320
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[11]); // line circom 320
Fr_mul(&expaux[4],&circuitConstants[11],&lvar[1]); // line circom 320
Fr_sub(&expaux[3],&expaux[4],&circuitConstants[10]); // line circom 320
Fr_add(&expaux[1],&lvar[(((3 * Fr_toInt(&expaux[2])) + 1) + 402)],&lvar[(((3 * Fr_toInt(&expaux[3])) + 2) + 402)]); // line circom 320
Fr_mul(&expaux[3],&circuitConstants[11],&lvar[1]); // line circom 320
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[11]); // line circom 320
Fr_add(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 702)]); // line circom 320
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
// return bucket
Fr_copyn(destination,&lvar[302],destination_size);
return;
}

void long_div_16(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[5];
std::string myTemplateName = "long_div";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[603];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 192
Fr_lt(&expaux[0],&lvar[603],&expaux[2]); // line circom 192
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[603])) + 403)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[603])) + 3)]);
}
{
PFrElement aux_dest = &lvar[603];
// load src
Fr_add(&expaux[0],&lvar[603],&circuitConstants[2]); // line circom 192
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 192
Fr_lt(&expaux[0],&lvar[603],&expaux[2]); // line circom 192
}
{
PFrElement aux_dest = &lvar[1003];
// load src
// end load src
Fr_copy(aux_dest,&lvar[2]);
}
Fr_geq(&expaux[0],&lvar[1003],&circuitConstants[3]); // line circom 198
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1003],&lvar[2]); // line circom 199
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1])) + 803)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[1004];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1004],&circuitConstants[3]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1004])) + 803)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * (Fr_toInt(&lvar[1004]) + Fr_toInt(&lvar[2]))) + 403)]);
}
{
PFrElement aux_dest = &lvar[1004];
// load src
Fr_sub(&expaux[0],&lvar[1004],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1004],&circuitConstants[3]); // line circom 201
}
}else{
{
PFrElement aux_dest = &lvar[1004];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
Fr_geq(&expaux[0],&lvar[1004],&circuitConstants[3]); // line circom 205
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1004])) + 803)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * (Fr_toInt(&lvar[1004]) + Fr_toInt(&lvar[1003]))) + 403)]);
}
{
PFrElement aux_dest = &lvar[1004];
// load src
Fr_sub(&expaux[0],&lvar[1004],&circuitConstants[2]); // line circom 205
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1004],&circuitConstants[3]); // line circom 205
}
}
{

// start of call bucket
FrElement lvarcall[704];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[803],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[103],100);
// end copying argument 3
short_div_25(ctx,lvarcall,myId,&lvar[((0 + (1 * Fr_toInt(&lvar[1003]))) + 203)],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[205];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[((0 + (1 * Fr_toInt(&lvar[1003]))) + 203)]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[103],100);
// end copying argument 3
long_scalar_mult_26(ctx,lvarcall,myId,&lvar[1004],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1304];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 214
Fr_lt(&expaux[0],&lvar[1304],&expaux[2]); // line circom 214
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1304])) + 1104)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[1304];
// load src
Fr_add(&expaux[0],&lvar[1304],&circuitConstants[2]); // line circom 214
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 214
Fr_lt(&expaux[0],&lvar[1304],&expaux[2]); // line circom 214
}
{
PFrElement aux_dest = &lvar[1304];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_leq(&expaux[0],&lvar[1304],&lvar[1]); // line circom 217
while(Fr_isTrue(&expaux[0])){
Fr_add(&expaux[1],&lvar[1003],&lvar[1304]); // line circom 218
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 218
Fr_lt(&expaux[0],&expaux[1],&expaux[2]); // line circom 218
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[1003]) + Fr_toInt(&lvar[1304]))) + 1104)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1304])) + 1004)]);
}
}
{
PFrElement aux_dest = &lvar[1304];
// load src
Fr_add(&expaux[0],&lvar[1304],&circuitConstants[2]); // line circom 217
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_leq(&expaux[0],&lvar[1304],&lvar[1]); // line circom 217
}
{

// start of call bucket
FrElement lvarcall[603];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 222
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[403],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[1104],200);
// end copying argument 3
long_sub_14(ctx,lvarcall,myId,&lvar[403],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1003];
// load src
Fr_sub(&expaux[0],&lvar[1003],&circuitConstants[2]); // line circom 198
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1003],&circuitConstants[3]); // line circom 198
}
{
PFrElement aux_dest = &lvar[1003];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1003],&lvar[1]); // line circom 224
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[1003]))) + 203)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1003])) + 403)]);
}
{
PFrElement aux_dest = &lvar[1003];
// load src
Fr_add(&expaux[0],&lvar[1003],&circuitConstants[2]); // line circom 224
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1003],&lvar[1]); // line circom 224
}
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[1]))) + 203)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
// return bucket
Fr_copyn(destination,&lvar[203],destination_size);
return;
}

void long_sub_17(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "long_sub";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[402];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[402],&lvar[1]); // line circom 143
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[402],&circuitConstants[3]); // line circom 144
if(Fr_isTrue(&expaux[0])){
Fr_geq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[402])) + 2)],&lvar[((1 * Fr_toInt(&lvar[402])) + 102)]); // line circom 145
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 202)];
// load src
Fr_sub(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[402])) + 2)],&lvar[((1 * Fr_toInt(&lvar[402])) + 102)]); // line circom 146
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 302)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 202)];
// load src
Fr_sub(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[402])) + 2)],&lvar[((1 * Fr_toInt(&lvar[402])) + 102)]); // line circom 149
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[0]); // line circom 149
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 149
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 302)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}
}else{
Fr_sub(&expaux[4],&lvar[402],&circuitConstants[2]); // line circom 153
Fr_add(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[402])) + 102)],&lvar[((1 * Fr_toInt(&expaux[4])) + 302)]); // line circom 153
Fr_geq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[402])) + 2)],&expaux[2]); // line circom 153
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 202)];
// load src
Fr_sub(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[402])) + 2)],&lvar[((1 * Fr_toInt(&lvar[402])) + 102)]); // line circom 154
Fr_sub(&expaux[2],&lvar[402],&circuitConstants[2]); // line circom 154
Fr_sub(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 302)]); // line circom 154
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 302)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 202)];
// load src
Fr_shl(&expaux[3],&circuitConstants[2],&lvar[0]); // line circom 157
Fr_add(&expaux[2],&expaux[3],&lvar[((1 * Fr_toInt(&lvar[402])) + 2)]); // line circom 157
Fr_sub(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&lvar[402])) + 102)]); // line circom 157
Fr_sub(&expaux[2],&lvar[402],&circuitConstants[2]); // line circom 157
Fr_sub(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 302)]); // line circom 157
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[402])) + 302)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}
}
{
PFrElement aux_dest = &lvar[402];
// load src
Fr_add(&expaux[0],&lvar[402],&circuitConstants[2]); // line circom 143
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[402],&lvar[1]); // line circom 143
}
// return bucket
Fr_copyn(destination,&lvar[202],destination_size);
return;
}

void mod_exp_18(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "mod_exp";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[802];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[802],&lvar[1]); // line circom 334
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[803];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[803],&lvar[0]); // line circom 335
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[803]) + (Fr_toInt(&lvar[0]) * Fr_toInt(&lvar[802])))) + 302)];
// load src
Fr_shr(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[802])) + 202)],&lvar[803]); // line circom 336
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 336
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[803];
// load src
Fr_add(&expaux[0],&lvar[803],&circuitConstants[2]); // line circom 335
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[803],&lvar[0]); // line circom 335
}
{
PFrElement aux_dest = &lvar[802];
// load src
Fr_add(&expaux[0],&lvar[802],&circuitConstants[2]); // line circom 334
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[802],&lvar[1]); // line circom 334
}
{
PFrElement aux_dest = &lvar[902];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[902],&circuitConstants[26]); // line circom 341
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[902])) + 802)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[902];
// load src
Fr_add(&expaux[0],&lvar[902],&circuitConstants[2]); // line circom 341
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[902],&circuitConstants[26]); // line circom 341
}
{
PFrElement aux_dest = &lvar[802];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[902];
// load src
Fr_mul(&expaux[1],&lvar[1],&lvar[0]); // line circom 347
Fr_sub(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 347
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[902],&circuitConstants[3]); // line circom 347
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[902])) + 302)],&circuitConstants[2]); // line circom 349
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[805];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[802],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[2],100);
// end copying argument 3
prod_15(ctx,lvarcall,myId,&lvar[903],200);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[1405];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[1]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[903],200);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[203],&lvar[102],100);
// end copying argument 4
long_div_27(ctx,lvarcall,myId,&lvar[1103],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[802];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[1203],100);
}
}
Fr_gt(&expaux[0],&lvar[902],&circuitConstants[3]); // line circom 358
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[805];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[802],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[802],100);
// end copying argument 3
prod_15(ctx,lvarcall,myId,&lvar[903],200);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[1405];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[1]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[903],200);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[203],&lvar[102],100);
// end copying argument 4
long_div_27(ctx,lvarcall,myId,&lvar[1103],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[802];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[1203],100);
}
}
{
PFrElement aux_dest = &lvar[902];
// load src
Fr_sub(&expaux[0],&lvar[902],&circuitConstants[2]); // line circom 347
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[902],&circuitConstants[3]); // line circom 347
}
// return bucket
Fr_copyn(destination,&lvar[802],destination_size);
return;
}

void long_gt_19(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[3];
std::string myTemplateName = "long_gt";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[202];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 125
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[202],&circuitConstants[3]); // line circom 125
while(Fr_isTrue(&expaux[0])){
Fr_gt(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[202])) + 2)],&lvar[((1 * Fr_toInt(&lvar[202])) + 102)]); // line circom 126
if(Fr_isTrue(&expaux[0])){
// return bucket
Fr_copy(destination,&circuitConstants[2]);
return;
}
Fr_lt(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[202])) + 2)],&lvar[((1 * Fr_toInt(&lvar[202])) + 102)]); // line circom 129
if(Fr_isTrue(&expaux[0])){
// return bucket
Fr_copy(destination,&circuitConstants[3]);
return;
}
{
PFrElement aux_dest = &lvar[202];
// load src
Fr_sub(&expaux[0],&lvar[202],&circuitConstants[2]); // line circom 125
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[202],&circuitConstants[3]); // line circom 125
}
// return bucket
Fr_copy(destination,&circuitConstants[3]);
return;
}

void div_ceil_20(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[4];
std::string myTemplateName = "div_ceil";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_mod(&expaux[1],&lvar[0],&lvar[1]); // line circom 10
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 10
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_idiv(&expaux[0],&lvar[0],&lvar[1]); // line circom 11
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_idiv(&expaux[1],&lvar[0],&lvar[1]); // line circom 13
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 13
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
// return bucket
Fr_copy(destination,&lvar[2]);
return;
}

void long_scalar_mult_21(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "long_scalar_mult";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[303],&circuitConstants[26]); // line circom 169
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[303])) + 203)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_add(&expaux[0],&lvar[303],&circuitConstants[2]); // line circom 169
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[303],&circuitConstants[26]); // line circom 169
}
{
PFrElement aux_dest = &lvar[303];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 172
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[304];
// load src
Fr_mul(&expaux[2],&lvar[2],&lvar[((1 * Fr_toInt(&lvar[303])) + 3)]); // line circom 173
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[303])) + 203)],&expaux[2]); // line circom 173
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[303])) + 203)];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[0]); // line circom 174
Fr_mod(&expaux[0],&lvar[304],&expaux[2]); // line circom 174
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[303]) + 1)) + 203)];
// load src
Fr_shl(&expaux[4],&circuitConstants[2],&lvar[0]); // line circom 175
Fr_idiv(&expaux[2],&lvar[304],&expaux[4]); // line circom 175
Fr_add(&expaux[0],&lvar[((1 * (Fr_toInt(&lvar[303]) + 1)) + 203)],&expaux[2]); // line circom 175
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[303];
// load src
Fr_add(&expaux[0],&lvar[303],&circuitConstants[2]); // line circom 172
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[303],&lvar[1]); // line circom 172
}
// return bucket
Fr_copyn(destination,&lvar[203],destination_size);
return;
}

void short_div_norm_22(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "short_div_norm";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[402];
// load src
Fr_shl(&expaux[4],&circuitConstants[2],&lvar[0]); // line circom 238
Fr_mul(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[1])) + 2)],&expaux[4]); // line circom 238
Fr_sub(&expaux[3],&lvar[1],&circuitConstants[2]); // line circom 238
Fr_add(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&expaux[3])) + 2)]); // line circom 238
Fr_sub(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 238
Fr_idiv(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 202)]); // line circom 238
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_shl(&expaux[3],&circuitConstants[2],&lvar[0]); // line circom 239
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 239
Fr_gt(&expaux[0],&lvar[402],&expaux[2]); // line circom 239
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[402];
// load src
Fr_shl(&expaux[1],&circuitConstants[2],&lvar[0]); // line circom 240
Fr_sub(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 240
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{

// start of call bucket
FrElement lvarcall[305];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[402]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[202],200);
// end copying argument 3
long_scalar_mult_21(ctx,lvarcall,myId,&lvar[403],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[303];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 244
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[403],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[2],200);
// end copying argument 3
long_gt_28(ctx,lvarcall,myId,&lvar[503],1);
// end call bucket
}

Fr_eq(&expaux[0],&lvar[503],&circuitConstants[2]); // line circom 244
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[503];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 245
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[403],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[202],200);
// end copying argument 3
long_sub_29(ctx,lvarcall,myId,&lvar[403],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[303];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 246
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[403],100);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[102],&lvar[2],200);
// end copying argument 3
long_gt_28(ctx,lvarcall,myId,&lvar[504],1);
// end call bucket
}

Fr_eq(&expaux[0],&lvar[504],&circuitConstants[2]); // line circom 246
if(Fr_isTrue(&expaux[0])){
// return bucket
Fr_sub(&expaux[0],&lvar[402],&circuitConstants[11]); // line circom 247
Fr_copy(destination,&expaux[0]);
return;
}else{
// return bucket
Fr_sub(&expaux[0],&lvar[402],&circuitConstants[2]); // line circom 249
Fr_copy(destination,&expaux[0]);
return;
}
}else{
// return bucket
Fr_copy(destination,&lvar[402]);
return;
}
}

void SplitThreeFn_23(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[8];
std::string myTemplateName = "SplitThreeFn";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[1]); // line circom 34
Fr_mod(&expaux[0],&lvar[0],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_shl(&expaux[3],&circuitConstants[2],&lvar[1]); // line circom 34
Fr_idiv(&expaux[1],&lvar[0],&expaux[3]); // line circom 34
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[2]); // line circom 34
Fr_mod(&expaux[0],&expaux[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_add(&expaux[5],&lvar[1],&lvar[2]); // line circom 34
Fr_shl(&expaux[3],&circuitConstants[2],&expaux[5]); // line circom 34
Fr_idiv(&expaux[1],&lvar[0],&expaux[3]); // line circom 34
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[3]); // line circom 34
Fr_mod(&expaux[0],&expaux[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// return bucket
Fr_copyn(destination,&lvar[4],destination_size);
return;
}

void SplitFn_24(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[6];
std::string myTemplateName = "SplitFn";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[1]); // line circom 30
Fr_mod(&expaux[0],&lvar[0],&expaux[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_shl(&expaux[3],&circuitConstants[2],&lvar[1]); // line circom 30
Fr_idiv(&expaux[1],&lvar[0],&expaux[3]); // line circom 30
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[2]); // line circom 30
Fr_mod(&expaux[0],&expaux[1],&expaux[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// return bucket
Fr_copyn(destination,&lvar[3],destination_size);
return;
}

void short_div_25(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "short_div";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[302];
// load src
Fr_shl(&expaux[1],&circuitConstants[2],&lvar[0]); // line circom 262
Fr_sub(&expaux[4],&lvar[1],&circuitConstants[2]); // line circom 262
Fr_add(&expaux[2],&circuitConstants[2],&lvar[((1 * Fr_toInt(&expaux[4])) + 202)]); // line circom 262
Fr_idiv(&expaux[0],&expaux[1],&expaux[2]); // line circom 262
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{

// start of call bucket
FrElement lvarcall[305];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 265
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[302]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[2],200);
// end copying argument 3
long_scalar_mult_21(ctx,lvarcall,myId,&lvar[303],200);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[205];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[302]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[202],100);
// end copying argument 3
long_scalar_mult_26(ctx,lvarcall,myId,&lvar[503],200);
// end call bucket
}

Fr_neq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[1])) + 503)],&circuitConstants[3]); // line circom 270
if(Fr_isTrue(&expaux[0])){
{

// start of call bucket
FrElement lvarcall[505];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 271
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[303],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[503],200);
// end copying argument 3
short_div_norm_22(ctx,lvarcall,myId,&lvar[703],1);
// end call bucket
}

}else{
{

// start of call bucket
FrElement lvarcall[505];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[303],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[503],200);
// end copying argument 3
short_div_norm_22(ctx,lvarcall,myId,&lvar[703],1);
// end call bucket
}

}
// return bucket
Fr_copy(destination,&lvar[703]);
return;
}

void long_scalar_mult_26(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "long_scalar_mult";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[203];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[203],&circuitConstants[26]); // line circom 169
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[203])) + 103)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[203];
// load src
Fr_add(&expaux[0],&lvar[203],&circuitConstants[2]); // line circom 169
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[203],&circuitConstants[26]); // line circom 169
}
{
PFrElement aux_dest = &lvar[203];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[203],&lvar[1]); // line circom 172
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[204];
// load src
Fr_mul(&expaux[2],&lvar[2],&lvar[((1 * Fr_toInt(&lvar[203])) + 3)]); // line circom 173
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[203])) + 103)],&expaux[2]); // line circom 173
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[203])) + 103)];
// load src
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[0]); // line circom 174
Fr_mod(&expaux[0],&lvar[204],&expaux[2]); // line circom 174
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[203]) + 1)) + 103)];
// load src
Fr_shl(&expaux[4],&circuitConstants[2],&lvar[0]); // line circom 175
Fr_idiv(&expaux[2],&lvar[204],&expaux[4]); // line circom 175
Fr_add(&expaux[0],&lvar[((1 * (Fr_toInt(&lvar[203]) + 1)) + 103)],&expaux[2]); // line circom 175
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[203];
// load src
Fr_add(&expaux[0],&lvar[203],&circuitConstants[2]); // line circom 172
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[203],&lvar[1]); // line circom 172
}
// return bucket
Fr_copyn(destination,&lvar[103],destination_size);
return;
}

void long_div_27(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[5];
std::string myTemplateName = "long_div";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[703];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 192
Fr_lt(&expaux[0],&lvar[703],&expaux[2]); // line circom 192
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[703])) + 503)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[703])) + 3)]);
}
{
PFrElement aux_dest = &lvar[703];
// load src
Fr_add(&expaux[0],&lvar[703],&circuitConstants[2]); // line circom 192
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 192
Fr_lt(&expaux[0],&lvar[703],&expaux[2]); // line circom 192
}
{
PFrElement aux_dest = &lvar[1103];
// load src
// end load src
Fr_copy(aux_dest,&lvar[2]);
}
Fr_geq(&expaux[0],&lvar[1103],&circuitConstants[3]); // line circom 198
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1103],&lvar[2]); // line circom 199
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1])) + 903)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[1104];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1104],&circuitConstants[3]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1104])) + 903)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * (Fr_toInt(&lvar[1104]) + Fr_toInt(&lvar[2]))) + 503)]);
}
{
PFrElement aux_dest = &lvar[1104];
// load src
Fr_sub(&expaux[0],&lvar[1104],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1104],&circuitConstants[3]); // line circom 201
}
}else{
{
PFrElement aux_dest = &lvar[1104];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
Fr_geq(&expaux[0],&lvar[1104],&circuitConstants[3]); // line circom 205
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1104])) + 903)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * (Fr_toInt(&lvar[1104]) + Fr_toInt(&lvar[1103]))) + 503)]);
}
{
PFrElement aux_dest = &lvar[1104];
// load src
Fr_sub(&expaux[0],&lvar[1104],&circuitConstants[2]); // line circom 205
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1104],&circuitConstants[3]); // line circom 205
}
}
{

// start of call bucket
FrElement lvarcall[704];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[903],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[203],100);
// end copying argument 3
short_div_25(ctx,lvarcall,myId,&lvar[((0 + (1 * Fr_toInt(&lvar[1103]))) + 303)],1);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[205];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&lvar[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&lvar[((0 + (1 * Fr_toInt(&lvar[1103]))) + 303)]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[203],100);
// end copying argument 3
long_scalar_mult_26(ctx,lvarcall,myId,&lvar[1104],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1404];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 214
Fr_lt(&expaux[0],&lvar[1404],&expaux[2]); // line circom 214
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[1404])) + 1204)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[1404];
// load src
Fr_add(&expaux[0],&lvar[1404],&circuitConstants[2]); // line circom 214
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 214
Fr_lt(&expaux[0],&lvar[1404],&expaux[2]); // line circom 214
}
{
PFrElement aux_dest = &lvar[1404];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_leq(&expaux[0],&lvar[1404],&lvar[1]); // line circom 217
while(Fr_isTrue(&expaux[0])){
Fr_add(&expaux[1],&lvar[1103],&lvar[1404]); // line circom 218
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 218
Fr_lt(&expaux[0],&expaux[1],&expaux[2]); // line circom 218
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[1103]) + Fr_toInt(&lvar[1404]))) + 1204)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1404])) + 1104)]);
}
}
{
PFrElement aux_dest = &lvar[1404];
// load src
Fr_add(&expaux[0],&lvar[1404],&circuitConstants[2]); // line circom 217
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_leq(&expaux[0],&lvar[1404],&lvar[1]); // line circom 217
}
{

// start of call bucket
FrElement lvarcall[603];
// copying argument 0
Fr_copy(&lvarcall[0],&lvar[0]);
// end copying argument 0
// copying argument 1
Fr_add(&expaux[2],&lvar[2],&lvar[1]); // line circom 222
Fr_copy(&lvarcall[1],&expaux[2]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[503],200);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[202],&lvar[1204],200);
// end copying argument 3
long_sub_14(ctx,lvarcall,myId,&lvar[503],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[1103];
// load src
Fr_sub(&expaux[0],&lvar[1103],&circuitConstants[2]); // line circom 198
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[1103],&circuitConstants[3]); // line circom 198
}
{
PFrElement aux_dest = &lvar[1103];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1103],&lvar[1]); // line circom 224
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[1103]))) + 303)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[1103])) + 503)]);
}
{
PFrElement aux_dest = &lvar[1103];
// load src
Fr_add(&expaux[0],&lvar[1103],&circuitConstants[2]); // line circom 224
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1103],&lvar[1]); // line circom 224
}
{
PFrElement aux_dest = &lvar[((100 + (1 * Fr_toInt(&lvar[1]))) + 303)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
// return bucket
Fr_copyn(destination,&lvar[303],destination_size);
return;
}

void long_gt_28(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[3];
std::string myTemplateName = "long_gt";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[302];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 125
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[302],&circuitConstants[3]); // line circom 125
while(Fr_isTrue(&expaux[0])){
Fr_gt(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[302])) + 2)],&lvar[((1 * Fr_toInt(&lvar[302])) + 102)]); // line circom 126
if(Fr_isTrue(&expaux[0])){
// return bucket
Fr_copy(destination,&circuitConstants[2]);
return;
}
Fr_lt(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[302])) + 2)],&lvar[((1 * Fr_toInt(&lvar[302])) + 102)]); // line circom 129
if(Fr_isTrue(&expaux[0])){
// return bucket
Fr_copy(destination,&circuitConstants[3]);
return;
}
{
PFrElement aux_dest = &lvar[302];
// load src
Fr_sub(&expaux[0],&lvar[302],&circuitConstants[2]); // line circom 125
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[302],&circuitConstants[3]); // line circom 125
}
// return bucket
Fr_copy(destination,&circuitConstants[3]);
return;
}

void long_sub_29(Circom_CalcWit* ctx,FrElement* lvar,uint componentFather,FrElement* destination,int destination_size){
FrElement* circuitConstants = ctx->circuitConstants;
FrElement expaux[7];
std::string myTemplateName = "long_sub";
u64 myId = componentFather;
{
PFrElement aux_dest = &lvar[502];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[502],&lvar[1]); // line circom 143
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[502],&circuitConstants[3]); // line circom 144
if(Fr_isTrue(&expaux[0])){
Fr_geq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[502])) + 2)],&lvar[((1 * Fr_toInt(&lvar[502])) + 102)]); // line circom 145
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 302)];
// load src
Fr_sub(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[502])) + 2)],&lvar[((1 * Fr_toInt(&lvar[502])) + 102)]); // line circom 146
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 402)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 302)];
// load src
Fr_sub(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[502])) + 2)],&lvar[((1 * Fr_toInt(&lvar[502])) + 102)]); // line circom 149
Fr_shl(&expaux[2],&circuitConstants[2],&lvar[0]); // line circom 149
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 149
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 402)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}
}else{
Fr_sub(&expaux[4],&lvar[502],&circuitConstants[2]); // line circom 153
Fr_add(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[502])) + 102)],&lvar[((1 * Fr_toInt(&expaux[4])) + 402)]); // line circom 153
Fr_geq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[502])) + 2)],&expaux[2]); // line circom 153
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 302)];
// load src
Fr_sub(&expaux[1],&lvar[((1 * Fr_toInt(&lvar[502])) + 2)],&lvar[((1 * Fr_toInt(&lvar[502])) + 102)]); // line circom 154
Fr_sub(&expaux[2],&lvar[502],&circuitConstants[2]); // line circom 154
Fr_sub(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 402)]); // line circom 154
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 402)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}else{
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 302)];
// load src
Fr_shl(&expaux[3],&circuitConstants[2],&lvar[0]); // line circom 157
Fr_add(&expaux[2],&expaux[3],&lvar[((1 * Fr_toInt(&lvar[502])) + 2)]); // line circom 157
Fr_sub(&expaux[1],&expaux[2],&lvar[((1 * Fr_toInt(&lvar[502])) + 102)]); // line circom 157
Fr_sub(&expaux[2],&lvar[502],&circuitConstants[2]); // line circom 157
Fr_sub(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&expaux[2])) + 402)]); // line circom 157
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[502])) + 402)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}
}
{
PFrElement aux_dest = &lvar[502];
// load src
Fr_add(&expaux[0],&lvar[502],&circuitConstants[2]); // line circom 143
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[502],&lvar[1]); // line circom 143
}
// return bucket
Fr_copyn(destination,&lvar[302],destination_size);
return;
}

// template declarations
void Secp256k1Double_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 0;
ctx->componentMemory[coffset].templateName = "Secp256k1Double";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 8;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Secp256k1Double_0_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[211];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 266. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[10],&circuitConstants[0]); // line circom 273
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[10]))) + 8)]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[10])) + 6)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[10]))) + 8)]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
Fr_add(&expaux[0],&lvar[10],&circuitConstants[2]); // line circom 273
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[10],&circuitConstants[0]); // line circom 273
}
{

// start of call bucket
FrElement lvarcall[2011];
// copying argument 0
Fr_copy(&lvarcall[0],&circuitConstants[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[0]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[2],4);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[6],&lvar[6],4);
// end copying argument 3
secp256k1_double_func_0(ctx,lvarcall,myId,&lvar[10],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[210];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[210],&circuitConstants[0]); // line circom 279
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[210]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((0 + (1 * Fr_toInt(&lvar[210]))) + 10)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[210]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((100 + (1 * Fr_toInt(&lvar[210]))) + 10)]);
}
{
PFrElement aux_dest = &lvar[210];
// load src
Fr_add(&expaux[0],&lvar[210],&circuitConstants[2]); // line circom 279
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[210],&circuitConstants[0]); // line circom 279
}
}

void Secp256k1AddUnequal_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 1;
ctx->componentMemory[coffset].templateName = "Secp256k1AddUnequal";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 16;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Secp256k1AddUnequal_1_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[219];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 214. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[18],&circuitConstants[0]); // line circom 224
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[18])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[18]))) + 8)]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[18])) + 6)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[18]))) + 8)]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[18])) + 10)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[18]))) + 16)]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[18])) + 14)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[18]))) + 16)]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
Fr_add(&expaux[0],&lvar[18],&circuitConstants[2]); // line circom 224
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[18],&circuitConstants[0]); // line circom 224
}
{

// start of call bucket
FrElement lvarcall[1719];
// copying argument 0
Fr_copy(&lvarcall[0],&circuitConstants[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[0]);
// end copying argument 1
// copying argument 2
Fr_copyn(&lvarcall[2],&lvar[2],4);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[6],&lvar[6],4);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[10],&lvar[10],4);
// end copying argument 4
// copying argument 5
Fr_copyn(&lvarcall[14],&lvar[14],4);
// end copying argument 5
secp256k1_addunequal_func_1(ctx,lvarcall,myId,&lvar[18],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[218];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[218],&circuitConstants[0]); // line circom 232
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[218]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((0 + (1 * Fr_toInt(&lvar[218]))) + 18)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[218]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((100 + (1 * Fr_toInt(&lvar[218]))) + 18)]);
}
{
PFrElement aux_dest = &lvar[218];
// load src
Fr_add(&expaux[0],&lvar[218],&circuitConstants[2]); // line circom 232
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[218],&circuitConstants[0]); // line circom 232
}
}

void Num2Bits_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 2;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_2_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 64],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 64]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Bits2Num_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 3;
ctx->componentMemory[coffset].templateName = "Bits2Num";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Bits2Num_3_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 61
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 1)],&lvar[2]); // line circom 62
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 63
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 61
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 61
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
}

void Decoder_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 4;
ctx->componentMemory[coffset].templateName = "Decoder";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Decoder_4_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 84
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&signalValues[mySignalStart + 17],&lvar[2]); // line circom 85
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + 17],&lvar[2]); // line circom 86
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)],&expaux[3]); // line circom 86
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 86
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 86. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]); // line circom 87
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 84
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 84
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 16];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + 16],&circuitConstants[2]); // line circom 91
Fr_mul(&expaux[1],&signalValues[mySignalStart + 16],&expaux[3]); // line circom 91
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 91
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 91. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void EscalarProduct_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 5;
ctx->componentMemory[coffset].templateName = "EscalarProduct";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void EscalarProduct_5_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 71
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 33)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 17)]); // line circom 72
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 33)]); // line circom 73
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 71
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 71
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&lvar[1]);
}
}

void Multiplexer_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 6;
ctx->componentMemory[coffset].templateName = "Multiplexer";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 65;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[5];
}

void Multiplexer_6_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+69;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dec";
mySubcomponents[aux_create+i] = aux_cmp_num;
Decoder_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 18 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+87;
uint aux_dimensions[1] = {4};
for (uint i = 0; i < 4; i++) {
std::string new_cmp_name = "ep"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
EscalarProduct_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 49 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[0]); // line circom 102
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 102
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[0]); // line circom 102
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 17];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 68]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Decoder_4_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[0]); // line circom 107
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[4]); // line circom 108
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((4 * Fr_toInt(&lvar[3])) + (1 * Fr_toInt(&lvar[2]))) + 4)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
EscalarProduct_5_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 17)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[3])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
EscalarProduct_5_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 108
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[4]); // line circom 108
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[2])) + 1)]].signalStart + 0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 107
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[0]); // line circom 107
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 16],&circuitConstants[2]); // line circom 114
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 114. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void IsZero_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 7;
ctx->componentMemory[coffset].templateName = "IsZero";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void IsZero_7_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[0];
uint sub_component_aux;
Fr_neq(&expaux[0],&signalValues[mySignalStart + 1],&circuitConstants[3]); // line circom 30
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
Fr_div(&expaux[0],&circuitConstants[2],&signalValues[mySignalStart + 1]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_neg(&expaux[2],&signalValues[mySignalStart + 1]); // line circom 32
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 32
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 0]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void OR_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 8;
ctx->componentMemory[coffset].templateName = "OR";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void OR_8_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[0];
uint sub_component_aux;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 42
Fr_mul(&expaux[2],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 42
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void BigMultNoCarry_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 9;
ctx->componentMemory[coffset].templateName = "BigMultNoCarry";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 8;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BigMultNoCarry_9_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[35];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 180. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[5]); // line circom 186
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[12])) + 5)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
Fr_add(&expaux[0],&lvar[12],&circuitConstants[2]); // line circom 186
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[5]); // line circom 186
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[0]); // line circom 189
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[13],&circuitConstants[0]); // line circom 190
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[12]) + Fr_toInt(&lvar[13]))) + 5)];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[12])) + 7)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[13])) + 11)]); // line circom 191
Fr_add(&expaux[0],&lvar[((1 * (Fr_toInt(&lvar[12]) + Fr_toInt(&lvar[13]))) + 5)],&expaux[2]); // line circom 191
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
Fr_add(&expaux[0],&lvar[13],&circuitConstants[2]); // line circom 190
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[13],&circuitConstants[0]); // line circom 190
}
{
PFrElement aux_dest = &lvar[12];
// load src
Fr_add(&expaux[0],&lvar[12],&circuitConstants[2]); // line circom 189
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[0]); // line circom 189
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[5]); // line circom 194
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[12])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[12])) + 5)]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
Fr_add(&expaux[0],&lvar[12],&circuitConstants[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[5]); // line circom 194
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[33],&circuitConstants[5]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[33])) + 26)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[33])) + 12)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[33])) + 19)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[34],&circuitConstants[5]); // line circom 205
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[33])) + 26)];
// load src
Fr_pow(&expaux[4],&lvar[33],&lvar[34]); // line circom 206
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[34])) + 0)],&expaux[4]); // line circom 206
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[33])) + 26)],&expaux[2]); // line circom 206
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
Fr_add(&expaux[0],&lvar[34],&circuitConstants[2]); // line circom 205
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[34],&circuitConstants[5]); // line circom 205
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[34],&circuitConstants[0]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[33])) + 12)];
// load src
Fr_pow(&expaux[4],&lvar[33],&lvar[34]); // line circom 209
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[34])) + 7)],&expaux[4]); // line circom 209
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[33])) + 12)],&expaux[2]); // line circom 209
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
Fr_add(&expaux[0],&lvar[34],&circuitConstants[2]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[34],&circuitConstants[0]); // line circom 208
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[34],&circuitConstants[0]); // line circom 211
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[33])) + 19)];
// load src
Fr_pow(&expaux[4],&lvar[33],&lvar[34]); // line circom 212
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[34])) + 11)],&expaux[4]); // line circom 212
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[33])) + 19)],&expaux[2]); // line circom 212
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
Fr_add(&expaux[0],&lvar[34],&circuitConstants[2]); // line circom 211
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[34],&circuitConstants[0]); // line circom 211
}
{
PFrElement aux_dest = &lvar[33];
// load src
Fr_add(&expaux[0],&lvar[33],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[33],&circuitConstants[5]); // line circom 201
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[33],&circuitConstants[5]); // line circom 215
while(Fr_isTrue(&expaux[0])){
Fr_mul(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[33])) + 12)],&lvar[((1 * Fr_toInt(&lvar[33])) + 19)]); // line circom 216
Fr_eq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[33])) + 26)],&expaux[2]); // line circom 216
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 216. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[33];
// load src
Fr_add(&expaux[0],&lvar[33],&circuitConstants[2]); // line circom 215
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[33],&circuitConstants[5]); // line circom 215
}
}

void BigMultNoCarry_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 10;
ctx->componentMemory[coffset].templateName = "BigMultNoCarry";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 11;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BigMultNoCarry_10_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[47];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 180. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[15],&circuitConstants[7]); // line circom 186
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[15])) + 5)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
Fr_add(&expaux[0],&lvar[15],&circuitConstants[2]); // line circom 186
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[15],&circuitConstants[7]); // line circom 186
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[15],&circuitConstants[5]); // line circom 189
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[16],&circuitConstants[0]); // line circom 190
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[15]) + Fr_toInt(&lvar[16]))) + 5)];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[15])) + 10)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[16])) + 17)]); // line circom 191
Fr_add(&expaux[0],&lvar[((1 * (Fr_toInt(&lvar[15]) + Fr_toInt(&lvar[16]))) + 5)],&expaux[2]); // line circom 191
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
Fr_add(&expaux[0],&lvar[16],&circuitConstants[2]); // line circom 190
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[16],&circuitConstants[0]); // line circom 190
}
{
PFrElement aux_dest = &lvar[15];
// load src
Fr_add(&expaux[0],&lvar[15],&circuitConstants[2]); // line circom 189
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[15],&circuitConstants[5]); // line circom 189
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[15],&circuitConstants[7]); // line circom 194
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[15])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[15])) + 5)]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
Fr_add(&expaux[0],&lvar[15],&circuitConstants[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[15],&circuitConstants[7]); // line circom 194
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[45],&circuitConstants[7]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[45])) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[45])) + 15)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[45])) + 25)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[46],&circuitConstants[7]); // line circom 205
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[45])) + 35)];
// load src
Fr_pow(&expaux[4],&lvar[45],&lvar[46]); // line circom 206
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[46])) + 0)],&expaux[4]); // line circom 206
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[45])) + 35)],&expaux[2]); // line circom 206
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
Fr_add(&expaux[0],&lvar[46],&circuitConstants[2]); // line circom 205
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[46],&circuitConstants[7]); // line circom 205
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[46],&circuitConstants[5]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[45])) + 15)];
// load src
Fr_pow(&expaux[4],&lvar[45],&lvar[46]); // line circom 209
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[46])) + 10)],&expaux[4]); // line circom 209
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[45])) + 15)],&expaux[2]); // line circom 209
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
Fr_add(&expaux[0],&lvar[46],&circuitConstants[2]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[46],&circuitConstants[5]); // line circom 208
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[46],&circuitConstants[0]); // line circom 211
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[45])) + 25)];
// load src
Fr_pow(&expaux[4],&lvar[45],&lvar[46]); // line circom 212
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[46])) + 17)],&expaux[4]); // line circom 212
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[45])) + 25)],&expaux[2]); // line circom 212
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
Fr_add(&expaux[0],&lvar[46],&circuitConstants[2]); // line circom 211
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[46],&circuitConstants[0]); // line circom 211
}
{
PFrElement aux_dest = &lvar[45];
// load src
Fr_add(&expaux[0],&lvar[45],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[45],&circuitConstants[7]); // line circom 201
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[45],&circuitConstants[7]); // line circom 215
while(Fr_isTrue(&expaux[0])){
Fr_mul(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[45])) + 15)],&lvar[((1 * Fr_toInt(&lvar[45])) + 25)]); // line circom 216
Fr_eq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[45])) + 35)],&expaux[2]); // line circom 216
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 216. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[45];
// load src
Fr_add(&expaux[0],&lvar[45],&circuitConstants[2]); // line circom 215
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[45],&circuitConstants[7]); // line circom 215
}
}

void A3NoCarry_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 11;
ctx->componentMemory[coffset].templateName = "A3NoCarry";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2];
}

void A3NoCarry_11_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+21;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "a2Comp";
mySubcomponents[aux_create+i] = aux_cmp_num;
BigMultNoCarry_9_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 15 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+36;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "a3Comp";
mySubcomponents[aux_create+i] = aux_cmp_num;
BigMultNoCarry_10_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 21 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 26
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 7)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 10)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 11)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 10)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigMultNoCarry_9_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 26
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 26
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 30
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 14)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 30
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 35
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 10)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 14)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigMultNoCarry_10_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 35
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 38
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 17)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 10)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigMultNoCarry_10_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 38
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 38
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[7]); // line circom 41
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[7]); // line circom 41
}
}

void A2NoCarry_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 12;
ctx->componentMemory[coffset].templateName = "A2NoCarry";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1];
}

void A2NoCarry_12_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+11;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "a2Comp";
mySubcomponents[aux_create+i] = aux_cmp_num;
BigMultNoCarry_9_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 15 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 11
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 7)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 7)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 11)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 7)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigMultNoCarry_9_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 11
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 11
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 15
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 15
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 15
}
}

void Secp256k1PrimeReduce10Registers_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 13;
ctx->componentMemory[coffset].templateName = "Secp256k1PrimeReduce10Registers";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 10;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Secp256k1PrimeReduce10Registers_13_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
Fr_mul(&expaux[1],&circuitConstants[8],&signalValues[mySignalStart + 11]); // line circom 15
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 7]); // line circom 15
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
Fr_mul(&expaux[2],&circuitConstants[8],&signalValues[mySignalStart + 10]); // line circom 16
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + 6]); // line circom 16
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 13]); // line circom 16
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_mul(&expaux[3],&circuitConstants[9],&signalValues[mySignalStart + 13]); // line circom 17
Fr_mul(&expaux[4],&circuitConstants[8],&signalValues[mySignalStart + 9]); // line circom 17
Fr_add(&expaux[2],&expaux[3],&expaux[4]); // line circom 17
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + 5]); // line circom 17
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 12]); // line circom 17
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[2],&circuitConstants[9],&signalValues[mySignalStart + 12]); // line circom 18
Fr_mul(&expaux[3],&circuitConstants[8],&signalValues[mySignalStart + 8]); // line circom 18
Fr_add(&expaux[1],&expaux[2],&expaux[3]); // line circom 18
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 4]); // line circom 18
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void BigMultNoCarry_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 14;
ctx->componentMemory[coffset].templateName = "BigMultNoCarry";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 7;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BigMultNoCarry_14_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[31];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 180. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[11],&circuitConstants[12]); // line circom 186
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[11])) + 5)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
Fr_add(&expaux[0],&lvar[11],&circuitConstants[2]); // line circom 186
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[11],&circuitConstants[12]); // line circom 186
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[11],&circuitConstants[10]); // line circom 189
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[0]); // line circom 190
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * (Fr_toInt(&lvar[11]) + Fr_toInt(&lvar[12]))) + 5)];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[11])) + 6)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[12])) + 9)]); // line circom 191
Fr_add(&expaux[0],&lvar[((1 * (Fr_toInt(&lvar[11]) + Fr_toInt(&lvar[12]))) + 5)],&expaux[2]); // line circom 191
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
Fr_add(&expaux[0],&lvar[12],&circuitConstants[2]); // line circom 190
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[12],&circuitConstants[0]); // line circom 190
}
{
PFrElement aux_dest = &lvar[11];
// load src
Fr_add(&expaux[0],&lvar[11],&circuitConstants[2]); // line circom 189
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[11],&circuitConstants[10]); // line circom 189
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[11],&circuitConstants[12]); // line circom 194
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[11])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[11])) + 5)]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
Fr_add(&expaux[0],&lvar[11],&circuitConstants[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[11],&circuitConstants[12]); // line circom 194
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[29],&circuitConstants[12]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[29])) + 23)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[29])) + 11)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[29])) + 17)];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[30],&circuitConstants[12]); // line circom 205
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[29])) + 23)];
// load src
Fr_pow(&expaux[4],&lvar[29],&lvar[30]); // line circom 206
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[30])) + 0)],&expaux[4]); // line circom 206
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[29])) + 23)],&expaux[2]); // line circom 206
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
Fr_add(&expaux[0],&lvar[30],&circuitConstants[2]); // line circom 205
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[30],&circuitConstants[12]); // line circom 205
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[30],&circuitConstants[10]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[29])) + 11)];
// load src
Fr_pow(&expaux[4],&lvar[29],&lvar[30]); // line circom 209
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[30])) + 6)],&expaux[4]); // line circom 209
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[29])) + 11)],&expaux[2]); // line circom 209
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
Fr_add(&expaux[0],&lvar[30],&circuitConstants[2]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[30],&circuitConstants[10]); // line circom 208
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[30],&circuitConstants[0]); // line circom 211
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[29])) + 17)];
// load src
Fr_pow(&expaux[4],&lvar[29],&lvar[30]); // line circom 212
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[30])) + 9)],&expaux[4]); // line circom 212
Fr_add(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[29])) + 17)],&expaux[2]); // line circom 212
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
Fr_add(&expaux[0],&lvar[30],&circuitConstants[2]); // line circom 211
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[30],&circuitConstants[0]); // line circom 211
}
{
PFrElement aux_dest = &lvar[29];
// load src
Fr_add(&expaux[0],&lvar[29],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[29],&circuitConstants[12]); // line circom 201
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[29],&circuitConstants[12]); // line circom 215
while(Fr_isTrue(&expaux[0])){
Fr_mul(&expaux[2],&lvar[((1 * Fr_toInt(&lvar[29])) + 11)],&lvar[((1 * Fr_toInt(&lvar[29])) + 17)]); // line circom 216
Fr_eq(&expaux[0],&lvar[((1 * Fr_toInt(&lvar[29])) + 23)],&expaux[2]); // line circom 216
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 216. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[29];
// load src
Fr_add(&expaux[0],&lvar[29],&circuitConstants[2]); // line circom 215
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[29],&circuitConstants[12]); // line circom 215
}
}

void Num2Bits_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 15;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_15_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[16]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 182],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[16]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 182]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void CheckCarryToZero_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 16;
ctx->componentMemory[coffset].templateName = "CheckCarryToZero";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 6;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[6];
}

void CheckCarryToZero_16_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[5];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+12;
uint aux_dimensions[1] = {6};
uint aux_positions [5]= {0,1,2,3,4};
for (uint i_aux = 0; i_aux < 5; i_aux++) {
uint i = aux_positions[i_aux];
std::string new_cmp_name = "carryRangeChecks"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Num2Bits_15_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 183 ;
aux_cmp_num += 1;
}
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 544. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[4],&circuitConstants[14]); // line circom 552
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[4],&circuitConstants[3]); // line circom 554
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 0],&circuitConstants[18]); // line circom 555
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[2],&signalValues[mySignalStart + 6],&circuitConstants[18]); // line circom 556
Fr_eq(&expaux[0],&signalValues[mySignalStart + 0],&expaux[2]); // line circom 556
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 556. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[4])) + 6)];
// load src
Fr_sub(&expaux[3],&lvar[4],&circuitConstants[2]); // line circom 559
Fr_add(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[4])) + 0)],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[3])) + 6)]); // line circom 559
Fr_div(&expaux[0],&expaux[1],&circuitConstants[18]); // line circom 559
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&lvar[4],&circuitConstants[2]); // line circom 560
Fr_add(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[4])) + 0)],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[3])) + 6)]); // line circom 560
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[4])) + 6)],&circuitConstants[18]); // line circom 560
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 560
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 560. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[4])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 182];
// load src
Fr_add(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[4])) + 6)],&circuitConstants[19]); // line circom 563
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_add(&expaux[0],&lvar[4],&circuitConstants[2]); // line circom 552
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[4],&circuitConstants[14]); // line circom 552
}
Fr_add(&expaux[1],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 10]); // line circom 565
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[3]); // line circom 565
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 565. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void CheckCubicModPIsZero_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 17;
ctx->componentMemory[coffset].templateName = "CheckCubicModPIsZero";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 10;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[6];
}

void CheckCubicModPIsZero_17_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[310];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
uint aux_create = 0;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+239;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "secpReducer";
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1PrimeReduce10Registers_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 14 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+31;
uint aux_dimensions[1] = {3};
for (uint i = 0; i < 3; i++) {
std::string new_cmp_name = "qRangeChecks"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Num2Bits_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 65 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+226;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "qpProdComp";
mySubcomponents[aux_create+i] = aux_cmp_num;
BigMultNoCarry_14_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 13 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+253;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "zeroCheck";
mySubcomponents[aux_create+i] = aux_cmp_num;
CheckCarryToZero_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 927 ;
aux_cmp_num += 6;
}
}
if (!Fr_isTrue(&circuitConstants[2])) std::cout << "Failed assert in template/function " << myTemplateName << " line 64. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&circuitConstants[2]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[7]); // line circom 86
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1PrimeReduce10Registers_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 86
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[7]); // line circom 86
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 90
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 18)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 10)],&circuitConstants[23]); // line circom 91
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 90
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 90
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 93
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 14)];
// load src
Fr_add(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 0)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 18)]); // line circom 94
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 93
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 93
}
{

// start of call bucket
FrElement lvarcall[10213];
// copying argument 0
Fr_copy(&lvarcall[0],&circuitConstants[24]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[1]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&circuitConstants[0]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&signalValues[mySignalStart + 14],4);
// end copying argument 3
getProperRepresentation_2(ctx,lvarcall,myId,&lvar[1],100);
// end call bucket
}

{
PFrElement aux_dest = &lvar[109];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[109],&circuitConstants[15]); // line circom 104
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((1 * Fr_toInt(&lvar[109])) + 101)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&lvar[109])) + 1)]);
}
{
PFrElement aux_dest = &lvar[109];
// load src
Fr_add(&expaux[0],&lvar[109],&circuitConstants[2]); // line circom 104
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[109],&circuitConstants[15]); // line circom 104
}
{

// start of call bucket
FrElement lvarcall[1117];
// copying argument 0
Fr_copy(&lvarcall[0],&circuitConstants[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[0]);
// end copying argument 1
// copying argument 2
Fr_copy(&lvarcall[2],&circuitConstants[0]);
// end copying argument 2
// copying argument 3
Fr_copyn(&lvarcall[3],&lvar[101],8);
// end copying argument 3
// copying argument 4
Fr_copyn(&lvarcall[11],&signalValues[mySignalStart + 10],4);
// end copying argument 4
long_div_3(ctx,lvarcall,myId,&lvar[109],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[309];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[10]); // line circom 109
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 22)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((0 + (1 * Fr_toInt(&lvar[309]))) + 109)]);
}
{
PFrElement aux_dest = &lvar[309];
// load src
Fr_add(&expaux[0],&lvar[309],&circuitConstants[2]); // line circom 109
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[10]); // line circom 109
}
{
PFrElement aux_dest = &lvar[309];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[10]); // line circom 115
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[309])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 64];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 22)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[309];
// load src
Fr_add(&expaux[0],&lvar[309],&circuitConstants[2]); // line circom 115
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[10]); // line circom 115
}
{
PFrElement aux_dest = &lvar[309];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[10]); // line circom 123
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[309])) + 6)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 22)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigMultNoCarry_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[309];
// load src
Fr_add(&expaux[0],&lvar[309],&circuitConstants[2]); // line circom 123
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[10]); // line circom 123
}
{
PFrElement aux_dest = &lvar[309];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[0]); // line circom 126
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[309])) + 9)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 10)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BigMultNoCarry_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[309];
// load src
Fr_add(&expaux[0],&lvar[309],&circuitConstants[2]); // line circom 126
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[0]); // line circom 126
}
{
PFrElement aux_dest = &lvar[309];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[12]); // line circom 129
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 25)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + ((1 * Fr_toInt(&lvar[309])) + 0)]);
}
{
PFrElement aux_dest = &lvar[309];
// load src
Fr_add(&expaux[0],&lvar[309],&circuitConstants[2]); // line circom 129
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[12]); // line circom 129
}
{
PFrElement aux_dest = &lvar[309];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[12]); // line circom 135
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[0]); // line circom 136
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[309])) + 0)];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 25)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 14)]); // line circom 137
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckCarryToZero_16_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[309])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[309])) + 25)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckCarryToZero_16_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[309];
// load src
Fr_add(&expaux[0],&lvar[309],&circuitConstants[2]); // line circom 135
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[309],&circuitConstants[12]); // line circom 135
}
}

void Secp256k1PointOnCurve_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 18;
ctx->componentMemory[coffset].templateName = "Secp256k1PointOnCurve";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 8;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void Secp256k1PointOnCurve_18_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+25;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "x3Comp";
mySubcomponents[aux_create+i] = aux_cmp_num;
A3NoCarry_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 57 ;
aux_cmp_num += 3;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+82;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "y2Comp";
mySubcomponents[aux_create+i] = aux_cmp_num;
A2NoCarry_12_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 26 ;
aux_cmp_num += 2;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+108;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "zeroCheck";
mySubcomponents[aux_create+i] = aux_cmp_num;
CheckCubicModPIsZero_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 1180 ;
aux_cmp_num += 12;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 197
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 10)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
A3NoCarry_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 197
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 197
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[7]); // line circom 198
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 198
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[7]); // line circom 198
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 202
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 7)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 4)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
A2NoCarry_12_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 202
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 202
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 203
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 18)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 203
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 203
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[7]); // line circom 206
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[0],&circuitConstants[3]); // line circom 207
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 8],&signalValues[mySignalStart + 18]); // line circom 207
Fr_add(&expaux[0],&expaux[1],&circuitConstants[5]); // line circom 207
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckCubicModPIsZero_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[5]); // line circom 208
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 8)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 18)]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckCubicModPIsZero_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 8)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
CheckCubicModPIsZero_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 206
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[7]); // line circom 206
}
}

void Secp256k1DoubleRepeat_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 19;
ctx->componentMemory[coffset].templateName = "Secp256k1DoubleRepeat";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 8;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[8];
}

void Secp256k1DoubleRepeat_19_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[5];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+16;
uint aux_dimensions[1] = {4};
for (uint i = 0; i < 4; i++) {
std::string new_cmp_name = "doubler"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1Double_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 16 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+80;
uint aux_dimensions[1] = {4};
uint aux_positions [3]= {1,2,3};
for (uint i_aux = 0; i_aux < 3; i_aux++) {
uint i = aux_positions[i_aux];
std::string new_cmp_name = "point_on_curve"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1PointOnCurve_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 1288 ;
aux_cmp_num += 18;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 19
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[3]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[3]))) + 8)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1Double_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((4 + (1 * Fr_toInt(&lvar[3]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[3]))) + 8)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1Double_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 19
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 19
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 26
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[4],&circuitConstants[0]); // line circom 29
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[3])) + 4);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[4])) + 0)];
// load src
Fr_sub(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + ((0 + (1 * Fr_toInt(&lvar[4]))) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1PointOnCurve_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[3])) + 4);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[4])) + 4)];
// load src
Fr_sub(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + ((4 + (1 * Fr_toInt(&lvar[4]))) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1PointOnCurve_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_add(&expaux[0],&lvar[4],&circuitConstants[2]); // line circom 29
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[4],&circuitConstants[0]); // line circom 29
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[4],&circuitConstants[0]); // line circom 33
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[3])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[4]))) + 8)];
// load src
Fr_sub(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + ((0 + (1 * Fr_toInt(&lvar[4]))) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1Double_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[3])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((4 + (1 * Fr_toInt(&lvar[4]))) + 8)];
// load src
Fr_sub(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + ((4 + (1 * Fr_toInt(&lvar[4]))) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1Double_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_add(&expaux[0],&lvar[4],&circuitConstants[2]); // line circom 33
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[4],&circuitConstants[0]); // line circom 33
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 26
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 26
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 39
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((0 + (1 * Fr_toInt(&lvar[3]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((0 + (1 * Fr_toInt(&lvar[3]))) + 0)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((4 + (1 * Fr_toInt(&lvar[3]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((4 + (1 * Fr_toInt(&lvar[3]))) + 0)]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 39
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 39
}
}

void Secp256k1LinearCombination_20_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 20;
ctx->componentMemory[coffset].templateName = "Secp256k1LinearCombination";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 24;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[932];
}

void Secp256k1LinearCombination_20_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[319];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint aux_create = 0;
int aux_cmp_num = 5863+ctx_index+1;
uint csoffset = mySignalStart+330608;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "table_doublers"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1Double_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 16 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 5837+ctx_index+1;
uint csoffset = mySignalStart+329984;
uint aux_dimensions[2] = {2,13};
for (uint i = 0; i < 26; i++) {
std::string new_cmp_name = "table_adders"+ctx->generate_position_array(aux_dimensions, 2, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1AddUnequal_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 24 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 28;
int aux_cmp_num = 5701+ctx_index+1;
uint csoffset = mySignalStart+328824;
uint aux_dimensions[2] = {2,4};
for (uint i = 0; i < 8; i++) {
std::string new_cmp_name = "n2b"+ctx->generate_position_array(aux_dimensions, 2, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Num2Bits_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 65 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 36;
int aux_cmp_num = 5709+ctx_index+1;
uint csoffset = mySignalStart+329344;
uint aux_dimensions[2] = {2,64};
for (uint i = 0; i < 128; i++) {
std::string new_cmp_name = "selectors"+ctx->generate_position_array(aux_dimensions, 2, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Bits2Num_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 5 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 164;
int aux_cmp_num = 4165+ctx_index+1;
uint csoffset = mySignalStart+256376;
uint aux_dimensions[3] = {2,64,2};
for (uint i = 0; i < 256; i++) {
std::string new_cmp_name = "multiplexers"+ctx->generate_position_array(aux_dimensions, 3, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Multiplexer_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 283 ;
aux_cmp_num += 6;
}
}
{
uint aux_create = 420;
int aux_cmp_num = 4037+ctx_index+1;
uint csoffset = mySignalStart+255992;
uint aux_dimensions[2] = {2,64};
for (uint i = 0; i < 128; i++) {
std::string new_cmp_name = "iszero"+ctx->generate_position_array(aux_dimensions, 2, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
IsZero_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 548;
int aux_cmp_num = 3909+ctx_index+1;
uint csoffset = mySignalStart+255608;
uint aux_dimensions[2] = {2,64};
for (uint i = 0; i < 128; i++) {
std::string new_cmp_name = "has_prev_nonzero"+ctx->generate_position_array(aux_dimensions, 2, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
OR_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 676;
int aux_cmp_num = 3845+ctx_index+1;
uint csoffset = mySignalStart+255416;
uint aux_dimensions[1] = {64};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "has_prev_coordinate_nonzero"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
OR_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 740;
int aux_cmp_num = 64+ctx_index+1;
uint csoffset = mySignalStart+5408;
uint aux_dimensions[1] = {64};
uint aux_positions [63]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62};
for (uint i_aux = 0; i_aux < 63; i_aux++) {
uint i = aux_positions[i_aux];
std::string new_cmp_name = "doublers"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1DoubleRepeat_19_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 3944 ;
aux_cmp_num += 59;
}
}
{
uint aux_create = 804;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+3872;
uint aux_dimensions[2] = {64,1};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 2, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1AddUnequal_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 24 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 868;
int aux_cmp_num = 3781+ctx_index+1;
uint csoffset = mySignalStart+253880;
uint aux_dimensions[1] = {64};
for (uint i = 0; i < 64; i++) {
std::string new_cmp_name = "final_adder"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Secp256k1AddUnequal_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 24 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{

// start of call bucket
FrElement lvarcall[102];
// copying argument 0
Fr_copy(&lvarcall[0],&circuitConstants[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[0]);
// end copying argument 1
get_secp256k1_order_4(ctx,lvarcall,myId,&lvar[6],100);
// end call bucket
}

{

// start of call bucket
FrElement lvarcall[202];
// copying argument 0
Fr_copy(&lvarcall[0],&circuitConstants[1]);
// end copying argument 0
// copying argument 1
Fr_copy(&lvarcall[1],&circuitConstants[0]);
// end copying argument 1
get_dummy_point_5(ctx,lvarcall,myId,&lvar[106],200);
// end call bucket
}

{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[0]); // line circom 64
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((0 + (1 * Fr_toInt(&lvar[314]))) + 306)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((0 + (1 * Fr_toInt(&lvar[314]))) + 106)]);
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 64
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[0]); // line circom 64
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[0]); // line circom 65
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[((4 + (1 * Fr_toInt(&lvar[314]))) + 306)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((100 + (1 * Fr_toInt(&lvar[314]))) + 106)]);
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 65
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[0]); // line circom 65
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 71
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[4]); // line circom 72
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 73
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 75
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[316]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + 0) + (1 * Fr_toInt(&lvar[316]))) + 16)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1Double_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((4 + (1 * Fr_toInt(&lvar[316]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + 4) + (1 * Fr_toInt(&lvar[316]))) + 16)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1Double_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 75
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 75
}
}else{
Fr_gt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 80
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 82
while(Fr_isTrue(&expaux[0])){
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[10]); // line circom 83
{
uint cmp_index_ref = (((13 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&expaux[0]))) + 2);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[316]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + 0) + (1 * Fr_toInt(&lvar[316]))) + 16)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[10]); // line circom 84
{
uint cmp_index_ref = (((13 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&expaux[0]))) + 2);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((4 + (1 * Fr_toInt(&lvar[316]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + 4) + (1 * Fr_toInt(&lvar[316]))) + 16)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[10]); // line circom 85
{
uint cmp_index_ref = (((13 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&expaux[0]))) + 2);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((0 + (1 * Fr_toInt(&lvar[316]))) + 16)];
// load src
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 85
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + (8 * Fr_toInt(&expaux[0]))) + 0) + (1 * Fr_toInt(&lvar[316]))) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[10]); // line circom 86
{
uint cmp_index_ref = (((13 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&expaux[0]))) + 2);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((4 + (1 * Fr_toInt(&lvar[316]))) + 16)];
// load src
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 86
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + (8 * Fr_toInt(&expaux[0]))) + 4) + (1 * Fr_toInt(&lvar[316]))) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 82
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 82
}
}
}
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 89
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[315],&circuitConstants[3]); // line circom 90
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + 0) + 0) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((0 + (1 * Fr_toInt(&lvar[316]))) + 306)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + 0) + 4) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&lvar[((4 + (1 * Fr_toInt(&lvar[316]))) + 306)]);
}
}else{
Fr_eq(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 93
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + 8) + 0) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + 0) + (1 * Fr_toInt(&lvar[316]))) + 16)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + 8) + 4) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + 4) + (1 * Fr_toInt(&lvar[316]))) + 16)]);
}
}else{
Fr_eq(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 96
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + 16) + 0) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 0)]].signalStart + ((0 + (1 * Fr_toInt(&lvar[316]))) + 0)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + 16) + 4) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 0)]].signalStart + ((4 + (1 * Fr_toInt(&lvar[316]))) + 0)]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + (8 * Fr_toInt(&lvar[315]))) + 0) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[10]); // line circom 100
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((13 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&expaux[0]))) + 2)]].signalStart + ((0 + (1 * Fr_toInt(&lvar[316]))) + 0)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + (8 * Fr_toInt(&lvar[315]))) + 4) + (1 * Fr_toInt(&lvar[316]))) + 32)];
// load src
Fr_sub(&expaux[0],&lvar[315],&circuitConstants[10]); // line circom 101
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((13 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&expaux[0]))) + 2)]].signalStart + ((4 + (1 * Fr_toInt(&lvar[316]))) + 0)]);
}
}
}
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 89
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 89
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 72
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[4]); // line circom 72
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 71
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 71
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 109
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 110
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = (((4 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[315]))) + 28);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 64];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((4 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[315]))) + 8)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Num2Bits_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 110
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 110
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 109
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 109
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 118
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[1]); // line circom 119
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 121
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[317];
// load src
Fr_mul(&expaux[2],&lvar[315],&circuitConstants[0]); // line circom 122
Fr_add(&expaux[1],&expaux[2],&lvar[316]); // line circom 122
Fr_idiv(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 122
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[318];
// load src
Fr_mul(&expaux[2],&lvar[315],&circuitConstants[0]); // line circom 123
Fr_add(&expaux[1],&expaux[2],&lvar[316]); // line circom 123
Fr_mod(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 123
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
uint cmp_index_ref = (((64 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[315]))) + 36);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[316])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((4 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[317]))) + 28)]].signalStart + ((1 * Fr_toInt(&lvar[318])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Bits2Num_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 121
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 121
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 119
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[1]); // line circom 119
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 118
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 118
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 135
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[1]); // line circom 136
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 137
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((((128 * Fr_toInt(&lvar[314])) + (2 * Fr_toInt(&lvar[315]))) + (1 * Fr_toInt(&lvar[316]))) + 164);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 68];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((64 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[315]))) + 36)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Multiplexer_6_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[317];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[317],&circuitConstants[0]); // line circom 140
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[318];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[318],&circuitConstants[4]); // line circom 141
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((((128 * Fr_toInt(&lvar[314])) + (2 * Fr_toInt(&lvar[315]))) + (1 * Fr_toInt(&lvar[316]))) + 164);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + (((4 * Fr_toInt(&lvar[318])) + (1 * Fr_toInt(&lvar[317]))) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((((128 * Fr_toInt(&lvar[314])) + (8 * Fr_toInt(&lvar[318]))) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[317]))) + 32)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Multiplexer_6_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[318];
// load src
Fr_add(&expaux[0],&lvar[318],&circuitConstants[2]); // line circom 141
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[318],&circuitConstants[4]); // line circom 141
}
{
PFrElement aux_dest = &lvar[317];
// load src
Fr_add(&expaux[0],&lvar[317],&circuitConstants[2]); // line circom 140
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[317],&circuitConstants[0]); // line circom 140
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 137
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 137
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 136
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[1]); // line circom 136
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 135
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 135
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 153
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[1]); // line circom 154
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = (((64 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[315]))) + 420);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((64 * Fr_toInt(&lvar[314])) + (1 * Fr_toInt(&lvar[315]))) + 36)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
IsZero_7_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[1]); // line circom 154
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 153
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[11]); // line circom 153
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[1]); // line circom 159
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((0 + (1 * Fr_toInt(&lvar[314]))) + 548);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((0 + (1 * Fr_toInt(&lvar[314]))) + 548);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((0 + (1 * Fr_toInt(&lvar[314]))) + 420)]].signalStart + 0]); // line circom 162
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 159
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[1]); // line circom 159
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[1]); // line circom 164
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 165
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((64 + (1 * Fr_toInt(&lvar[314]))) + 548);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((0 + (1 * Fr_toInt(&lvar[314]))) + 548)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((64 + (1 * Fr_toInt(&lvar[314]))) + 548);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * Fr_toInt(&lvar[314]))) + 420)]].signalStart + 0]); // line circom 168
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 165
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 164
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[1]); // line circom 164
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
Fr_geq(&expaux[0],&lvar[314],&circuitConstants[3]); // line circom 174
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[314],&circuitConstants[25]); // line circom 176
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 739;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 739;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 676);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * (Fr_toInt(&lvar[314]) + 1)) + 676)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 676);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * (Fr_toInt(&lvar[314]) + 1))) + 548)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
OR_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_sub(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 174
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[314],&circuitConstants[3]); // line circom 174
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
Fr_geq(&expaux[0],&lvar[314],&circuitConstants[3]); // line circom 197
while(Fr_isTrue(&expaux[0])){
Fr_neq(&expaux[0],&lvar[314],&circuitConstants[25]); // line circom 199
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 201
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 202
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 740);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((((8 * (Fr_toInt(&lvar[314]) + 1)) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 288)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1DoubleRepeat_19_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 202
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 202
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 201
}
}
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 209
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 210
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((16 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2848)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((0 + (2 * Fr_toInt(&lvar[314]))) + (1 * Fr_toInt(&lvar[316]))) + 164)]].signalStart + ((1 * Fr_toInt(&lvar[315])) + 0)]);
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 210
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 210
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 209
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 209
}
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 216
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 219
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[317];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[317],&circuitConstants[11]); // line circom 220
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = (((1 * Fr_toInt(&lvar[314])) + 0) + 804);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + (((4 * Fr_toInt(&lvar[317])) + (1 * Fr_toInt(&lvar[316]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((((16 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 2848)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = (((1 * Fr_toInt(&lvar[314])) + 0) + 804);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + (((4 * Fr_toInt(&lvar[317])) + (1 * Fr_toInt(&lvar[316]))) + 16)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((128 + (2 * Fr_toInt(&lvar[314]))) + (1 * Fr_toInt(&lvar[317]))) + 164)]].signalStart + ((1 * Fr_toInt(&lvar[316])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[317];
// load src
Fr_add(&expaux[0],&lvar[317],&circuitConstants[2]); // line circom 220
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[317],&circuitConstants[11]); // line circom 220
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 219
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 219
}
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 229
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[317];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[317],&circuitConstants[11]); // line circom 230
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((8 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 800)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((((16 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 2848)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((1 * Fr_toInt(&lvar[314])) + 0) + 804)]].signalStart + (((4 * Fr_toInt(&lvar[317])) + (1 * Fr_toInt(&lvar[316]))) + 0)]); // line circom 233
Fr_mul(&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * Fr_toInt(&lvar[314]))) + 420)]].signalStart + 0],&expaux[3]); // line circom 233
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((1 * Fr_toInt(&lvar[314])) + 0) + 804)]].signalStart + (((4 * Fr_toInt(&lvar[317])) + (1 * Fr_toInt(&lvar[316]))) + 0)]); // line circom 233
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((8 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 1312)];
// load src
Fr_mul(&expaux[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * Fr_toInt(&lvar[314]))) + 420)]].signalStart + 0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((128 + (2 * Fr_toInt(&lvar[314]))) + (1 * Fr_toInt(&lvar[317]))) + 164)]].signalStart + ((1 * Fr_toInt(&lvar[316])) + 0)]); // line circom 238
Fr_sub(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[(((128 + (2 * Fr_toInt(&lvar[314]))) + (1 * Fr_toInt(&lvar[317]))) + 164)]].signalStart + ((1 * Fr_toInt(&lvar[316])) + 0)],&expaux[2]); // line circom 237
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + (((((16 * Fr_toInt(&lvar[314])) + 8) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 2848)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((((8 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 800)],&signalValues[mySignalStart + (((((8 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 1312)]); // line circom 242
Fr_mul(&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((0 + (1 * Fr_toInt(&lvar[314]))) + 548)]].signalStart + 0],&expaux[3]); // line circom 241
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + (((((8 * Fr_toInt(&lvar[314])) + 0) + (4 * Fr_toInt(&lvar[317]))) + (1 * Fr_toInt(&lvar[316]))) + 1312)]); // line circom 241
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[317];
// load src
Fr_add(&expaux[0],&lvar[317],&circuitConstants[2]); // line circom 230
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[317],&circuitConstants[11]); // line circom 230
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 229
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[0]); // line circom 229
}
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 216
}
Fr_eq(&expaux[0],&lvar[314],&circuitConstants[25]); // line circom 251
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 252
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 253
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((504 + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 288)];
// load src
Fr_sub(&expaux[2],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[675]].signalStart + 0]); // line circom 255
Fr_sub(&expaux[3],&lvar[(((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 306)],&signalValues[mySignalStart + (((1016 + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2848)]); // line circom 255
Fr_mul(&expaux[1],&expaux[2],&expaux[3]); // line circom 255
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + (((1016 + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2848)]); // line circom 255
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 253
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 253
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 252
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 252
}
}else{
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 260
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 261
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 868);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 8)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 740)]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[314])) + 868);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 16)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((((16 * Fr_toInt(&lvar[314])) + 8) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2848)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Secp256k1AddUnequal_1_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 261
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 261
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 260
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 260
}
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 266
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[316];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 267
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 1824)];
// load src
Fr_sub(&expaux[3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 868)]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 0)],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 740)]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 0)]); // line circom 278
Fr_mul(&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * Fr_toInt(&lvar[314]))) + 548)]].signalStart + 0],&expaux[3]); // line circom 278
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 740)]].signalStart + (((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 0)]); // line circom 278
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2336)];
// load src
Fr_sub(&expaux[2],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * Fr_toInt(&lvar[314]))) + 548)]].signalStart + 0]); // line circom 280
Fr_mul(&expaux[1],&expaux[2],&lvar[(((4 * Fr_toInt(&lvar[316])) + (1 * Fr_toInt(&lvar[315]))) + 306)]); // line circom 280
Fr_mul(&expaux[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((64 + (1 * Fr_toInt(&lvar[314]))) + 548)]].signalStart + 0],&signalValues[mySignalStart + (((((16 * Fr_toInt(&lvar[314])) + 8) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2848)]); // line circom 281
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 280
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 288)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 1824)],&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2336)]); // line circom 283
Fr_mul(&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[314])) + 676)]].signalStart + 0],&expaux[3]); // line circom 283
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + ((((8 * Fr_toInt(&lvar[314])) + (4 * Fr_toInt(&lvar[316]))) + (1 * Fr_toInt(&lvar[315]))) + 2336)]); // line circom 283
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[316];
// load src
Fr_add(&expaux[0],&lvar[316],&circuitConstants[2]); // line circom 267
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[316],&circuitConstants[11]); // line circom 267
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 266
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[0]); // line circom 266
}
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_sub(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 197
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[314],&circuitConstants[3]); // line circom 197
}
{
PFrElement aux_dest = &lvar[314];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[0]); // line circom 291
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[315];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 292
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + (((4 * Fr_toInt(&lvar[315])) + (1 * Fr_toInt(&lvar[314]))) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((0 + (4 * Fr_toInt(&lvar[315]))) + (1 * Fr_toInt(&lvar[314]))) + 288)]);
}
{
PFrElement aux_dest = &lvar[315];
// load src
Fr_add(&expaux[0],&lvar[315],&circuitConstants[2]); // line circom 292
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[315],&circuitConstants[11]); // line circom 292
}
{
PFrElement aux_dest = &lvar[314];
// load src
Fr_add(&expaux[0],&lvar[314],&circuitConstants[2]); // line circom 291
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[314],&circuitConstants[0]); // line circom 291
}
}

void run(Circom_CalcWit* ctx){
Secp256k1LinearCombination_20_create(1,0,ctx,"main",0);
Secp256k1LinearCombination_20_run(0,ctx);
}

