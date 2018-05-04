/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010f10, CODE_FOR_extendqihi2 },
  { 0x010f11, CODE_FOR_extendqisi2 },
  { 0x010f12, CODE_FOR_extendqidi2 },
  { 0x011011, CODE_FOR_extendhisi2 },
  { 0x011012, CODE_FOR_extendhidi2 },
  { 0x011112, CODE_FOR_extendsidi2 },
  { 0x012a2b, CODE_FOR_extendsfdf2 },
  { 0x012a2c, CODE_FOR_extendsfxf2 },
  { 0x012b2c, CODE_FOR_extenddfxf2 },
  { 0x022b2a, CODE_FOR_truncdfsf2 },
  { 0x022c2a, CODE_FOR_truncxfsf2 },
  { 0x022c2b, CODE_FOR_truncxfdf2 },
  { 0x030f10, CODE_FOR_zero_extendqihi2 },
  { 0x030f11, CODE_FOR_zero_extendqisi2 },
  { 0x030f12, CODE_FOR_zero_extendqidi2 },
  { 0x031011, CODE_FOR_zero_extendhisi2 },
  { 0x031012, CODE_FOR_zero_extendhidi2 },
  { 0x031112, CODE_FOR_zero_extendsidi2 },
  { 0x06102a, CODE_FOR_floathisf2 },
  { 0x06102b, CODE_FOR_floathidf2 },
  { 0x06102c, CODE_FOR_floathixf2 },
  { 0x06112a, CODE_FOR_floatsisf2 },
  { 0x06112b, CODE_FOR_floatsidf2 },
  { 0x06112c, CODE_FOR_floatsixf2 },
  { 0x06122a, CODE_FOR_floatdisf2 },
  { 0x06122b, CODE_FOR_floatdidf2 },
  { 0x06122c, CODE_FOR_floatdixf2 },
  { 0x06495d, CODE_FOR_floatv4siv4sf2 },
  { 0x064960, CODE_FOR_floatv4siv4df2 },
  { 0x064a5e, CODE_FOR_floatv2div2df2 },
  { 0x064e5f, CODE_FOR_floatv8siv8sf2 },
  { 0x064e63, CODE_FOR_floatv8siv8df2 },
  { 0x064f5d, CODE_FOR_floatv4div4sf2 },
  { 0x064f60, CODE_FOR_floatv4div4df2 },
  { 0x065362, CODE_FOR_floatv16siv16sf2 },
  { 0x06545f, CODE_FOR_floatv8div8sf2 },
  { 0x065463, CODE_FOR_floatv8div8df2 },
  { 0x070f2a, CODE_FOR_floatunsqisf2 },
  { 0x070f2b, CODE_FOR_floatunsqidf2 },
  { 0x07102a, CODE_FOR_floatunshisf2 },
  { 0x07102b, CODE_FOR_floatunshidf2 },
  { 0x07112a, CODE_FOR_floatunssisf2 },
  { 0x07112b, CODE_FOR_floatunssidf2 },
  { 0x07112c, CODE_FOR_floatunssixf2 },
  { 0x07122a, CODE_FOR_floatunsdisf2 },
  { 0x07122b, CODE_FOR_floatunsdidf2 },
  { 0x07495d, CODE_FOR_floatunsv4siv4sf2 },
  { 0x074e5f, CODE_FOR_floatunsv8siv8sf2 },
  { 0x075362, CODE_FOR_floatunsv16siv16sf2 },
  { 0x082a11, CODE_FOR_lrintsfsi2 },
  { 0x082a12, CODE_FOR_lrintsfdi2 },
  { 0x082b11, CODE_FOR_lrintdfsi2 },
  { 0x082b12, CODE_FOR_lrintdfdi2 },
  { 0x082c10, CODE_FOR_lrintxfhi2 },
  { 0x082c11, CODE_FOR_lrintxfsi2 },
  { 0x082c12, CODE_FOR_lrintxfdi2 },
  { 0x092a10, CODE_FOR_lroundsfhi2 },
  { 0x092a11, CODE_FOR_lroundsfsi2 },
  { 0x092a12, CODE_FOR_lroundsfdi2 },
  { 0x092b10, CODE_FOR_lrounddfhi2 },
  { 0x092b11, CODE_FOR_lrounddfsi2 },
  { 0x092b12, CODE_FOR_lrounddfdi2 },
  { 0x092c10, CODE_FOR_lroundxfhi2 },
  { 0x092c11, CODE_FOR_lroundxfsi2 },
  { 0x092c12, CODE_FOR_lroundxfdi2 },
  { 0x0a2a11, CODE_FOR_lfloorsfsi2 },
  { 0x0a2a12, CODE_FOR_lfloorsfdi2 },
  { 0x0a2b11, CODE_FOR_lfloordfsi2 },
  { 0x0a2b12, CODE_FOR_lfloordfdi2 },
  { 0x0a2c10, CODE_FOR_lfloorxfhi2 },
  { 0x0a2c11, CODE_FOR_lfloorxfsi2 },
  { 0x0a2c12, CODE_FOR_lfloorxfdi2 },
  { 0x0b2a11, CODE_FOR_lceilsfsi2 },
  { 0x0b2a12, CODE_FOR_lceilsfdi2 },
  { 0x0b2b11, CODE_FOR_lceildfsi2 },
  { 0x0b2b12, CODE_FOR_lceildfdi2 },
  { 0x0b2c10, CODE_FOR_lceilxfhi2 },
  { 0x0b2c11, CODE_FOR_lceilxfsi2 },
  { 0x0b2c12, CODE_FOR_lceilxfdi2 },
  { 0x102a10, CODE_FOR_fix_truncsfhi2 },
  { 0x102a11, CODE_FOR_fix_truncsfsi2 },
  { 0x102a12, CODE_FOR_fix_truncsfdi2 },
  { 0x102b10, CODE_FOR_fix_truncdfhi2 },
  { 0x102b11, CODE_FOR_fix_truncdfsi2 },
  { 0x102b12, CODE_FOR_fix_truncdfdi2 },
  { 0x102c10, CODE_FOR_fix_truncxfhi2 },
  { 0x102c11, CODE_FOR_fix_truncxfsi2 },
  { 0x102c12, CODE_FOR_fix_truncxfdi2 },
  { 0x105c4a, CODE_FOR_fix_truncv2sfv2di2 },
  { 0x105d49, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x105d4f, CODE_FOR_fix_truncv4sfv4di2 },
  { 0x105e4a, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x105f4e, CODE_FOR_fix_truncv8sfv8si2 },
  { 0x105f54, CODE_FOR_fix_truncv8sfv8di2 },
  { 0x106049, CODE_FOR_fix_truncv4dfv4si2 },
  { 0x10604f, CODE_FOR_fix_truncv4dfv4di2 },
  { 0x106253, CODE_FOR_fix_truncv16sfv16si2 },
  { 0x10634e, CODE_FOR_fix_truncv8dfv8si2 },
  { 0x106354, CODE_FOR_fix_truncv8dfv8di2 },
  { 0x112a10, CODE_FOR_fixuns_truncsfhi2 },
  { 0x112a11, CODE_FOR_fixuns_truncsfsi2 },
  { 0x112b10, CODE_FOR_fixuns_truncdfhi2 },
  { 0x112b11, CODE_FOR_fixuns_truncdfsi2 },
  { 0x115d49, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x115f4e, CODE_FOR_fixuns_truncv8sfv8si2 },
  { 0x116253, CODE_FOR_fixuns_truncv16sfv16si2 },
  { 0x120f10, CODE_FOR_mulqihi3 },
  { 0x121112, CODE_FOR_mulsidi3 },
  { 0x121213, CODE_FOR_mulditi3 },
  { 0x130f10, CODE_FOR_umulqihi3 },
  { 0x131112, CODE_FOR_umulsidi3 },
  { 0x131213, CODE_FOR_umulditi3 },
  { 0x1f4747, CODE_FOR_vcondv16qiv16qi },
  { 0x1f4748, CODE_FOR_vcondv8hiv16qi },
  { 0x1f4749, CODE_FOR_vcondv4siv16qi },
  { 0x1f474a, CODE_FOR_vcondv2div16qi },
  { 0x1f475d, CODE_FOR_vcondv4sfv16qi },
  { 0x1f475e, CODE_FOR_vcondv2dfv16qi },
  { 0x1f4847, CODE_FOR_vcondv16qiv8hi },
  { 0x1f4848, CODE_FOR_vcondv8hiv8hi },
  { 0x1f4849, CODE_FOR_vcondv4siv8hi },
  { 0x1f484a, CODE_FOR_vcondv2div8hi },
  { 0x1f485d, CODE_FOR_vcondv4sfv8hi },
  { 0x1f485e, CODE_FOR_vcondv2dfv8hi },
  { 0x1f4947, CODE_FOR_vcondv16qiv4si },
  { 0x1f4948, CODE_FOR_vcondv8hiv4si },
  { 0x1f4949, CODE_FOR_vcondv4siv4si },
  { 0x1f494a, CODE_FOR_vcondv2div4si },
  { 0x1f495d, CODE_FOR_vcondv4sfv4si },
  { 0x1f495e, CODE_FOR_vcondv2dfv4si },
  { 0x1f4a4a, CODE_FOR_vcondv2div2di },
  { 0x1f4a5e, CODE_FOR_vcondv2dfv2di },
  { 0x1f4c4c, CODE_FOR_vcondv32qiv32qi },
  { 0x1f4c4d, CODE_FOR_vcondv16hiv32qi },
  { 0x1f4c4e, CODE_FOR_vcondv8siv32qi },
  { 0x1f4c4f, CODE_FOR_vcondv4div32qi },
  { 0x1f4c5f, CODE_FOR_vcondv8sfv32qi },
  { 0x1f4c60, CODE_FOR_vcondv4dfv32qi },
  { 0x1f4d4c, CODE_FOR_vcondv32qiv16hi },
  { 0x1f4d4d, CODE_FOR_vcondv16hiv16hi },
  { 0x1f4d4e, CODE_FOR_vcondv8siv16hi },
  { 0x1f4d4f, CODE_FOR_vcondv4div16hi },
  { 0x1f4d5f, CODE_FOR_vcondv8sfv16hi },
  { 0x1f4d60, CODE_FOR_vcondv4dfv16hi },
  { 0x1f4e4c, CODE_FOR_vcondv32qiv8si },
  { 0x1f4e4d, CODE_FOR_vcondv16hiv8si },
  { 0x1f4e4e, CODE_FOR_vcondv8siv8si },
  { 0x1f4e4f, CODE_FOR_vcondv4div8si },
  { 0x1f4e5f, CODE_FOR_vcondv8sfv8si },
  { 0x1f4e60, CODE_FOR_vcondv4dfv8si },
  { 0x1f4f4c, CODE_FOR_vcondv32qiv4di },
  { 0x1f4f4d, CODE_FOR_vcondv16hiv4di },
  { 0x1f4f4e, CODE_FOR_vcondv8siv4di },
  { 0x1f4f4f, CODE_FOR_vcondv4div4di },
  { 0x1f4f5f, CODE_FOR_vcondv8sfv4di },
  { 0x1f4f60, CODE_FOR_vcondv4dfv4di },
  { 0x1f5151, CODE_FOR_vcondv64qiv64qi },
  { 0x1f5152, CODE_FOR_vcondv32hiv64qi },
  { 0x1f5153, CODE_FOR_vcondv16siv64qi },
  { 0x1f5154, CODE_FOR_vcondv8div64qi },
  { 0x1f5162, CODE_FOR_vcondv16sfv64qi },
  { 0x1f5163, CODE_FOR_vcondv8dfv64qi },
  { 0x1f5251, CODE_FOR_vcondv64qiv32hi },
  { 0x1f5252, CODE_FOR_vcondv32hiv32hi },
  { 0x1f5253, CODE_FOR_vcondv16siv32hi },
  { 0x1f5254, CODE_FOR_vcondv8div32hi },
  { 0x1f5262, CODE_FOR_vcondv16sfv32hi },
  { 0x1f5263, CODE_FOR_vcondv8dfv32hi },
  { 0x1f5351, CODE_FOR_vcondv64qiv16si },
  { 0x1f5352, CODE_FOR_vcondv32hiv16si },
  { 0x1f5353, CODE_FOR_vcondv16siv16si },
  { 0x1f5354, CODE_FOR_vcondv8div16si },
  { 0x1f5362, CODE_FOR_vcondv16sfv16si },
  { 0x1f5363, CODE_FOR_vcondv8dfv16si },
  { 0x1f5451, CODE_FOR_vcondv64qiv8di },
  { 0x1f5452, CODE_FOR_vcondv32hiv8di },
  { 0x1f5453, CODE_FOR_vcondv16siv8di },
  { 0x1f5454, CODE_FOR_vcondv8div8di },
  { 0x1f5462, CODE_FOR_vcondv16sfv8di },
  { 0x1f5463, CODE_FOR_vcondv8dfv8di },
  { 0x1f5d47, CODE_FOR_vcondv16qiv4sf },
  { 0x1f5d48, CODE_FOR_vcondv8hiv4sf },
  { 0x1f5d49, CODE_FOR_vcondv4siv4sf },
  { 0x1f5d4a, CODE_FOR_vcondv2div4sf },
  { 0x1f5d5d, CODE_FOR_vcondv4sfv4sf },
  { 0x1f5d5e, CODE_FOR_vcondv2dfv4sf },
  { 0x1f5e47, CODE_FOR_vcondv16qiv2df },
  { 0x1f5e48, CODE_FOR_vcondv8hiv2df },
  { 0x1f5e49, CODE_FOR_vcondv4siv2df },
  { 0x1f5e4a, CODE_FOR_vcondv2div2df },
  { 0x1f5e5d, CODE_FOR_vcondv4sfv2df },
  { 0x1f5e5e, CODE_FOR_vcondv2dfv2df },
  { 0x1f5f4c, CODE_FOR_vcondv32qiv8sf },
  { 0x1f5f4d, CODE_FOR_vcondv16hiv8sf },
  { 0x1f5f4e, CODE_FOR_vcondv8siv8sf },
  { 0x1f5f4f, CODE_FOR_vcondv4div8sf },
  { 0x1f5f5f, CODE_FOR_vcondv8sfv8sf },
  { 0x1f5f60, CODE_FOR_vcondv4dfv8sf },
  { 0x1f604c, CODE_FOR_vcondv32qiv4df },
  { 0x1f604d, CODE_FOR_vcondv16hiv4df },
  { 0x1f604e, CODE_FOR_vcondv8siv4df },
  { 0x1f604f, CODE_FOR_vcondv4div4df },
  { 0x1f605f, CODE_FOR_vcondv8sfv4df },
  { 0x1f6060, CODE_FOR_vcondv4dfv4df },
  { 0x1f6251, CODE_FOR_vcondv64qiv16sf },
  { 0x1f6252, CODE_FOR_vcondv32hiv16sf },
  { 0x1f6253, CODE_FOR_vcondv16siv16sf },
  { 0x1f6254, CODE_FOR_vcondv8div16sf },
  { 0x1f6262, CODE_FOR_vcondv16sfv16sf },
  { 0x1f6263, CODE_FOR_vcondv8dfv16sf },
  { 0x1f6351, CODE_FOR_vcondv64qiv8df },
  { 0x1f6352, CODE_FOR_vcondv32hiv8df },
  { 0x1f6353, CODE_FOR_vcondv16siv8df },
  { 0x1f6354, CODE_FOR_vcondv8div8df },
  { 0x1f6362, CODE_FOR_vcondv16sfv8df },
  { 0x1f6363, CODE_FOR_vcondv8dfv8df },
  { 0x204747, CODE_FOR_vconduv16qiv16qi },
  { 0x204748, CODE_FOR_vconduv8hiv16qi },
  { 0x204749, CODE_FOR_vconduv4siv16qi },
  { 0x20474a, CODE_FOR_vconduv2div16qi },
  { 0x20475d, CODE_FOR_vconduv4sfv16qi },
  { 0x20475e, CODE_FOR_vconduv2dfv16qi },
  { 0x204847, CODE_FOR_vconduv16qiv8hi },
  { 0x204848, CODE_FOR_vconduv8hiv8hi },
  { 0x204849, CODE_FOR_vconduv4siv8hi },
  { 0x20484a, CODE_FOR_vconduv2div8hi },
  { 0x20485d, CODE_FOR_vconduv4sfv8hi },
  { 0x20485e, CODE_FOR_vconduv2dfv8hi },
  { 0x204947, CODE_FOR_vconduv16qiv4si },
  { 0x204948, CODE_FOR_vconduv8hiv4si },
  { 0x204949, CODE_FOR_vconduv4siv4si },
  { 0x20494a, CODE_FOR_vconduv2div4si },
  { 0x20495d, CODE_FOR_vconduv4sfv4si },
  { 0x20495e, CODE_FOR_vconduv2dfv4si },
  { 0x204a4a, CODE_FOR_vconduv2div2di },
  { 0x204a5e, CODE_FOR_vconduv2dfv2di },
  { 0x204c4c, CODE_FOR_vconduv32qiv32qi },
  { 0x204c4d, CODE_FOR_vconduv16hiv32qi },
  { 0x204c4e, CODE_FOR_vconduv8siv32qi },
  { 0x204c4f, CODE_FOR_vconduv4div32qi },
  { 0x204c5f, CODE_FOR_vconduv8sfv32qi },
  { 0x204c60, CODE_FOR_vconduv4dfv32qi },
  { 0x204d4c, CODE_FOR_vconduv32qiv16hi },
  { 0x204d4d, CODE_FOR_vconduv16hiv16hi },
  { 0x204d4e, CODE_FOR_vconduv8siv16hi },
  { 0x204d4f, CODE_FOR_vconduv4div16hi },
  { 0x204d5f, CODE_FOR_vconduv8sfv16hi },
  { 0x204d60, CODE_FOR_vconduv4dfv16hi },
  { 0x204e4c, CODE_FOR_vconduv32qiv8si },
  { 0x204e4d, CODE_FOR_vconduv16hiv8si },
  { 0x204e4e, CODE_FOR_vconduv8siv8si },
  { 0x204e4f, CODE_FOR_vconduv4div8si },
  { 0x204e5f, CODE_FOR_vconduv8sfv8si },
  { 0x204e60, CODE_FOR_vconduv4dfv8si },
  { 0x204f4c, CODE_FOR_vconduv32qiv4di },
  { 0x204f4d, CODE_FOR_vconduv16hiv4di },
  { 0x204f4e, CODE_FOR_vconduv8siv4di },
  { 0x204f4f, CODE_FOR_vconduv4div4di },
  { 0x204f5f, CODE_FOR_vconduv8sfv4di },
  { 0x204f60, CODE_FOR_vconduv4dfv4di },
  { 0x205151, CODE_FOR_vconduv64qiv64qi },
  { 0x205152, CODE_FOR_vconduv32hiv64qi },
  { 0x205153, CODE_FOR_vconduv16siv64qi },
  { 0x205154, CODE_FOR_vconduv8div64qi },
  { 0x205162, CODE_FOR_vconduv16sfv64qi },
  { 0x205163, CODE_FOR_vconduv8dfv64qi },
  { 0x205251, CODE_FOR_vconduv64qiv32hi },
  { 0x205252, CODE_FOR_vconduv32hiv32hi },
  { 0x205253, CODE_FOR_vconduv16siv32hi },
  { 0x205254, CODE_FOR_vconduv8div32hi },
  { 0x205262, CODE_FOR_vconduv16sfv32hi },
  { 0x205263, CODE_FOR_vconduv8dfv32hi },
  { 0x205351, CODE_FOR_vconduv64qiv16si },
  { 0x205352, CODE_FOR_vconduv32hiv16si },
  { 0x205353, CODE_FOR_vconduv16siv16si },
  { 0x205354, CODE_FOR_vconduv8div16si },
  { 0x205362, CODE_FOR_vconduv16sfv16si },
  { 0x205363, CODE_FOR_vconduv8dfv16si },
  { 0x205451, CODE_FOR_vconduv64qiv8di },
  { 0x205452, CODE_FOR_vconduv32hiv8di },
  { 0x205453, CODE_FOR_vconduv16siv8di },
  { 0x205454, CODE_FOR_vconduv8div8di },
  { 0x205462, CODE_FOR_vconduv16sfv8di },
  { 0x205463, CODE_FOR_vconduv8dfv8di },
  { 0x214a4a, CODE_FOR_vcondeqv2div2di },
  { 0x214a5e, CODE_FOR_vcondeqv2dfv2di },
  { 0x220f48, CODE_FOR_vcond_mask_v8hiqi },
  { 0x220f49, CODE_FOR_vcond_mask_v4siqi },
  { 0x220f4a, CODE_FOR_vcond_mask_v2diqi },
  { 0x220f4e, CODE_FOR_vcond_mask_v8siqi },
  { 0x220f4f, CODE_FOR_vcond_mask_v4diqi },
  { 0x220f54, CODE_FOR_vcond_mask_v8diqi },
  { 0x220f5d, CODE_FOR_vcond_mask_v4sfqi },
  { 0x220f5e, CODE_FOR_vcond_mask_v2dfqi },
  { 0x220f5f, CODE_FOR_vcond_mask_v8sfqi },
  { 0x220f60, CODE_FOR_vcond_mask_v4dfqi },
  { 0x220f63, CODE_FOR_vcond_mask_v8dfqi },
  { 0x221047, CODE_FOR_vcond_mask_v16qihi },
  { 0x22104d, CODE_FOR_vcond_mask_v16hihi },
  { 0x221053, CODE_FOR_vcond_mask_v16sihi },
  { 0x221062, CODE_FOR_vcond_mask_v16sfhi },
  { 0x22114c, CODE_FOR_vcond_mask_v32qisi },
  { 0x221152, CODE_FOR_vcond_mask_v32hisi },
  { 0x221251, CODE_FOR_vcond_mask_v64qidi },
  { 0x224747, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x224848, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x224949, CODE_FOR_vcond_mask_v4siv4si },
  { 0x22495d, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x224a4a, CODE_FOR_vcond_mask_v2div2di },
  { 0x224a5e, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x224c4c, CODE_FOR_vcond_mask_v32qiv32qi },
  { 0x224d4d, CODE_FOR_vcond_mask_v16hiv16hi },
  { 0x224e4e, CODE_FOR_vcond_mask_v8siv8si },
  { 0x224e5f, CODE_FOR_vcond_mask_v8sfv8si },
  { 0x224f4f, CODE_FOR_vcond_mask_v4div4di },
  { 0x224f60, CODE_FOR_vcond_mask_v4dfv4di },
  { 0x230f48, CODE_FOR_vec_cmpv8hiqi },
  { 0x230f49, CODE_FOR_vec_cmpv4siqi },
  { 0x230f4a, CODE_FOR_vec_cmpv2diqi },
  { 0x230f4e, CODE_FOR_vec_cmpv8siqi },
  { 0x230f4f, CODE_FOR_vec_cmpv4diqi },
  { 0x230f54, CODE_FOR_vec_cmpv8diqi },
  { 0x230f5d, CODE_FOR_vec_cmpv4sfqi },
  { 0x230f5e, CODE_FOR_vec_cmpv2dfqi },
  { 0x230f5f, CODE_FOR_vec_cmpv8sfqi },
  { 0x230f60, CODE_FOR_vec_cmpv4dfqi },
  { 0x230f63, CODE_FOR_vec_cmpv8dfqi },
  { 0x231047, CODE_FOR_vec_cmpv16qihi },
  { 0x23104d, CODE_FOR_vec_cmpv16hihi },
  { 0x231053, CODE_FOR_vec_cmpv16sihi },
  { 0x231062, CODE_FOR_vec_cmpv16sfhi },
  { 0x23114c, CODE_FOR_vec_cmpv32qisi },
  { 0x231152, CODE_FOR_vec_cmpv32hisi },
  { 0x231251, CODE_FOR_vec_cmpv64qidi },
  { 0x234747, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x234848, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x234949, CODE_FOR_vec_cmpv4siv4si },
  { 0x23495d, CODE_FOR_vec_cmpv4sfv4si },
  { 0x234a4a, CODE_FOR_vec_cmpv2div2di },
  { 0x234a5e, CODE_FOR_vec_cmpv2dfv2di },
  { 0x234c4c, CODE_FOR_vec_cmpv32qiv32qi },
  { 0x234d4d, CODE_FOR_vec_cmpv16hiv16hi },
  { 0x234e4e, CODE_FOR_vec_cmpv8siv8si },
  { 0x234e5f, CODE_FOR_vec_cmpv8sfv8si },
  { 0x234f4f, CODE_FOR_vec_cmpv4div4di },
  { 0x234f60, CODE_FOR_vec_cmpv4dfv4di },
  { 0x240f48, CODE_FOR_vec_cmpuv8hiqi },
  { 0x240f49, CODE_FOR_vec_cmpuv4siqi },
  { 0x240f4a, CODE_FOR_vec_cmpuv2diqi },
  { 0x240f4e, CODE_FOR_vec_cmpuv8siqi },
  { 0x240f4f, CODE_FOR_vec_cmpuv4diqi },
  { 0x240f54, CODE_FOR_vec_cmpuv8diqi },
  { 0x241047, CODE_FOR_vec_cmpuv16qihi },
  { 0x24104d, CODE_FOR_vec_cmpuv16hihi },
  { 0x241053, CODE_FOR_vec_cmpuv16sihi },
  { 0x24114c, CODE_FOR_vec_cmpuv32qisi },
  { 0x241152, CODE_FOR_vec_cmpuv32hisi },
  { 0x241251, CODE_FOR_vec_cmpuv64qidi },
  { 0x244747, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x244848, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x244949, CODE_FOR_vec_cmpuv4siv4si },
  { 0x244a4a, CODE_FOR_vec_cmpuv2div2di },
  { 0x244c4c, CODE_FOR_vec_cmpuv32qiv32qi },
  { 0x244d4d, CODE_FOR_vec_cmpuv16hiv16hi },
  { 0x244e4e, CODE_FOR_vec_cmpuv8siv8si },
  { 0x244f4f, CODE_FOR_vec_cmpuv4div4di },
  { 0x254a4a, CODE_FOR_vec_cmpeqv2div2di },
  { 0x260f48, CODE_FOR_maskloadv8hiqi },
  { 0x260f49, CODE_FOR_maskloadv4siqi },
  { 0x260f4a, CODE_FOR_maskloadv2diqi },
  { 0x260f4e, CODE_FOR_maskloadv8siqi },
  { 0x260f4f, CODE_FOR_maskloadv4diqi },
  { 0x260f54, CODE_FOR_maskloadv8diqi },
  { 0x260f5d, CODE_FOR_maskloadv4sfqi },
  { 0x260f5e, CODE_FOR_maskloadv2dfqi },
  { 0x260f5f, CODE_FOR_maskloadv8sfqi },
  { 0x260f60, CODE_FOR_maskloadv4dfqi },
  { 0x260f63, CODE_FOR_maskloadv8dfqi },
  { 0x261047, CODE_FOR_maskloadv16qihi },
  { 0x26104d, CODE_FOR_maskloadv16hihi },
  { 0x261053, CODE_FOR_maskloadv16sihi },
  { 0x261062, CODE_FOR_maskloadv16sfhi },
  { 0x26114c, CODE_FOR_maskloadv32qisi },
  { 0x261152, CODE_FOR_maskloadv32hisi },
  { 0x261251, CODE_FOR_maskloadv64qidi },
  { 0x264949, CODE_FOR_maskloadv4siv4si },
  { 0x26495d, CODE_FOR_maskloadv4sfv4si },
  { 0x264a4a, CODE_FOR_maskloadv2div2di },
  { 0x264a5e, CODE_FOR_maskloadv2dfv2di },
  { 0x264e4e, CODE_FOR_maskloadv8siv8si },
  { 0x264e5f, CODE_FOR_maskloadv8sfv8si },
  { 0x264f4f, CODE_FOR_maskloadv4div4di },
  { 0x264f60, CODE_FOR_maskloadv4dfv4di },
  { 0x270f48, CODE_FOR_maskstorev8hiqi },
  { 0x270f49, CODE_FOR_maskstorev4siqi },
  { 0x270f4a, CODE_FOR_maskstorev2diqi },
  { 0x270f4e, CODE_FOR_maskstorev8siqi },
  { 0x270f4f, CODE_FOR_maskstorev4diqi },
  { 0x270f54, CODE_FOR_maskstorev8diqi },
  { 0x270f5d, CODE_FOR_maskstorev4sfqi },
  { 0x270f5e, CODE_FOR_maskstorev2dfqi },
  { 0x270f5f, CODE_FOR_maskstorev8sfqi },
  { 0x270f60, CODE_FOR_maskstorev4dfqi },
  { 0x270f63, CODE_FOR_maskstorev8dfqi },
  { 0x271047, CODE_FOR_maskstorev16qihi },
  { 0x27104d, CODE_FOR_maskstorev16hihi },
  { 0x271053, CODE_FOR_maskstorev16sihi },
  { 0x271062, CODE_FOR_maskstorev16sfhi },
  { 0x27114c, CODE_FOR_maskstorev32qisi },
  { 0x271152, CODE_FOR_maskstorev32hisi },
  { 0x271251, CODE_FOR_maskstorev64qidi },
  { 0x274949, CODE_FOR_maskstorev4siv4si },
  { 0x27495d, CODE_FOR_maskstorev4sfv4si },
  { 0x274a4a, CODE_FOR_maskstorev2div2di },
  { 0x274a5e, CODE_FOR_maskstorev2dfv2di },
  { 0x274e4e, CODE_FOR_maskstorev8siv8si },
  { 0x274e5f, CODE_FOR_maskstorev8sfv8si },
  { 0x274f4f, CODE_FOR_maskstorev4div4di },
  { 0x274f60, CODE_FOR_maskstorev4dfv4di },
  { 0x28000f, CODE_FOR_addqi3 },
  { 0x280010, CODE_FOR_addhi3 },
  { 0x280011, CODE_FOR_addsi3 },
  { 0x280012, CODE_FOR_adddi3 },
  { 0x280013, CODE_FOR_addti3 },
  { 0x28002a, CODE_FOR_addsf3 },
  { 0x28002b, CODE_FOR_adddf3 },
  { 0x28002c, CODE_FOR_addxf3 },
  { 0x280047, CODE_FOR_addv16qi3 },
  { 0x280048, CODE_FOR_addv8hi3 },
  { 0x280049, CODE_FOR_addv4si3 },
  { 0x28004a, CODE_FOR_addv2di3 },
  { 0x28004c, CODE_FOR_addv32qi3 },
  { 0x28004d, CODE_FOR_addv16hi3 },
  { 0x28004e, CODE_FOR_addv8si3 },
  { 0x28004f, CODE_FOR_addv4di3 },
  { 0x280051, CODE_FOR_addv64qi3 },
  { 0x280052, CODE_FOR_addv32hi3 },
  { 0x280053, CODE_FOR_addv16si3 },
  { 0x280054, CODE_FOR_addv8di3 },
  { 0x28005d, CODE_FOR_addv4sf3 },
  { 0x28005e, CODE_FOR_addv2df3 },
  { 0x28005f, CODE_FOR_addv8sf3 },
  { 0x280060, CODE_FOR_addv4df3 },
  { 0x280062, CODE_FOR_addv16sf3 },
  { 0x280063, CODE_FOR_addv8df3 },
  { 0x2c000f, CODE_FOR_subqi3 },
  { 0x2c0010, CODE_FOR_subhi3 },
  { 0x2c0011, CODE_FOR_subsi3 },
  { 0x2c0012, CODE_FOR_subdi3 },
  { 0x2c0013, CODE_FOR_subti3 },
  { 0x2c002a, CODE_FOR_subsf3 },
  { 0x2c002b, CODE_FOR_subdf3 },
  { 0x2c002c, CODE_FOR_subxf3 },
  { 0x2c0047, CODE_FOR_subv16qi3 },
  { 0x2c0048, CODE_FOR_subv8hi3 },
  { 0x2c0049, CODE_FOR_subv4si3 },
  { 0x2c004a, CODE_FOR_subv2di3 },
  { 0x2c004c, CODE_FOR_subv32qi3 },
  { 0x2c004d, CODE_FOR_subv16hi3 },
  { 0x2c004e, CODE_FOR_subv8si3 },
  { 0x2c004f, CODE_FOR_subv4di3 },
  { 0x2c0051, CODE_FOR_subv64qi3 },
  { 0x2c0052, CODE_FOR_subv32hi3 },
  { 0x2c0053, CODE_FOR_subv16si3 },
  { 0x2c0054, CODE_FOR_subv8di3 },
  { 0x2c005d, CODE_FOR_subv4sf3 },
  { 0x2c005e, CODE_FOR_subv2df3 },
  { 0x2c005f, CODE_FOR_subv8sf3 },
  { 0x2c0060, CODE_FOR_subv4df3 },
  { 0x2c0062, CODE_FOR_subv16sf3 },
  { 0x2c0063, CODE_FOR_subv8df3 },
  { 0x30000f, CODE_FOR_mulqi3 },
  { 0x300010, CODE_FOR_mulhi3 },
  { 0x300011, CODE_FOR_mulsi3 },
  { 0x300012, CODE_FOR_muldi3 },
  { 0x30002a, CODE_FOR_mulsf3 },
  { 0x30002b, CODE_FOR_muldf3 },
  { 0x30002c, CODE_FOR_mulxf3 },
  { 0x300047, CODE_FOR_mulv16qi3 },
  { 0x300048, CODE_FOR_mulv8hi3 },
  { 0x300049, CODE_FOR_mulv4si3 },
  { 0x30004a, CODE_FOR_mulv2di3 },
  { 0x30004c, CODE_FOR_mulv32qi3 },
  { 0x30004d, CODE_FOR_mulv16hi3 },
  { 0x30004e, CODE_FOR_mulv8si3 },
  { 0x30004f, CODE_FOR_mulv4di3 },
  { 0x300051, CODE_FOR_mulv64qi3 },
  { 0x300052, CODE_FOR_mulv32hi3 },
  { 0x300053, CODE_FOR_mulv16si3 },
  { 0x300054, CODE_FOR_mulv8di3 },
  { 0x30005d, CODE_FOR_mulv4sf3 },
  { 0x30005e, CODE_FOR_mulv2df3 },
  { 0x30005f, CODE_FOR_mulv8sf3 },
  { 0x300060, CODE_FOR_mulv4df3 },
  { 0x300062, CODE_FOR_mulv16sf3 },
  { 0x300063, CODE_FOR_mulv8df3 },
  { 0x34002a, CODE_FOR_divsf3 },
  { 0x34002b, CODE_FOR_divdf3 },
  { 0x34002c, CODE_FOR_divxf3 },
  { 0x34005d, CODE_FOR_divv4sf3 },
  { 0x34005e, CODE_FOR_divv2df3 },
  { 0x34005f, CODE_FOR_divv8sf3 },
  { 0x340060, CODE_FOR_divv4df3 },
  { 0x340062, CODE_FOR_divv16sf3 },
  { 0x340063, CODE_FOR_divv8df3 },
  { 0x39000f, CODE_FOR_divmodqi4 },
  { 0x390010, CODE_FOR_divmodhi4 },
  { 0x390011, CODE_FOR_divmodsi4 },
  { 0x390012, CODE_FOR_divmoddi4 },
  { 0x3a000f, CODE_FOR_udivmodqi4 },
  { 0x3a0010, CODE_FOR_udivmodhi4 },
  { 0x3a0011, CODE_FOR_udivmodsi4 },
  { 0x3a0012, CODE_FOR_udivmoddi4 },
  { 0x3e000f, CODE_FOR_andqi3 },
  { 0x3e0010, CODE_FOR_andhi3 },
  { 0x3e0011, CODE_FOR_andsi3 },
  { 0x3e0012, CODE_FOR_anddi3 },
  { 0x3e002d, CODE_FOR_andtf3 },
  { 0x3e0047, CODE_FOR_andv16qi3 },
  { 0x3e0048, CODE_FOR_andv8hi3 },
  { 0x3e0049, CODE_FOR_andv4si3 },
  { 0x3e004a, CODE_FOR_andv2di3 },
  { 0x3e004c, CODE_FOR_andv32qi3 },
  { 0x3e004d, CODE_FOR_andv16hi3 },
  { 0x3e004e, CODE_FOR_andv8si3 },
  { 0x3e004f, CODE_FOR_andv4di3 },
  { 0x3e0051, CODE_FOR_andv64qi3 },
  { 0x3e0052, CODE_FOR_andv32hi3 },
  { 0x3e0053, CODE_FOR_andv16si3 },
  { 0x3e0054, CODE_FOR_andv8di3 },
  { 0x3e005d, CODE_FOR_andv4sf3 },
  { 0x3e005e, CODE_FOR_andv2df3 },
  { 0x3e005f, CODE_FOR_andv8sf3 },
  { 0x3e0060, CODE_FOR_andv4df3 },
  { 0x3e0062, CODE_FOR_andv16sf3 },
  { 0x3e0063, CODE_FOR_andv8df3 },
  { 0x3f000f, CODE_FOR_iorqi3 },
  { 0x3f0010, CODE_FOR_iorhi3 },
  { 0x3f0011, CODE_FOR_iorsi3 },
  { 0x3f0012, CODE_FOR_iordi3 },
  { 0x3f002d, CODE_FOR_iortf3 },
  { 0x3f0047, CODE_FOR_iorv16qi3 },
  { 0x3f0048, CODE_FOR_iorv8hi3 },
  { 0x3f0049, CODE_FOR_iorv4si3 },
  { 0x3f004a, CODE_FOR_iorv2di3 },
  { 0x3f004c, CODE_FOR_iorv32qi3 },
  { 0x3f004d, CODE_FOR_iorv16hi3 },
  { 0x3f004e, CODE_FOR_iorv8si3 },
  { 0x3f004f, CODE_FOR_iorv4di3 },
  { 0x3f0051, CODE_FOR_iorv64qi3 },
  { 0x3f0052, CODE_FOR_iorv32hi3 },
  { 0x3f0053, CODE_FOR_iorv16si3 },
  { 0x3f0054, CODE_FOR_iorv8di3 },
  { 0x3f005d, CODE_FOR_iorv4sf3 },
  { 0x3f005e, CODE_FOR_iorv2df3 },
  { 0x3f005f, CODE_FOR_iorv8sf3 },
  { 0x3f0060, CODE_FOR_iorv4df3 },
  { 0x3f0062, CODE_FOR_iorv16sf3 },
  { 0x3f0063, CODE_FOR_iorv8df3 },
  { 0x40000f, CODE_FOR_xorqi3 },
  { 0x400010, CODE_FOR_xorhi3 },
  { 0x400011, CODE_FOR_xorsi3 },
  { 0x400012, CODE_FOR_xordi3 },
  { 0x40002d, CODE_FOR_xortf3 },
  { 0x400047, CODE_FOR_xorv16qi3 },
  { 0x400048, CODE_FOR_xorv8hi3 },
  { 0x400049, CODE_FOR_xorv4si3 },
  { 0x40004a, CODE_FOR_xorv2di3 },
  { 0x40004c, CODE_FOR_xorv32qi3 },
  { 0x40004d, CODE_FOR_xorv16hi3 },
  { 0x40004e, CODE_FOR_xorv8si3 },
  { 0x40004f, CODE_FOR_xorv4di3 },
  { 0x400051, CODE_FOR_xorv64qi3 },
  { 0x400052, CODE_FOR_xorv32hi3 },
  { 0x400053, CODE_FOR_xorv16si3 },
  { 0x400054, CODE_FOR_xorv8di3 },
  { 0x40005d, CODE_FOR_xorv4sf3 },
  { 0x40005e, CODE_FOR_xorv2df3 },
  { 0x40005f, CODE_FOR_xorv8sf3 },
  { 0x400060, CODE_FOR_xorv4df3 },
  { 0x400062, CODE_FOR_xorv16sf3 },
  { 0x400063, CODE_FOR_xorv8df3 },
  { 0x41000f, CODE_FOR_ashlqi3 },
  { 0x410010, CODE_FOR_ashlhi3 },
  { 0x410011, CODE_FOR_ashlsi3 },
  { 0x410012, CODE_FOR_ashldi3 },
  { 0x410013, CODE_FOR_ashlti3 },
  { 0x410047, CODE_FOR_ashlv16qi3 },
  { 0x410048, CODE_FOR_ashlv8hi3 },
  { 0x410049, CODE_FOR_ashlv4si3 },
  { 0x41004a, CODE_FOR_ashlv2di3 },
  { 0x41004c, CODE_FOR_ashlv32qi3 },
  { 0x41004d, CODE_FOR_ashlv16hi3 },
  { 0x41004e, CODE_FOR_ashlv8si3 },
  { 0x41004f, CODE_FOR_ashlv4di3 },
  { 0x410051, CODE_FOR_ashlv64qi3 },
  { 0x410052, CODE_FOR_ashlv32hi3 },
  { 0x410053, CODE_FOR_ashlv16si3 },
  { 0x410054, CODE_FOR_ashlv8di3 },
  { 0x44000f, CODE_FOR_ashrqi3 },
  { 0x440010, CODE_FOR_ashrhi3 },
  { 0x440011, CODE_FOR_ashrsi3 },
  { 0x440012, CODE_FOR_ashrdi3 },
  { 0x440013, CODE_FOR_ashrti3 },
  { 0x440047, CODE_FOR_ashrv16qi3 },
  { 0x440048, CODE_FOR_ashrv8hi3 },
  { 0x440049, CODE_FOR_ashrv4si3 },
  { 0x44004a, CODE_FOR_ashrv2di3 },
  { 0x44004c, CODE_FOR_ashrv32qi3 },
  { 0x44004d, CODE_FOR_ashrv16hi3 },
  { 0x44004e, CODE_FOR_ashrv8si3 },
  { 0x44004f, CODE_FOR_ashrv4di3 },
  { 0x440051, CODE_FOR_ashrv64qi3 },
  { 0x440052, CODE_FOR_ashrv32hi3 },
  { 0x440053, CODE_FOR_ashrv16si3 },
  { 0x440054, CODE_FOR_ashrv8di3 },
  { 0x45000f, CODE_FOR_lshrqi3 },
  { 0x450010, CODE_FOR_lshrhi3 },
  { 0x450011, CODE_FOR_lshrsi3 },
  { 0x450012, CODE_FOR_lshrdi3 },
  { 0x450013, CODE_FOR_lshrti3 },
  { 0x450047, CODE_FOR_lshrv16qi3 },
  { 0x450048, CODE_FOR_lshrv8hi3 },
  { 0x450049, CODE_FOR_lshrv4si3 },
  { 0x45004a, CODE_FOR_lshrv2di3 },
  { 0x45004c, CODE_FOR_lshrv32qi3 },
  { 0x45004d, CODE_FOR_lshrv16hi3 },
  { 0x45004e, CODE_FOR_lshrv8si3 },
  { 0x45004f, CODE_FOR_lshrv4di3 },
  { 0x450051, CODE_FOR_lshrv64qi3 },
  { 0x450052, CODE_FOR_lshrv32hi3 },
  { 0x450053, CODE_FOR_lshrv16si3 },
  { 0x450054, CODE_FOR_lshrv8di3 },
  { 0x46000f, CODE_FOR_rotlqi3 },
  { 0x460010, CODE_FOR_rotlhi3 },
  { 0x460011, CODE_FOR_rotlsi3 },
  { 0x460012, CODE_FOR_rotldi3 },
  { 0x460013, CODE_FOR_rotlti3 },
  { 0x460047, CODE_FOR_rotlv16qi3 },
  { 0x460048, CODE_FOR_rotlv8hi3 },
  { 0x460049, CODE_FOR_rotlv4si3 },
  { 0x46004a, CODE_FOR_rotlv2di3 },
  { 0x47000f, CODE_FOR_rotrqi3 },
  { 0x470010, CODE_FOR_rotrhi3 },
  { 0x470011, CODE_FOR_rotrsi3 },
  { 0x470012, CODE_FOR_rotrdi3 },
  { 0x470013, CODE_FOR_rotrti3 },
  { 0x470047, CODE_FOR_rotrv16qi3 },
  { 0x470048, CODE_FOR_rotrv8hi3 },
  { 0x470049, CODE_FOR_rotrv4si3 },
  { 0x47004a, CODE_FOR_rotrv2di3 },
  { 0x480047, CODE_FOR_vashlv16qi3 },
  { 0x480048, CODE_FOR_vashlv8hi3 },
  { 0x480049, CODE_FOR_vashlv4si3 },
  { 0x48004a, CODE_FOR_vashlv2di3 },
  { 0x48004e, CODE_FOR_vashlv8si3 },
  { 0x48004f, CODE_FOR_vashlv4di3 },
  { 0x480053, CODE_FOR_vashlv16si3 },
  { 0x480054, CODE_FOR_vashlv8di3 },
  { 0x490047, CODE_FOR_vashrv16qi3 },
  { 0x490048, CODE_FOR_vashrv8hi3 },
  { 0x490049, CODE_FOR_vashrv4si3 },
  { 0x49004a, CODE_FOR_vashrv2di3 },
  { 0x49004e, CODE_FOR_vashrv8si3 },
  { 0x490053, CODE_FOR_vashrv16si3 },
  { 0x4a0047, CODE_FOR_vlshrv16qi3 },
  { 0x4a0048, CODE_FOR_vlshrv8hi3 },
  { 0x4a0049, CODE_FOR_vlshrv4si3 },
  { 0x4a004a, CODE_FOR_vlshrv2di3 },
  { 0x4a004e, CODE_FOR_vlshrv8si3 },
  { 0x4a004f, CODE_FOR_vlshrv4di3 },
  { 0x4a0053, CODE_FOR_vlshrv16si3 },
  { 0x4a0054, CODE_FOR_vlshrv8di3 },
  { 0x4b0047, CODE_FOR_vrotlv16qi3 },
  { 0x4b0048, CODE_FOR_vrotlv8hi3 },
  { 0x4b0049, CODE_FOR_vrotlv4si3 },
  { 0x4b004a, CODE_FOR_vrotlv2di3 },
  { 0x4c0047, CODE_FOR_vrotrv16qi3 },
  { 0x4c0048, CODE_FOR_vrotrv8hi3 },
  { 0x4c0049, CODE_FOR_vrotrv4si3 },
  { 0x4c004a, CODE_FOR_vrotrv2di3 },
  { 0x4d002a, CODE_FOR_sminsf3 },
  { 0x4d002b, CODE_FOR_smindf3 },
  { 0x4d0047, CODE_FOR_sminv16qi3 },
  { 0x4d0048, CODE_FOR_sminv8hi3 },
  { 0x4d0049, CODE_FOR_sminv4si3 },
  { 0x4d004a, CODE_FOR_sminv2di3 },
  { 0x4d004c, CODE_FOR_sminv32qi3 },
  { 0x4d004d, CODE_FOR_sminv16hi3 },
  { 0x4d004e, CODE_FOR_sminv8si3 },
  { 0x4d004f, CODE_FOR_sminv4di3 },
  { 0x4d0051, CODE_FOR_sminv64qi3 },
  { 0x4d0052, CODE_FOR_sminv32hi3 },
  { 0x4d0053, CODE_FOR_sminv16si3 },
  { 0x4d0054, CODE_FOR_sminv8di3 },
  { 0x4d005d, CODE_FOR_sminv4sf3 },
  { 0x4d005e, CODE_FOR_sminv2df3 },
  { 0x4d005f, CODE_FOR_sminv8sf3 },
  { 0x4d0060, CODE_FOR_sminv4df3 },
  { 0x4d0062, CODE_FOR_sminv16sf3 },
  { 0x4d0063, CODE_FOR_sminv8df3 },
  { 0x4e002a, CODE_FOR_smaxsf3 },
  { 0x4e002b, CODE_FOR_smaxdf3 },
  { 0x4e0047, CODE_FOR_smaxv16qi3 },
  { 0x4e0048, CODE_FOR_smaxv8hi3 },
  { 0x4e0049, CODE_FOR_smaxv4si3 },
  { 0x4e004a, CODE_FOR_smaxv2di3 },
  { 0x4e004c, CODE_FOR_smaxv32qi3 },
  { 0x4e004d, CODE_FOR_smaxv16hi3 },
  { 0x4e004e, CODE_FOR_smaxv8si3 },
  { 0x4e004f, CODE_FOR_smaxv4di3 },
  { 0x4e0051, CODE_FOR_smaxv64qi3 },
  { 0x4e0052, CODE_FOR_smaxv32hi3 },
  { 0x4e0053, CODE_FOR_smaxv16si3 },
  { 0x4e0054, CODE_FOR_smaxv8di3 },
  { 0x4e005d, CODE_FOR_smaxv4sf3 },
  { 0x4e005e, CODE_FOR_smaxv2df3 },
  { 0x4e005f, CODE_FOR_smaxv8sf3 },
  { 0x4e0060, CODE_FOR_smaxv4df3 },
  { 0x4e0062, CODE_FOR_smaxv16sf3 },
  { 0x4e0063, CODE_FOR_smaxv8df3 },
  { 0x4f0047, CODE_FOR_uminv16qi3 },
  { 0x4f0048, CODE_FOR_uminv8hi3 },
  { 0x4f0049, CODE_FOR_uminv4si3 },
  { 0x4f004a, CODE_FOR_uminv2di3 },
  { 0x4f004c, CODE_FOR_uminv32qi3 },
  { 0x4f004d, CODE_FOR_uminv16hi3 },
  { 0x4f004e, CODE_FOR_uminv8si3 },
  { 0x4f004f, CODE_FOR_uminv4di3 },
  { 0x4f0051, CODE_FOR_uminv64qi3 },
  { 0x4f0052, CODE_FOR_uminv32hi3 },
  { 0x4f0053, CODE_FOR_uminv16si3 },
  { 0x4f0054, CODE_FOR_uminv8di3 },
  { 0x500047, CODE_FOR_umaxv16qi3 },
  { 0x500048, CODE_FOR_umaxv8hi3 },
  { 0x500049, CODE_FOR_umaxv4si3 },
  { 0x50004a, CODE_FOR_umaxv2di3 },
  { 0x50004c, CODE_FOR_umaxv32qi3 },
  { 0x50004d, CODE_FOR_umaxv16hi3 },
  { 0x50004e, CODE_FOR_umaxv8si3 },
  { 0x50004f, CODE_FOR_umaxv4di3 },
  { 0x500051, CODE_FOR_umaxv64qi3 },
  { 0x500052, CODE_FOR_umaxv32hi3 },
  { 0x500053, CODE_FOR_umaxv16si3 },
  { 0x500054, CODE_FOR_umaxv8di3 },
  { 0x51000f, CODE_FOR_negqi2 },
  { 0x510010, CODE_FOR_neghi2 },
  { 0x510011, CODE_FOR_negsi2 },
  { 0x510012, CODE_FOR_negdi2 },
  { 0x510013, CODE_FOR_negti2 },
  { 0x51002a, CODE_FOR_negsf2 },
  { 0x51002b, CODE_FOR_negdf2 },
  { 0x51002c, CODE_FOR_negxf2 },
  { 0x51002d, CODE_FOR_negtf2 },
  { 0x510047, CODE_FOR_negv16qi2 },
  { 0x510048, CODE_FOR_negv8hi2 },
  { 0x510049, CODE_FOR_negv4si2 },
  { 0x51004a, CODE_FOR_negv2di2 },
  { 0x51004c, CODE_FOR_negv32qi2 },
  { 0x51004d, CODE_FOR_negv16hi2 },
  { 0x51004e, CODE_FOR_negv8si2 },
  { 0x51004f, CODE_FOR_negv4di2 },
  { 0x510051, CODE_FOR_negv64qi2 },
  { 0x510052, CODE_FOR_negv32hi2 },
  { 0x510053, CODE_FOR_negv16si2 },
  { 0x510054, CODE_FOR_negv8di2 },
  { 0x51005d, CODE_FOR_negv4sf2 },
  { 0x51005e, CODE_FOR_negv2df2 },
  { 0x51005f, CODE_FOR_negv8sf2 },
  { 0x510060, CODE_FOR_negv4df2 },
  { 0x510062, CODE_FOR_negv16sf2 },
  { 0x510063, CODE_FOR_negv8df2 },
  { 0x55002a, CODE_FOR_abssf2 },
  { 0x55002b, CODE_FOR_absdf2 },
  { 0x55002c, CODE_FOR_absxf2 },
  { 0x55002d, CODE_FOR_abstf2 },
  { 0x550040, CODE_FOR_absv8qi2 },
  { 0x550041, CODE_FOR_absv4hi2 },
  { 0x550042, CODE_FOR_absv2si2 },
  { 0x550047, CODE_FOR_absv16qi2 },
  { 0x550048, CODE_FOR_absv8hi2 },
  { 0x550049, CODE_FOR_absv4si2 },
  { 0x55004a, CODE_FOR_absv2di2 },
  { 0x55004c, CODE_FOR_absv32qi2 },
  { 0x55004d, CODE_FOR_absv16hi2 },
  { 0x55004e, CODE_FOR_absv8si2 },
  { 0x55004f, CODE_FOR_absv4di2 },
  { 0x550051, CODE_FOR_absv64qi2 },
  { 0x550052, CODE_FOR_absv32hi2 },
  { 0x550053, CODE_FOR_absv16si2 },
  { 0x550054, CODE_FOR_absv8di2 },
  { 0x55005d, CODE_FOR_absv4sf2 },
  { 0x55005e, CODE_FOR_absv2df2 },
  { 0x55005f, CODE_FOR_absv8sf2 },
  { 0x550060, CODE_FOR_absv4df2 },
  { 0x550062, CODE_FOR_absv16sf2 },
  { 0x550063, CODE_FOR_absv8df2 },
  { 0x57000f, CODE_FOR_one_cmplqi2 },
  { 0x570010, CODE_FOR_one_cmplhi2 },
  { 0x570011, CODE_FOR_one_cmplsi2 },
  { 0x570012, CODE_FOR_one_cmpldi2 },
  { 0x570047, CODE_FOR_one_cmplv16qi2 },
  { 0x570048, CODE_FOR_one_cmplv8hi2 },
  { 0x570049, CODE_FOR_one_cmplv4si2 },
  { 0x57004a, CODE_FOR_one_cmplv2di2 },
  { 0x57004c, CODE_FOR_one_cmplv32qi2 },
  { 0x57004d, CODE_FOR_one_cmplv16hi2 },
  { 0x57004e, CODE_FOR_one_cmplv8si2 },
  { 0x57004f, CODE_FOR_one_cmplv4di2 },
  { 0x570051, CODE_FOR_one_cmplv64qi2 },
  { 0x570052, CODE_FOR_one_cmplv32hi2 },
  { 0x570053, CODE_FOR_one_cmplv16si2 },
  { 0x570054, CODE_FOR_one_cmplv8di2 },
  { 0x580011, CODE_FOR_bswapsi2 },
  { 0x580012, CODE_FOR_bswapdi2 },
  { 0x590011, CODE_FOR_ffssi2 },
  { 0x590012, CODE_FOR_ffsdi2 },
  { 0x5a0011, CODE_FOR_clzsi2 },
  { 0x5a0012, CODE_FOR_clzdi2 },
  { 0x5a0049, CODE_FOR_clzv4si2 },
  { 0x5a004a, CODE_FOR_clzv2di2 },
  { 0x5a004e, CODE_FOR_clzv8si2 },
  { 0x5a004f, CODE_FOR_clzv4di2 },
  { 0x5a0053, CODE_FOR_clzv16si2 },
  { 0x5a0054, CODE_FOR_clzv8di2 },
  { 0x5b0011, CODE_FOR_ctzsi2 },
  { 0x5b0012, CODE_FOR_ctzdi2 },
  { 0x5d0010, CODE_FOR_popcounthi2 },
  { 0x5d0011, CODE_FOR_popcountsi2 },
  { 0x5d0012, CODE_FOR_popcountdi2 },
  { 0x5e0011, CODE_FOR_paritysi2 },
  { 0x5e0012, CODE_FOR_paritydi2 },
  { 0x69002a, CODE_FOR_sqrtsf2 },
  { 0x69002b, CODE_FOR_sqrtdf2 },
  { 0x69002c, CODE_FOR_sqrtxf2 },
  { 0x69005d, CODE_FOR_sqrtv4sf2 },
  { 0x69005e, CODE_FOR_sqrtv2df2 },
  { 0x69005f, CODE_FOR_sqrtv8sf2 },
  { 0x690060, CODE_FOR_sqrtv4df2 },
  { 0x690062, CODE_FOR_sqrtv16sf2 },
  { 0x690063, CODE_FOR_sqrtv8df2 },
  { 0x78000f, CODE_FOR_movqi },
  { 0x780010, CODE_FOR_movhi },
  { 0x780011, CODE_FOR_movsi },
  { 0x780012, CODE_FOR_movdi },
  { 0x780013, CODE_FOR_movti },
  { 0x780014, CODE_FOR_movoi },
  { 0x780015, CODE_FOR_movxi },
  { 0x780016, CODE_FOR_movbnd32 },
  { 0x780017, CODE_FOR_movbnd64 },
  { 0x78002a, CODE_FOR_movsf },
  { 0x78002b, CODE_FOR_movdf },
  { 0x78002c, CODE_FOR_movxf },
  { 0x78002d, CODE_FOR_movtf },
  { 0x780034, CODE_FOR_movcdi },
  { 0x780040, CODE_FOR_movv8qi },
  { 0x780041, CODE_FOR_movv4hi },
  { 0x780042, CODE_FOR_movv2si },
  { 0x780043, CODE_FOR_movv1di },
  { 0x780047, CODE_FOR_movv16qi },
  { 0x780048, CODE_FOR_movv8hi },
  { 0x780049, CODE_FOR_movv4si },
  { 0x78004a, CODE_FOR_movv2di },
  { 0x78004b, CODE_FOR_movv1ti },
  { 0x78004c, CODE_FOR_movv32qi },
  { 0x78004d, CODE_FOR_movv16hi },
  { 0x78004e, CODE_FOR_movv8si },
  { 0x78004f, CODE_FOR_movv4di },
  { 0x780050, CODE_FOR_movv2ti },
  { 0x780051, CODE_FOR_movv64qi },
  { 0x780052, CODE_FOR_movv32hi },
  { 0x780053, CODE_FOR_movv16si },
  { 0x780054, CODE_FOR_movv8di },
  { 0x780055, CODE_FOR_movv4ti },
  { 0x78005b, CODE_FOR_movv64si },
  { 0x78005c, CODE_FOR_movv2sf },
  { 0x78005d, CODE_FOR_movv4sf },
  { 0x78005e, CODE_FOR_movv2df },
  { 0x78005f, CODE_FOR_movv8sf },
  { 0x780060, CODE_FOR_movv4df },
  { 0x780062, CODE_FOR_movv16sf },
  { 0x780063, CODE_FOR_movv8df },
  { 0x780068, CODE_FOR_movv64sf },
  { 0x79000f, CODE_FOR_movstrictqi },
  { 0x790010, CODE_FOR_movstricthi },
  { 0x7a0040, CODE_FOR_movmisalignv8qi },
  { 0x7a0041, CODE_FOR_movmisalignv4hi },
  { 0x7a0042, CODE_FOR_movmisalignv2si },
  { 0x7a0043, CODE_FOR_movmisalignv1di },
  { 0x7a0047, CODE_FOR_movmisalignv16qi },
  { 0x7a0048, CODE_FOR_movmisalignv8hi },
  { 0x7a0049, CODE_FOR_movmisalignv4si },
  { 0x7a004a, CODE_FOR_movmisalignv2di },
  { 0x7a004b, CODE_FOR_movmisalignv1ti },
  { 0x7a004c, CODE_FOR_movmisalignv32qi },
  { 0x7a004d, CODE_FOR_movmisalignv16hi },
  { 0x7a004e, CODE_FOR_movmisalignv8si },
  { 0x7a004f, CODE_FOR_movmisalignv4di },
  { 0x7a0050, CODE_FOR_movmisalignv2ti },
  { 0x7a0051, CODE_FOR_movmisalignv64qi },
  { 0x7a0052, CODE_FOR_movmisalignv32hi },
  { 0x7a0053, CODE_FOR_movmisalignv16si },
  { 0x7a0054, CODE_FOR_movmisalignv8di },
  { 0x7a0055, CODE_FOR_movmisalignv4ti },
  { 0x7a005c, CODE_FOR_movmisalignv2sf },
  { 0x7a005d, CODE_FOR_movmisalignv4sf },
  { 0x7a005e, CODE_FOR_movmisalignv2df },
  { 0x7a005f, CODE_FOR_movmisalignv8sf },
  { 0x7a0060, CODE_FOR_movmisalignv4df },
  { 0x7a0062, CODE_FOR_movmisalignv16sf },
  { 0x7a0063, CODE_FOR_movmisalignv8df },
  { 0x7b0011, CODE_FOR_storentsi },
  { 0x7b0012, CODE_FOR_storentdi },
  { 0x7b002a, CODE_FOR_storentsf },
  { 0x7b002b, CODE_FOR_storentdf },
  { 0x7b004a, CODE_FOR_storentv2di },
  { 0x7b004f, CODE_FOR_storentv4di },
  { 0x7b0054, CODE_FOR_storentv8di },
  { 0x7b005d, CODE_FOR_storentv4sf },
  { 0x7b005e, CODE_FOR_storentv2df },
  { 0x7b005f, CODE_FOR_storentv8sf },
  { 0x7b0060, CODE_FOR_storentv4df },
  { 0x7b0062, CODE_FOR_storentv16sf },
  { 0x7b0063, CODE_FOR_storentv8df },
  { 0x7c0010, CODE_FOR_insvhi },
  { 0x7c0011, CODE_FOR_insvsi },
  { 0x7c0012, CODE_FOR_insvdi },
  { 0x7d0010, CODE_FOR_extvhi },
  { 0x7d0011, CODE_FOR_extvsi },
  { 0x7e0010, CODE_FOR_extzvhi },
  { 0x7e0011, CODE_FOR_extzvsi },
  { 0x7e0012, CODE_FOR_extzvdi },
  { 0x850002, CODE_FOR_cbranchcc4 },
  { 0x85000f, CODE_FOR_cbranchqi4 },
  { 0x850010, CODE_FOR_cbranchhi4 },
  { 0x850011, CODE_FOR_cbranchsi4 },
  { 0x850012, CODE_FOR_cbranchdi4 },
  { 0x850013, CODE_FOR_cbranchti4 },
  { 0x85002a, CODE_FOR_cbranchsf4 },
  { 0x85002b, CODE_FOR_cbranchdf4 },
  { 0x85002c, CODE_FOR_cbranchxf4 },
  { 0x850049, CODE_FOR_cbranchv4si4 },
  { 0x85004a, CODE_FOR_cbranchv2di4 },
  { 0x85004e, CODE_FOR_cbranchv8si4 },
  { 0x85004f, CODE_FOR_cbranchv4di4 },
  { 0x86000f, CODE_FOR_addqicc },
  { 0x860010, CODE_FOR_addhicc },
  { 0x860011, CODE_FOR_addsicc },
  { 0x860012, CODE_FOR_adddicc },
  { 0x89000f, CODE_FOR_movqicc },
  { 0x890010, CODE_FOR_movhicc },
  { 0x890011, CODE_FOR_movsicc },
  { 0x890012, CODE_FOR_movdicc },
  { 0x89002a, CODE_FOR_movsfcc },
  { 0x89002b, CODE_FOR_movdfcc },
  { 0x89002c, CODE_FOR_movxfcc },
  { 0x8b0002, CODE_FOR_cstorecc4 },
  { 0x8b000f, CODE_FOR_cstoreqi4 },
  { 0x8b0010, CODE_FOR_cstorehi4 },
  { 0x8b0011, CODE_FOR_cstoresi4 },
  { 0x8b0012, CODE_FOR_cstoredi4 },
  { 0x8b002a, CODE_FOR_cstoresf4 },
  { 0x8b002b, CODE_FOR_cstoredf4 },
  { 0x8b002c, CODE_FOR_cstorexf4 },
  { 0x8d000f, CODE_FOR_addvqi4 },
  { 0x8d0010, CODE_FOR_addvhi4 },
  { 0x8d0011, CODE_FOR_addvsi4 },
  { 0x8d0012, CODE_FOR_addvdi4 },
  { 0x8e000f, CODE_FOR_subvqi4 },
  { 0x8e0010, CODE_FOR_subvhi4 },
  { 0x8e0011, CODE_FOR_subvsi4 },
  { 0x8e0012, CODE_FOR_subvdi4 },
  { 0x8f000f, CODE_FOR_mulvqi4 },
  { 0x8f0010, CODE_FOR_mulvhi4 },
  { 0x8f0011, CODE_FOR_mulvsi4 },
  { 0x8f0012, CODE_FOR_mulvdi4 },
  { 0x90000f, CODE_FOR_uaddvqi4 },
  { 0x900010, CODE_FOR_uaddvhi4 },
  { 0x900011, CODE_FOR_uaddvsi4 },
  { 0x900012, CODE_FOR_uaddvdi4 },
  { 0x91000f, CODE_FOR_usubvqi4 },
  { 0x910010, CODE_FOR_usubvhi4 },
  { 0x910011, CODE_FOR_usubvsi4 },
  { 0x910012, CODE_FOR_usubvdi4 },
  { 0x92000f, CODE_FOR_umulvqi4 },
  { 0x920010, CODE_FOR_umulvhi4 },
  { 0x920011, CODE_FOR_umulvsi4 },
  { 0x920012, CODE_FOR_umulvdi4 },
  { 0x93000f, CODE_FOR_negvqi3 },
  { 0x930010, CODE_FOR_negvhi3 },
  { 0x930011, CODE_FOR_negvsi3 },
  { 0x930012, CODE_FOR_negvdi3 },
  { 0x950011, CODE_FOR_smulsi3_highpart },
  { 0x950012, CODE_FOR_smuldi3_highpart },
  { 0x950048, CODE_FOR_smulv8hi3_highpart },
  { 0x95004d, CODE_FOR_smulv16hi3_highpart },
  { 0x950052, CODE_FOR_smulv32hi3_highpart },
  { 0x960011, CODE_FOR_umulsi3_highpart },
  { 0x960012, CODE_FOR_umuldi3_highpart },
  { 0x960048, CODE_FOR_umulv8hi3_highpart },
  { 0x96004d, CODE_FOR_umulv16hi3_highpart },
  { 0x960052, CODE_FOR_umulv32hi3_highpart },
  { 0x990011, CODE_FOR_cmpstrnsi },
  { 0x9a0011, CODE_FOR_movmemsi },
  { 0x9a0012, CODE_FOR_movmemdi },
  { 0x9b0011, CODE_FOR_setmemsi },
  { 0x9b0012, CODE_FOR_setmemdi },
  { 0x9c0011, CODE_FOR_strlensi },
  { 0x9c0012, CODE_FOR_strlendi },
  { 0x9d002a, CODE_FOR_fmasf4 },
  { 0x9d002b, CODE_FOR_fmadf4 },
  { 0x9d005d, CODE_FOR_fmav4sf4 },
  { 0x9d005e, CODE_FOR_fmav2df4 },
  { 0x9d005f, CODE_FOR_fmav8sf4 },
  { 0x9d0060, CODE_FOR_fmav4df4 },
  { 0x9d0062, CODE_FOR_fmav16sf4 },
  { 0x9d0063, CODE_FOR_fmav8df4 },
  { 0x9e002a, CODE_FOR_fmssf4 },
  { 0x9e002b, CODE_FOR_fmsdf4 },
  { 0x9e005d, CODE_FOR_fmsv4sf4 },
  { 0x9e005e, CODE_FOR_fmsv2df4 },
  { 0x9e005f, CODE_FOR_fmsv8sf4 },
  { 0x9e0060, CODE_FOR_fmsv4df4 },
  { 0x9e0062, CODE_FOR_fmsv16sf4 },
  { 0x9e0063, CODE_FOR_fmsv8df4 },
  { 0x9f002a, CODE_FOR_fnmasf4 },
  { 0x9f002b, CODE_FOR_fnmadf4 },
  { 0x9f005d, CODE_FOR_fnmav4sf4 },
  { 0x9f005e, CODE_FOR_fnmav2df4 },
  { 0x9f005f, CODE_FOR_fnmav8sf4 },
  { 0x9f0060, CODE_FOR_fnmav4df4 },
  { 0x9f0062, CODE_FOR_fnmav16sf4 },
  { 0x9f0063, CODE_FOR_fnmav8df4 },
  { 0xa0002a, CODE_FOR_fnmssf4 },
  { 0xa0002b, CODE_FOR_fnmsdf4 },
  { 0xa0005d, CODE_FOR_fnmsv4sf4 },
  { 0xa0005e, CODE_FOR_fnmsv2df4 },
  { 0xa0005f, CODE_FOR_fnmsv8sf4 },
  { 0xa00060, CODE_FOR_fnmsv4df4 },
  { 0xa00062, CODE_FOR_fnmsv16sf4 },
  { 0xa00063, CODE_FOR_fnmsv8df4 },
  { 0xa1002a, CODE_FOR_rintsf2 },
  { 0xa1002b, CODE_FOR_rintdf2 },
  { 0xa1002c, CODE_FOR_rintxf2 },
  { 0xa2002a, CODE_FOR_roundsf2 },
  { 0xa2002b, CODE_FOR_rounddf2 },
  { 0xa2002c, CODE_FOR_roundxf2 },
  { 0xa2005d, CODE_FOR_roundv4sf2 },
  { 0xa2005e, CODE_FOR_roundv2df2 },
  { 0xa2005f, CODE_FOR_roundv8sf2 },
  { 0xa20060, CODE_FOR_roundv4df2 },
  { 0xa20062, CODE_FOR_roundv16sf2 },
  { 0xa20063, CODE_FOR_roundv8df2 },
  { 0xa3002a, CODE_FOR_floorsf2 },
  { 0xa3002b, CODE_FOR_floordf2 },
  { 0xa3002c, CODE_FOR_floorxf2 },
  { 0xa4002a, CODE_FOR_ceilsf2 },
  { 0xa4002b, CODE_FOR_ceildf2 },
  { 0xa4002c, CODE_FOR_ceilxf2 },
  { 0xa5002a, CODE_FOR_btruncsf2 },
  { 0xa5002b, CODE_FOR_btruncdf2 },
  { 0xa5002c, CODE_FOR_btruncxf2 },
  { 0xa6002a, CODE_FOR_nearbyintsf2 },
  { 0xa6002b, CODE_FOR_nearbyintdf2 },
  { 0xa6002c, CODE_FOR_nearbyintxf2 },
  { 0xa7002a, CODE_FOR_acossf2 },
  { 0xa7002b, CODE_FOR_acosdf2 },
  { 0xa7002c, CODE_FOR_acosxf2 },
  { 0xa8002a, CODE_FOR_asinsf2 },
  { 0xa8002b, CODE_FOR_asindf2 },
  { 0xa8002c, CODE_FOR_asinxf2 },
  { 0xa9002a, CODE_FOR_atan2sf3 },
  { 0xa9002b, CODE_FOR_atan2df3 },
  { 0xa9002c, CODE_FOR_atan2xf3 },
  { 0xaa002a, CODE_FOR_atansf2 },
  { 0xaa002b, CODE_FOR_atandf2 },
  { 0xaa002c, CODE_FOR_atanxf2 },
  { 0xab002a, CODE_FOR_copysignsf3 },
  { 0xab002b, CODE_FOR_copysigndf3 },
  { 0xab002d, CODE_FOR_copysigntf3 },
  { 0xab005d, CODE_FOR_copysignv4sf3 },
  { 0xab005e, CODE_FOR_copysignv2df3 },
  { 0xab005f, CODE_FOR_copysignv8sf3 },
  { 0xab0060, CODE_FOR_copysignv4df3 },
  { 0xab0062, CODE_FOR_copysignv16sf3 },
  { 0xab0063, CODE_FOR_copysignv8df3 },
  { 0xad002a, CODE_FOR_exp10sf2 },
  { 0xad002b, CODE_FOR_exp10df2 },
  { 0xad002c, CODE_FOR_exp10xf2 },
  { 0xae002a, CODE_FOR_exp2sf2 },
  { 0xae002b, CODE_FOR_exp2df2 },
  { 0xae002c, CODE_FOR_exp2xf2 },
  { 0xaf002a, CODE_FOR_expsf2 },
  { 0xaf002b, CODE_FOR_expdf2 },
  { 0xaf002c, CODE_FOR_expxf2 },
  { 0xb0002a, CODE_FOR_expm1sf2 },
  { 0xb0002b, CODE_FOR_expm1df2 },
  { 0xb0002c, CODE_FOR_expm1xf2 },
  { 0xb1002a, CODE_FOR_fmodsf3 },
  { 0xb1002b, CODE_FOR_fmoddf3 },
  { 0xb1002c, CODE_FOR_fmodxf3 },
  { 0xb2002a, CODE_FOR_ilogbsf2 },
  { 0xb2002b, CODE_FOR_ilogbdf2 },
  { 0xb2002c, CODE_FOR_ilogbxf2 },
  { 0xb3002a, CODE_FOR_isinfsf2 },
  { 0xb3002b, CODE_FOR_isinfdf2 },
  { 0xb3002c, CODE_FOR_isinfxf2 },
  { 0xb4002a, CODE_FOR_ldexpsf3 },
  { 0xb4002b, CODE_FOR_ldexpdf3 },
  { 0xb4002c, CODE_FOR_ldexpxf3 },
  { 0xb5002a, CODE_FOR_log10sf2 },
  { 0xb5002b, CODE_FOR_log10df2 },
  { 0xb5002c, CODE_FOR_log10xf2 },
  { 0xb6002a, CODE_FOR_log1psf2 },
  { 0xb6002b, CODE_FOR_log1pdf2 },
  { 0xb6002c, CODE_FOR_log1pxf2 },
  { 0xb7002a, CODE_FOR_log2sf2 },
  { 0xb7002b, CODE_FOR_log2df2 },
  { 0xb7002c, CODE_FOR_log2xf2 },
  { 0xb8002a, CODE_FOR_logsf2 },
  { 0xb8002b, CODE_FOR_logdf2 },
  { 0xb8002c, CODE_FOR_logxf2 },
  { 0xb9002a, CODE_FOR_logbsf2 },
  { 0xb9002b, CODE_FOR_logbdf2 },
  { 0xb9002c, CODE_FOR_logbxf2 },
  { 0xbb002a, CODE_FOR_remaindersf3 },
  { 0xbb002b, CODE_FOR_remainderdf3 },
  { 0xbb002c, CODE_FOR_remainderxf3 },
  { 0xbc002a, CODE_FOR_rsqrtsf2 },
  { 0xbc005d, CODE_FOR_rsqrtv4sf2 },
  { 0xbc005f, CODE_FOR_rsqrtv8sf2 },
  { 0xbc0062, CODE_FOR_rsqrtv16sf2 },
  { 0xbd002a, CODE_FOR_scalbsf3 },
  { 0xbd002b, CODE_FOR_scalbdf3 },
  { 0xbd002c, CODE_FOR_scalbxf3 },
  { 0xbe002a, CODE_FOR_signbitsf2 },
  { 0xbe002b, CODE_FOR_signbitdf2 },
  { 0xbe002c, CODE_FOR_signbitxf2 },
  { 0xbe002d, CODE_FOR_signbittf2 },
  { 0xbf002a, CODE_FOR_significandsf2 },
  { 0xbf002b, CODE_FOR_significanddf2 },
  { 0xbf002c, CODE_FOR_significandxf2 },
  { 0xc1002a, CODE_FOR_sincossf3 },
  { 0xc1002b, CODE_FOR_sincosdf3 },
  { 0xc1002c, CODE_FOR_sincosxf3 },
  { 0xc2002a, CODE_FOR_tansf2 },
  { 0xc2002b, CODE_FOR_tandf2 },
  { 0xc2002c, CODE_FOR_tanxf2 },
  { 0xc5004c, CODE_FOR_reduc_smax_scal_v32qi },
  { 0xc5004d, CODE_FOR_reduc_smax_scal_v16hi },
  { 0xc5004e, CODE_FOR_reduc_smax_scal_v8si },
  { 0xc5004f, CODE_FOR_reduc_smax_scal_v4di },
  { 0xc50051, CODE_FOR_reduc_smax_scal_v64qi },
  { 0xc50052, CODE_FOR_reduc_smax_scal_v32hi },
  { 0xc50053, CODE_FOR_reduc_smax_scal_v16si },
  { 0xc50054, CODE_FOR_reduc_smax_scal_v8di },
  { 0xc5005d, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xc5005f, CODE_FOR_reduc_smax_scal_v8sf },
  { 0xc50060, CODE_FOR_reduc_smax_scal_v4df },
  { 0xc50062, CODE_FOR_reduc_smax_scal_v16sf },
  { 0xc50063, CODE_FOR_reduc_smax_scal_v8df },
  { 0xc6004c, CODE_FOR_reduc_smin_scal_v32qi },
  { 0xc6004d, CODE_FOR_reduc_smin_scal_v16hi },
  { 0xc6004e, CODE_FOR_reduc_smin_scal_v8si },
  { 0xc6004f, CODE_FOR_reduc_smin_scal_v4di },
  { 0xc60051, CODE_FOR_reduc_smin_scal_v64qi },
  { 0xc60052, CODE_FOR_reduc_smin_scal_v32hi },
  { 0xc60053, CODE_FOR_reduc_smin_scal_v16si },
  { 0xc60054, CODE_FOR_reduc_smin_scal_v8di },
  { 0xc6005d, CODE_FOR_reduc_smin_scal_v4sf },
  { 0xc6005f, CODE_FOR_reduc_smin_scal_v8sf },
  { 0xc60060, CODE_FOR_reduc_smin_scal_v4df },
  { 0xc60062, CODE_FOR_reduc_smin_scal_v16sf },
  { 0xc60063, CODE_FOR_reduc_smin_scal_v8df },
  { 0xc7005d, CODE_FOR_reduc_plus_scal_v4sf },
  { 0xc7005e, CODE_FOR_reduc_plus_scal_v2df },
  { 0xc7005f, CODE_FOR_reduc_plus_scal_v8sf },
  { 0xc70060, CODE_FOR_reduc_plus_scal_v4df },
  { 0xc70062, CODE_FOR_reduc_plus_scal_v16sf },
  { 0xc70063, CODE_FOR_reduc_plus_scal_v8df },
  { 0xc8004c, CODE_FOR_reduc_umax_scal_v32qi },
  { 0xc8004d, CODE_FOR_reduc_umax_scal_v16hi },
  { 0xc8004e, CODE_FOR_reduc_umax_scal_v8si },
  { 0xc8004f, CODE_FOR_reduc_umax_scal_v4di },
  { 0xc80051, CODE_FOR_reduc_umax_scal_v64qi },
  { 0xc80052, CODE_FOR_reduc_umax_scal_v32hi },
  { 0xc80053, CODE_FOR_reduc_umax_scal_v16si },
  { 0xc80054, CODE_FOR_reduc_umax_scal_v8di },
  { 0xc90048, CODE_FOR_reduc_umin_scal_v8hi },
  { 0xc9004c, CODE_FOR_reduc_umin_scal_v32qi },
  { 0xc9004d, CODE_FOR_reduc_umin_scal_v16hi },
  { 0xc9004e, CODE_FOR_reduc_umin_scal_v8si },
  { 0xc9004f, CODE_FOR_reduc_umin_scal_v4di },
  { 0xc90051, CODE_FOR_reduc_umin_scal_v64qi },
  { 0xc90052, CODE_FOR_reduc_umin_scal_v32hi },
  { 0xc90053, CODE_FOR_reduc_umin_scal_v16si },
  { 0xc90054, CODE_FOR_reduc_umin_scal_v8di },
  { 0xca0048, CODE_FOR_sdot_prodv8hi },
  { 0xca0049, CODE_FOR_sdot_prodv4si },
  { 0xca004d, CODE_FOR_sdot_prodv16hi },
  { 0xca0052, CODE_FOR_sdot_prodv32hi },
  { 0xce0047, CODE_FOR_usadv16qi },
  { 0xce004c, CODE_FOR_usadv32qi },
  { 0xd00040, CODE_FOR_vec_extractv8qi },
  { 0xd00041, CODE_FOR_vec_extractv4hi },
  { 0xd00042, CODE_FOR_vec_extractv2si },
  { 0xd00047, CODE_FOR_vec_extractv16qi },
  { 0xd00048, CODE_FOR_vec_extractv8hi },
  { 0xd00049, CODE_FOR_vec_extractv4si },
  { 0xd0004a, CODE_FOR_vec_extractv2di },
  { 0xd0004c, CODE_FOR_vec_extractv32qi },
  { 0xd0004d, CODE_FOR_vec_extractv16hi },
  { 0xd0004e, CODE_FOR_vec_extractv8si },
  { 0xd0004f, CODE_FOR_vec_extractv4di },
  { 0xd00051, CODE_FOR_vec_extractv64qi },
  { 0xd00052, CODE_FOR_vec_extractv32hi },
  { 0xd00053, CODE_FOR_vec_extractv16si },
  { 0xd00054, CODE_FOR_vec_extractv8di },
  { 0xd0005c, CODE_FOR_vec_extractv2sf },
  { 0xd0005d, CODE_FOR_vec_extractv4sf },
  { 0xd0005e, CODE_FOR_vec_extractv2df },
  { 0xd0005f, CODE_FOR_vec_extractv8sf },
  { 0xd00060, CODE_FOR_vec_extractv4df },
  { 0xd00062, CODE_FOR_vec_extractv16sf },
  { 0xd00063, CODE_FOR_vec_extractv8df },
  { 0xd10040, CODE_FOR_vec_initv8qi },
  { 0xd10041, CODE_FOR_vec_initv4hi },
  { 0xd10042, CODE_FOR_vec_initv2si },
  { 0xd10047, CODE_FOR_vec_initv16qi },
  { 0xd10048, CODE_FOR_vec_initv8hi },
  { 0xd10049, CODE_FOR_vec_initv4si },
  { 0xd1004a, CODE_FOR_vec_initv2di },
  { 0xd1004c, CODE_FOR_vec_initv32qi },
  { 0xd1004d, CODE_FOR_vec_initv16hi },
  { 0xd1004e, CODE_FOR_vec_initv8si },
  { 0xd1004f, CODE_FOR_vec_initv4di },
  { 0xd10051, CODE_FOR_vec_initv64qi },
  { 0xd10052, CODE_FOR_vec_initv32hi },
  { 0xd10053, CODE_FOR_vec_initv16si },
  { 0xd10054, CODE_FOR_vec_initv8di },
  { 0xd1005c, CODE_FOR_vec_initv2sf },
  { 0xd1005d, CODE_FOR_vec_initv4sf },
  { 0xd1005e, CODE_FOR_vec_initv2df },
  { 0xd1005f, CODE_FOR_vec_initv8sf },
  { 0xd10060, CODE_FOR_vec_initv4df },
  { 0xd10062, CODE_FOR_vec_initv16sf },
  { 0xd10063, CODE_FOR_vec_initv8df },
  { 0xd2005e, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0xd20060, CODE_FOR_vec_pack_sfix_trunc_v4df },
  { 0xd20063, CODE_FOR_vec_pack_sfix_trunc_v8df },
  { 0xd4000f, CODE_FOR_vec_pack_trunc_qi },
  { 0xd40010, CODE_FOR_vec_pack_trunc_hi },
  { 0xd40011, CODE_FOR_vec_pack_trunc_si },
  { 0xd40048, CODE_FOR_vec_pack_trunc_v8hi },
  { 0xd40049, CODE_FOR_vec_pack_trunc_v4si },
  { 0xd4004a, CODE_FOR_vec_pack_trunc_v2di },
  { 0xd4004d, CODE_FOR_vec_pack_trunc_v16hi },
  { 0xd4004e, CODE_FOR_vec_pack_trunc_v8si },
  { 0xd4004f, CODE_FOR_vec_pack_trunc_v4di },
  { 0xd40052, CODE_FOR_vec_pack_trunc_v32hi },
  { 0xd40053, CODE_FOR_vec_pack_trunc_v16si },
  { 0xd40054, CODE_FOR_vec_pack_trunc_v8di },
  { 0xd4005e, CODE_FOR_vec_pack_trunc_v2df },
  { 0xd40060, CODE_FOR_vec_pack_trunc_v4df },
  { 0xd40063, CODE_FOR_vec_pack_trunc_v8df },
  { 0xd5005e, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0xd50060, CODE_FOR_vec_pack_ufix_trunc_v4df },
  { 0xd50063, CODE_FOR_vec_pack_ufix_trunc_v8df },
  { 0xd70047, CODE_FOR_vec_perm_constv16qi },
  { 0xd70048, CODE_FOR_vec_perm_constv8hi },
  { 0xd70049, CODE_FOR_vec_perm_constv4si },
  { 0xd7004a, CODE_FOR_vec_perm_constv2di },
  { 0xd7004c, CODE_FOR_vec_perm_constv32qi },
  { 0xd7004d, CODE_FOR_vec_perm_constv16hi },
  { 0xd7004e, CODE_FOR_vec_perm_constv8si },
  { 0xd7004f, CODE_FOR_vec_perm_constv4di },
  { 0xd70051, CODE_FOR_vec_perm_constv64qi },
  { 0xd70052, CODE_FOR_vec_perm_constv32hi },
  { 0xd70053, CODE_FOR_vec_perm_constv16si },
  { 0xd70054, CODE_FOR_vec_perm_constv8di },
  { 0xd7005d, CODE_FOR_vec_perm_constv4sf },
  { 0xd7005e, CODE_FOR_vec_perm_constv2df },
  { 0xd7005f, CODE_FOR_vec_perm_constv8sf },
  { 0xd70060, CODE_FOR_vec_perm_constv4df },
  { 0xd70062, CODE_FOR_vec_perm_constv16sf },
  { 0xd70063, CODE_FOR_vec_perm_constv8df },
  { 0xd80047, CODE_FOR_vec_permv16qi },
  { 0xd80048, CODE_FOR_vec_permv8hi },
  { 0xd80049, CODE_FOR_vec_permv4si },
  { 0xd8004a, CODE_FOR_vec_permv2di },
  { 0xd8004c, CODE_FOR_vec_permv32qi },
  { 0xd8004d, CODE_FOR_vec_permv16hi },
  { 0xd8004e, CODE_FOR_vec_permv8si },
  { 0xd8004f, CODE_FOR_vec_permv4di },
  { 0xd80051, CODE_FOR_vec_permv64qi },
  { 0xd80052, CODE_FOR_vec_permv32hi },
  { 0xd80053, CODE_FOR_vec_permv16si },
  { 0xd80054, CODE_FOR_vec_permv8di },
  { 0xd8005d, CODE_FOR_vec_permv4sf },
  { 0xd8005e, CODE_FOR_vec_permv2df },
  { 0xd8005f, CODE_FOR_vec_permv8sf },
  { 0xd80060, CODE_FOR_vec_permv4df },
  { 0xd80062, CODE_FOR_vec_permv16sf },
  { 0xd80063, CODE_FOR_vec_permv8df },
  { 0xda0040, CODE_FOR_vec_setv8qi },
  { 0xda0041, CODE_FOR_vec_setv4hi },
  { 0xda0042, CODE_FOR_vec_setv2si },
  { 0xda0047, CODE_FOR_vec_setv16qi },
  { 0xda0048, CODE_FOR_vec_setv8hi },
  { 0xda0049, CODE_FOR_vec_setv4si },
  { 0xda004a, CODE_FOR_vec_setv2di },
  { 0xda004c, CODE_FOR_vec_setv32qi },
  { 0xda004d, CODE_FOR_vec_setv16hi },
  { 0xda004e, CODE_FOR_vec_setv8si },
  { 0xda004f, CODE_FOR_vec_setv4di },
  { 0xda0053, CODE_FOR_vec_setv16si },
  { 0xda0054, CODE_FOR_vec_setv8di },
  { 0xda005c, CODE_FOR_vec_setv2sf },
  { 0xda005d, CODE_FOR_vec_setv4sf },
  { 0xda005e, CODE_FOR_vec_setv2df },
  { 0xda005f, CODE_FOR_vec_setv8sf },
  { 0xda0060, CODE_FOR_vec_setv4df },
  { 0xda0062, CODE_FOR_vec_setv16sf },
  { 0xda0063, CODE_FOR_vec_setv8df },
  { 0xdb0047, CODE_FOR_vec_shr_v16qi },
  { 0xdb0048, CODE_FOR_vec_shr_v8hi },
  { 0xdb0049, CODE_FOR_vec_shr_v4si },
  { 0xdb004a, CODE_FOR_vec_shr_v2di },
  { 0xdc0048, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0xdc0049, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0xdc004d, CODE_FOR_vec_unpacks_float_hi_v16hi },
  { 0xdc004e, CODE_FOR_vec_unpacks_float_hi_v8si },
  { 0xdc0052, CODE_FOR_vec_unpacks_float_hi_v32hi },
  { 0xdc0053, CODE_FOR_vec_unpacks_float_hi_v16si },
  { 0xdd0048, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0xdd0049, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0xdd004d, CODE_FOR_vec_unpacks_float_lo_v16hi },
  { 0xdd004e, CODE_FOR_vec_unpacks_float_lo_v8si },
  { 0xdd0052, CODE_FOR_vec_unpacks_float_lo_v32hi },
  { 0xdd0053, CODE_FOR_vec_unpacks_float_lo_v16si },
  { 0xde0010, CODE_FOR_vec_unpacks_hi_hi },
  { 0xde0011, CODE_FOR_vec_unpacks_hi_si },
  { 0xde0012, CODE_FOR_vec_unpacks_hi_di },
  { 0xde0047, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0xde0048, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0xde0049, CODE_FOR_vec_unpacks_hi_v4si },
  { 0xde004c, CODE_FOR_vec_unpacks_hi_v32qi },
  { 0xde004d, CODE_FOR_vec_unpacks_hi_v16hi },
  { 0xde004e, CODE_FOR_vec_unpacks_hi_v8si },
  { 0xde0051, CODE_FOR_vec_unpacks_hi_v64qi },
  { 0xde0052, CODE_FOR_vec_unpacks_hi_v32hi },
  { 0xde0053, CODE_FOR_vec_unpacks_hi_v16si },
  { 0xde005d, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0xde005f, CODE_FOR_vec_unpacks_hi_v8sf },
  { 0xde0062, CODE_FOR_vec_unpacks_hi_v16sf },
  { 0xdf0010, CODE_FOR_vec_unpacks_lo_hi },
  { 0xdf0011, CODE_FOR_vec_unpacks_lo_si },
  { 0xdf0012, CODE_FOR_vec_unpacks_lo_di },
  { 0xdf0047, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0xdf0048, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0xdf0049, CODE_FOR_vec_unpacks_lo_v4si },
  { 0xdf004c, CODE_FOR_vec_unpacks_lo_v32qi },
  { 0xdf004d, CODE_FOR_vec_unpacks_lo_v16hi },
  { 0xdf004e, CODE_FOR_vec_unpacks_lo_v8si },
  { 0xdf0051, CODE_FOR_vec_unpacks_lo_v64qi },
  { 0xdf0052, CODE_FOR_vec_unpacks_lo_v32hi },
  { 0xdf0053, CODE_FOR_vec_unpacks_lo_v16si },
  { 0xdf005d, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0xdf005f, CODE_FOR_vec_unpacks_lo_v8sf },
  { 0xdf0062, CODE_FOR_vec_unpacks_lo_v16sf },
  { 0xe00048, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0xe00049, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0xe0004d, CODE_FOR_vec_unpacku_float_hi_v16hi },
  { 0xe0004e, CODE_FOR_vec_unpacku_float_hi_v8si },
  { 0xe00052, CODE_FOR_vec_unpacku_float_hi_v32hi },
  { 0xe00053, CODE_FOR_vec_unpacku_float_hi_v16si },
  { 0xe10048, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0xe10049, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0xe1004d, CODE_FOR_vec_unpacku_float_lo_v16hi },
  { 0xe1004e, CODE_FOR_vec_unpacku_float_lo_v8si },
  { 0xe10052, CODE_FOR_vec_unpacku_float_lo_v32hi },
  { 0xe10053, CODE_FOR_vec_unpacku_float_lo_v16si },
  { 0xe20047, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0xe20048, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0xe20049, CODE_FOR_vec_unpacku_hi_v4si },
  { 0xe2004c, CODE_FOR_vec_unpacku_hi_v32qi },
  { 0xe2004d, CODE_FOR_vec_unpacku_hi_v16hi },
  { 0xe2004e, CODE_FOR_vec_unpacku_hi_v8si },
  { 0xe20051, CODE_FOR_vec_unpacku_hi_v64qi },
  { 0xe20052, CODE_FOR_vec_unpacku_hi_v32hi },
  { 0xe20053, CODE_FOR_vec_unpacku_hi_v16si },
  { 0xe30047, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0xe30048, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0xe30049, CODE_FOR_vec_unpacku_lo_v4si },
  { 0xe3004c, CODE_FOR_vec_unpacku_lo_v32qi },
  { 0xe3004d, CODE_FOR_vec_unpacku_lo_v16hi },
  { 0xe3004e, CODE_FOR_vec_unpacku_lo_v8si },
  { 0xe30051, CODE_FOR_vec_unpacku_lo_v64qi },
  { 0xe30052, CODE_FOR_vec_unpacku_lo_v32hi },
  { 0xe30053, CODE_FOR_vec_unpacku_lo_v16si },
  { 0xe40049, CODE_FOR_vec_widen_smult_even_v4si },
  { 0xe4004e, CODE_FOR_vec_widen_smult_even_v8si },
  { 0xe40053, CODE_FOR_vec_widen_smult_even_v16si },
  { 0xe50047, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0xe50048, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0xe50049, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0xe5004c, CODE_FOR_vec_widen_smult_hi_v32qi },
  { 0xe5004d, CODE_FOR_vec_widen_smult_hi_v16hi },
  { 0xe5004e, CODE_FOR_vec_widen_smult_hi_v8si },
  { 0xe60047, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0xe60048, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0xe60049, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0xe6004c, CODE_FOR_vec_widen_smult_lo_v32qi },
  { 0xe6004d, CODE_FOR_vec_widen_smult_lo_v16hi },
  { 0xe6004e, CODE_FOR_vec_widen_smult_lo_v8si },
  { 0xe70049, CODE_FOR_vec_widen_smult_odd_v4si },
  { 0xe7004e, CODE_FOR_vec_widen_smult_odd_v8si },
  { 0xe70053, CODE_FOR_vec_widen_smult_odd_v16si },
  { 0xea0049, CODE_FOR_vec_widen_umult_even_v4si },
  { 0xea004e, CODE_FOR_vec_widen_umult_even_v8si },
  { 0xea0053, CODE_FOR_vec_widen_umult_even_v16si },
  { 0xeb0047, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0xeb0048, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0xeb0049, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0xeb004c, CODE_FOR_vec_widen_umult_hi_v32qi },
  { 0xeb004d, CODE_FOR_vec_widen_umult_hi_v16hi },
  { 0xeb004e, CODE_FOR_vec_widen_umult_hi_v8si },
  { 0xec0047, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0xec0048, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0xec0049, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0xec004c, CODE_FOR_vec_widen_umult_lo_v32qi },
  { 0xec004d, CODE_FOR_vec_widen_umult_lo_v16hi },
  { 0xec004e, CODE_FOR_vec_widen_umult_lo_v8si },
  { 0xed0049, CODE_FOR_vec_widen_umult_odd_v4si },
  { 0xed004e, CODE_FOR_vec_widen_umult_odd_v8si },
  { 0xed0053, CODE_FOR_vec_widen_umult_odd_v16si },
  { 0xf8000f, CODE_FOR_atomic_addqi },
  { 0xf80010, CODE_FOR_atomic_addhi },
  { 0xf80011, CODE_FOR_atomic_addsi },
  { 0xf80012, CODE_FOR_atomic_adddi },
  { 0xfa000f, CODE_FOR_atomic_andqi },
  { 0xfa0010, CODE_FOR_atomic_andhi },
  { 0xfa0011, CODE_FOR_atomic_andsi },
  { 0xfa0012, CODE_FOR_atomic_anddi },
  { 0xfb0010, CODE_FOR_atomic_bit_test_and_sethi },
  { 0xfb0011, CODE_FOR_atomic_bit_test_and_setsi },
  { 0xfb0012, CODE_FOR_atomic_bit_test_and_setdi },
  { 0xfc0010, CODE_FOR_atomic_bit_test_and_complementhi },
  { 0xfc0011, CODE_FOR_atomic_bit_test_and_complementsi },
  { 0xfc0012, CODE_FOR_atomic_bit_test_and_complementdi },
  { 0xfd0010, CODE_FOR_atomic_bit_test_and_resethi },
  { 0xfd0011, CODE_FOR_atomic_bit_test_and_resetsi },
  { 0xfd0012, CODE_FOR_atomic_bit_test_and_resetdi },
  { 0xfe000f, CODE_FOR_atomic_compare_and_swapqi },
  { 0xfe0010, CODE_FOR_atomic_compare_and_swaphi },
  { 0xfe0011, CODE_FOR_atomic_compare_and_swapsi },
  { 0xfe0012, CODE_FOR_atomic_compare_and_swapdi },
  { 0xfe0013, CODE_FOR_atomic_compare_and_swapti },
  { 0xff000f, CODE_FOR_atomic_exchangeqi },
  { 0xff0010, CODE_FOR_atomic_exchangehi },
  { 0xff0011, CODE_FOR_atomic_exchangesi },
  { 0xff0012, CODE_FOR_atomic_exchangedi },
  { 0x100000f, CODE_FOR_atomic_fetch_addqi },
  { 0x1000010, CODE_FOR_atomic_fetch_addhi },
  { 0x1000011, CODE_FOR_atomic_fetch_addsi },
  { 0x1000012, CODE_FOR_atomic_fetch_adddi },
  { 0x106000f, CODE_FOR_atomic_loadqi },
  { 0x1060010, CODE_FOR_atomic_loadhi },
  { 0x1060011, CODE_FOR_atomic_loadsi },
  { 0x1060012, CODE_FOR_atomic_loaddi },
  { 0x10a000f, CODE_FOR_atomic_orqi },
  { 0x10a0010, CODE_FOR_atomic_orhi },
  { 0x10a0011, CODE_FOR_atomic_orsi },
  { 0x10a0012, CODE_FOR_atomic_ordi },
  { 0x10b000f, CODE_FOR_atomic_storeqi },
  { 0x10b0010, CODE_FOR_atomic_storehi },
  { 0x10b0011, CODE_FOR_atomic_storesi },
  { 0x10b0012, CODE_FOR_atomic_storedi },
  { 0x10d000f, CODE_FOR_atomic_subqi },
  { 0x10d0010, CODE_FOR_atomic_subhi },
  { 0x10d0011, CODE_FOR_atomic_subsi },
  { 0x10d0012, CODE_FOR_atomic_subdi },
  { 0x10f000f, CODE_FOR_atomic_xorqi },
  { 0x10f0010, CODE_FOR_atomic_xorhi },
  { 0x10f0011, CODE_FOR_atomic_xorsi },
  { 0x10f0012, CODE_FOR_atomic_xordi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendsfdf2;
  ena[7] = HAVE_extendsfxf2;
  ena[8] = HAVE_extenddfxf2;
  ena[9] = HAVE_truncdfsf2;
  ena[10] = HAVE_truncxfsf2;
  ena[11] = HAVE_truncxfdf2;
  ena[12] = HAVE_zero_extendqihi2;
  ena[13] = HAVE_zero_extendqisi2;
  ena[14] = HAVE_zero_extendqidi2;
  ena[15] = HAVE_zero_extendhisi2;
  ena[16] = HAVE_zero_extendhidi2;
  ena[17] = HAVE_zero_extendsidi2;
  ena[18] = HAVE_floathisf2;
  ena[19] = HAVE_floathidf2;
  ena[20] = HAVE_floathixf2;
  ena[21] = HAVE_floatsisf2;
  ena[22] = HAVE_floatsidf2;
  ena[23] = HAVE_floatsixf2;
  ena[24] = HAVE_floatdisf2;
  ena[25] = HAVE_floatdidf2;
  ena[26] = HAVE_floatdixf2;
  ena[27] = HAVE_floatv4siv4sf2;
  ena[28] = HAVE_floatv4siv4df2;
  ena[29] = HAVE_floatv2div2df2;
  ena[30] = HAVE_floatv8siv8sf2;
  ena[31] = HAVE_floatv8siv8df2;
  ena[32] = HAVE_floatv4div4sf2;
  ena[33] = HAVE_floatv4div4df2;
  ena[34] = HAVE_floatv16siv16sf2;
  ena[35] = HAVE_floatv8div8sf2;
  ena[36] = HAVE_floatv8div8df2;
  ena[37] = HAVE_floatunsqisf2;
  ena[38] = HAVE_floatunsqidf2;
  ena[39] = HAVE_floatunshisf2;
  ena[40] = HAVE_floatunshidf2;
  ena[41] = HAVE_floatunssisf2;
  ena[42] = HAVE_floatunssidf2;
  ena[43] = HAVE_floatunssixf2;
  ena[44] = HAVE_floatunsdisf2;
  ena[45] = HAVE_floatunsdidf2;
  ena[46] = HAVE_floatunsv4siv4sf2;
  ena[47] = HAVE_floatunsv8siv8sf2;
  ena[48] = HAVE_floatunsv16siv16sf2;
  ena[49] = HAVE_lrintsfsi2;
  ena[50] = HAVE_lrintsfdi2;
  ena[51] = HAVE_lrintdfsi2;
  ena[52] = HAVE_lrintdfdi2;
  ena[53] = HAVE_lrintxfhi2;
  ena[54] = HAVE_lrintxfsi2;
  ena[55] = HAVE_lrintxfdi2;
  ena[56] = HAVE_lroundsfhi2;
  ena[57] = HAVE_lroundsfsi2;
  ena[58] = HAVE_lroundsfdi2;
  ena[59] = HAVE_lrounddfhi2;
  ena[60] = HAVE_lrounddfsi2;
  ena[61] = HAVE_lrounddfdi2;
  ena[62] = HAVE_lroundxfhi2;
  ena[63] = HAVE_lroundxfsi2;
  ena[64] = HAVE_lroundxfdi2;
  ena[65] = HAVE_lfloorsfsi2;
  ena[66] = HAVE_lfloorsfdi2;
  ena[67] = HAVE_lfloordfsi2;
  ena[68] = HAVE_lfloordfdi2;
  ena[69] = HAVE_lfloorxfhi2;
  ena[70] = HAVE_lfloorxfsi2;
  ena[71] = HAVE_lfloorxfdi2;
  ena[72] = HAVE_lceilsfsi2;
  ena[73] = HAVE_lceilsfdi2;
  ena[74] = HAVE_lceildfsi2;
  ena[75] = HAVE_lceildfdi2;
  ena[76] = HAVE_lceilxfhi2;
  ena[77] = HAVE_lceilxfsi2;
  ena[78] = HAVE_lceilxfdi2;
  ena[79] = HAVE_fix_truncsfhi2;
  ena[80] = HAVE_fix_truncsfsi2;
  ena[81] = HAVE_fix_truncsfdi2;
  ena[82] = HAVE_fix_truncdfhi2;
  ena[83] = HAVE_fix_truncdfsi2;
  ena[84] = HAVE_fix_truncdfdi2;
  ena[85] = HAVE_fix_truncxfhi2;
  ena[86] = HAVE_fix_truncxfsi2;
  ena[87] = HAVE_fix_truncxfdi2;
  ena[88] = HAVE_fix_truncv2sfv2di2;
  ena[89] = HAVE_fix_truncv4sfv4si2;
  ena[90] = HAVE_fix_truncv4sfv4di2;
  ena[91] = HAVE_fix_truncv2dfv2di2;
  ena[92] = HAVE_fix_truncv8sfv8si2;
  ena[93] = HAVE_fix_truncv8sfv8di2;
  ena[94] = HAVE_fix_truncv4dfv4si2;
  ena[95] = HAVE_fix_truncv4dfv4di2;
  ena[96] = HAVE_fix_truncv16sfv16si2;
  ena[97] = HAVE_fix_truncv8dfv8si2;
  ena[98] = HAVE_fix_truncv8dfv8di2;
  ena[99] = HAVE_fixuns_truncsfhi2;
  ena[100] = HAVE_fixuns_truncsfsi2;
  ena[101] = HAVE_fixuns_truncdfhi2;
  ena[102] = HAVE_fixuns_truncdfsi2;
  ena[103] = HAVE_fixuns_truncv4sfv4si2;
  ena[104] = HAVE_fixuns_truncv8sfv8si2;
  ena[105] = HAVE_fixuns_truncv16sfv16si2;
  ena[106] = HAVE_mulqihi3;
  ena[107] = HAVE_mulsidi3;
  ena[108] = HAVE_mulditi3;
  ena[109] = HAVE_umulqihi3;
  ena[110] = HAVE_umulsidi3;
  ena[111] = HAVE_umulditi3;
  ena[112] = HAVE_vcondv16qiv16qi;
  ena[113] = HAVE_vcondv8hiv16qi;
  ena[114] = HAVE_vcondv4siv16qi;
  ena[115] = HAVE_vcondv2div16qi;
  ena[116] = HAVE_vcondv4sfv16qi;
  ena[117] = HAVE_vcondv2dfv16qi;
  ena[118] = HAVE_vcondv16qiv8hi;
  ena[119] = HAVE_vcondv8hiv8hi;
  ena[120] = HAVE_vcondv4siv8hi;
  ena[121] = HAVE_vcondv2div8hi;
  ena[122] = HAVE_vcondv4sfv8hi;
  ena[123] = HAVE_vcondv2dfv8hi;
  ena[124] = HAVE_vcondv16qiv4si;
  ena[125] = HAVE_vcondv8hiv4si;
  ena[126] = HAVE_vcondv4siv4si;
  ena[127] = HAVE_vcondv2div4si;
  ena[128] = HAVE_vcondv4sfv4si;
  ena[129] = HAVE_vcondv2dfv4si;
  ena[130] = HAVE_vcondv2div2di;
  ena[131] = HAVE_vcondv2dfv2di;
  ena[132] = HAVE_vcondv32qiv32qi;
  ena[133] = HAVE_vcondv16hiv32qi;
  ena[134] = HAVE_vcondv8siv32qi;
  ena[135] = HAVE_vcondv4div32qi;
  ena[136] = HAVE_vcondv8sfv32qi;
  ena[137] = HAVE_vcondv4dfv32qi;
  ena[138] = HAVE_vcondv32qiv16hi;
  ena[139] = HAVE_vcondv16hiv16hi;
  ena[140] = HAVE_vcondv8siv16hi;
  ena[141] = HAVE_vcondv4div16hi;
  ena[142] = HAVE_vcondv8sfv16hi;
  ena[143] = HAVE_vcondv4dfv16hi;
  ena[144] = HAVE_vcondv32qiv8si;
  ena[145] = HAVE_vcondv16hiv8si;
  ena[146] = HAVE_vcondv8siv8si;
  ena[147] = HAVE_vcondv4div8si;
  ena[148] = HAVE_vcondv8sfv8si;
  ena[149] = HAVE_vcondv4dfv8si;
  ena[150] = HAVE_vcondv32qiv4di;
  ena[151] = HAVE_vcondv16hiv4di;
  ena[152] = HAVE_vcondv8siv4di;
  ena[153] = HAVE_vcondv4div4di;
  ena[154] = HAVE_vcondv8sfv4di;
  ena[155] = HAVE_vcondv4dfv4di;
  ena[156] = HAVE_vcondv64qiv64qi;
  ena[157] = HAVE_vcondv32hiv64qi;
  ena[158] = HAVE_vcondv16siv64qi;
  ena[159] = HAVE_vcondv8div64qi;
  ena[160] = HAVE_vcondv16sfv64qi;
  ena[161] = HAVE_vcondv8dfv64qi;
  ena[162] = HAVE_vcondv64qiv32hi;
  ena[163] = HAVE_vcondv32hiv32hi;
  ena[164] = HAVE_vcondv16siv32hi;
  ena[165] = HAVE_vcondv8div32hi;
  ena[166] = HAVE_vcondv16sfv32hi;
  ena[167] = HAVE_vcondv8dfv32hi;
  ena[168] = HAVE_vcondv64qiv16si;
  ena[169] = HAVE_vcondv32hiv16si;
  ena[170] = HAVE_vcondv16siv16si;
  ena[171] = HAVE_vcondv8div16si;
  ena[172] = HAVE_vcondv16sfv16si;
  ena[173] = HAVE_vcondv8dfv16si;
  ena[174] = HAVE_vcondv64qiv8di;
  ena[175] = HAVE_vcondv32hiv8di;
  ena[176] = HAVE_vcondv16siv8di;
  ena[177] = HAVE_vcondv8div8di;
  ena[178] = HAVE_vcondv16sfv8di;
  ena[179] = HAVE_vcondv8dfv8di;
  ena[180] = HAVE_vcondv16qiv4sf;
  ena[181] = HAVE_vcondv8hiv4sf;
  ena[182] = HAVE_vcondv4siv4sf;
  ena[183] = HAVE_vcondv2div4sf;
  ena[184] = HAVE_vcondv4sfv4sf;
  ena[185] = HAVE_vcondv2dfv4sf;
  ena[186] = HAVE_vcondv16qiv2df;
  ena[187] = HAVE_vcondv8hiv2df;
  ena[188] = HAVE_vcondv4siv2df;
  ena[189] = HAVE_vcondv2div2df;
  ena[190] = HAVE_vcondv4sfv2df;
  ena[191] = HAVE_vcondv2dfv2df;
  ena[192] = HAVE_vcondv32qiv8sf;
  ena[193] = HAVE_vcondv16hiv8sf;
  ena[194] = HAVE_vcondv8siv8sf;
  ena[195] = HAVE_vcondv4div8sf;
  ena[196] = HAVE_vcondv8sfv8sf;
  ena[197] = HAVE_vcondv4dfv8sf;
  ena[198] = HAVE_vcondv32qiv4df;
  ena[199] = HAVE_vcondv16hiv4df;
  ena[200] = HAVE_vcondv8siv4df;
  ena[201] = HAVE_vcondv4div4df;
  ena[202] = HAVE_vcondv8sfv4df;
  ena[203] = HAVE_vcondv4dfv4df;
  ena[204] = HAVE_vcondv64qiv16sf;
  ena[205] = HAVE_vcondv32hiv16sf;
  ena[206] = HAVE_vcondv16siv16sf;
  ena[207] = HAVE_vcondv8div16sf;
  ena[208] = HAVE_vcondv16sfv16sf;
  ena[209] = HAVE_vcondv8dfv16sf;
  ena[210] = HAVE_vcondv64qiv8df;
  ena[211] = HAVE_vcondv32hiv8df;
  ena[212] = HAVE_vcondv16siv8df;
  ena[213] = HAVE_vcondv8div8df;
  ena[214] = HAVE_vcondv16sfv8df;
  ena[215] = HAVE_vcondv8dfv8df;
  ena[216] = HAVE_vconduv16qiv16qi;
  ena[217] = HAVE_vconduv8hiv16qi;
  ena[218] = HAVE_vconduv4siv16qi;
  ena[219] = HAVE_vconduv2div16qi;
  ena[220] = HAVE_vconduv4sfv16qi;
  ena[221] = HAVE_vconduv2dfv16qi;
  ena[222] = HAVE_vconduv16qiv8hi;
  ena[223] = HAVE_vconduv8hiv8hi;
  ena[224] = HAVE_vconduv4siv8hi;
  ena[225] = HAVE_vconduv2div8hi;
  ena[226] = HAVE_vconduv4sfv8hi;
  ena[227] = HAVE_vconduv2dfv8hi;
  ena[228] = HAVE_vconduv16qiv4si;
  ena[229] = HAVE_vconduv8hiv4si;
  ena[230] = HAVE_vconduv4siv4si;
  ena[231] = HAVE_vconduv2div4si;
  ena[232] = HAVE_vconduv4sfv4si;
  ena[233] = HAVE_vconduv2dfv4si;
  ena[234] = HAVE_vconduv2div2di;
  ena[235] = HAVE_vconduv2dfv2di;
  ena[236] = HAVE_vconduv32qiv32qi;
  ena[237] = HAVE_vconduv16hiv32qi;
  ena[238] = HAVE_vconduv8siv32qi;
  ena[239] = HAVE_vconduv4div32qi;
  ena[240] = HAVE_vconduv8sfv32qi;
  ena[241] = HAVE_vconduv4dfv32qi;
  ena[242] = HAVE_vconduv32qiv16hi;
  ena[243] = HAVE_vconduv16hiv16hi;
  ena[244] = HAVE_vconduv8siv16hi;
  ena[245] = HAVE_vconduv4div16hi;
  ena[246] = HAVE_vconduv8sfv16hi;
  ena[247] = HAVE_vconduv4dfv16hi;
  ena[248] = HAVE_vconduv32qiv8si;
  ena[249] = HAVE_vconduv16hiv8si;
  ena[250] = HAVE_vconduv8siv8si;
  ena[251] = HAVE_vconduv4div8si;
  ena[252] = HAVE_vconduv8sfv8si;
  ena[253] = HAVE_vconduv4dfv8si;
  ena[254] = HAVE_vconduv32qiv4di;
  ena[255] = HAVE_vconduv16hiv4di;
  ena[256] = HAVE_vconduv8siv4di;
  ena[257] = HAVE_vconduv4div4di;
  ena[258] = HAVE_vconduv8sfv4di;
  ena[259] = HAVE_vconduv4dfv4di;
  ena[260] = HAVE_vconduv64qiv64qi;
  ena[261] = HAVE_vconduv32hiv64qi;
  ena[262] = HAVE_vconduv16siv64qi;
  ena[263] = HAVE_vconduv8div64qi;
  ena[264] = HAVE_vconduv16sfv64qi;
  ena[265] = HAVE_vconduv8dfv64qi;
  ena[266] = HAVE_vconduv64qiv32hi;
  ena[267] = HAVE_vconduv32hiv32hi;
  ena[268] = HAVE_vconduv16siv32hi;
  ena[269] = HAVE_vconduv8div32hi;
  ena[270] = HAVE_vconduv16sfv32hi;
  ena[271] = HAVE_vconduv8dfv32hi;
  ena[272] = HAVE_vconduv64qiv16si;
  ena[273] = HAVE_vconduv32hiv16si;
  ena[274] = HAVE_vconduv16siv16si;
  ena[275] = HAVE_vconduv8div16si;
  ena[276] = HAVE_vconduv16sfv16si;
  ena[277] = HAVE_vconduv8dfv16si;
  ena[278] = HAVE_vconduv64qiv8di;
  ena[279] = HAVE_vconduv32hiv8di;
  ena[280] = HAVE_vconduv16siv8di;
  ena[281] = HAVE_vconduv8div8di;
  ena[282] = HAVE_vconduv16sfv8di;
  ena[283] = HAVE_vconduv8dfv8di;
  ena[284] = HAVE_vcondeqv2div2di;
  ena[285] = HAVE_vcondeqv2dfv2di;
  ena[286] = HAVE_vcond_mask_v8hiqi;
  ena[287] = HAVE_vcond_mask_v4siqi;
  ena[288] = HAVE_vcond_mask_v2diqi;
  ena[289] = HAVE_vcond_mask_v8siqi;
  ena[290] = HAVE_vcond_mask_v4diqi;
  ena[291] = HAVE_vcond_mask_v8diqi;
  ena[292] = HAVE_vcond_mask_v4sfqi;
  ena[293] = HAVE_vcond_mask_v2dfqi;
  ena[294] = HAVE_vcond_mask_v8sfqi;
  ena[295] = HAVE_vcond_mask_v4dfqi;
  ena[296] = HAVE_vcond_mask_v8dfqi;
  ena[297] = HAVE_vcond_mask_v16qihi;
  ena[298] = HAVE_vcond_mask_v16hihi;
  ena[299] = HAVE_vcond_mask_v16sihi;
  ena[300] = HAVE_vcond_mask_v16sfhi;
  ena[301] = HAVE_vcond_mask_v32qisi;
  ena[302] = HAVE_vcond_mask_v32hisi;
  ena[303] = HAVE_vcond_mask_v64qidi;
  ena[304] = HAVE_vcond_mask_v16qiv16qi;
  ena[305] = HAVE_vcond_mask_v8hiv8hi;
  ena[306] = HAVE_vcond_mask_v4siv4si;
  ena[307] = HAVE_vcond_mask_v4sfv4si;
  ena[308] = HAVE_vcond_mask_v2div2di;
  ena[309] = HAVE_vcond_mask_v2dfv2di;
  ena[310] = HAVE_vcond_mask_v32qiv32qi;
  ena[311] = HAVE_vcond_mask_v16hiv16hi;
  ena[312] = HAVE_vcond_mask_v8siv8si;
  ena[313] = HAVE_vcond_mask_v8sfv8si;
  ena[314] = HAVE_vcond_mask_v4div4di;
  ena[315] = HAVE_vcond_mask_v4dfv4di;
  ena[316] = HAVE_vec_cmpv8hiqi;
  ena[317] = HAVE_vec_cmpv4siqi;
  ena[318] = HAVE_vec_cmpv2diqi;
  ena[319] = HAVE_vec_cmpv8siqi;
  ena[320] = HAVE_vec_cmpv4diqi;
  ena[321] = HAVE_vec_cmpv8diqi;
  ena[322] = HAVE_vec_cmpv4sfqi;
  ena[323] = HAVE_vec_cmpv2dfqi;
  ena[324] = HAVE_vec_cmpv8sfqi;
  ena[325] = HAVE_vec_cmpv4dfqi;
  ena[326] = HAVE_vec_cmpv8dfqi;
  ena[327] = HAVE_vec_cmpv16qihi;
  ena[328] = HAVE_vec_cmpv16hihi;
  ena[329] = HAVE_vec_cmpv16sihi;
  ena[330] = HAVE_vec_cmpv16sfhi;
  ena[331] = HAVE_vec_cmpv32qisi;
  ena[332] = HAVE_vec_cmpv32hisi;
  ena[333] = HAVE_vec_cmpv64qidi;
  ena[334] = HAVE_vec_cmpv16qiv16qi;
  ena[335] = HAVE_vec_cmpv8hiv8hi;
  ena[336] = HAVE_vec_cmpv4siv4si;
  ena[337] = HAVE_vec_cmpv4sfv4si;
  ena[338] = HAVE_vec_cmpv2div2di;
  ena[339] = HAVE_vec_cmpv2dfv2di;
  ena[340] = HAVE_vec_cmpv32qiv32qi;
  ena[341] = HAVE_vec_cmpv16hiv16hi;
  ena[342] = HAVE_vec_cmpv8siv8si;
  ena[343] = HAVE_vec_cmpv8sfv8si;
  ena[344] = HAVE_vec_cmpv4div4di;
  ena[345] = HAVE_vec_cmpv4dfv4di;
  ena[346] = HAVE_vec_cmpuv8hiqi;
  ena[347] = HAVE_vec_cmpuv4siqi;
  ena[348] = HAVE_vec_cmpuv2diqi;
  ena[349] = HAVE_vec_cmpuv8siqi;
  ena[350] = HAVE_vec_cmpuv4diqi;
  ena[351] = HAVE_vec_cmpuv8diqi;
  ena[352] = HAVE_vec_cmpuv16qihi;
  ena[353] = HAVE_vec_cmpuv16hihi;
  ena[354] = HAVE_vec_cmpuv16sihi;
  ena[355] = HAVE_vec_cmpuv32qisi;
  ena[356] = HAVE_vec_cmpuv32hisi;
  ena[357] = HAVE_vec_cmpuv64qidi;
  ena[358] = HAVE_vec_cmpuv16qiv16qi;
  ena[359] = HAVE_vec_cmpuv8hiv8hi;
  ena[360] = HAVE_vec_cmpuv4siv4si;
  ena[361] = HAVE_vec_cmpuv2div2di;
  ena[362] = HAVE_vec_cmpuv32qiv32qi;
  ena[363] = HAVE_vec_cmpuv16hiv16hi;
  ena[364] = HAVE_vec_cmpuv8siv8si;
  ena[365] = HAVE_vec_cmpuv4div4di;
  ena[366] = HAVE_vec_cmpeqv2div2di;
  ena[367] = HAVE_maskloadv8hiqi;
  ena[368] = HAVE_maskloadv4siqi;
  ena[369] = HAVE_maskloadv2diqi;
  ena[370] = HAVE_maskloadv8siqi;
  ena[371] = HAVE_maskloadv4diqi;
  ena[372] = HAVE_maskloadv8diqi;
  ena[373] = HAVE_maskloadv4sfqi;
  ena[374] = HAVE_maskloadv2dfqi;
  ena[375] = HAVE_maskloadv8sfqi;
  ena[376] = HAVE_maskloadv4dfqi;
  ena[377] = HAVE_maskloadv8dfqi;
  ena[378] = HAVE_maskloadv16qihi;
  ena[379] = HAVE_maskloadv16hihi;
  ena[380] = HAVE_maskloadv16sihi;
  ena[381] = HAVE_maskloadv16sfhi;
  ena[382] = HAVE_maskloadv32qisi;
  ena[383] = HAVE_maskloadv32hisi;
  ena[384] = HAVE_maskloadv64qidi;
  ena[385] = HAVE_maskloadv4siv4si;
  ena[386] = HAVE_maskloadv4sfv4si;
  ena[387] = HAVE_maskloadv2div2di;
  ena[388] = HAVE_maskloadv2dfv2di;
  ena[389] = HAVE_maskloadv8siv8si;
  ena[390] = HAVE_maskloadv8sfv8si;
  ena[391] = HAVE_maskloadv4div4di;
  ena[392] = HAVE_maskloadv4dfv4di;
  ena[393] = HAVE_maskstorev8hiqi;
  ena[394] = HAVE_maskstorev4siqi;
  ena[395] = HAVE_maskstorev2diqi;
  ena[396] = HAVE_maskstorev8siqi;
  ena[397] = HAVE_maskstorev4diqi;
  ena[398] = HAVE_maskstorev8diqi;
  ena[399] = HAVE_maskstorev4sfqi;
  ena[400] = HAVE_maskstorev2dfqi;
  ena[401] = HAVE_maskstorev8sfqi;
  ena[402] = HAVE_maskstorev4dfqi;
  ena[403] = HAVE_maskstorev8dfqi;
  ena[404] = HAVE_maskstorev16qihi;
  ena[405] = HAVE_maskstorev16hihi;
  ena[406] = HAVE_maskstorev16sihi;
  ena[407] = HAVE_maskstorev16sfhi;
  ena[408] = HAVE_maskstorev32qisi;
  ena[409] = HAVE_maskstorev32hisi;
  ena[410] = HAVE_maskstorev64qidi;
  ena[411] = HAVE_maskstorev4siv4si;
  ena[412] = HAVE_maskstorev4sfv4si;
  ena[413] = HAVE_maskstorev2div2di;
  ena[414] = HAVE_maskstorev2dfv2di;
  ena[415] = HAVE_maskstorev8siv8si;
  ena[416] = HAVE_maskstorev8sfv8si;
  ena[417] = HAVE_maskstorev4div4di;
  ena[418] = HAVE_maskstorev4dfv4di;
  ena[419] = HAVE_addqi3;
  ena[420] = HAVE_addhi3;
  ena[421] = HAVE_addsi3;
  ena[422] = HAVE_adddi3;
  ena[423] = HAVE_addti3;
  ena[424] = HAVE_addsf3;
  ena[425] = HAVE_adddf3;
  ena[426] = HAVE_addxf3;
  ena[427] = HAVE_addv16qi3;
  ena[428] = HAVE_addv8hi3;
  ena[429] = HAVE_addv4si3;
  ena[430] = HAVE_addv2di3;
  ena[431] = HAVE_addv32qi3;
  ena[432] = HAVE_addv16hi3;
  ena[433] = HAVE_addv8si3;
  ena[434] = HAVE_addv4di3;
  ena[435] = HAVE_addv64qi3;
  ena[436] = HAVE_addv32hi3;
  ena[437] = HAVE_addv16si3;
  ena[438] = HAVE_addv8di3;
  ena[439] = HAVE_addv4sf3;
  ena[440] = HAVE_addv2df3;
  ena[441] = HAVE_addv8sf3;
  ena[442] = HAVE_addv4df3;
  ena[443] = HAVE_addv16sf3;
  ena[444] = HAVE_addv8df3;
  ena[445] = HAVE_subqi3;
  ena[446] = HAVE_subhi3;
  ena[447] = HAVE_subsi3;
  ena[448] = HAVE_subdi3;
  ena[449] = HAVE_subti3;
  ena[450] = HAVE_subsf3;
  ena[451] = HAVE_subdf3;
  ena[452] = HAVE_subxf3;
  ena[453] = HAVE_subv16qi3;
  ena[454] = HAVE_subv8hi3;
  ena[455] = HAVE_subv4si3;
  ena[456] = HAVE_subv2di3;
  ena[457] = HAVE_subv32qi3;
  ena[458] = HAVE_subv16hi3;
  ena[459] = HAVE_subv8si3;
  ena[460] = HAVE_subv4di3;
  ena[461] = HAVE_subv64qi3;
  ena[462] = HAVE_subv32hi3;
  ena[463] = HAVE_subv16si3;
  ena[464] = HAVE_subv8di3;
  ena[465] = HAVE_subv4sf3;
  ena[466] = HAVE_subv2df3;
  ena[467] = HAVE_subv8sf3;
  ena[468] = HAVE_subv4df3;
  ena[469] = HAVE_subv16sf3;
  ena[470] = HAVE_subv8df3;
  ena[471] = HAVE_mulqi3;
  ena[472] = HAVE_mulhi3;
  ena[473] = HAVE_mulsi3;
  ena[474] = HAVE_muldi3;
  ena[475] = HAVE_mulsf3;
  ena[476] = HAVE_muldf3;
  ena[477] = HAVE_mulxf3;
  ena[478] = HAVE_mulv16qi3;
  ena[479] = HAVE_mulv8hi3;
  ena[480] = HAVE_mulv4si3;
  ena[481] = HAVE_mulv2di3;
  ena[482] = HAVE_mulv32qi3;
  ena[483] = HAVE_mulv16hi3;
  ena[484] = HAVE_mulv8si3;
  ena[485] = HAVE_mulv4di3;
  ena[486] = HAVE_mulv64qi3;
  ena[487] = HAVE_mulv32hi3;
  ena[488] = HAVE_mulv16si3;
  ena[489] = HAVE_mulv8di3;
  ena[490] = HAVE_mulv4sf3;
  ena[491] = HAVE_mulv2df3;
  ena[492] = HAVE_mulv8sf3;
  ena[493] = HAVE_mulv4df3;
  ena[494] = HAVE_mulv16sf3;
  ena[495] = HAVE_mulv8df3;
  ena[496] = HAVE_divsf3;
  ena[497] = HAVE_divdf3;
  ena[498] = HAVE_divxf3;
  ena[499] = HAVE_divv4sf3;
  ena[500] = HAVE_divv2df3;
  ena[501] = HAVE_divv8sf3;
  ena[502] = HAVE_divv4df3;
  ena[503] = HAVE_divv16sf3;
  ena[504] = HAVE_divv8df3;
  ena[505] = HAVE_divmodqi4;
  ena[506] = HAVE_divmodhi4;
  ena[507] = HAVE_divmodsi4;
  ena[508] = HAVE_divmoddi4;
  ena[509] = HAVE_udivmodqi4;
  ena[510] = HAVE_udivmodhi4;
  ena[511] = HAVE_udivmodsi4;
  ena[512] = HAVE_udivmoddi4;
  ena[513] = HAVE_andqi3;
  ena[514] = HAVE_andhi3;
  ena[515] = HAVE_andsi3;
  ena[516] = HAVE_anddi3;
  ena[517] = HAVE_andtf3;
  ena[518] = HAVE_andv16qi3;
  ena[519] = HAVE_andv8hi3;
  ena[520] = HAVE_andv4si3;
  ena[521] = HAVE_andv2di3;
  ena[522] = HAVE_andv32qi3;
  ena[523] = HAVE_andv16hi3;
  ena[524] = HAVE_andv8si3;
  ena[525] = HAVE_andv4di3;
  ena[526] = HAVE_andv64qi3;
  ena[527] = HAVE_andv32hi3;
  ena[528] = HAVE_andv16si3;
  ena[529] = HAVE_andv8di3;
  ena[530] = HAVE_andv4sf3;
  ena[531] = HAVE_andv2df3;
  ena[532] = HAVE_andv8sf3;
  ena[533] = HAVE_andv4df3;
  ena[534] = HAVE_andv16sf3;
  ena[535] = HAVE_andv8df3;
  ena[536] = HAVE_iorqi3;
  ena[537] = HAVE_iorhi3;
  ena[538] = HAVE_iorsi3;
  ena[539] = HAVE_iordi3;
  ena[540] = HAVE_iortf3;
  ena[541] = HAVE_iorv16qi3;
  ena[542] = HAVE_iorv8hi3;
  ena[543] = HAVE_iorv4si3;
  ena[544] = HAVE_iorv2di3;
  ena[545] = HAVE_iorv32qi3;
  ena[546] = HAVE_iorv16hi3;
  ena[547] = HAVE_iorv8si3;
  ena[548] = HAVE_iorv4di3;
  ena[549] = HAVE_iorv64qi3;
  ena[550] = HAVE_iorv32hi3;
  ena[551] = HAVE_iorv16si3;
  ena[552] = HAVE_iorv8di3;
  ena[553] = HAVE_iorv4sf3;
  ena[554] = HAVE_iorv2df3;
  ena[555] = HAVE_iorv8sf3;
  ena[556] = HAVE_iorv4df3;
  ena[557] = HAVE_iorv16sf3;
  ena[558] = HAVE_iorv8df3;
  ena[559] = HAVE_xorqi3;
  ena[560] = HAVE_xorhi3;
  ena[561] = HAVE_xorsi3;
  ena[562] = HAVE_xordi3;
  ena[563] = HAVE_xortf3;
  ena[564] = HAVE_xorv16qi3;
  ena[565] = HAVE_xorv8hi3;
  ena[566] = HAVE_xorv4si3;
  ena[567] = HAVE_xorv2di3;
  ena[568] = HAVE_xorv32qi3;
  ena[569] = HAVE_xorv16hi3;
  ena[570] = HAVE_xorv8si3;
  ena[571] = HAVE_xorv4di3;
  ena[572] = HAVE_xorv64qi3;
  ena[573] = HAVE_xorv32hi3;
  ena[574] = HAVE_xorv16si3;
  ena[575] = HAVE_xorv8di3;
  ena[576] = HAVE_xorv4sf3;
  ena[577] = HAVE_xorv2df3;
  ena[578] = HAVE_xorv8sf3;
  ena[579] = HAVE_xorv4df3;
  ena[580] = HAVE_xorv16sf3;
  ena[581] = HAVE_xorv8df3;
  ena[582] = HAVE_ashlqi3;
  ena[583] = HAVE_ashlhi3;
  ena[584] = HAVE_ashlsi3;
  ena[585] = HAVE_ashldi3;
  ena[586] = HAVE_ashlti3;
  ena[587] = HAVE_ashlv16qi3;
  ena[588] = HAVE_ashlv8hi3;
  ena[589] = HAVE_ashlv4si3;
  ena[590] = HAVE_ashlv2di3;
  ena[591] = HAVE_ashlv32qi3;
  ena[592] = HAVE_ashlv16hi3;
  ena[593] = HAVE_ashlv8si3;
  ena[594] = HAVE_ashlv4di3;
  ena[595] = HAVE_ashlv64qi3;
  ena[596] = HAVE_ashlv32hi3;
  ena[597] = HAVE_ashlv16si3;
  ena[598] = HAVE_ashlv8di3;
  ena[599] = HAVE_ashrqi3;
  ena[600] = HAVE_ashrhi3;
  ena[601] = HAVE_ashrsi3;
  ena[602] = HAVE_ashrdi3;
  ena[603] = HAVE_ashrti3;
  ena[604] = HAVE_ashrv16qi3;
  ena[605] = HAVE_ashrv8hi3;
  ena[606] = HAVE_ashrv4si3;
  ena[607] = HAVE_ashrv2di3;
  ena[608] = HAVE_ashrv32qi3;
  ena[609] = HAVE_ashrv16hi3;
  ena[610] = HAVE_ashrv8si3;
  ena[611] = HAVE_ashrv4di3;
  ena[612] = HAVE_ashrv64qi3;
  ena[613] = HAVE_ashrv32hi3;
  ena[614] = HAVE_ashrv16si3;
  ena[615] = HAVE_ashrv8di3;
  ena[616] = HAVE_lshrqi3;
  ena[617] = HAVE_lshrhi3;
  ena[618] = HAVE_lshrsi3;
  ena[619] = HAVE_lshrdi3;
  ena[620] = HAVE_lshrti3;
  ena[621] = HAVE_lshrv16qi3;
  ena[622] = HAVE_lshrv8hi3;
  ena[623] = HAVE_lshrv4si3;
  ena[624] = HAVE_lshrv2di3;
  ena[625] = HAVE_lshrv32qi3;
  ena[626] = HAVE_lshrv16hi3;
  ena[627] = HAVE_lshrv8si3;
  ena[628] = HAVE_lshrv4di3;
  ena[629] = HAVE_lshrv64qi3;
  ena[630] = HAVE_lshrv32hi3;
  ena[631] = HAVE_lshrv16si3;
  ena[632] = HAVE_lshrv8di3;
  ena[633] = HAVE_rotlqi3;
  ena[634] = HAVE_rotlhi3;
  ena[635] = HAVE_rotlsi3;
  ena[636] = HAVE_rotldi3;
  ena[637] = HAVE_rotlti3;
  ena[638] = HAVE_rotlv16qi3;
  ena[639] = HAVE_rotlv8hi3;
  ena[640] = HAVE_rotlv4si3;
  ena[641] = HAVE_rotlv2di3;
  ena[642] = HAVE_rotrqi3;
  ena[643] = HAVE_rotrhi3;
  ena[644] = HAVE_rotrsi3;
  ena[645] = HAVE_rotrdi3;
  ena[646] = HAVE_rotrti3;
  ena[647] = HAVE_rotrv16qi3;
  ena[648] = HAVE_rotrv8hi3;
  ena[649] = HAVE_rotrv4si3;
  ena[650] = HAVE_rotrv2di3;
  ena[651] = HAVE_vashlv16qi3;
  ena[652] = HAVE_vashlv8hi3;
  ena[653] = HAVE_vashlv4si3;
  ena[654] = HAVE_vashlv2di3;
  ena[655] = HAVE_vashlv8si3;
  ena[656] = HAVE_vashlv4di3;
  ena[657] = HAVE_vashlv16si3;
  ena[658] = HAVE_vashlv8di3;
  ena[659] = HAVE_vashrv16qi3;
  ena[660] = HAVE_vashrv8hi3;
  ena[661] = HAVE_vashrv4si3;
  ena[662] = HAVE_vashrv2di3;
  ena[663] = HAVE_vashrv8si3;
  ena[664] = HAVE_vashrv16si3;
  ena[665] = HAVE_vlshrv16qi3;
  ena[666] = HAVE_vlshrv8hi3;
  ena[667] = HAVE_vlshrv4si3;
  ena[668] = HAVE_vlshrv2di3;
  ena[669] = HAVE_vlshrv8si3;
  ena[670] = HAVE_vlshrv4di3;
  ena[671] = HAVE_vlshrv16si3;
  ena[672] = HAVE_vlshrv8di3;
  ena[673] = HAVE_vrotlv16qi3;
  ena[674] = HAVE_vrotlv8hi3;
  ena[675] = HAVE_vrotlv4si3;
  ena[676] = HAVE_vrotlv2di3;
  ena[677] = HAVE_vrotrv16qi3;
  ena[678] = HAVE_vrotrv8hi3;
  ena[679] = HAVE_vrotrv4si3;
  ena[680] = HAVE_vrotrv2di3;
  ena[681] = HAVE_sminsf3;
  ena[682] = HAVE_smindf3;
  ena[683] = HAVE_sminv16qi3;
  ena[684] = HAVE_sminv8hi3;
  ena[685] = HAVE_sminv4si3;
  ena[686] = HAVE_sminv2di3;
  ena[687] = HAVE_sminv32qi3;
  ena[688] = HAVE_sminv16hi3;
  ena[689] = HAVE_sminv8si3;
  ena[690] = HAVE_sminv4di3;
  ena[691] = HAVE_sminv64qi3;
  ena[692] = HAVE_sminv32hi3;
  ena[693] = HAVE_sminv16si3;
  ena[694] = HAVE_sminv8di3;
  ena[695] = HAVE_sminv4sf3;
  ena[696] = HAVE_sminv2df3;
  ena[697] = HAVE_sminv8sf3;
  ena[698] = HAVE_sminv4df3;
  ena[699] = HAVE_sminv16sf3;
  ena[700] = HAVE_sminv8df3;
  ena[701] = HAVE_smaxsf3;
  ena[702] = HAVE_smaxdf3;
  ena[703] = HAVE_smaxv16qi3;
  ena[704] = HAVE_smaxv8hi3;
  ena[705] = HAVE_smaxv4si3;
  ena[706] = HAVE_smaxv2di3;
  ena[707] = HAVE_smaxv32qi3;
  ena[708] = HAVE_smaxv16hi3;
  ena[709] = HAVE_smaxv8si3;
  ena[710] = HAVE_smaxv4di3;
  ena[711] = HAVE_smaxv64qi3;
  ena[712] = HAVE_smaxv32hi3;
  ena[713] = HAVE_smaxv16si3;
  ena[714] = HAVE_smaxv8di3;
  ena[715] = HAVE_smaxv4sf3;
  ena[716] = HAVE_smaxv2df3;
  ena[717] = HAVE_smaxv8sf3;
  ena[718] = HAVE_smaxv4df3;
  ena[719] = HAVE_smaxv16sf3;
  ena[720] = HAVE_smaxv8df3;
  ena[721] = HAVE_uminv16qi3;
  ena[722] = HAVE_uminv8hi3;
  ena[723] = HAVE_uminv4si3;
  ena[724] = HAVE_uminv2di3;
  ena[725] = HAVE_uminv32qi3;
  ena[726] = HAVE_uminv16hi3;
  ena[727] = HAVE_uminv8si3;
  ena[728] = HAVE_uminv4di3;
  ena[729] = HAVE_uminv64qi3;
  ena[730] = HAVE_uminv32hi3;
  ena[731] = HAVE_uminv16si3;
  ena[732] = HAVE_uminv8di3;
  ena[733] = HAVE_umaxv16qi3;
  ena[734] = HAVE_umaxv8hi3;
  ena[735] = HAVE_umaxv4si3;
  ena[736] = HAVE_umaxv2di3;
  ena[737] = HAVE_umaxv32qi3;
  ena[738] = HAVE_umaxv16hi3;
  ena[739] = HAVE_umaxv8si3;
  ena[740] = HAVE_umaxv4di3;
  ena[741] = HAVE_umaxv64qi3;
  ena[742] = HAVE_umaxv32hi3;
  ena[743] = HAVE_umaxv16si3;
  ena[744] = HAVE_umaxv8di3;
  ena[745] = HAVE_negqi2;
  ena[746] = HAVE_neghi2;
  ena[747] = HAVE_negsi2;
  ena[748] = HAVE_negdi2;
  ena[749] = HAVE_negti2;
  ena[750] = HAVE_negsf2;
  ena[751] = HAVE_negdf2;
  ena[752] = HAVE_negxf2;
  ena[753] = HAVE_negtf2;
  ena[754] = HAVE_negv16qi2;
  ena[755] = HAVE_negv8hi2;
  ena[756] = HAVE_negv4si2;
  ena[757] = HAVE_negv2di2;
  ena[758] = HAVE_negv32qi2;
  ena[759] = HAVE_negv16hi2;
  ena[760] = HAVE_negv8si2;
  ena[761] = HAVE_negv4di2;
  ena[762] = HAVE_negv64qi2;
  ena[763] = HAVE_negv32hi2;
  ena[764] = HAVE_negv16si2;
  ena[765] = HAVE_negv8di2;
  ena[766] = HAVE_negv4sf2;
  ena[767] = HAVE_negv2df2;
  ena[768] = HAVE_negv8sf2;
  ena[769] = HAVE_negv4df2;
  ena[770] = HAVE_negv16sf2;
  ena[771] = HAVE_negv8df2;
  ena[772] = HAVE_abssf2;
  ena[773] = HAVE_absdf2;
  ena[774] = HAVE_absxf2;
  ena[775] = HAVE_abstf2;
  ena[776] = HAVE_absv8qi2;
  ena[777] = HAVE_absv4hi2;
  ena[778] = HAVE_absv2si2;
  ena[779] = HAVE_absv16qi2;
  ena[780] = HAVE_absv8hi2;
  ena[781] = HAVE_absv4si2;
  ena[782] = HAVE_absv2di2;
  ena[783] = HAVE_absv32qi2;
  ena[784] = HAVE_absv16hi2;
  ena[785] = HAVE_absv8si2;
  ena[786] = HAVE_absv4di2;
  ena[787] = HAVE_absv64qi2;
  ena[788] = HAVE_absv32hi2;
  ena[789] = HAVE_absv16si2;
  ena[790] = HAVE_absv8di2;
  ena[791] = HAVE_absv4sf2;
  ena[792] = HAVE_absv2df2;
  ena[793] = HAVE_absv8sf2;
  ena[794] = HAVE_absv4df2;
  ena[795] = HAVE_absv16sf2;
  ena[796] = HAVE_absv8df2;
  ena[797] = HAVE_one_cmplqi2;
  ena[798] = HAVE_one_cmplhi2;
  ena[799] = HAVE_one_cmplsi2;
  ena[800] = HAVE_one_cmpldi2;
  ena[801] = HAVE_one_cmplv16qi2;
  ena[802] = HAVE_one_cmplv8hi2;
  ena[803] = HAVE_one_cmplv4si2;
  ena[804] = HAVE_one_cmplv2di2;
  ena[805] = HAVE_one_cmplv32qi2;
  ena[806] = HAVE_one_cmplv16hi2;
  ena[807] = HAVE_one_cmplv8si2;
  ena[808] = HAVE_one_cmplv4di2;
  ena[809] = HAVE_one_cmplv64qi2;
  ena[810] = HAVE_one_cmplv32hi2;
  ena[811] = HAVE_one_cmplv16si2;
  ena[812] = HAVE_one_cmplv8di2;
  ena[813] = HAVE_bswapsi2;
  ena[814] = HAVE_bswapdi2;
  ena[815] = HAVE_ffssi2;
  ena[816] = HAVE_ffsdi2;
  ena[817] = HAVE_clzsi2;
  ena[818] = HAVE_clzdi2;
  ena[819] = HAVE_clzv4si2;
  ena[820] = HAVE_clzv2di2;
  ena[821] = HAVE_clzv8si2;
  ena[822] = HAVE_clzv4di2;
  ena[823] = HAVE_clzv16si2;
  ena[824] = HAVE_clzv8di2;
  ena[825] = HAVE_ctzsi2;
  ena[826] = HAVE_ctzdi2;
  ena[827] = HAVE_popcounthi2;
  ena[828] = HAVE_popcountsi2;
  ena[829] = HAVE_popcountdi2;
  ena[830] = HAVE_paritysi2;
  ena[831] = HAVE_paritydi2;
  ena[832] = HAVE_sqrtsf2;
  ena[833] = HAVE_sqrtdf2;
  ena[834] = HAVE_sqrtxf2;
  ena[835] = HAVE_sqrtv4sf2;
  ena[836] = HAVE_sqrtv2df2;
  ena[837] = HAVE_sqrtv8sf2;
  ena[838] = HAVE_sqrtv4df2;
  ena[839] = HAVE_sqrtv16sf2;
  ena[840] = HAVE_sqrtv8df2;
  ena[841] = HAVE_movqi;
  ena[842] = HAVE_movhi;
  ena[843] = HAVE_movsi;
  ena[844] = HAVE_movdi;
  ena[845] = HAVE_movti;
  ena[846] = HAVE_movoi;
  ena[847] = HAVE_movxi;
  ena[848] = HAVE_movbnd32;
  ena[849] = HAVE_movbnd64;
  ena[850] = HAVE_movsf;
  ena[851] = HAVE_movdf;
  ena[852] = HAVE_movxf;
  ena[853] = HAVE_movtf;
  ena[854] = HAVE_movcdi;
  ena[855] = HAVE_movv8qi;
  ena[856] = HAVE_movv4hi;
  ena[857] = HAVE_movv2si;
  ena[858] = HAVE_movv1di;
  ena[859] = HAVE_movv16qi;
  ena[860] = HAVE_movv8hi;
  ena[861] = HAVE_movv4si;
  ena[862] = HAVE_movv2di;
  ena[863] = HAVE_movv1ti;
  ena[864] = HAVE_movv32qi;
  ena[865] = HAVE_movv16hi;
  ena[866] = HAVE_movv8si;
  ena[867] = HAVE_movv4di;
  ena[868] = HAVE_movv2ti;
  ena[869] = HAVE_movv64qi;
  ena[870] = HAVE_movv32hi;
  ena[871] = HAVE_movv16si;
  ena[872] = HAVE_movv8di;
  ena[873] = HAVE_movv4ti;
  ena[874] = HAVE_movv64si;
  ena[875] = HAVE_movv2sf;
  ena[876] = HAVE_movv4sf;
  ena[877] = HAVE_movv2df;
  ena[878] = HAVE_movv8sf;
  ena[879] = HAVE_movv4df;
  ena[880] = HAVE_movv16sf;
  ena[881] = HAVE_movv8df;
  ena[882] = HAVE_movv64sf;
  ena[883] = HAVE_movstrictqi;
  ena[884] = HAVE_movstricthi;
  ena[885] = HAVE_movmisalignv8qi;
  ena[886] = HAVE_movmisalignv4hi;
  ena[887] = HAVE_movmisalignv2si;
  ena[888] = HAVE_movmisalignv1di;
  ena[889] = HAVE_movmisalignv16qi;
  ena[890] = HAVE_movmisalignv8hi;
  ena[891] = HAVE_movmisalignv4si;
  ena[892] = HAVE_movmisalignv2di;
  ena[893] = HAVE_movmisalignv1ti;
  ena[894] = HAVE_movmisalignv32qi;
  ena[895] = HAVE_movmisalignv16hi;
  ena[896] = HAVE_movmisalignv8si;
  ena[897] = HAVE_movmisalignv4di;
  ena[898] = HAVE_movmisalignv2ti;
  ena[899] = HAVE_movmisalignv64qi;
  ena[900] = HAVE_movmisalignv32hi;
  ena[901] = HAVE_movmisalignv16si;
  ena[902] = HAVE_movmisalignv8di;
  ena[903] = HAVE_movmisalignv4ti;
  ena[904] = HAVE_movmisalignv2sf;
  ena[905] = HAVE_movmisalignv4sf;
  ena[906] = HAVE_movmisalignv2df;
  ena[907] = HAVE_movmisalignv8sf;
  ena[908] = HAVE_movmisalignv4df;
  ena[909] = HAVE_movmisalignv16sf;
  ena[910] = HAVE_movmisalignv8df;
  ena[911] = HAVE_storentsi;
  ena[912] = HAVE_storentdi;
  ena[913] = HAVE_storentsf;
  ena[914] = HAVE_storentdf;
  ena[915] = HAVE_storentv2di;
  ena[916] = HAVE_storentv4di;
  ena[917] = HAVE_storentv8di;
  ena[918] = HAVE_storentv4sf;
  ena[919] = HAVE_storentv2df;
  ena[920] = HAVE_storentv8sf;
  ena[921] = HAVE_storentv4df;
  ena[922] = HAVE_storentv16sf;
  ena[923] = HAVE_storentv8df;
  ena[924] = HAVE_insvhi;
  ena[925] = HAVE_insvsi;
  ena[926] = HAVE_insvdi;
  ena[927] = HAVE_extvhi;
  ena[928] = HAVE_extvsi;
  ena[929] = HAVE_extzvhi;
  ena[930] = HAVE_extzvsi;
  ena[931] = HAVE_extzvdi;
  ena[932] = HAVE_cbranchcc4;
  ena[933] = HAVE_cbranchqi4;
  ena[934] = HAVE_cbranchhi4;
  ena[935] = HAVE_cbranchsi4;
  ena[936] = HAVE_cbranchdi4;
  ena[937] = HAVE_cbranchti4;
  ena[938] = HAVE_cbranchsf4;
  ena[939] = HAVE_cbranchdf4;
  ena[940] = HAVE_cbranchxf4;
  ena[941] = HAVE_cbranchv4si4;
  ena[942] = HAVE_cbranchv2di4;
  ena[943] = HAVE_cbranchv8si4;
  ena[944] = HAVE_cbranchv4di4;
  ena[945] = HAVE_addqicc;
  ena[946] = HAVE_addhicc;
  ena[947] = HAVE_addsicc;
  ena[948] = HAVE_adddicc;
  ena[949] = HAVE_movqicc;
  ena[950] = HAVE_movhicc;
  ena[951] = HAVE_movsicc;
  ena[952] = HAVE_movdicc;
  ena[953] = HAVE_movsfcc;
  ena[954] = HAVE_movdfcc;
  ena[955] = HAVE_movxfcc;
  ena[956] = HAVE_cstorecc4;
  ena[957] = HAVE_cstoreqi4;
  ena[958] = HAVE_cstorehi4;
  ena[959] = HAVE_cstoresi4;
  ena[960] = HAVE_cstoredi4;
  ena[961] = HAVE_cstoresf4;
  ena[962] = HAVE_cstoredf4;
  ena[963] = HAVE_cstorexf4;
  ena[964] = HAVE_addvqi4;
  ena[965] = HAVE_addvhi4;
  ena[966] = HAVE_addvsi4;
  ena[967] = HAVE_addvdi4;
  ena[968] = HAVE_subvqi4;
  ena[969] = HAVE_subvhi4;
  ena[970] = HAVE_subvsi4;
  ena[971] = HAVE_subvdi4;
  ena[972] = HAVE_mulvqi4;
  ena[973] = HAVE_mulvhi4;
  ena[974] = HAVE_mulvsi4;
  ena[975] = HAVE_mulvdi4;
  ena[976] = HAVE_uaddvqi4;
  ena[977] = HAVE_uaddvhi4;
  ena[978] = HAVE_uaddvsi4;
  ena[979] = HAVE_uaddvdi4;
  ena[980] = HAVE_usubvqi4;
  ena[981] = HAVE_usubvhi4;
  ena[982] = HAVE_usubvsi4;
  ena[983] = HAVE_usubvdi4;
  ena[984] = HAVE_umulvqi4;
  ena[985] = HAVE_umulvhi4;
  ena[986] = HAVE_umulvsi4;
  ena[987] = HAVE_umulvdi4;
  ena[988] = HAVE_negvqi3;
  ena[989] = HAVE_negvhi3;
  ena[990] = HAVE_negvsi3;
  ena[991] = HAVE_negvdi3;
  ena[992] = HAVE_smulsi3_highpart;
  ena[993] = HAVE_smuldi3_highpart;
  ena[994] = HAVE_smulv8hi3_highpart;
  ena[995] = HAVE_smulv16hi3_highpart;
  ena[996] = HAVE_smulv32hi3_highpart;
  ena[997] = HAVE_umulsi3_highpart;
  ena[998] = HAVE_umuldi3_highpart;
  ena[999] = HAVE_umulv8hi3_highpart;
  ena[1000] = HAVE_umulv16hi3_highpart;
  ena[1001] = HAVE_umulv32hi3_highpart;
  ena[1002] = HAVE_cmpstrnsi;
  ena[1003] = HAVE_movmemsi;
  ena[1004] = HAVE_movmemdi;
  ena[1005] = HAVE_setmemsi;
  ena[1006] = HAVE_setmemdi;
  ena[1007] = HAVE_strlensi;
  ena[1008] = HAVE_strlendi;
  ena[1009] = HAVE_fmasf4;
  ena[1010] = HAVE_fmadf4;
  ena[1011] = HAVE_fmav4sf4;
  ena[1012] = HAVE_fmav2df4;
  ena[1013] = HAVE_fmav8sf4;
  ena[1014] = HAVE_fmav4df4;
  ena[1015] = HAVE_fmav16sf4;
  ena[1016] = HAVE_fmav8df4;
  ena[1017] = HAVE_fmssf4;
  ena[1018] = HAVE_fmsdf4;
  ena[1019] = HAVE_fmsv4sf4;
  ena[1020] = HAVE_fmsv2df4;
  ena[1021] = HAVE_fmsv8sf4;
  ena[1022] = HAVE_fmsv4df4;
  ena[1023] = HAVE_fmsv16sf4;
  ena[1024] = HAVE_fmsv8df4;
  ena[1025] = HAVE_fnmasf4;
  ena[1026] = HAVE_fnmadf4;
  ena[1027] = HAVE_fnmav4sf4;
  ena[1028] = HAVE_fnmav2df4;
  ena[1029] = HAVE_fnmav8sf4;
  ena[1030] = HAVE_fnmav4df4;
  ena[1031] = HAVE_fnmav16sf4;
  ena[1032] = HAVE_fnmav8df4;
  ena[1033] = HAVE_fnmssf4;
  ena[1034] = HAVE_fnmsdf4;
  ena[1035] = HAVE_fnmsv4sf4;
  ena[1036] = HAVE_fnmsv2df4;
  ena[1037] = HAVE_fnmsv8sf4;
  ena[1038] = HAVE_fnmsv4df4;
  ena[1039] = HAVE_fnmsv16sf4;
  ena[1040] = HAVE_fnmsv8df4;
  ena[1041] = HAVE_rintsf2;
  ena[1042] = HAVE_rintdf2;
  ena[1043] = HAVE_rintxf2;
  ena[1044] = HAVE_roundsf2;
  ena[1045] = HAVE_rounddf2;
  ena[1046] = HAVE_roundxf2;
  ena[1047] = HAVE_roundv4sf2;
  ena[1048] = HAVE_roundv2df2;
  ena[1049] = HAVE_roundv8sf2;
  ena[1050] = HAVE_roundv4df2;
  ena[1051] = HAVE_roundv16sf2;
  ena[1052] = HAVE_roundv8df2;
  ena[1053] = HAVE_floorsf2;
  ena[1054] = HAVE_floordf2;
  ena[1055] = HAVE_floorxf2;
  ena[1056] = HAVE_ceilsf2;
  ena[1057] = HAVE_ceildf2;
  ena[1058] = HAVE_ceilxf2;
  ena[1059] = HAVE_btruncsf2;
  ena[1060] = HAVE_btruncdf2;
  ena[1061] = HAVE_btruncxf2;
  ena[1062] = HAVE_nearbyintsf2;
  ena[1063] = HAVE_nearbyintdf2;
  ena[1064] = HAVE_nearbyintxf2;
  ena[1065] = HAVE_acossf2;
  ena[1066] = HAVE_acosdf2;
  ena[1067] = HAVE_acosxf2;
  ena[1068] = HAVE_asinsf2;
  ena[1069] = HAVE_asindf2;
  ena[1070] = HAVE_asinxf2;
  ena[1071] = HAVE_atan2sf3;
  ena[1072] = HAVE_atan2df3;
  ena[1073] = HAVE_atan2xf3;
  ena[1074] = HAVE_atansf2;
  ena[1075] = HAVE_atandf2;
  ena[1076] = HAVE_atanxf2;
  ena[1077] = HAVE_copysignsf3;
  ena[1078] = HAVE_copysigndf3;
  ena[1079] = HAVE_copysigntf3;
  ena[1080] = HAVE_copysignv4sf3;
  ena[1081] = HAVE_copysignv2df3;
  ena[1082] = HAVE_copysignv8sf3;
  ena[1083] = HAVE_copysignv4df3;
  ena[1084] = HAVE_copysignv16sf3;
  ena[1085] = HAVE_copysignv8df3;
  ena[1086] = HAVE_exp10sf2;
  ena[1087] = HAVE_exp10df2;
  ena[1088] = HAVE_exp10xf2;
  ena[1089] = HAVE_exp2sf2;
  ena[1090] = HAVE_exp2df2;
  ena[1091] = HAVE_exp2xf2;
  ena[1092] = HAVE_expsf2;
  ena[1093] = HAVE_expdf2;
  ena[1094] = HAVE_expxf2;
  ena[1095] = HAVE_expm1sf2;
  ena[1096] = HAVE_expm1df2;
  ena[1097] = HAVE_expm1xf2;
  ena[1098] = HAVE_fmodsf3;
  ena[1099] = HAVE_fmoddf3;
  ena[1100] = HAVE_fmodxf3;
  ena[1101] = HAVE_ilogbsf2;
  ena[1102] = HAVE_ilogbdf2;
  ena[1103] = HAVE_ilogbxf2;
  ena[1104] = HAVE_isinfsf2;
  ena[1105] = HAVE_isinfdf2;
  ena[1106] = HAVE_isinfxf2;
  ena[1107] = HAVE_ldexpsf3;
  ena[1108] = HAVE_ldexpdf3;
  ena[1109] = HAVE_ldexpxf3;
  ena[1110] = HAVE_log10sf2;
  ena[1111] = HAVE_log10df2;
  ena[1112] = HAVE_log10xf2;
  ena[1113] = HAVE_log1psf2;
  ena[1114] = HAVE_log1pdf2;
  ena[1115] = HAVE_log1pxf2;
  ena[1116] = HAVE_log2sf2;
  ena[1117] = HAVE_log2df2;
  ena[1118] = HAVE_log2xf2;
  ena[1119] = HAVE_logsf2;
  ena[1120] = HAVE_logdf2;
  ena[1121] = HAVE_logxf2;
  ena[1122] = HAVE_logbsf2;
  ena[1123] = HAVE_logbdf2;
  ena[1124] = HAVE_logbxf2;
  ena[1125] = HAVE_remaindersf3;
  ena[1126] = HAVE_remainderdf3;
  ena[1127] = HAVE_remainderxf3;
  ena[1128] = HAVE_rsqrtsf2;
  ena[1129] = HAVE_rsqrtv4sf2;
  ena[1130] = HAVE_rsqrtv8sf2;
  ena[1131] = HAVE_rsqrtv16sf2;
  ena[1132] = HAVE_scalbsf3;
  ena[1133] = HAVE_scalbdf3;
  ena[1134] = HAVE_scalbxf3;
  ena[1135] = HAVE_signbitsf2;
  ena[1136] = HAVE_signbitdf2;
  ena[1137] = HAVE_signbitxf2;
  ena[1138] = HAVE_signbittf2;
  ena[1139] = HAVE_significandsf2;
  ena[1140] = HAVE_significanddf2;
  ena[1141] = HAVE_significandxf2;
  ena[1142] = HAVE_sincossf3;
  ena[1143] = HAVE_sincosdf3;
  ena[1144] = HAVE_sincosxf3;
  ena[1145] = HAVE_tansf2;
  ena[1146] = HAVE_tandf2;
  ena[1147] = HAVE_tanxf2;
  ena[1148] = HAVE_reduc_smax_scal_v32qi;
  ena[1149] = HAVE_reduc_smax_scal_v16hi;
  ena[1150] = HAVE_reduc_smax_scal_v8si;
  ena[1151] = HAVE_reduc_smax_scal_v4di;
  ena[1152] = HAVE_reduc_smax_scal_v64qi;
  ena[1153] = HAVE_reduc_smax_scal_v32hi;
  ena[1154] = HAVE_reduc_smax_scal_v16si;
  ena[1155] = HAVE_reduc_smax_scal_v8di;
  ena[1156] = HAVE_reduc_smax_scal_v4sf;
  ena[1157] = HAVE_reduc_smax_scal_v8sf;
  ena[1158] = HAVE_reduc_smax_scal_v4df;
  ena[1159] = HAVE_reduc_smax_scal_v16sf;
  ena[1160] = HAVE_reduc_smax_scal_v8df;
  ena[1161] = HAVE_reduc_smin_scal_v32qi;
  ena[1162] = HAVE_reduc_smin_scal_v16hi;
  ena[1163] = HAVE_reduc_smin_scal_v8si;
  ena[1164] = HAVE_reduc_smin_scal_v4di;
  ena[1165] = HAVE_reduc_smin_scal_v64qi;
  ena[1166] = HAVE_reduc_smin_scal_v32hi;
  ena[1167] = HAVE_reduc_smin_scal_v16si;
  ena[1168] = HAVE_reduc_smin_scal_v8di;
  ena[1169] = HAVE_reduc_smin_scal_v4sf;
  ena[1170] = HAVE_reduc_smin_scal_v8sf;
  ena[1171] = HAVE_reduc_smin_scal_v4df;
  ena[1172] = HAVE_reduc_smin_scal_v16sf;
  ena[1173] = HAVE_reduc_smin_scal_v8df;
  ena[1174] = HAVE_reduc_plus_scal_v4sf;
  ena[1175] = HAVE_reduc_plus_scal_v2df;
  ena[1176] = HAVE_reduc_plus_scal_v8sf;
  ena[1177] = HAVE_reduc_plus_scal_v4df;
  ena[1178] = HAVE_reduc_plus_scal_v16sf;
  ena[1179] = HAVE_reduc_plus_scal_v8df;
  ena[1180] = HAVE_reduc_umax_scal_v32qi;
  ena[1181] = HAVE_reduc_umax_scal_v16hi;
  ena[1182] = HAVE_reduc_umax_scal_v8si;
  ena[1183] = HAVE_reduc_umax_scal_v4di;
  ena[1184] = HAVE_reduc_umax_scal_v64qi;
  ena[1185] = HAVE_reduc_umax_scal_v32hi;
  ena[1186] = HAVE_reduc_umax_scal_v16si;
  ena[1187] = HAVE_reduc_umax_scal_v8di;
  ena[1188] = HAVE_reduc_umin_scal_v8hi;
  ena[1189] = HAVE_reduc_umin_scal_v32qi;
  ena[1190] = HAVE_reduc_umin_scal_v16hi;
  ena[1191] = HAVE_reduc_umin_scal_v8si;
  ena[1192] = HAVE_reduc_umin_scal_v4di;
  ena[1193] = HAVE_reduc_umin_scal_v64qi;
  ena[1194] = HAVE_reduc_umin_scal_v32hi;
  ena[1195] = HAVE_reduc_umin_scal_v16si;
  ena[1196] = HAVE_reduc_umin_scal_v8di;
  ena[1197] = HAVE_sdot_prodv8hi;
  ena[1198] = HAVE_sdot_prodv4si;
  ena[1199] = HAVE_sdot_prodv16hi;
  ena[1200] = HAVE_sdot_prodv32hi;
  ena[1201] = HAVE_usadv16qi;
  ena[1202] = HAVE_usadv32qi;
  ena[1203] = HAVE_vec_extractv8qi;
  ena[1204] = HAVE_vec_extractv4hi;
  ena[1205] = HAVE_vec_extractv2si;
  ena[1206] = HAVE_vec_extractv16qi;
  ena[1207] = HAVE_vec_extractv8hi;
  ena[1208] = HAVE_vec_extractv4si;
  ena[1209] = HAVE_vec_extractv2di;
  ena[1210] = HAVE_vec_extractv32qi;
  ena[1211] = HAVE_vec_extractv16hi;
  ena[1212] = HAVE_vec_extractv8si;
  ena[1213] = HAVE_vec_extractv4di;
  ena[1214] = HAVE_vec_extractv64qi;
  ena[1215] = HAVE_vec_extractv32hi;
  ena[1216] = HAVE_vec_extractv16si;
  ena[1217] = HAVE_vec_extractv8di;
  ena[1218] = HAVE_vec_extractv2sf;
  ena[1219] = HAVE_vec_extractv4sf;
  ena[1220] = HAVE_vec_extractv2df;
  ena[1221] = HAVE_vec_extractv8sf;
  ena[1222] = HAVE_vec_extractv4df;
  ena[1223] = HAVE_vec_extractv16sf;
  ena[1224] = HAVE_vec_extractv8df;
  ena[1225] = HAVE_vec_initv8qi;
  ena[1226] = HAVE_vec_initv4hi;
  ena[1227] = HAVE_vec_initv2si;
  ena[1228] = HAVE_vec_initv16qi;
  ena[1229] = HAVE_vec_initv8hi;
  ena[1230] = HAVE_vec_initv4si;
  ena[1231] = HAVE_vec_initv2di;
  ena[1232] = HAVE_vec_initv32qi;
  ena[1233] = HAVE_vec_initv16hi;
  ena[1234] = HAVE_vec_initv8si;
  ena[1235] = HAVE_vec_initv4di;
  ena[1236] = HAVE_vec_initv64qi;
  ena[1237] = HAVE_vec_initv32hi;
  ena[1238] = HAVE_vec_initv16si;
  ena[1239] = HAVE_vec_initv8di;
  ena[1240] = HAVE_vec_initv2sf;
  ena[1241] = HAVE_vec_initv4sf;
  ena[1242] = HAVE_vec_initv2df;
  ena[1243] = HAVE_vec_initv8sf;
  ena[1244] = HAVE_vec_initv4df;
  ena[1245] = HAVE_vec_initv16sf;
  ena[1246] = HAVE_vec_initv8df;
  ena[1247] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[1248] = HAVE_vec_pack_sfix_trunc_v4df;
  ena[1249] = HAVE_vec_pack_sfix_trunc_v8df;
  ena[1250] = HAVE_vec_pack_trunc_qi;
  ena[1251] = HAVE_vec_pack_trunc_hi;
  ena[1252] = HAVE_vec_pack_trunc_si;
  ena[1253] = HAVE_vec_pack_trunc_v8hi;
  ena[1254] = HAVE_vec_pack_trunc_v4si;
  ena[1255] = HAVE_vec_pack_trunc_v2di;
  ena[1256] = HAVE_vec_pack_trunc_v16hi;
  ena[1257] = HAVE_vec_pack_trunc_v8si;
  ena[1258] = HAVE_vec_pack_trunc_v4di;
  ena[1259] = HAVE_vec_pack_trunc_v32hi;
  ena[1260] = HAVE_vec_pack_trunc_v16si;
  ena[1261] = HAVE_vec_pack_trunc_v8di;
  ena[1262] = HAVE_vec_pack_trunc_v2df;
  ena[1263] = HAVE_vec_pack_trunc_v4df;
  ena[1264] = HAVE_vec_pack_trunc_v8df;
  ena[1265] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[1266] = HAVE_vec_pack_ufix_trunc_v4df;
  ena[1267] = HAVE_vec_pack_ufix_trunc_v8df;
  ena[1268] = HAVE_vec_perm_constv16qi;
  ena[1269] = HAVE_vec_perm_constv8hi;
  ena[1270] = HAVE_vec_perm_constv4si;
  ena[1271] = HAVE_vec_perm_constv2di;
  ena[1272] = HAVE_vec_perm_constv32qi;
  ena[1273] = HAVE_vec_perm_constv16hi;
  ena[1274] = HAVE_vec_perm_constv8si;
  ena[1275] = HAVE_vec_perm_constv4di;
  ena[1276] = HAVE_vec_perm_constv64qi;
  ena[1277] = HAVE_vec_perm_constv32hi;
  ena[1278] = HAVE_vec_perm_constv16si;
  ena[1279] = HAVE_vec_perm_constv8di;
  ena[1280] = HAVE_vec_perm_constv4sf;
  ena[1281] = HAVE_vec_perm_constv2df;
  ena[1282] = HAVE_vec_perm_constv8sf;
  ena[1283] = HAVE_vec_perm_constv4df;
  ena[1284] = HAVE_vec_perm_constv16sf;
  ena[1285] = HAVE_vec_perm_constv8df;
  ena[1286] = HAVE_vec_permv16qi;
  ena[1287] = HAVE_vec_permv8hi;
  ena[1288] = HAVE_vec_permv4si;
  ena[1289] = HAVE_vec_permv2di;
  ena[1290] = HAVE_vec_permv32qi;
  ena[1291] = HAVE_vec_permv16hi;
  ena[1292] = HAVE_vec_permv8si;
  ena[1293] = HAVE_vec_permv4di;
  ena[1294] = HAVE_vec_permv64qi;
  ena[1295] = HAVE_vec_permv32hi;
  ena[1296] = HAVE_vec_permv16si;
  ena[1297] = HAVE_vec_permv8di;
  ena[1298] = HAVE_vec_permv4sf;
  ena[1299] = HAVE_vec_permv2df;
  ena[1300] = HAVE_vec_permv8sf;
  ena[1301] = HAVE_vec_permv4df;
  ena[1302] = HAVE_vec_permv16sf;
  ena[1303] = HAVE_vec_permv8df;
  ena[1304] = HAVE_vec_setv8qi;
  ena[1305] = HAVE_vec_setv4hi;
  ena[1306] = HAVE_vec_setv2si;
  ena[1307] = HAVE_vec_setv16qi;
  ena[1308] = HAVE_vec_setv8hi;
  ena[1309] = HAVE_vec_setv4si;
  ena[1310] = HAVE_vec_setv2di;
  ena[1311] = HAVE_vec_setv32qi;
  ena[1312] = HAVE_vec_setv16hi;
  ena[1313] = HAVE_vec_setv8si;
  ena[1314] = HAVE_vec_setv4di;
  ena[1315] = HAVE_vec_setv16si;
  ena[1316] = HAVE_vec_setv8di;
  ena[1317] = HAVE_vec_setv2sf;
  ena[1318] = HAVE_vec_setv4sf;
  ena[1319] = HAVE_vec_setv2df;
  ena[1320] = HAVE_vec_setv8sf;
  ena[1321] = HAVE_vec_setv4df;
  ena[1322] = HAVE_vec_setv16sf;
  ena[1323] = HAVE_vec_setv8df;
  ena[1324] = HAVE_vec_shr_v16qi;
  ena[1325] = HAVE_vec_shr_v8hi;
  ena[1326] = HAVE_vec_shr_v4si;
  ena[1327] = HAVE_vec_shr_v2di;
  ena[1328] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[1329] = HAVE_vec_unpacks_float_hi_v4si;
  ena[1330] = HAVE_vec_unpacks_float_hi_v16hi;
  ena[1331] = HAVE_vec_unpacks_float_hi_v8si;
  ena[1332] = HAVE_vec_unpacks_float_hi_v32hi;
  ena[1333] = HAVE_vec_unpacks_float_hi_v16si;
  ena[1334] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[1335] = HAVE_vec_unpacks_float_lo_v4si;
  ena[1336] = HAVE_vec_unpacks_float_lo_v16hi;
  ena[1337] = HAVE_vec_unpacks_float_lo_v8si;
  ena[1338] = HAVE_vec_unpacks_float_lo_v32hi;
  ena[1339] = HAVE_vec_unpacks_float_lo_v16si;
  ena[1340] = HAVE_vec_unpacks_hi_hi;
  ena[1341] = HAVE_vec_unpacks_hi_si;
  ena[1342] = HAVE_vec_unpacks_hi_di;
  ena[1343] = HAVE_vec_unpacks_hi_v16qi;
  ena[1344] = HAVE_vec_unpacks_hi_v8hi;
  ena[1345] = HAVE_vec_unpacks_hi_v4si;
  ena[1346] = HAVE_vec_unpacks_hi_v32qi;
  ena[1347] = HAVE_vec_unpacks_hi_v16hi;
  ena[1348] = HAVE_vec_unpacks_hi_v8si;
  ena[1349] = HAVE_vec_unpacks_hi_v64qi;
  ena[1350] = HAVE_vec_unpacks_hi_v32hi;
  ena[1351] = HAVE_vec_unpacks_hi_v16si;
  ena[1352] = HAVE_vec_unpacks_hi_v4sf;
  ena[1353] = HAVE_vec_unpacks_hi_v8sf;
  ena[1354] = HAVE_vec_unpacks_hi_v16sf;
  ena[1355] = HAVE_vec_unpacks_lo_hi;
  ena[1356] = HAVE_vec_unpacks_lo_si;
  ena[1357] = HAVE_vec_unpacks_lo_di;
  ena[1358] = HAVE_vec_unpacks_lo_v16qi;
  ena[1359] = HAVE_vec_unpacks_lo_v8hi;
  ena[1360] = HAVE_vec_unpacks_lo_v4si;
  ena[1361] = HAVE_vec_unpacks_lo_v32qi;
  ena[1362] = HAVE_vec_unpacks_lo_v16hi;
  ena[1363] = HAVE_vec_unpacks_lo_v8si;
  ena[1364] = HAVE_vec_unpacks_lo_v64qi;
  ena[1365] = HAVE_vec_unpacks_lo_v32hi;
  ena[1366] = HAVE_vec_unpacks_lo_v16si;
  ena[1367] = HAVE_vec_unpacks_lo_v4sf;
  ena[1368] = HAVE_vec_unpacks_lo_v8sf;
  ena[1369] = HAVE_vec_unpacks_lo_v16sf;
  ena[1370] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[1371] = HAVE_vec_unpacku_float_hi_v4si;
  ena[1372] = HAVE_vec_unpacku_float_hi_v16hi;
  ena[1373] = HAVE_vec_unpacku_float_hi_v8si;
  ena[1374] = HAVE_vec_unpacku_float_hi_v32hi;
  ena[1375] = HAVE_vec_unpacku_float_hi_v16si;
  ena[1376] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[1377] = HAVE_vec_unpacku_float_lo_v4si;
  ena[1378] = HAVE_vec_unpacku_float_lo_v16hi;
  ena[1379] = HAVE_vec_unpacku_float_lo_v8si;
  ena[1380] = HAVE_vec_unpacku_float_lo_v32hi;
  ena[1381] = HAVE_vec_unpacku_float_lo_v16si;
  ena[1382] = HAVE_vec_unpacku_hi_v16qi;
  ena[1383] = HAVE_vec_unpacku_hi_v8hi;
  ena[1384] = HAVE_vec_unpacku_hi_v4si;
  ena[1385] = HAVE_vec_unpacku_hi_v32qi;
  ena[1386] = HAVE_vec_unpacku_hi_v16hi;
  ena[1387] = HAVE_vec_unpacku_hi_v8si;
  ena[1388] = HAVE_vec_unpacku_hi_v64qi;
  ena[1389] = HAVE_vec_unpacku_hi_v32hi;
  ena[1390] = HAVE_vec_unpacku_hi_v16si;
  ena[1391] = HAVE_vec_unpacku_lo_v16qi;
  ena[1392] = HAVE_vec_unpacku_lo_v8hi;
  ena[1393] = HAVE_vec_unpacku_lo_v4si;
  ena[1394] = HAVE_vec_unpacku_lo_v32qi;
  ena[1395] = HAVE_vec_unpacku_lo_v16hi;
  ena[1396] = HAVE_vec_unpacku_lo_v8si;
  ena[1397] = HAVE_vec_unpacku_lo_v64qi;
  ena[1398] = HAVE_vec_unpacku_lo_v32hi;
  ena[1399] = HAVE_vec_unpacku_lo_v16si;
  ena[1400] = HAVE_vec_widen_smult_even_v4si;
  ena[1401] = HAVE_vec_widen_smult_even_v8si;
  ena[1402] = HAVE_vec_widen_smult_even_v16si;
  ena[1403] = HAVE_vec_widen_smult_hi_v16qi;
  ena[1404] = HAVE_vec_widen_smult_hi_v8hi;
  ena[1405] = HAVE_vec_widen_smult_hi_v4si;
  ena[1406] = HAVE_vec_widen_smult_hi_v32qi;
  ena[1407] = HAVE_vec_widen_smult_hi_v16hi;
  ena[1408] = HAVE_vec_widen_smult_hi_v8si;
  ena[1409] = HAVE_vec_widen_smult_lo_v16qi;
  ena[1410] = HAVE_vec_widen_smult_lo_v8hi;
  ena[1411] = HAVE_vec_widen_smult_lo_v4si;
  ena[1412] = HAVE_vec_widen_smult_lo_v32qi;
  ena[1413] = HAVE_vec_widen_smult_lo_v16hi;
  ena[1414] = HAVE_vec_widen_smult_lo_v8si;
  ena[1415] = HAVE_vec_widen_smult_odd_v4si;
  ena[1416] = HAVE_vec_widen_smult_odd_v8si;
  ena[1417] = HAVE_vec_widen_smult_odd_v16si;
  ena[1418] = HAVE_vec_widen_umult_even_v4si;
  ena[1419] = HAVE_vec_widen_umult_even_v8si;
  ena[1420] = HAVE_vec_widen_umult_even_v16si;
  ena[1421] = HAVE_vec_widen_umult_hi_v16qi;
  ena[1422] = HAVE_vec_widen_umult_hi_v8hi;
  ena[1423] = HAVE_vec_widen_umult_hi_v4si;
  ena[1424] = HAVE_vec_widen_umult_hi_v32qi;
  ena[1425] = HAVE_vec_widen_umult_hi_v16hi;
  ena[1426] = HAVE_vec_widen_umult_hi_v8si;
  ena[1427] = HAVE_vec_widen_umult_lo_v16qi;
  ena[1428] = HAVE_vec_widen_umult_lo_v8hi;
  ena[1429] = HAVE_vec_widen_umult_lo_v4si;
  ena[1430] = HAVE_vec_widen_umult_lo_v32qi;
  ena[1431] = HAVE_vec_widen_umult_lo_v16hi;
  ena[1432] = HAVE_vec_widen_umult_lo_v8si;
  ena[1433] = HAVE_vec_widen_umult_odd_v4si;
  ena[1434] = HAVE_vec_widen_umult_odd_v8si;
  ena[1435] = HAVE_vec_widen_umult_odd_v16si;
  ena[1436] = HAVE_atomic_addqi;
  ena[1437] = HAVE_atomic_addhi;
  ena[1438] = HAVE_atomic_addsi;
  ena[1439] = HAVE_atomic_adddi;
  ena[1440] = HAVE_atomic_andqi;
  ena[1441] = HAVE_atomic_andhi;
  ena[1442] = HAVE_atomic_andsi;
  ena[1443] = HAVE_atomic_anddi;
  ena[1444] = HAVE_atomic_bit_test_and_sethi;
  ena[1445] = HAVE_atomic_bit_test_and_setsi;
  ena[1446] = HAVE_atomic_bit_test_and_setdi;
  ena[1447] = HAVE_atomic_bit_test_and_complementhi;
  ena[1448] = HAVE_atomic_bit_test_and_complementsi;
  ena[1449] = HAVE_atomic_bit_test_and_complementdi;
  ena[1450] = HAVE_atomic_bit_test_and_resethi;
  ena[1451] = HAVE_atomic_bit_test_and_resetsi;
  ena[1452] = HAVE_atomic_bit_test_and_resetdi;
  ena[1453] = HAVE_atomic_compare_and_swapqi;
  ena[1454] = HAVE_atomic_compare_and_swaphi;
  ena[1455] = HAVE_atomic_compare_and_swapsi;
  ena[1456] = HAVE_atomic_compare_and_swapdi;
  ena[1457] = HAVE_atomic_compare_and_swapti;
  ena[1458] = HAVE_atomic_exchangeqi;
  ena[1459] = HAVE_atomic_exchangehi;
  ena[1460] = HAVE_atomic_exchangesi;
  ena[1461] = HAVE_atomic_exchangedi;
  ena[1462] = HAVE_atomic_fetch_addqi;
  ena[1463] = HAVE_atomic_fetch_addhi;
  ena[1464] = HAVE_atomic_fetch_addsi;
  ena[1465] = HAVE_atomic_fetch_adddi;
  ena[1466] = HAVE_atomic_loadqi;
  ena[1467] = HAVE_atomic_loadhi;
  ena[1468] = HAVE_atomic_loadsi;
  ena[1469] = HAVE_atomic_loaddi;
  ena[1470] = HAVE_atomic_orqi;
  ena[1471] = HAVE_atomic_orhi;
  ena[1472] = HAVE_atomic_orsi;
  ena[1473] = HAVE_atomic_ordi;
  ena[1474] = HAVE_atomic_storeqi;
  ena[1475] = HAVE_atomic_storehi;
  ena[1476] = HAVE_atomic_storesi;
  ena[1477] = HAVE_atomic_storedi;
  ena[1478] = HAVE_atomic_subqi;
  ena[1479] = HAVE_atomic_subhi;
  ena[1480] = HAVE_atomic_subsi;
  ena[1481] = HAVE_atomic_subdi;
  ena[1482] = HAVE_atomic_xorqi;
  ena[1483] = HAVE_atomic_xorhi;
  ena[1484] = HAVE_atomic_xorsi;
  ena[1485] = HAVE_atomic_xordi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

