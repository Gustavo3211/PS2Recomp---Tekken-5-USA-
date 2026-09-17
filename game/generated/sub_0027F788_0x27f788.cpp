#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F788
// Address: 0x27f788 - 0x281298
void sub_0027F788_0x27f788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F788_0x27f788");
#endif

    switch (ctx->pc) {
        case 0x27f7d4u: goto label_27f7d4;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f81cu: goto label_27f81c;
        case 0x27f840u: goto label_27f840;
        case 0x27f870u: goto label_27f870;
        case 0x27f884u: goto label_27f884;
        case 0x27f8a4u: goto label_27f8a4;
        case 0x27f8bcu: goto label_27f8bc;
        case 0x27f904u: goto label_27f904;
        case 0x27f950u: goto label_27f950;
        case 0x27f968u: goto label_27f968;
        case 0x27f9b0u: goto label_27f9b0;
        case 0x27fb20u: goto label_27fb20;
        case 0x27fb44u: goto label_27fb44;
        case 0x27fb64u: goto label_27fb64;
        case 0x27fb88u: goto label_27fb88;
        case 0x27fbc8u: goto label_27fbc8;
        case 0x27fbe0u: goto label_27fbe0;
        case 0x27fbf8u: goto label_27fbf8;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc24u: goto label_27fc24;
        case 0x27fc40u: goto label_27fc40;
        case 0x27fc5cu: goto label_27fc5c;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe7cu: goto label_27fe7c;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fed4u: goto label_27fed4;
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff34u: goto label_27ff34;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27fff4u: goto label_27fff4;
        case 0x280034u: goto label_280034;
        case 0x2800e8u: goto label_2800e8;
        case 0x28014cu: goto label_28014c;
        case 0x280194u: goto label_280194;
        case 0x2802b8u: goto label_2802b8;
        case 0x280330u: goto label_280330;
        case 0x280344u: goto label_280344;
        case 0x280358u: goto label_280358;
        case 0x280368u: goto label_280368;
        case 0x280380u: goto label_280380;
        case 0x280398u: goto label_280398;
        case 0x2803b0u: goto label_2803b0;
        case 0x2803d0u: goto label_2803d0;
        case 0x2803e4u: goto label_2803e4;
        case 0x2803f8u: goto label_2803f8;
        case 0x280420u: goto label_280420;
        case 0x280434u: goto label_280434;
        case 0x280448u: goto label_280448;
        case 0x280458u: goto label_280458;
        case 0x280468u: goto label_280468;
        case 0x280490u: goto label_280490;
        case 0x2804a4u: goto label_2804a4;
        case 0x2804b8u: goto label_2804b8;
        case 0x2804c4u: goto label_2804c4;
        case 0x2804d4u: goto label_2804d4;
        case 0x2804ecu: goto label_2804ec;
        case 0x28053cu: goto label_28053c;
        case 0x2805b0u: goto label_2805b0;
        case 0x2805ccu: goto label_2805cc;
        case 0x2805e4u: goto label_2805e4;
        case 0x2805fcu: goto label_2805fc;
        case 0x280630u: goto label_280630;
        case 0x280688u: goto label_280688;
        case 0x280758u: goto label_280758;
        case 0x2808fcu: goto label_2808fc;
        case 0x280944u: goto label_280944;
        case 0x28095cu: goto label_28095c;
        case 0x280974u: goto label_280974;
        case 0x2809e8u: goto label_2809e8;
        case 0x280a04u: goto label_280a04;
        case 0x280a1cu: goto label_280a1c;
        case 0x280a34u: goto label_280a34;
        case 0x280a68u: goto label_280a68;
        case 0x280ac0u: goto label_280ac0;
        case 0x280b90u: goto label_280b90;
        case 0x280d34u: goto label_280d34;
        case 0x280d7cu: goto label_280d7c;
        case 0x280d98u: goto label_280d98;
        case 0x280da8u: goto label_280da8;
        case 0x280e58u: goto label_280e58;
        case 0x280e74u: goto label_280e74;
        case 0x280e8cu: goto label_280e8c;
        case 0x280ea4u: goto label_280ea4;
        case 0x280ed4u: goto label_280ed4;
        case 0x280f50u: goto label_280f50;
        case 0x28101cu: goto label_28101c;
        case 0x2811d8u: goto label_2811d8;
        case 0x2811f0u: goto label_2811f0;
        case 0x281238u: goto label_281238;
        case 0x281250u: goto label_281250;
        default: break;
    }

    ctx->pc = 0x27f788u;

    // 0x27f788: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x27f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x27f78c: 0xffb10188  sd          $s1, 0x188($sp)
    ctx->pc = 0x27f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 17));
    // 0x27f790: 0xffb30198  sd          $s3, 0x198($sp)
    ctx->pc = 0x27f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 19));
    // 0x27f794: 0xffbe01c0  sd          $fp, 0x1C0($sp)
    ctx->pc = 0x27f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 30));
    // 0x27f798: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x27f798u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f79c: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x27f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x27f7a0: 0xffb20190  sd          $s2, 0x190($sp)
    ctx->pc = 0x27f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 18));
    // 0x27f7a4: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x27f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x27f7a8: 0xffb501a8  sd          $s5, 0x1A8($sp)
    ctx->pc = 0x27f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 21));
    // 0x27f7ac: 0xffb601b0  sd          $s6, 0x1B0($sp)
    ctx->pc = 0x27f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
    // 0x27f7b0: 0xffb701b8  sd          $s7, 0x1B8($sp)
    ctx->pc = 0x27f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 23));
    // 0x27f7b4: 0xffbf01c8  sd          $ra, 0x1C8($sp)
    ctx->pc = 0x27f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 31));
    // 0x27f7b8: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x27f7b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x27f7bc: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x27f7bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x27f7c0: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x27f7c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x27f7c4: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x27f7c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x27f7c8: 0x8fc20894  lw          $v0, 0x894($fp)
    ctx->pc = 0x27f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2196)));
    // 0x27f7cc: 0xc084712  jal         func_211C48
    ctx->pc = 0x27F7CCu;
    SET_GPR_U32(ctx, 31, 0x27F7D4u);
    ctx->pc = 0x27F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7CCu;
    // 0x27f7d0: 0x8c57001c  lw          $s7, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211C48u, 0x27F7CCu, 0x27F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7D4u;
label_27f7d4:
    // 0x27f7d4: 0x87c30012  lh          $v1, 0x12($fp)
    ctx->pc = 0x27f7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x27f7d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7dc: 0x26e201b0  addiu       $v0, $s7, 0x1B0
    ctx->pc = 0x27f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 432));
    // 0x27f7e0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x27f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x27f7e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f7f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f7f8: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x27f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x27f7fc: 0x242139d0  addiu       $at, $at, 0x39D0
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14800));
    // 0x27f800: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x27f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x27f804: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x27F804u;
    SET_GPR_U32(ctx, 31, 0x27F80Cu);
    ctx->pc = 0x27F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F804u;
    // 0x27f808: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x27F804u, 0x27F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F80Cu;
label_27f80c:
    // 0x27f80c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f810: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f814: 0xc0af122  jal         func_2BC488
    ctx->pc = 0x27F814u;
    SET_GPR_U32(ctx, 31, 0x27F81Cu);
    ctx->pc = 0x27F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F814u;
    // 0x27f818: 0xafa2015c  sw          $v0, 0x15C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC488u, 0x27F814u, 0x27F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F81Cu;
label_27f81c:
    // 0x27f81c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27f81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f820: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27f824: 0x8e660894  lw          $a2, 0x894($s3)
    ctx->pc = 0x27f824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2196)));
    // 0x27f828: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f82c: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x27f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x27f830: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x27f834: 0x78620220  lq          $v0, 0x220($v1)
    ctx->pc = 0x27f834u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x27f838: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x27F838u;
    SET_GPR_U32(ctx, 31, 0x27F840u);
    ctx->pc = 0x27F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F838u;
    // 0x27f83c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x27F838u, 0x27F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F840u;
label_27f840:
    // 0x27f840: 0xc6e23638  lwc1        $f2, 0x3638($s7)
    ctx->pc = 0x27f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 13880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f844: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27f848: 0xc6e10270  lwc1        $f1, 0x270($s7)
    ctx->pc = 0x27f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f84c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x27f84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f850: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x27f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f854: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27f854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f858: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27f858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27f85c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27f85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27f860: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x27f860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27f864: 0x8ee50230  lw          $a1, 0x230($s7)
    ctx->pc = 0x27f864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 560)));
    // 0x27f868: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x27F868u;
    SET_GPR_U32(ctx, 31, 0x27F870u);
    ctx->pc = 0x27F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F868u;
    // 0x27f86c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x27F868u, 0x27F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F870u;
label_27f870:
    // 0x27f870: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27f870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f874: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x27f874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f878: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27f878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f87c: 0xc0af1be  jal         func_2BC6F8
    ctx->pc = 0x27F87Cu;
    SET_GPR_U32(ctx, 31, 0x27F884u);
    ctx->pc = 0x27F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F87Cu;
    // 0x27f880: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC6F8u, 0x27F87Cu, 0x27F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F884u;
label_27f884:
    // 0x27f884: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x27f884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x27f888: 0x54c0004c  bnel        $a2, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x27F888u;
    {
        const bool branch_taken_0x27f888 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f888) {
            ctx->pc = 0x27F88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F888u;
            // 0x27f88c: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F9BCu;
            goto label_27f9bc;
        }
    }
    ctx->pc = 0x27F890u;
    // 0x27f890: 0xc6ec0170  lwc1        $f12, 0x170($s7)
    ctx->pc = 0x27f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f894: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x27f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x27f898: 0xc7958e8c  lwc1        $f21, -0x7174($gp)
    ctx->pc = 0x27f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f89c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x27F89Cu;
    SET_GPR_U32(ctx, 31, 0x27F8A4u);
    ctx->pc = 0x27F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F89Cu;
    // 0x27f8a0: 0xc6ed0178  lwc1        $f13, 0x178($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x27F89Cu, 0x27F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8A4u;
label_27f8a4:
    // 0x27f8a4: 0x87c2007a  lh          $v0, 0x7A($fp)
    ctx->pc = 0x27f8a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 122)));
    // 0x27f8a8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27f8a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27f8ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27f8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f8b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27f8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27f8b4: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x27F8B4u;
    SET_GPR_U32(ctx, 31, 0x27F8BCu);
    ctx->pc = 0x27F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8B4u;
    // 0x27f8b8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x27F8B4u, 0x27F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8BCu;
label_27f8bc:
    // 0x27f8bc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27f8bcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27f8c0: 0xc7808e90  lwc1        $f0, -0x7170($gp)
    ctx->pc = 0x27f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f8c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27F8C8u;
    {
        const bool branch_taken_0x27f8c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f8c8) {
            ctx->pc = 0x27F8D8u;
            goto label_27f8d8;
        }
    }
    ctx->pc = 0x27F8D0u;
    // 0x27f8d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27F8D0u;
    {
        const bool branch_taken_0x27f8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8D0u;
        // 0x27f8d4: 0x46150d01  sub.s       $f20, $f1, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8d0) {
            ctx->pc = 0x27F8ECu;
            goto label_27f8ec;
        }
    }
    ctx->pc = 0x27F8D8u;
label_27f8d8:
    // 0x27f8d8: 0xc7808e94  lwc1        $f0, -0x716C($gp)
    ctx->pc = 0x27f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f8e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27F8E0u;
    {
        const bool branch_taken_0x27f8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8E0u;
        // 0x27f8e4: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8e0) {
            ctx->pc = 0x27F8ECu;
            goto label_27f8ec;
        }
    }
    ctx->pc = 0x27F8E8u;
    // 0x27f8e8: 0x46150d00  add.s       $f20, $f1, $f21
    ctx->pc = 0x27f8e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_27f8ec:
    // 0x27f8ec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x27f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27f8f0: 0xc7958e98  lwc1        $f21, -0x7168($gp)
    ctx->pc = 0x27f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f8f4: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x27f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f8f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x27f8f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27f8fc: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x27F8FCu;
    SET_GPR_U32(ctx, 31, 0x27F904u);
    ctx->pc = 0x27F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8FCu;
    // 0x27f900: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x27F8FCu, 0x27F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F904u;
label_27f904:
    // 0x27f904: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27f904u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27f908: 0xc7808e9c  lwc1        $f0, -0x7164($gp)
    ctx->pc = 0x27f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f90c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f910: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27F910u;
    {
        const bool branch_taken_0x27f910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f910) {
            ctx->pc = 0x27F920u;
            goto label_27f920;
        }
    }
    ctx->pc = 0x27F918u;
    // 0x27f918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27F918u;
    {
        const bool branch_taken_0x27f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F918u;
        // 0x27f91c: 0x46150881  sub.s       $f2, $f1, $f21 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f918) {
            ctx->pc = 0x27F934u;
            goto label_27f934;
        }
    }
    ctx->pc = 0x27F920u;
label_27f920:
    // 0x27f920: 0xc7808ea0  lwc1        $f0, -0x7160($gp)
    ctx->pc = 0x27f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f928: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27F928u;
    {
        const bool branch_taken_0x27f928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F928u;
        // 0x27f92c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f928) {
            ctx->pc = 0x27F934u;
            goto label_27f934;
        }
    }
    ctx->pc = 0x27F930u;
    // 0x27f930: 0x46150880  add.s       $f2, $f1, $f21
    ctx->pc = 0x27f930u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_27f934:
    // 0x27f934: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x27f934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27f938: 0xe4740048  swc1        $f20, 0x48($v1)
    ctx->pc = 0x27f938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x27f93c: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x27f93cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x27f940: 0xc7948ea4  lwc1        $f20, -0x715C($gp)
    ctx->pc = 0x27f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f944: 0xc6ec0174  lwc1        $f12, 0x174($s7)
    ctx->pc = 0x27f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f948: 0xc04752e  jal         func_11D4B8
    ctx->pc = 0x27F948u;
    SET_GPR_U32(ctx, 31, 0x27F950u);
    ctx->pc = 0x27F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F948u;
    // 0x27f94c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4B8u, 0x27F948u, 0x27F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F950u;
label_27f950:
    // 0x27f950: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27f950u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27f954: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x27f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27f958: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27f958u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27f95c: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x27f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f960: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x27F960u;
    SET_GPR_U32(ctx, 31, 0x27F968u);
    ctx->pc = 0x27F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F960u;
    // 0x27f964: 0x460cab01  sub.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x27F960u, 0x27F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F968u;
label_27f968:
    // 0x27f968: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27f968u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27f96c: 0xc7808ea8  lwc1        $f0, -0x7158($gp)
    ctx->pc = 0x27f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f970: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f974: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27F974u;
    {
        const bool branch_taken_0x27f974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f974) {
            ctx->pc = 0x27F988u;
            goto label_27f988;
        }
    }
    ctx->pc = 0x27F97Cu;
    // 0x27f97c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F97Cu;
    {
        const bool branch_taken_0x27f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F97Cu;
        // 0x27f980: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f97c) {
            ctx->pc = 0x27F99Cu;
            goto label_27f99c;
        }
    }
    ctx->pc = 0x27F984u;
    // 0x27f984: 0x0  nop
    ctx->pc = 0x27f984u;
    // NOP
label_27f988:
    // 0x27f988: 0xc7808eac  lwc1        $f0, -0x7154($gp)
    ctx->pc = 0x27f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f990: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27F990u;
    {
        const bool branch_taken_0x27f990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F990u;
        // 0x27f994: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f990) {
            ctx->pc = 0x27F99Cu;
            goto label_27f99c;
        }
    }
    ctx->pc = 0x27F998u;
    // 0x27f998: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x27f998u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_27f99c:
    // 0x27f99c: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x27f99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27f9a0: 0xe4c2004c  swc1        $f2, 0x4C($a2)
    ctx->pc = 0x27f9a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x27f9a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27F9A4u;
    {
        const bool branch_taken_0x27f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9A4u;
        // 0x27f9a8: 0xe4d50050  swc1        $f21, 0x50($a2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9a4) {
            ctx->pc = 0x27F9B8u;
            goto label_27f9b8;
        }
    }
    ctx->pc = 0x27F9ACu;
    // 0x27f9ac: 0x0  nop
    ctx->pc = 0x27f9acu;
    // NOP
label_27f9b0:
    // 0x27f9b0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27F9B0u;
    {
        const bool branch_taken_0x27f9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9B0u;
        // 0x27f9b4: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9b0) {
            ctx->pc = 0x27FAB4u;
            goto label_27fab4;
        }
    }
    ctx->pc = 0x27F9B8u;
label_27f9b8:
    // 0x27f9b8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x27f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_27f9bc:
    // 0x27f9bc: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x27F9BCu;
    {
        const bool branch_taken_0x27f9bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9BCu;
        // 0x27f9c0: 0xafa00154  sw          $zero, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9bc) {
            ctx->pc = 0x27FA24u;
            goto label_27fa24;
        }
    }
    ctx->pc = 0x27F9C4u;
    // 0x27f9c4: 0x8fc2069c  lw          $v0, 0x69C($fp)
    ctx->pc = 0x27f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1692)));
    // 0x27f9c8: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27F9C8u;
    {
        const bool branch_taken_0x27f9c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C8u;
        // 0x27f9cc: 0x8f82ca88  lw          $v0, -0x3578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c8) {
            ctx->pc = 0x27FA28u;
            goto label_27fa28;
        }
    }
    ctx->pc = 0x27F9D0u;
    // 0x27f9d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f9d4: 0x8fc400c4  lw          $a0, 0xC4($fp)
    ctx->pc = 0x27f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    // 0x27f9d8: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x27f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x27f9dc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27f9e0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x27f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x27f9e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f9e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27F9E8u;
    {
        const bool branch_taken_0x27f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9E8u;
        // 0x27f9ec: 0x8f82ca88  lw          $v0, -0x3578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9e8) {
            ctx->pc = 0x27FA28u;
            goto label_27fa28;
        }
    }
    ctx->pc = 0x27F9F0u;
    // 0x27f9f0: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x27f9f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x27f9f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27F9F4u;
    {
        const bool branch_taken_0x27f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9F4u;
        // 0x27f9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9f4) {
            ctx->pc = 0x27FA20u;
            goto label_27fa20;
        }
    }
    ctx->pc = 0x27F9FCu;
    // 0x27f9fc: 0x87c30096  lh          $v1, 0x96($fp)
    ctx->pc = 0x27f9fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 150)));
    // 0x27fa00: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x27fa00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x27fa04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27fa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27fa08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FA08u;
    {
        const bool branch_taken_0x27fa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA08u;
        // 0x27fa0c: 0x8f82ca88  lw          $v0, -0x3578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa08) {
            ctx->pc = 0x27FA28u;
            goto label_27fa28;
        }
    }
    ctx->pc = 0x27FA10u;
    // 0x27fa10: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x27fa10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x27fa14: 0x2442ffef  addiu       $v0, $v0, -0x11
    ctx->pc = 0x27fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967279));
    // 0x27fa18: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27fa18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27fa1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27fa1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27fa20:
    // 0x27fa20: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x27fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_27fa24:
    // 0x27fa24: 0x8f82ca88  lw          $v0, -0x3578($gp)
    ctx->pc = 0x27fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
label_27fa28:
    // 0x27fa28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FA28u;
    {
        const bool branch_taken_0x27fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA28u;
        // 0x27fa2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa28) {
            ctx->pc = 0x27FA38u;
            goto label_27fa38;
        }
    }
    ctx->pc = 0x27FA30u;
    // 0x27fa30: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x27fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x27fa34: 0xafa60154  sw          $a2, 0x154($sp)
    ctx->pc = 0x27fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
label_27fa38:
    // 0x27fa38: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27FA38u;
    {
        const bool branch_taken_0x27fa38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA38u;
        // 0x27fa3c: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa38) {
            ctx->pc = 0x27FAB4u;
            goto label_27fab4;
        }
    }
    ctx->pc = 0x27FA40u;
    // 0x27fa40: 0x8fc400c4  lw          $a0, 0xC4($fp)
    ctx->pc = 0x27fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    // 0x27fa44: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27fa48: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x27fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x27fa4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27fa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27fa50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27FA50u;
    {
        const bool branch_taken_0x27fa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA50u;
        // 0x27fa54: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa50) {
            ctx->pc = 0x27FAB8u;
            goto label_27fab8;
        }
    }
    ctx->pc = 0x27FA58u;
    // 0x27fa58: 0xc6e100d4  lwc1        $f1, 0xD4($s7)
    ctx->pc = 0x27fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fa5c: 0xc7808eb0  lwc1        $f0, -0x7150($gp)
    ctx->pc = 0x27fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fa60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27fa60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fa64: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x27FA64u;
    {
        const bool branch_taken_0x27fa64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fa64) {
            ctx->pc = 0x27FAB8u;
            goto label_27fab8;
        }
    }
    ctx->pc = 0x27FA6Cu;
    // 0x27fa6c: 0x8fc2069c  lw          $v0, 0x69C($fp)
    ctx->pc = 0x27fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1692)));
    // 0x27fa70: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27FA70u;
    {
        const bool branch_taken_0x27fa70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27fa70) {
            ctx->pc = 0x27FAB8u;
            goto label_27fab8;
        }
    }
    ctx->pc = 0x27FA78u;
    // 0x27fa78: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x27fa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x27fa7c: 0x1040ffcc  beqz        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27FA7Cu;
    {
        const bool branch_taken_0x27fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA7Cu;
        // 0x27fa80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa7c) {
            ctx->pc = 0x27F9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f9b0;
        }
    }
    ctx->pc = 0x27FA84u;
    // 0x27fa84: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x27fa84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x27fa88: 0x87c30096  lh          $v1, 0x96($fp)
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 150)));
    // 0x27fa8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27fa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27fa90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FA90u;
    {
        const bool branch_taken_0x27fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA90u;
        // 0x27fa94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa90) {
            ctx->pc = 0x27FAB0u;
            goto label_27fab0;
        }
    }
    ctx->pc = 0x27FA98u;
    // 0x27fa98: 0x97c20170  lhu         $v0, 0x170($fp)
    ctx->pc = 0x27fa98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 368)));
    // 0x27fa9c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x27fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x27faa0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27faa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27faa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FAA4u;
    {
        const bool branch_taken_0x27faa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAA4u;
        // 0x27faa8: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27faa4) {
            ctx->pc = 0x27FAB8u;
            goto label_27fab8;
        }
    }
    ctx->pc = 0x27FAACu;
    // 0x27faac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fab0:
    // 0x27fab0: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x27fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_27fab4:
    // 0x27fab4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x27fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_27fab8:
    // 0x27fab8: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x27FAB8u;
    {
        const bool branch_taken_0x27fab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAB8u;
        // 0x27fabc: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fab8) {
            ctx->pc = 0x27FB90u;
            goto label_27fb90;
        }
    }
    ctx->pc = 0x27FAC0u;
    // 0x27fac0: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x27fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x27fac4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FAC4u;
    {
        const bool branch_taken_0x27fac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAC4u;
        // 0x27fac8: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fac4) {
            ctx->pc = 0x27FAE0u;
            goto label_27fae0;
        }
    }
    ctx->pc = 0x27FACCu;
    // 0x27facc: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x27faccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27fad0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x27fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x27fad4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x27fad8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x27fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x27fadc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x27fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_27fae0:
    // 0x27fae0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x27fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27fae4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27FAE4u;
    {
        const bool branch_taken_0x27fae4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27fae4) {
            ctx->pc = 0x27FAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FAE4u;
            // 0x27fae8: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FAECu;
            goto label_27faec;
        }
    }
    ctx->pc = 0x27FAECu;
label_27faec:
    // 0x27faec: 0x26e501f0  addiu       $a1, $s7, 0x1F0
    ctx->pc = 0x27faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
    // 0x27faf0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x27faf4: 0xafa50178  sw          $a1, 0x178($sp)
    ctx->pc = 0x27faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 5));
    // 0x27faf8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x27faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fafc: 0x24424590  addiu       $v0, $v0, 0x4590
    ctx->pc = 0x27fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17808));
    // 0x27fb00: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27fb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb04: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x27fb04u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x474590u));
    // 0x27fb08: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x27fb08u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x474598u));
    // 0x27fb0c: 0x26e20280  addiu       $v0, $s7, 0x280
    ctx->pc = 0x27fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 640));
    // 0x27fb10: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x27fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x27fb14: 0xffa600a8  sd          $a2, 0xA8($sp)
    ctx->pc = 0x27fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 6));
    // 0x27fb18: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x27FB18u;
    SET_GPR_U32(ctx, 31, 0x27FB20u);
    ctx->pc = 0x27FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB18u;
    // 0x27fb1c: 0xffa300a0  sd          $v1, 0xA0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x27FB18u, 0x27FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB20u;
label_27fb20:
    // 0x27fb20: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x27fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fb24: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x27fb24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fb28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x27fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27fb2c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x27fb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb30: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fb34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27fb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb3c: 0xc08491e  jal         func_212478
    ctx->pc = 0x27FB3Cu;
    SET_GPR_U32(ctx, 31, 0x27FB44u);
    ctx->pc = 0x27FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB3Cu;
    // 0x27fb40: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x27FB3Cu, 0x27FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB44u;
label_27fb44:
    // 0x27fb44: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x27fb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x27fb48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fb4c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fb50: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x27fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x27fb54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb58: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x27fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x27fb5c: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x27FB5Cu;
    SET_GPR_U32(ctx, 31, 0x27FB64u);
    ctx->pc = 0x27FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB5Cu;
    // 0x27fb60: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x27FB5Cu, 0x27FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB64u;
label_27fb64:
    // 0x27fb64: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fb68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27fb6c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x27fb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fb70: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27fb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb74: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x27fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fb78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x27fb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb80: 0xc08491e  jal         func_212478
    ctx->pc = 0x27FB80u;
    SET_GPR_U32(ctx, 31, 0x27FB88u);
    ctx->pc = 0x27FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB80u;
    // 0x27fb84: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x27FB80u, 0x27FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB88u;
label_27fb88:
    // 0x27fb88: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x27FB88u;
    {
        const bool branch_taken_0x27fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB88u;
        // 0x27fb8c: 0x27b200c0  addiu       $s2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb88) {
            ctx->pc = 0x27FCBCu;
            goto label_27fcbc;
        }
    }
    ctx->pc = 0x27FB90u;
label_27fb90:
    // 0x27fb90: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x27fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fb94: 0x244245a0  addiu       $v0, $v0, 0x45A0
    ctx->pc = 0x27fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17824));
    // 0x27fb98: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27fb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27fb9c: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x27fb9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27fba0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fba4: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x27fba4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27fba8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27fbac: 0xffa300b8  sd          $v1, 0xB8($sp)
    ctx->pc = 0x27fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
    // 0x27fbb0: 0x26e301f0  addiu       $v1, $s7, 0x1F0
    ctx->pc = 0x27fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
    // 0x27fbb4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27fbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27fbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbbc: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x27fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x27fbc0: 0xc084784  jal         func_211E10
    ctx->pc = 0x27FBC0u;
    SET_GPR_U32(ctx, 31, 0x27FBC8u);
    ctx->pc = 0x27FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBC0u;
    // 0x27fbc4: 0xffa700b0  sd          $a3, 0xB0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x27FBC0u, 0x27FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBC8u;
label_27fbc8:
    // 0x27fbc8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x27fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27fbcc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x27fbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27fbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbd8: 0xc08480c  jal         func_212030
    ctx->pc = 0x27FBD8u;
    SET_GPR_U32(ctx, 31, 0x27FBE0u);
    ctx->pc = 0x27FBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBD8u;
    // 0x27fbdc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x27FBD8u, 0x27FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBE0u;
label_27fbe0:
    // 0x27fbe0: 0x26e60280  addiu       $a2, $s7, 0x280
    ctx->pc = 0x27fbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 640));
    // 0x27fbe4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x27fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27fbe8: 0xafa60174  sw          $a2, 0x174($sp)
    ctx->pc = 0x27fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 6));
    // 0x27fbec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf0: 0xc0847da  jal         func_211F68
    ctx->pc = 0x27FBF0u;
    SET_GPR_U32(ctx, 31, 0x27FBF8u);
    ctx->pc = 0x27FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBF0u;
    // 0x27fbf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x27FBF0u, 0x27FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBF8u;
label_27fbf8:
    // 0x27fbf8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x27fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27fbfc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x27fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27fc00: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x27fc00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27fc04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc08: 0xc46c0028  lwc1        $f12, 0x28($v1)
    ctx->pc = 0x27fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fc0c: 0xc097066  jal         func_25C198
    ctx->pc = 0x27FC0Cu;
    SET_GPR_U32(ctx, 31, 0x27FC14u);
    ctx->pc = 0x27FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC0Cu;
    // 0x27fc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x27FC0Cu, 0x27FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC14u;
label_27fc14:
    // 0x27fc14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc18: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x27fc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27fc1c: 0xc097084  jal         func_25C210
    ctx->pc = 0x27FC1Cu;
    SET_GPR_U32(ctx, 31, 0x27FC24u);
    ctx->pc = 0x27FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC1Cu;
    // 0x27fc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x27FC1Cu, 0x27FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC24u;
label_27fc24:
    // 0x27fc24: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x27fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fc28: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x27fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x27fc2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27fc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27fc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27fc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc38: 0xc08491e  jal         func_212478
    ctx->pc = 0x27FC38u;
    SET_GPR_U32(ctx, 31, 0x27FC40u);
    ctx->pc = 0x27FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC38u;
    // 0x27fc3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x27FC38u, 0x27FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC40u;
label_27fc40:
    // 0x27fc40: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x27fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27fc44: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27fc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27fc48: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x27fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fc4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27fc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc50: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc54: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x27FC54u;
    SET_GPR_U32(ctx, 31, 0x27FC5Cu);
    ctx->pc = 0x27FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC54u;
    // 0x27fc58: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x27FC54u, 0x27FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC5Cu;
label_27fc5c:
    // 0x27fc5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27fc60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fc64: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x27fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27fc68: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27fc6c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x27fc6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fc70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x27fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x27fc74: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x27fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x27fc78: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x27fc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27fc7c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x27FC7Cu;
    {
        const bool branch_taken_0x27fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fc7c) {
            ctx->pc = 0x27FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FC7Cu;
            // 0x27fc80: 0x8fa30154  lw          $v1, 0x154($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FCC0u;
            goto label_27fcc0;
        }
    }
    ctx->pc = 0x27FC84u;
    // 0x27fc84: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x27fc84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x27fc88: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FC88u;
    {
        const bool branch_taken_0x27fc88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC88u;
        // 0x27fc8c: 0x26e601f0  addiu       $a2, $s7, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc88) {
            ctx->pc = 0x27FCB0u;
            goto label_27fcb0;
        }
    }
    ctx->pc = 0x27FC90u;
    // 0x27fc90: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27fc94: 0x26e301f0  addiu       $v1, $s7, 0x1F0
    ctx->pc = 0x27fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
    // 0x27fc98: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x27fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x27fc9c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x27fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x27fca0: 0x26e50280  addiu       $a1, $s7, 0x280
    ctx->pc = 0x27fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 640));
    // 0x27fca4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27FCA4u;
    {
        const bool branch_taken_0x27fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCA4u;
        // 0x27fca8: 0xafa50174  sw          $a1, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fca4) {
            ctx->pc = 0x27FCBCu;
            goto label_27fcbc;
        }
    }
    ctx->pc = 0x27FCACu;
    // 0x27fcac: 0x0  nop
    ctx->pc = 0x27fcacu;
    // NOP
label_27fcb0:
    // 0x27fcb0: 0x26e20280  addiu       $v0, $s7, 0x280
    ctx->pc = 0x27fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 640));
    // 0x27fcb4: 0xafa60178  sw          $a2, 0x178($sp)
    ctx->pc = 0x27fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 6));
    // 0x27fcb8: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x27fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_27fcbc:
    // 0x27fcbc: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x27fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_27fcc0:
    // 0x27fcc0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FCC0u;
    {
        const bool branch_taken_0x27fcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fcc0) {
            ctx->pc = 0x27FCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FCC0u;
            // 0x27fcc4: 0x8e620894  lw          $v0, 0x894($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FCD0u;
            goto label_27fcd0;
        }
    }
    ctx->pc = 0x27FCC8u;
    // 0x27fcc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27FCC8u;
    {
        const bool branch_taken_0x27fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCC8u;
        // 0x27fccc: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcc8) {
            ctx->pc = 0x27FD14u;
            goto label_27fd14;
        }
    }
    ctx->pc = 0x27FCD0u;
label_27fcd0:
    // 0x27fcd0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x27fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fcd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcd8: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x27fcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27fcdc: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x27FCDCu;
    SET_GPR_U32(ctx, 31, 0x27FCE4u);
    ctx->pc = 0x27FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCDCu;
    // 0x27fce0: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x27FCDCu, 0x27FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCE4u;
label_27fce4:
    // 0x27fce4: 0xc6010270  lwc1        $f1, 0x270($s0)
    ctx->pc = 0x27fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fce8: 0xc6023638  lwc1        $f2, 0x3638($s0)
    ctx->pc = 0x27fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 13880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27fcec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x27fcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fcf0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x27fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fcf4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x27fcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27fcf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27fcfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27fcfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27fd00: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x27fd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x27fd04: 0x8e050230  lw          $a1, 0x230($s0)
    ctx->pc = 0x27fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x27fd08: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x27FD08u;
    SET_GPR_U32(ctx, 31, 0x27FD10u);
    ctx->pc = 0x27FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD08u;
    // 0x27fd0c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x27FD08u, 0x27FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD10u;
label_27fd10:
    // 0x27fd10: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x27fd10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27fd14:
    // 0x27fd14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x27fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x27fd18: 0x87c20148  lh          $v0, 0x148($fp)
    ctx->pc = 0x27fd18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 328)));
    // 0x27fd1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27FD1Cu;
    {
        const bool branch_taken_0x27fd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD1Cu;
        // 0x27fd20: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd1c) {
            ctx->pc = 0x27FD50u;
            goto label_27fd50;
        }
    }
    ctx->pc = 0x27FD24u;
    // 0x27fd24: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x27FD24u;
    {
        const bool branch_taken_0x27fd24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD24u;
        // 0x27fd28: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd24) {
            ctx->pc = 0x27FD54u;
            goto label_27fd54;
        }
    }
    ctx->pc = 0x27FD2Cu;
    // 0x27fd2c: 0xc6e100d4  lwc1        $f1, 0xD4($s7)
    ctx->pc = 0x27fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fd30: 0xc7808eb4  lwc1        $f0, -0x714C($gp)
    ctx->pc = 0x27fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fd34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27fd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fd38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x27FD38u;
    {
        const bool branch_taken_0x27fd38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD38u;
        // 0x27fd3c: 0x244245b0  addiu       $v0, $v0, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd38) {
            ctx->pc = 0x27FD58u;
            goto label_27fd58;
        }
    }
    ctx->pc = 0x27FD40u;
    // 0x27fd40: 0x8fc2069c  lw          $v0, 0x69C($fp)
    ctx->pc = 0x27fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1692)));
    // 0x27fd44: 0x5c400014  bgtzl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27FD44u;
    {
        const bool branch_taken_0x27fd44 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x27fd44) {
            ctx->pc = 0x27FD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FD44u;
            // 0x27fd48: 0x8fc300c4  lw          $v1, 0xC4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FD98u;
            goto label_27fd98;
        }
    }
    ctx->pc = 0x27FD4Cu;
    // 0x27fd4c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x27fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_27fd50:
    // 0x27fd50: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_27fd54:
    // 0x27fd54: 0x244245b0  addiu       $v0, $v0, 0x45B0
    ctx->pc = 0x27fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
label_27fd58:
    // 0x27fd58: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x27fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x27fd5c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x27fd5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27fd60: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x27fd60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27fd64: 0xffa400a0  sd          $a0, 0xA0($sp)
    ctx->pc = 0x27fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 4));
    // 0x27fd68: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FD68u;
    {
        const bool branch_taken_0x27fd68 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x27FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD68u;
        // 0x27fd6c: 0xffa300a8  sd          $v1, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd68) {
            ctx->pc = 0x27FD88u;
            goto label_27fd88;
        }
    }
    ctx->pc = 0x27FD70u;
    // 0x27fd70: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x27fd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x27fd74: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FD74u;
    {
        const bool branch_taken_0x27fd74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fd74) {
            ctx->pc = 0x27FD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FD74u;
            // 0x27fd78: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FD8Cu;
            goto label_27fd8c;
        }
    }
    ctx->pc = 0x27FD7Cu;
    // 0x27fd7c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x27fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27fd80: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x27fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27fd84: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x27fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_27fd88:
    // 0x27fd88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27fd8c:
    // 0x27fd8c: 0xc7cc0020  lwc1        $f12, 0x20($fp)
    ctx->pc = 0x27fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd90: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27FD90u;
    {
        const bool branch_taken_0x27fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD90u;
        // 0x27fd94: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd90) {
            ctx->pc = 0x27FE58u;
            goto label_27fe58;
        }
    }
    ctx->pc = 0x27FD98u;
label_27fd98:
    // 0x27fd98: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x27fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x27fd9c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27fd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27fda0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FDA0u;
    {
        const bool branch_taken_0x27fda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDA0u;
        // 0x27fda4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fda0) {
            ctx->pc = 0x27FDB8u;
            goto label_27fdb8;
        }
    }
    ctx->pc = 0x27FDA8u;
    // 0x27fda8: 0x8fc200cc  lw          $v0, 0xCC($fp)
    ctx->pc = 0x27fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 204)));
    // 0x27fdac: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x27fdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x27fdb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27FDB0u;
    {
        const bool branch_taken_0x27fdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDB0u;
        // 0x27fdb4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdb0) {
            ctx->pc = 0x27FDF8u;
            goto label_27fdf8;
        }
    }
    ctx->pc = 0x27FDB8u;
label_27fdb8:
    // 0x27fdb8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fdbc: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x27fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x27fdc0: 0xc7cc0074  lwc1        $f12, 0x74($fp)
    ctx->pc = 0x27fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fdc4: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x27fdc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27fdc8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdcc: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x27fdccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27fdd0: 0xffa500a0  sd          $a1, 0xA0($sp)
    ctx->pc = 0x27fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 5));
    // 0x27fdd4: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x27FDD4u;
    SET_GPR_U32(ctx, 31, 0x27FDDCu);
    ctx->pc = 0x27FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDD4u;
    // 0x27fdd8: 0xffa300a8  sd          $v1, 0xA8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x27FDD4u, 0x27FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDDCu;
label_27fddc:
    // 0x27fddc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x27fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fde0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x27fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fde4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27fde8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27fde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27FDECu;
    {
        const bool branch_taken_0x27fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDECu;
        // 0x27fdf0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdec) {
            ctx->pc = 0x27FE74u;
            goto label_27fe74;
        }
    }
    ctx->pc = 0x27FDF4u;
    // 0x27fdf4: 0x0  nop
    ctx->pc = 0x27fdf4u;
    // NOP
label_27fdf8:
    // 0x27fdf8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x27fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x27fdfc: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x27FDFCu;
    {
        const bool branch_taken_0x27fdfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDFCu;
        // 0x27fe00: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdfc) {
            ctx->pc = 0x27FEA0u;
            goto label_27fea0;
        }
    }
    ctx->pc = 0x27FE04u;
    // 0x27fe04: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x27fe08: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x27fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27fe0c: 0x244245d0  addiu       $v0, $v0, 0x45D0
    ctx->pc = 0x27fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17872));
    // 0x27fe10: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x27fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x27fe14: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x27fe14u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4745D8u));
    // 0x27fe18: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x27fe18u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x4745D0u));
    // 0x27fe1c: 0xffa300a8  sd          $v1, 0xA8($sp)
    ctx->pc = 0x27fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
    // 0x27fe20: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FE20u;
    {
        const bool branch_taken_0x27fe20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x27FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE20u;
        // 0x27fe24: 0xffa400a0  sd          $a0, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe20) {
            ctx->pc = 0x27FE3Cu;
            goto label_27fe3c;
        }
    }
    ctx->pc = 0x27FE28u;
    // 0x27fe28: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x27fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x27fe2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FE2Cu;
    {
        const bool branch_taken_0x27fe2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fe2c) {
            ctx->pc = 0x27FE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FE2Cu;
            // 0x27fe30: 0x87c2007a  lh          $v0, 0x7A($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 122)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FE40u;
            goto label_27fe40;
        }
    }
    ctx->pc = 0x27FE34u;
    // 0x27fe34: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x27fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27fe38: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x27fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
label_27fe3c:
    // 0x27fe3c: 0x87c2007a  lh          $v0, 0x7A($fp)
    ctx->pc = 0x27fe3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 122)));
label_27fe40:
    // 0x27fe40: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fe44: 0xc7808eb8  lwc1        $f0, -0x7148($gp)
    ctx->pc = 0x27fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fe48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27fe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fe50: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27fe50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27fe54: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x27fe54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_27fe58:
    // 0x27fe58: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x27FE58u;
    SET_GPR_U32(ctx, 31, 0x27FE60u);
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x27FE58u, 0x27FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE60u;
label_27fe60:
    // 0x27fe60: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x27fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fe64: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x27fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fe68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27fe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27fe6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27fe74:
    // 0x27fe74: 0xc08491e  jal         func_212478
    ctx->pc = 0x27FE74u;
    SET_GPR_U32(ctx, 31, 0x27FE7Cu);
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x27FE74u, 0x27FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE7Cu;
label_27fe7c:
    // 0x27fe7c: 0x26e607c0  addiu       $a2, $s7, 0x7C0
    ctx->pc = 0x27fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1984));
    // 0x27fe80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27fe84: 0xc084774  jal         func_211DD0
    ctx->pc = 0x27FE84u;
    SET_GPR_U32(ctx, 31, 0x27FE8Cu);
    ctx->pc = 0x27FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE84u;
    // 0x27fe88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x27FE84u, 0x27FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE8Cu;
label_27fe8c:
    // 0x27fe8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27fe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27fe90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fe90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fe94: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x27fe94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27fe98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27FE98u;
    {
        const bool branch_taken_0x27fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE98u;
        // 0x27fe9c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe98) {
            ctx->pc = 0x27FEBCu;
            goto label_27febc;
        }
    }
    ctx->pc = 0x27FEA0u;
label_27fea0:
    // 0x27fea0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x27fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27fea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fea8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x27fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x27feac: 0xc6e007c4  lwc1        $f0, 0x7C4($s7)
    ctx->pc = 0x27feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27feb0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27feb4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x27feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x27feb8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27feb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27febc:
    // 0x27febc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x27febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27fec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fec4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x27fec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27fec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fecc: 0xc04a151  jal         func_128544
    ctx->pc = 0x27FECCu;
    SET_GPR_U32(ctx, 31, 0x27FED4u);
    ctx->pc = 0x27FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FECCu;
    // 0x27fed0: 0xc7d60020  lwc1        $f22, 0x20($fp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x27FECCu, 0x27FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FED4u;
label_27fed4:
    // 0x27fed4: 0x87c30012  lh          $v1, 0x12($fp)
    ctx->pc = 0x27fed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x27fed8: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x27fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x27fedc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x27fedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x27fee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fee4: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x27fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x27fee8: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x27fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x27feec: 0x24a339d0  addiu       $v1, $a1, 0x39D0
    ctx->pc = 0x27feecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
    // 0x27fef0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x27fef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x27fef4: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x27fef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x27fef8: 0xc6ec07a0  lwc1        $f12, 0x7A0($s7)
    ctx->pc = 0x27fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fefc: 0xc6ed07a8  lwc1        $f13, 0x7A8($s7)
    ctx->pc = 0x27fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27ff00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x27ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27ff04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27ff08: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x27ff08u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x27ff0c: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x27ff0cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x27ff10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ff14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27ff18: 0xc7948ebc  lwc1        $f20, -0x7144($gp)
    ctx->pc = 0x27ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ff1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ff20: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x27FF20u;
    SET_GPR_U32(ctx, 31, 0x27FF28u);
    ctx->pc = 0x27FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF20u;
    // 0x27ff24: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x27FF20u, 0x27FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF28u;
label_27ff28:
    // 0x27ff28: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27ff28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27ff2c: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x27FF2Cu;
    SET_GPR_U32(ctx, 31, 0x27FF34u);
    ctx->pc = 0x27FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF2Cu;
    // 0x27ff30: 0x46160301  sub.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x27FF2Cu, 0x27FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF34u;
label_27ff34:
    // 0x27ff34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27ff34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27ff38: 0xc7808ec0  lwc1        $f0, -0x7140($gp)
    ctx->pc = 0x27ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ff3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ff3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ff40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27FF40u;
    {
        const bool branch_taken_0x27ff40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ff40) {
            ctx->pc = 0x27FF50u;
            goto label_27ff50;
        }
    }
    ctx->pc = 0x27FF48u;
    // 0x27ff48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27FF48u;
    {
        const bool branch_taken_0x27ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF48u;
        // 0x27ff4c: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff48) {
            ctx->pc = 0x27FF64u;
            goto label_27ff64;
        }
    }
    ctx->pc = 0x27FF50u;
label_27ff50:
    // 0x27ff50: 0xc7808ec4  lwc1        $f0, -0x713C($gp)
    ctx->pc = 0x27ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ff54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ff54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ff58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27FF58u;
    {
        const bool branch_taken_0x27ff58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF58u;
        // 0x27ff5c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff58) {
            ctx->pc = 0x27FF64u;
            goto label_27ff64;
        }
    }
    ctx->pc = 0x27FF60u;
    // 0x27ff60: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x27ff60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_27ff64:
    // 0x27ff64: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x27ff64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
    // 0x27ff68: 0xc7818ec8  lwc1        $f1, -0x7138($gp)
    ctx->pc = 0x27ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ff6c: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x27ff6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
    // 0x27ff70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ff70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ff74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27FF74u;
    {
        const bool branch_taken_0x27ff74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF74u;
        // 0x27ff78: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff74) {
            ctx->pc = 0x27FF80u;
            goto label_27ff80;
        }
    }
    ctx->pc = 0x27FF7Cu;
    // 0x27ff7c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27ff7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_27ff80:
    // 0x27ff80: 0x544000e3  bnel        $v0, $zero, . + 4 + (0xE3 << 2)
    ctx->pc = 0x27FF80u;
    {
        const bool branch_taken_0x27ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ff80) {
            ctx->pc = 0x27FF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FF80u;
            // 0x27ff84: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280310u;
            goto label_280310;
        }
    }
    ctx->pc = 0x27FF88u;
    // 0x27ff88: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x27ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x27ff8c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27FF8Cu;
    {
        const bool branch_taken_0x27ff8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF8Cu;
        // 0x27ff90: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff8c) {
            ctx->pc = 0x27FFC0u;
            goto label_27ffc0;
        }
    }
    ctx->pc = 0x27FF94u;
    // 0x27ff94: 0x8fc300c4  lw          $v1, 0xC4($fp)
    ctx->pc = 0x27ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    // 0x27ff98: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x27ff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x27ff9c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x27ff9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27ffa0: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x27ffa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x27ffa4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27FFA4u;
    {
        const bool branch_taken_0x27ffa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ffa4) {
            ctx->pc = 0x27FFC8u;
            goto label_27ffc8;
        }
    }
    ctx->pc = 0x27FFACu;
    // 0x27ffac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27ffb0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x27ffb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x27ffb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27FFB4u;
    {
        const bool branch_taken_0x27ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFB4u;
        // 0x27ffb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffb4) {
            ctx->pc = 0x27FFCCu;
            goto label_27ffcc;
        }
    }
    ctx->pc = 0x27FFBCu;
    // 0x27ffbc: 0x0  nop
    ctx->pc = 0x27ffbcu;
    // NOP
label_27ffc0:
    // 0x27ffc0: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x27ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x27ffc4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x27ffc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_27ffc8:
    // 0x27ffc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ffcc:
    // 0x27ffcc: 0xc7948ecc  lwc1        $f20, -0x7134($gp)
    ctx->pc = 0x27ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ffd0: 0xc084784  jal         func_211E10
    ctx->pc = 0x27FFD0u;
    SET_GPR_U32(ctx, 31, 0x27FFD8u);
    ctx->pc = 0x27FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFD0u;
    // 0x27ffd4: 0x26e607c0  addiu       $a2, $s7, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x27FFD0u, 0x27FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFD8u;
label_27ffd8:
    // 0x27ffd8: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x27ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x27ffdc: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x27ffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ffe0: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x27FFE0u;
    SET_GPR_U32(ctx, 31, 0x27FFE8u);
    ctx->pc = 0x27FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE0u;
    // 0x27ffe4: 0xc7ad00d8  lwc1        $f13, 0xD8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x27FFE0u, 0x27FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFE8u;
label_27ffe8:
    // 0x27ffe8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27ffe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27ffec: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x27FFECu;
    SET_GPR_U32(ctx, 31, 0x27FFF4u);
    ctx->pc = 0x27FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFECu;
    // 0x27fff0: 0x46160301  sub.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x27FFECu, 0x27FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFF4u;
label_27fff4:
    // 0x27fff4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27fff4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27fff8: 0xc7808ed0  lwc1        $f0, -0x7130($gp)
    ctx->pc = 0x27fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27fffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280000: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280000u;
    {
        const bool branch_taken_0x280000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280000) {
            ctx->pc = 0x280010u;
            goto label_280010;
        }
    }
    ctx->pc = 0x280008u;
    // 0x280008: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280008u;
    {
        const bool branch_taken_0x280008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280008u;
        // 0x28000c: 0x46140b01  sub.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280008) {
            ctx->pc = 0x280024u;
            goto label_280024;
        }
    }
    ctx->pc = 0x280010u;
label_280010:
    // 0x280010: 0xc7808ed4  lwc1        $f0, -0x712C($gp)
    ctx->pc = 0x280010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280018: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x280018u;
    {
        const bool branch_taken_0x280018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280018u;
        // 0x28001c: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280018) {
            ctx->pc = 0x280024u;
            goto label_280024;
        }
    }
    ctx->pc = 0x280020u;
    // 0x280020: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x280020u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_280024:
    // 0x280024: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x280024u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x280028: 0xc7948ed8  lwc1        $f20, -0x7128($gp)
    ctx->pc = 0x280028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28002c: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x28002Cu;
    SET_GPR_U32(ctx, 31, 0x280034u);
    ctx->pc = 0x280030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28002Cu;
    // 0x280030: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x28002Cu, 0x280034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280034u;
label_280034:
    // 0x280034: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x280034u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x280038: 0xc7808edc  lwc1        $f0, -0x7124($gp)
    ctx->pc = 0x280038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28003c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28003cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280040: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280040u;
    {
        const bool branch_taken_0x280040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280040) {
            ctx->pc = 0x280050u;
            goto label_280050;
        }
    }
    ctx->pc = 0x280048u;
    // 0x280048: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280048u;
    {
        const bool branch_taken_0x280048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280048u;
        // 0x28004c: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280048) {
            ctx->pc = 0x280064u;
            goto label_280064;
        }
    }
    ctx->pc = 0x280050u;
label_280050:
    // 0x280050: 0xc7808ee0  lwc1        $f0, -0x7120($gp)
    ctx->pc = 0x280050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280058: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x280058u;
    {
        const bool branch_taken_0x280058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280058u;
        // 0x28005c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280058) {
            ctx->pc = 0x280064u;
            goto label_280064;
        }
    }
    ctx->pc = 0x280060u;
    // 0x280060: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x280060u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_280064:
    // 0x280064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280068: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x280068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x28006c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x28006cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280070: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x280070u;
    {
        const bool branch_taken_0x280070 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x280074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280070u;
        // 0x280074: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280070) {
            ctx->pc = 0x28007Cu;
            goto label_28007c;
        }
    }
    ctx->pc = 0x280078u;
    // 0x280078: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x280078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28007c:
    // 0x28007c: 0xc7808ee4  lwc1        $f0, -0x711C($gp)
    ctx->pc = 0x28007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280080: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x280080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280084: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x280084u;
    {
        const bool branch_taken_0x280084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280084) {
            ctx->pc = 0x280098u;
            goto label_280098;
        }
    }
    ctx->pc = 0x28008Cu;
    // 0x28008c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28008Cu;
    {
        const bool branch_taken_0x28008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28008Cu;
        // 0x280090: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28008c) {
            ctx->pc = 0x2800A8u;
            goto label_2800a8;
        }
    }
    ctx->pc = 0x280094u;
    // 0x280094: 0x0  nop
    ctx->pc = 0x280094u;
    // NOP
label_280098:
    // 0x280098: 0xc7808ee8  lwc1        $f0, -0x7118($gp)
    ctx->pc = 0x280098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28009c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x28009cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2800a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2800A0u;
    {
        const bool branch_taken_0x2800a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2800a0) {
            ctx->pc = 0x2800A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800A0u;
            // 0x2800a4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800A8u;
            goto label_2800a8;
        }
    }
    ctx->pc = 0x2800A8u;
label_2800a8:
    // 0x2800a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2800ac: 0x16240004  bne         $s1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2800ACu;
    {
        const bool branch_taken_0x2800ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x2800B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800ACu;
        // 0x2800b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800ac) {
            ctx->pc = 0x2800C0u;
            goto label_2800c0;
        }
    }
    ctx->pc = 0x2800B4u;
    // 0x2800b4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2800b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2800b8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2800B8u;
    {
        const bool branch_taken_0x2800b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2800b8) {
            ctx->pc = 0x2800BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800B8u;
            // 0x2800bc: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800D8u;
            goto label_2800d8;
        }
    }
    ctx->pc = 0x2800C0u;
label_2800c0:
    // 0x2800c0: 0x56220018  bnel        $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2800C0u;
    {
        const bool branch_taken_0x2800c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2800c0) {
            ctx->pc = 0x2800C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800C0u;
            // 0x2800c4: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280124u;
            goto label_280124;
        }
    }
    ctx->pc = 0x2800C8u;
    // 0x2800c8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2800c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2800cc: 0x54440015  bnel        $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2800CCu;
    {
        const bool branch_taken_0x2800cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2800cc) {
            ctx->pc = 0x2800D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800CCu;
            // 0x2800d0: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280124u;
            goto label_280124;
        }
    }
    ctx->pc = 0x2800D4u;
    // 0x2800d4: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x2800d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2800d8:
    // 0x2800d8: 0xc7948eec  lwc1        $f20, -0x7114($gp)
    ctx->pc = 0x2800d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2800dc: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x2800dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x2800e0: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x2800E0u;
    SET_GPR_U32(ctx, 31, 0x2800E8u);
    ctx->pc = 0x2800E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800E0u;
    // 0x2800e4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x2800E0u, 0x2800E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800E8u;
label_2800e8:
    // 0x2800e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2800e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2800ec: 0xc7808ef0  lwc1        $f0, -0x7110($gp)
    ctx->pc = 0x2800ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2800f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2800f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2800f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2800F4u;
    {
        const bool branch_taken_0x2800f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2800f4) {
            ctx->pc = 0x280108u;
            goto label_280108;
        }
    }
    ctx->pc = 0x2800FCu;
    // 0x2800fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2800FCu;
    {
        const bool branch_taken_0x2800fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800FCu;
        // 0x280100: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800fc) {
            ctx->pc = 0x28011Cu;
            goto label_28011c;
        }
    }
    ctx->pc = 0x280104u;
    // 0x280104: 0x0  nop
    ctx->pc = 0x280104u;
    // NOP
label_280108:
    // 0x280108: 0xc7808ef4  lwc1        $f0, -0x710C($gp)
    ctx->pc = 0x280108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28010c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28010cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280110: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x280110u;
    {
        const bool branch_taken_0x280110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280110u;
        // 0x280114: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280110) {
            ctx->pc = 0x28011Cu;
            goto label_28011c;
        }
    }
    ctx->pc = 0x280118u;
    // 0x280118: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x280118u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_28011c:
    // 0x28011c: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x28011cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x280120: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x280120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280124:
    // 0x280124: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x280124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x280128: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x280128u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x28012c: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x28012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280130: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x280130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x280134: 0x46016329  min.s       $f12, $f12, $f1
    ctx->pc = 0x280134u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
    // 0x280138: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x280138u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x28013c: 0xc7948ef8  lwc1        $f20, -0x7108($gp)
    ctx->pc = 0x28013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280140: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x280140u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x280144: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x280144u;
    SET_GPR_U32(ctx, 31, 0x28014Cu);
    ctx->pc = 0x280148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280144u;
    // 0x280148: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x280144u, 0x28014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28014Cu;
label_28014c:
    // 0x28014c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x28014cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x280150: 0xc7808efc  lwc1        $f0, -0x7104($gp)
    ctx->pc = 0x280150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280154: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280158: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280158u;
    {
        const bool branch_taken_0x280158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280158) {
            ctx->pc = 0x280168u;
            goto label_280168;
        }
    }
    ctx->pc = 0x280160u;
    // 0x280160: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280160u;
    {
        const bool branch_taken_0x280160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280160u;
        // 0x280164: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280160) {
            ctx->pc = 0x28017Cu;
            goto label_28017c;
        }
    }
    ctx->pc = 0x280168u;
label_280168:
    // 0x280168: 0xc7808f00  lwc1        $f0, -0x7100($gp)
    ctx->pc = 0x280168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28016c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28016cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280170: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x280170u;
    {
        const bool branch_taken_0x280170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280170u;
        // 0x280174: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280170) {
            ctx->pc = 0x28017Cu;
            goto label_28017c;
        }
    }
    ctx->pc = 0x280178u;
    // 0x280178: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x280178u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_28017c:
    // 0x28017c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x28017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280180: 0xc7948f04  lwc1        $f20, -0x70FC($gp)
    ctx->pc = 0x280180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280184: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x280184u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x280188: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x280188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x28018c: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x28018Cu;
    SET_GPR_U32(ctx, 31, 0x280194u);
    ctx->pc = 0x280190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28018Cu;
    // 0x280190: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x28018Cu, 0x280194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280194u;
label_280194:
    // 0x280194: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x280194u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x280198: 0xc7808f08  lwc1        $f0, -0x70F8($gp)
    ctx->pc = 0x280198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28019c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28019cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2801a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2801A0u;
    {
        const bool branch_taken_0x2801a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2801a0) {
            ctx->pc = 0x2801B0u;
            goto label_2801b0;
        }
    }
    ctx->pc = 0x2801A8u;
    // 0x2801a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2801A8u;
    {
        const bool branch_taken_0x2801a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801A8u;
        // 0x2801ac: 0x46140b01  sub.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801a8) {
            ctx->pc = 0x2801C4u;
            goto label_2801c4;
        }
    }
    ctx->pc = 0x2801B0u;
label_2801b0:
    // 0x2801b0: 0xc7808f0c  lwc1        $f0, -0x70F4($gp)
    ctx->pc = 0x2801b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2801b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2801b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2801b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2801B8u;
    {
        const bool branch_taken_0x2801b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2801BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801B8u;
        // 0x2801bc: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801b8) {
            ctx->pc = 0x2801C4u;
            goto label_2801c4;
        }
    }
    ctx->pc = 0x2801C0u;
    // 0x2801c0: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x2801c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2801c4:
    // 0x2801c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2801c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2801c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2801c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2801cc: 0x4600b969  min.s       $f5, $f23, $f0
    ctx->pc = 0x2801ccu;
    ctx->f[5] = std::min(ctx->f[23], ctx->f[0]);
    // 0x2801d0: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x2801d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2801d4: 0x50a00032  beql        $a1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2801D4u;
    {
        const bool branch_taken_0x2801d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2801d4) {
            ctx->pc = 0x2801D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2801D4u;
            // 0x2801d8: 0x460cb001  sub.s       $f0, $f22, $f12 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2802A0u;
            goto label_2802a0;
        }
    }
    ctx->pc = 0x2801DCu;
    // 0x2801dc: 0x8fc200c4  lw          $v0, 0xC4($fp)
    ctx->pc = 0x2801dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
    // 0x2801e0: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x2801e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2801e4: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2801E4u;
    {
        const bool branch_taken_0x2801e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2801e4) {
            ctx->pc = 0x2801E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2801E4u;
            // 0x2801e8: 0x460cb001  sub.s       $f0, $f22, $f12 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2802A0u;
            goto label_2802a0;
        }
    }
    ctx->pc = 0x2801ECu;
    // 0x2801ec: 0x97c202fc  lhu         $v0, 0x2FC($fp)
    ctx->pc = 0x2801ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 764)));
    // 0x2801f0: 0x97c3007a  lhu         $v1, 0x7A($fp)
    ctx->pc = 0x2801f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 122)));
    // 0x2801f4: 0xc7818f10  lwc1        $f1, -0x70F0($gp)
    ctx->pc = 0x2801f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2801f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2801f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2801fc: 0xc7828f14  lwc1        $f2, -0x70EC($gp)
    ctx->pc = 0x2801fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280200: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x280204: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x280204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x280208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28020c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28020cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x280210: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x280210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x280214: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x280214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280218: 0x0  nop
    ctx->pc = 0x280218u;
    // NOP
    // 0x28021c: 0x0  nop
    ctx->pc = 0x28021cu;
    // NOP
    // 0x280220: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x280220u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x280224: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x280224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280228: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x280228u;
    {
        const bool branch_taken_0x280228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280228) {
            ctx->pc = 0x280240u;
            goto label_280240;
        }
    }
    ctx->pc = 0x280230u;
    // 0x280230: 0xc7808f18  lwc1        $f0, -0x70E8($gp)
    ctx->pc = 0x280230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280234: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280234u;
    {
        const bool branch_taken_0x280234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280234u;
        // 0x280238: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280234) {
            ctx->pc = 0x280258u;
            goto label_280258;
        }
    }
    ctx->pc = 0x28023Cu;
    // 0x28023c: 0x0  nop
    ctx->pc = 0x28023cu;
    // NOP
label_280240:
    // 0x280240: 0xc7808f1c  lwc1        $f0, -0x70E4($gp)
    ctx->pc = 0x280240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280244: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x280244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280248: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x280248u;
    {
        const bool branch_taken_0x280248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280248) {
            ctx->pc = 0x28024Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280248u;
            // 0x28024c: 0x460cb101  sub.s       $f4, $f22, $f12 (Delay Slot)
            ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28025Cu;
            goto label_28025c;
        }
    }
    ctx->pc = 0x280250u;
    // 0x280250: 0xc7808f20  lwc1        $f0, -0x70E0($gp)
    ctx->pc = 0x280250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280254: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x280254u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_280258:
    // 0x280258: 0x460cb101  sub.s       $f4, $f22, $f12
    ctx->pc = 0x280258u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
label_28025c:
    // 0x28025c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x28025cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x280260: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x280260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x280264: 0x46020828  max.s       $f0, $f1, $f2
    ctx->pc = 0x280264u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[2]);
    // 0x280268: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x280268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28026c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28026Cu;
    {
        const bool branch_taken_0x28026c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28026c) {
            ctx->pc = 0x280280u;
            goto label_280280;
        }
    }
    ctx->pc = 0x280274u;
    // 0x280274: 0x460208e8  max.s       $f3, $f1, $f2
    ctx->pc = 0x280274u;
    ctx->f[3] = std::max(ctx->f[1], ctx->f[2]);
    // 0x280278: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x280278u;
    {
        const bool branch_taken_0x280278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280278u;
        // 0x28027c: 0x46052002  mul.s       $f0, $f4, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280278) {
            ctx->pc = 0x2802A4u;
            goto label_2802a4;
        }
    }
    ctx->pc = 0x280280u;
label_280280:
    // 0x280280: 0x46020829  min.s       $f0, $f1, $f2
    ctx->pc = 0x280280u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[2]);
    // 0x280284: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x280284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280288: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x280288u;
    {
        const bool branch_taken_0x280288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280288) {
            ctx->pc = 0x28028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280288u;
            // 0x28028c: 0x46052002  mul.s       $f0, $f4, $f5 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2802A4u;
            goto label_2802a4;
        }
    }
    ctx->pc = 0x280290u;
    // 0x280290: 0x46020829  min.s       $f0, $f1, $f2
    ctx->pc = 0x280290u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[2]);
    // 0x280294: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280294u;
    {
        const bool branch_taken_0x280294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280294u;
        // 0x280298: 0x46052002  mul.s       $f0, $f4, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280294) {
            ctx->pc = 0x2802A4u;
            goto label_2802a4;
        }
    }
    ctx->pc = 0x28029Cu;
    // 0x28029c: 0x0  nop
    ctx->pc = 0x28029cu;
    // NOP
label_2802a0:
    // 0x2802a0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2802a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2802a4:
    // 0x2802a4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2802a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2802a8: 0x46150300  add.s       $f12, $f0, $f21
    ctx->pc = 0x2802a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2802ac: 0xc7948f24  lwc1        $f20, -0x70DC($gp)
    ctx->pc = 0x2802acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2802b0: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x2802B0u;
    SET_GPR_U32(ctx, 31, 0x2802B8u);
    ctx->pc = 0x2802B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2802B0u;
    // 0x2802b4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x2802B0u, 0x2802B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802B8u;
label_2802b8:
    // 0x2802b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2802b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2802bc: 0xc7808f28  lwc1        $f0, -0x70D8($gp)
    ctx->pc = 0x2802bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2802c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2802c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2802c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2802C4u;
    {
        const bool branch_taken_0x2802c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2802c4) {
            ctx->pc = 0x2802D8u;
            goto label_2802d8;
        }
    }
    ctx->pc = 0x2802CCu;
    // 0x2802cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2802CCu;
    {
        const bool branch_taken_0x2802cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802CCu;
        // 0x2802d0: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802cc) {
            ctx->pc = 0x2802ECu;
            goto label_2802ec;
        }
    }
    ctx->pc = 0x2802D4u;
    // 0x2802d4: 0x0  nop
    ctx->pc = 0x2802d4u;
    // NOP
label_2802d8:
    // 0x2802d8: 0xc7808f2c  lwc1        $f0, -0x70D4($gp)
    ctx->pc = 0x2802d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2802dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2802dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2802e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2802E0u;
    {
        const bool branch_taken_0x2802e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2802E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802E0u;
        // 0x2802e4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802e0) {
            ctx->pc = 0x2802ECu;
            goto label_2802ec;
        }
    }
    ctx->pc = 0x2802E8u;
    // 0x2802e8: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x2802e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2802ec:
    // 0x2802ec: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2802ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2802f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2802F0u;
    {
        const bool branch_taken_0x2802f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2802F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802F0u;
        // 0x2802f4: 0xe6020030  swc1        $f2, 0x30($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802f0) {
            ctx->pc = 0x280308u;
            goto label_280308;
        }
    }
    ctx->pc = 0x2802F8u;
    // 0x2802f8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2802f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2802fc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2802fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280300: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x280300u;
    {
        const bool branch_taken_0x280300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280300) {
            ctx->pc = 0x280304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280300u;
            // 0x280304: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280310u;
            goto label_280310;
        }
    }
    ctx->pc = 0x280308u;
label_280308:
    // 0x280308: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x280308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x28030c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x28030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_280310:
    // 0x280310: 0x26f00870  addiu       $s0, $s7, 0x870
    ctx->pc = 0x280310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 2160));
    // 0x280314: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x280314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x280318: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x280318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28031c: 0x26e30160  addiu       $v1, $s7, 0x160
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 352));
    // 0x280320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280324: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x280324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280328: 0xc097066  jal         func_25C198
    ctx->pc = 0x280328u;
    SET_GPR_U32(ctx, 31, 0x280330u);
    ctx->pc = 0x28032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280328u;
    // 0x28032c: 0xafa3016c  sw          $v1, 0x16C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x280328u, 0x280330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280330u;
label_280330:
    // 0x280330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x280330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280334: 0x26e60240  addiu       $a2, $s7, 0x240
    ctx->pc = 0x280334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 576));
    // 0x280338: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x280338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28033c: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x28033Cu;
    SET_GPR_U32(ctx, 31, 0x280344u);
    ctx->pc = 0x280340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28033Cu;
    // 0x280340: 0xafa60170  sw          $a2, 0x170($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x28033Cu, 0x280344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280344u;
label_280344:
    // 0x280344: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x280344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x280348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x280348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28034c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28034cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280350: 0xc097184  jal         func_25C610
    ctx->pc = 0x280350u;
    SET_GPR_U32(ctx, 31, 0x280358u);
    ctx->pc = 0x280354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280350u;
    // 0x280354: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x280350u, 0x280358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280358u;
label_280358:
    // 0x280358: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x280358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28035c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28035cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280360: 0xc097084  jal         func_25C210
    ctx->pc = 0x280360u;
    SET_GPR_U32(ctx, 31, 0x280368u);
    ctx->pc = 0x280364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280360u;
    // 0x280364: 0x26f208b0  addiu       $s2, $s7, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x280360u, 0x280368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280368u;
label_280368:
    // 0x280368: 0x8ee50080  lw          $a1, 0x80($s7)
    ctx->pc = 0x280368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x28036c: 0x26e40040  addiu       $a0, $s7, 0x40
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x280370: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x280370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280374: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x280374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x280378: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x280378u;
    SET_GPR_U32(ctx, 31, 0x280380u);
    ctx->pc = 0x28037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280378u;
    // 0x28037c: 0x26f10790  addiu       $s1, $s7, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x280378u, 0x280380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280380u;
label_280380:
    // 0x280380: 0x8ee50110  lw          $a1, 0x110($s7)
    ctx->pc = 0x280380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 272)));
    // 0x280384: 0x26e400d0  addiu       $a0, $s7, 0xD0
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 208));
    // 0x280388: 0x26e60090  addiu       $a2, $s7, 0x90
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x28038c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x28038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x280390: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x280390u;
    SET_GPR_U32(ctx, 31, 0x280398u);
    ctx->pc = 0x280394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280390u;
    // 0x280394: 0x26f307e0  addiu       $s3, $s7, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x280390u, 0x280398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280398u;
label_280398:
    // 0x280398: 0x8ee501a0  lw          $a1, 0x1A0($s7)
    ctx->pc = 0x280398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 416)));
    // 0x28039c: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x28039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2803a0: 0x26e60120  addiu       $a2, $s7, 0x120
    ctx->pc = 0x2803a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 288));
    // 0x2803a4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2803a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2803a8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2803A8u;
    SET_GPR_U32(ctx, 31, 0x2803B0u);
    ctx->pc = 0x2803ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803A8u;
    // 0x2803ac: 0x26f60a20  addiu       $s6, $s7, 0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 2592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2803A8u, 0x2803B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803B0u;
label_2803b0:
    // 0x2803b0: 0x8ee50230  lw          $a1, 0x230($s7)
    ctx->pc = 0x2803b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 560)));
    // 0x2803b4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2803b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2803b8: 0x26f50ab0  addiu       $s5, $s7, 0xAB0
    ctx->pc = 0x2803b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 2736));
    // 0x2803bc: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x2803bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2803c0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2803c4: 0xc7948f30  lwc1        $f20, -0x70D0($gp)
    ctx->pc = 0x2803c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2803c8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2803C8u;
    SET_GPR_U32(ctx, 31, 0x2803D0u);
    ctx->pc = 0x2803CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803C8u;
    // 0x2803cc: 0x26f40af0  addiu       $s4, $s7, 0xAF0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 2800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2803C8u, 0x2803D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803D0u;
label_2803d0:
    // 0x2803d0: 0x8ee502c0  lw          $a1, 0x2C0($s7)
    ctx->pc = 0x2803d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 704)));
    // 0x2803d4: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x2803d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2803d8: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x2803d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2803dc: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2803DCu;
    SET_GPR_U32(ctx, 31, 0x2803E4u);
    ctx->pc = 0x2803E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803DCu;
    // 0x2803e0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2803DCu, 0x2803E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803E4u;
label_2803e4:
    // 0x2803e4: 0x8ee507d0  lw          $a1, 0x7D0($s7)
    ctx->pc = 0x2803e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2000)));
    // 0x2803e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2803e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803ec: 0x26e60750  addiu       $a2, $s7, 0x750
    ctx->pc = 0x2803ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 1872));
    // 0x2803f0: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2803F0u;
    SET_GPR_U32(ctx, 31, 0x2803F8u);
    ctx->pc = 0x2803F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803F0u;
    // 0x2803f4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2803F0u, 0x2803F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803F8u;
label_2803f8:
    // 0x2803f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2803f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2803fc: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2803fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x280400: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x280400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280404: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x280404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280408: 0x26ea0970  addiu       $t2, $s7, 0x970
    ctx->pc = 0x280408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 2416));
    // 0x28040c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x280414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280418: 0xc0afa12  jal         func_2BE848
    ctx->pc = 0x280418u;
    SET_GPR_U32(ctx, 31, 0x280420u);
    ctx->pc = 0x28041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280418u;
    // 0x28041c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE848u, 0x280418u, 0x280420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280420u;
label_280420:
    // 0x280420: 0x8ee50860  lw          $a1, 0x860($s7)
    ctx->pc = 0x280420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2144)));
    // 0x280424: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x280424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280428: 0x26e40820  addiu       $a0, $s7, 0x820
    ctx->pc = 0x280428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2080));
    // 0x28042c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x28042Cu;
    SET_GPR_U32(ctx, 31, 0x280434u);
    ctx->pc = 0x280430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28042Cu;
    // 0x280430: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x28042Cu, 0x280434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280434u;
label_280434:
    // 0x280434: 0x8ee508f0  lw          $a1, 0x8F0($s7)
    ctx->pc = 0x280434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2288)));
    // 0x280438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28043c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280440: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x280440u;
    SET_GPR_U32(ctx, 31, 0x280448u);
    ctx->pc = 0x280444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280440u;
    // 0x280444: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x280440u, 0x280448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280448u;
label_280448:
    // 0x280448: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28044c: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x28044cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x280450: 0xc084986  jal         func_212618
    ctx->pc = 0x280450u;
    SET_GPR_U32(ctx, 31, 0x280458u);
    ctx->pc = 0x280454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280450u;
    // 0x280454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x280450u, 0x280458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280458u;
label_280458:
    // 0x280458: 0x26e40900  addiu       $a0, $s7, 0x900
    ctx->pc = 0x280458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2304));
    // 0x28045c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28045cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280460: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x280460u;
    SET_GPR_U32(ctx, 31, 0x280468u);
    ctx->pc = 0x280464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280460u;
    // 0x280464: 0x26e60940  addiu       $a2, $s7, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x280460u, 0x280468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280468u;
label_280468:
    // 0x280468: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x280468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28046c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x28046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x280470: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x280470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280474: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x280474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280478: 0x26ea0bb0  addiu       $t2, $s7, 0xBB0
    ctx->pc = 0x280478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 2992));
    // 0x28047c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28047cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x280484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280488: 0xc0afa12  jal         func_2BE848
    ctx->pc = 0x280488u;
    SET_GPR_U32(ctx, 31, 0x280490u);
    ctx->pc = 0x28048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280488u;
    // 0x28048c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE848u, 0x280488u, 0x280490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280490u;
label_280490:
    // 0x280490: 0x8ee50aa0  lw          $a1, 0xAA0($s7)
    ctx->pc = 0x280490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2720)));
    // 0x280494: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x280494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280498: 0x26e40a60  addiu       $a0, $s7, 0xA60
    ctx->pc = 0x280498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2656));
    // 0x28049c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x28049Cu;
    SET_GPR_U32(ctx, 31, 0x2804A4u);
    ctx->pc = 0x2804A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28049Cu;
    // 0x2804a0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x28049Cu, 0x2804A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804A4u;
label_2804a4:
    // 0x2804a4: 0x8ee50b30  lw          $a1, 0xB30($s7)
    ctx->pc = 0x2804a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2864)));
    // 0x2804a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2804a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2804acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804b0: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2804B0u;
    SET_GPR_U32(ctx, 31, 0x2804B8u);
    ctx->pc = 0x2804B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804B0u;
    // 0x2804b4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2804B0u, 0x2804B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804B8u;
label_2804b8:
    // 0x2804b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2804b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804bc: 0xc084986  jal         func_212618
    ctx->pc = 0x2804BCu;
    SET_GPR_U32(ctx, 31, 0x2804C4u);
    ctx->pc = 0x2804C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804BCu;
    // 0x2804c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x2804BCu, 0x2804C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804C4u;
label_2804c4:
    // 0x2804c4: 0x26e40b40  addiu       $a0, $s7, 0xB40
    ctx->pc = 0x2804c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2880));
    // 0x2804c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2804c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2804cc: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2804CCu;
    SET_GPR_U32(ctx, 31, 0x2804D4u);
    ctx->pc = 0x2804D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804CCu;
    // 0x2804d0: 0x26e60b80  addiu       $a2, $s7, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2804CCu, 0x2804D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804D4u;
label_2804d4:
    // 0x2804d4: 0xc7cc0020  lwc1        $f12, 0x20($fp)
    ctx->pc = 0x2804d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2804d8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2804d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2804dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2804dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2804e0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2804e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2804e4: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x2804E4u;
    SET_GPR_U32(ctx, 31, 0x2804ECu);
    ctx->pc = 0x2804E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804E4u;
    // 0x2804e8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x2804E4u, 0x2804ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804ECu;
label_2804ec:
    // 0x2804ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2804ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2804f0: 0xc7808f34  lwc1        $f0, -0x70CC($gp)
    ctx->pc = 0x2804f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2804f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2804f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2804f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2804F8u;
    {
        const bool branch_taken_0x2804f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2804f8) {
            ctx->pc = 0x280508u;
            goto label_280508;
        }
    }
    ctx->pc = 0x280500u;
    // 0x280500: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280500u;
    {
        const bool branch_taken_0x280500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280500u;
        // 0x280504: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280500) {
            ctx->pc = 0x28051Cu;
            goto label_28051c;
        }
    }
    ctx->pc = 0x280508u;
label_280508:
    // 0x280508: 0xc7808f38  lwc1        $f0, -0x70C8($gp)
    ctx->pc = 0x280508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28050c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28050cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280510: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x280510u;
    {
        const bool branch_taken_0x280510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280510u;
        // 0x280514: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280510) {
            ctx->pc = 0x28051Cu;
            goto label_28051c;
        }
    }
    ctx->pc = 0x280518u;
    // 0x280518: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x280518u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_28051c:
    // 0x28051c: 0xe7c20074  swc1        $f2, 0x74($fp)
    ctx->pc = 0x28051cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 116), bits); }
    // 0x280520: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x280520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x280524: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x280524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280528: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x280528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x28052c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28052cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x280530: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x280530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x280534: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x280534u;
    SET_GPR_U32(ctx, 31, 0x28053Cu);
    ctx->pc = 0x280538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280534u;
    // 0x280538: 0x8fb30150  lw          $s3, 0x150($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x280534u, 0x28053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28053Cu;
label_28053c:
    // 0x28053c: 0x87d20012  lh          $s2, 0x12($fp)
    ctx->pc = 0x28053cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x280540: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x280544: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x280544u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280548: 0x244439d0  addiu       $a0, $v0, 0x39D0
    ctx->pc = 0x280548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14800));
    // 0x28054c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x28054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x280550: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x280550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x280554: 0x8f85ca88  lw          $a1, -0x3578($gp)
    ctx->pc = 0x280554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
    // 0x280558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28055c: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28055cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x280560: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x280560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x280564: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x280564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x280568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28056c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28056Cu;
    {
        const bool branch_taken_0x28056c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x280570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28056Cu;
        // 0x280570: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28056c) {
            ctx->pc = 0x28058Cu;
            goto label_28058c;
        }
    }
    ctx->pc = 0x280574u;
    // 0x280574: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x280574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x280578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28057c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x280580: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x280580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x280584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280588: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x280588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28058c:
    // 0x28058c: 0x54c000e6  bnel        $a2, $zero, . + 4 + (0xE6 << 2)
    ctx->pc = 0x28058Cu;
    {
        const bool branch_taken_0x28058c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28058c) {
            ctx->pc = 0x280590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28058Cu;
            // 0x280590: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280928u;
            goto label_280928;
        }
    }
    ctx->pc = 0x280594u;
    // 0x280594: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x280594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x280598: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x280598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28059c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x28059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2805a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2805a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805a4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2805a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2805a8: 0xc084784  jal         func_211E10
    ctx->pc = 0x2805A8u;
    SET_GPR_U32(ctx, 31, 0x2805B0u);
    ctx->pc = 0x2805ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805A8u;
    // 0x2805ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2805A8u, 0x2805B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805B0u;
label_2805b0:
    // 0x2805b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2805b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2805b4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2805b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2805b8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2805b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2805bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2805bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2805c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805c4: 0xc084974  jal         func_2125D0
    ctx->pc = 0x2805C4u;
    SET_GPR_U32(ctx, 31, 0x2805CCu);
    ctx->pc = 0x2805C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805C4u;
    // 0x2805c8: 0xe7b400fc  swc1        $f20, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125D0u, 0x2805C4u, 0x2805CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805CCu;
label_2805cc:
    // 0x2805cc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2805d0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2805d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2805d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2805d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805dc: 0xc08491e  jal         func_212478
    ctx->pc = 0x2805DCu;
    SET_GPR_U32(ctx, 31, 0x2805E4u);
    ctx->pc = 0x2805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805DCu;
    // 0x2805e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2805DCu, 0x2805E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805E4u;
label_2805e4:
    // 0x2805e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2805e8: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2805E8u;
    {
        const bool branch_taken_0x2805e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2805ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805E8u;
        // 0x2805ec: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805e8) {
            ctx->pc = 0x280678u;
            goto label_280678;
        }
    }
    ctx->pc = 0x2805F0u;
    // 0x2805f0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2805f4: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2805F4u;
    SET_GPR_U32(ctx, 31, 0x2805FCu);
    ctx->pc = 0x2805F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805F4u;
    // 0x2805f8: 0xc7ad00a4  lwc1        $f13, 0xA4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2805F4u, 0x2805FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805FCu;
label_2805fc:
    // 0x2805fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x280600: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x280600u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x280604: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x280604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280608: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x280608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28060c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x28060cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x280610: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x280610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280614: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x280614u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x280618: 0x460d0344  c1          0xD0344
    ctx->pc = 0x280618u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x28061c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280620: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x280620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280624: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280628: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280628u;
    SET_GPR_U32(ctx, 31, 0x280630u);
    ctx->pc = 0x28062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280628u;
    // 0x28062c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280628u, 0x280630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280630u;
label_280630:
    // 0x280630: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x280630u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x280634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280638: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28063c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28063Cu;
    {
        const bool branch_taken_0x28063c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28063c) {
            ctx->pc = 0x280640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28063Cu;
            // 0x280640: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280644u;
            goto label_280644;
        }
    }
    ctx->pc = 0x280644u;
label_280644:
    // 0x280644: 0xc7808f3c  lwc1        $f0, -0x70C4($gp)
    ctx->pc = 0x280644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280648: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x280648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28064c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28064Cu;
    {
        const bool branch_taken_0x28064c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28064c) {
            ctx->pc = 0x280660u;
            goto label_280660;
        }
    }
    ctx->pc = 0x280654u;
    // 0x280654: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x280654u;
    {
        const bool branch_taken_0x280654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280654u;
        // 0x280658: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280654) {
            ctx->pc = 0x2808FCu;
            goto label_2808fc;
        }
    }
    ctx->pc = 0x28065Cu;
    // 0x28065c: 0x0  nop
    ctx->pc = 0x28065cu;
    // NOP
label_280660:
    // 0x280660: 0xc7808f40  lwc1        $f0, -0x70C0($gp)
    ctx->pc = 0x280660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280664: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280668: 0x450300a4  bc1tl       . + 4 + (0xA4 << 2)
    ctx->pc = 0x280668u;
    {
        const bool branch_taken_0x280668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280668) {
            ctx->pc = 0x28066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280668u;
            // 0x28066c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2808FCu;
            goto label_2808fc;
        }
    }
    ctx->pc = 0x280670u;
    // 0x280670: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x280670u;
    {
        const bool branch_taken_0x280670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280670u;
        // 0x280674: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280670) {
            ctx->pc = 0x280900u;
            goto label_280900;
        }
    }
    ctx->pc = 0x280678u;
label_280678:
    // 0x280678: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x28067c: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x28067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280680: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280680u;
    SET_GPR_U32(ctx, 31, 0x280688u);
    ctx->pc = 0x280684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280680u;
    // 0x280684: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280680u, 0x280688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280688u;
label_280688:
    // 0x280688: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x280688u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x28068c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x28068cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280690: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280690u;
    {
        const bool branch_taken_0x280690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280690) {
            ctx->pc = 0x280694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280690u;
            // 0x280694: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280698u;
            goto label_280698;
        }
    }
    ctx->pc = 0x280698u;
label_280698:
    // 0x280698: 0xc7808f44  lwc1        $f0, -0x70BC($gp)
    ctx->pc = 0x280698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28069c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x28069cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2806a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2806A0u;
    {
        const bool branch_taken_0x2806a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2806a0) {
            ctx->pc = 0x2806B0u;
            goto label_2806b0;
        }
    }
    ctx->pc = 0x2806A8u;
    // 0x2806a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2806A8u;
    {
        const bool branch_taken_0x2806a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806A8u;
        // 0x2806ac: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806a8) {
            ctx->pc = 0x2806C0u;
            goto label_2806c0;
        }
    }
    ctx->pc = 0x2806B0u;
label_2806b0:
    // 0x2806b0: 0xc7808f48  lwc1        $f0, -0x70B8($gp)
    ctx->pc = 0x2806b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2806b4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2806b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2806b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2806B8u;
    {
        const bool branch_taken_0x2806b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2806b8) {
            ctx->pc = 0x2806BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2806B8u;
            // 0x2806bc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2806C0u;
            goto label_2806c0;
        }
    }
    ctx->pc = 0x2806C0u;
label_2806c0:
    // 0x2806c0: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x2806c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2806c4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2806C4u;
    {
        const bool branch_taken_0x2806c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806C4u;
        // 0x2806c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806c4) {
            ctx->pc = 0x2806F0u;
            goto label_2806f0;
        }
    }
    ctx->pc = 0x2806CCu;
    // 0x2806cc: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x2806ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2806d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2806d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2806d4: 0x46151002  mul.s       $f0, $f2, $f21
    ctx->pc = 0x2806d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2806d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2806d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2806dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2806DCu;
    {
        const bool branch_taken_0x2806dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2806dc) {
            ctx->pc = 0x2806F0u;
            goto label_2806f0;
        }
    }
    ctx->pc = 0x2806E4u;
    // 0x2806e4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2806e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2806e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2806e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2806ec: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2806ecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2806f0:
    // 0x2806f0: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2806F0u;
    {
        const bool branch_taken_0x2806f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2806F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806F0u;
        // 0x2806f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806f0) {
            ctx->pc = 0x280704u;
            goto label_280704;
        }
    }
    ctx->pc = 0x2806F8u;
    // 0x2806f8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2806f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2806fc: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2806FCu;
    {
        const bool branch_taken_0x2806fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2806fc) {
            ctx->pc = 0x280700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2806FCu;
            // 0x280700: 0xc635001c  lwc1        $f21, 0x1C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28071Cu;
            goto label_28071c;
        }
    }
    ctx->pc = 0x280704u;
label_280704:
    // 0x280704: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280704u;
    {
        const bool branch_taken_0x280704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x280708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280704u;
        // 0x280708: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280704) {
            ctx->pc = 0x280730u;
            goto label_280730;
        }
    }
    ctx->pc = 0x28070Cu;
    // 0x28070c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x28070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x280710: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280710u;
    {
        const bool branch_taken_0x280710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x280714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280710u;
        // 0x280714: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280710) {
            ctx->pc = 0x280734u;
            goto label_280734;
        }
    }
    ctx->pc = 0x280718u;
    // 0x280718: 0xc635001c  lwc1        $f21, 0x1C($s1)
    ctx->pc = 0x280718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28071c:
    // 0x28071c: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x28071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280720: 0x4600a946  mov.s       $f5, $f21
    ctx->pc = 0x280720u;
    ctx->f[5] = FPU_MOV_S(ctx->f[21]);
    // 0x280724: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x280724u;
    {
        const bool branch_taken_0x280724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280724u;
        // 0x280728: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280724) {
            ctx->pc = 0x280764u;
            goto label_280764;
        }
    }
    ctx->pc = 0x28072Cu;
    // 0x28072c: 0x0  nop
    ctx->pc = 0x28072cu;
    // NOP
label_280730:
    // 0x280730: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x280730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280734:
    // 0x280734: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x280734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280738: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x280738u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28073c: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x28073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280740: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x280740u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x280744: 0x460d0344  c1          0xD0344
    ctx->pc = 0x280744u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x280748: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x28074c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x28074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280750: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280750u;
    SET_GPR_U32(ctx, 31, 0x280758u);
    ctx->pc = 0x280754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280750u;
    // 0x280754: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280750u, 0x280758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280758u;
label_280758:
    // 0x280758: 0xc625001c  lwc1        $f5, 0x1C($s1)
    ctx->pc = 0x280758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28075c: 0xc6240020  lwc1        $f4, 0x20($s1)
    ctx->pc = 0x28075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280760: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x280760u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_280764:
    // 0x280764: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x280764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x280768: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x280768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28076c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28076Cu;
    {
        const bool branch_taken_0x28076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28076Cu;
        // 0x280770: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28076c) {
            ctx->pc = 0x280778u;
            goto label_280778;
        }
    }
    ctx->pc = 0x280774u;
    // 0x280774: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x280774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_280778:
    // 0x280778: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280778u;
    {
        const bool branch_taken_0x280778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x28077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280778u;
        // 0x28077c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280778) {
            ctx->pc = 0x280798u;
            goto label_280798;
        }
    }
    ctx->pc = 0x280780u;
    // 0x280780: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x280780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x280784: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280784u;
    {
        const bool branch_taken_0x280784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x280784) {
            ctx->pc = 0x280788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280784u;
            // 0x280788: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280798u;
            goto label_280798;
        }
    }
    ctx->pc = 0x28078Cu;
    // 0x28078c: 0xc7958f4c  lwc1        $f21, -0x70B4($gp)
    ctx->pc = 0x28078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x280790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x280790u;
    {
        const bool branch_taken_0x280790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280790) {
            ctx->pc = 0x2807B0u;
            goto label_2807b0;
        }
    }
    ctx->pc = 0x280798u;
label_280798:
    // 0x280798: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280798u;
    {
        const bool branch_taken_0x280798 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x280798) {
            ctx->pc = 0x2807B0u;
            goto label_2807b0;
        }
    }
    ctx->pc = 0x2807A0u;
    // 0x2807a0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2807a4: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2807A4u;
    {
        const bool branch_taken_0x2807a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2807a4) {
            ctx->pc = 0x2807B0u;
            goto label_2807b0;
        }
    }
    ctx->pc = 0x2807ACu;
    // 0x2807ac: 0xc7958f50  lwc1        $f21, -0x70B0($gp)
    ctx->pc = 0x2807acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2807b0:
    // 0x2807b0: 0xc7808f54  lwc1        $f0, -0x70AC($gp)
    ctx->pc = 0x2807b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2807b4: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x2807b4u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
    // 0x2807b8: 0xc7818f58  lwc1        $f1, -0x70A8($gp)
    ctx->pc = 0x2807b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2807bc: 0x4601ad69  min.s       $f21, $f21, $f1
    ctx->pc = 0x2807bcu;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[1]);
    // 0x2807c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2807c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2807c4: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x2807c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2807c8: 0x46056081  sub.s       $f2, $f12, $f5
    ctx->pc = 0x2807c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x2807cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2807ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2807d0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x2807d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2807d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2807d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2807d8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2807D8u;
    {
        const bool branch_taken_0x2807d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2807d8) {
            ctx->pc = 0x280810u;
            goto label_280810;
        }
    }
    ctx->pc = 0x2807E0u;
    // 0x2807e0: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x2807e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x2807e4: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x2807e4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x2807e8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2807e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2807ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2807ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2807f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2807F0u;
    {
        const bool branch_taken_0x2807f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2807f0) {
            ctx->pc = 0x280810u;
            goto label_280810;
        }
    }
    ctx->pc = 0x2807F8u;
    // 0x2807f8: 0x4616b000  add.s       $f0, $f22, $f22
    ctx->pc = 0x2807f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x2807fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2807fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280804: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x280804u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x280808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280808u;
    {
        const bool branch_taken_0x280808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280808u;
        // 0x28080c: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280808) {
            ctx->pc = 0x280824u;
            goto label_280824;
        }
    }
    ctx->pc = 0x280810u;
label_280810:
    // 0x280810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280818: 0x4601b069  min.s       $f1, $f22, $f1
    ctx->pc = 0x280818u;
    ctx->f[1] = std::min(ctx->f[22], ctx->f[1]);
    // 0x28081c: 0x46056001  sub.s       $f0, $f12, $f5
    ctx->pc = 0x28081cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x280820: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x280820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_280824:
    // 0x280824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280828: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x280828u;
    {
        const bool branch_taken_0x280828 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x28082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280828u;
        // 0x28082c: 0x46002d40  add.s       $f21, $f5, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280828) {
            ctx->pc = 0x280870u;
            goto label_280870;
        }
    }
    ctx->pc = 0x280830u;
    // 0x280830: 0x8f82ca88  lw          $v0, -0x3578($gp)
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
    // 0x280834: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280834u;
    {
        const bool branch_taken_0x280834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280834) {
            ctx->pc = 0x280870u;
            goto label_280870;
        }
    }
    ctx->pc = 0x28083Cu;
    // 0x28083c: 0x4605a801  sub.s       $f0, $f21, $f5
    ctx->pc = 0x28083cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
    // 0x280840: 0xc7818f5c  lwc1        $f1, -0x70A4($gp)
    ctx->pc = 0x280840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280844: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x280844u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x280848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28084c: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x28084Cu;
    {
        const bool branch_taken_0x28084c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28084c) {
            ctx->pc = 0x280850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28084Cu;
            // 0x280850: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2808E8u;
            goto label_2808e8;
        }
    }
    ctx->pc = 0x280854u;
    // 0x280854: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x280854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x280858: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x280858u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28085c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28085cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280860: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280860u;
    {
        const bool branch_taken_0x280860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280860) {
            ctx->pc = 0x280870u;
            goto label_280870;
        }
    }
    ctx->pc = 0x280868u;
    // 0x280868: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x280868u;
    {
        const bool branch_taken_0x280868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280868u;
        // 0x28086c: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280868) {
            ctx->pc = 0x2808E8u;
            goto label_2808e8;
        }
    }
    ctx->pc = 0x280870u;
label_280870:
    // 0x280870: 0xc7808f60  lwc1        $f0, -0x70A0($gp)
    ctx->pc = 0x280870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280874: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x280874u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x280878: 0xc7818f64  lwc1        $f1, -0x709C($gp)
    ctx->pc = 0x280878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28087c: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x28087cu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
    // 0x280880: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x280880u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x280884: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x280884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280888: 0x46046881  sub.s       $f2, $f13, $f4
    ctx->pc = 0x280888u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x28088c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28088cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280890: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x280890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280894: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280898: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x280898u;
    {
        const bool branch_taken_0x280898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280898) {
            ctx->pc = 0x2808D0u;
            goto label_2808d0;
        }
    }
    ctx->pc = 0x2808A0u;
    // 0x2808a0: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x2808a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x2808a4: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x2808a4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x2808a8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2808a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2808ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2808acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2808b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2808B0u;
    {
        const bool branch_taken_0x2808b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2808b0) {
            ctx->pc = 0x2808D0u;
            goto label_2808d0;
        }
    }
    ctx->pc = 0x2808B8u;
    // 0x2808b8: 0x4616b000  add.s       $f0, $f22, $f22
    ctx->pc = 0x2808b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x2808bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2808bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2808c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2808c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2808c4: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2808c4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2808c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2808C8u;
    {
        const bool branch_taken_0x2808c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808C8u;
        // 0x2808cc: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808c8) {
            ctx->pc = 0x2808E4u;
            goto label_2808e4;
        }
    }
    ctx->pc = 0x2808D0u;
label_2808d0:
    // 0x2808d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2808d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2808d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2808d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2808d8: 0x4601b069  min.s       $f1, $f22, $f1
    ctx->pc = 0x2808d8u;
    ctx->f[1] = std::min(ctx->f[22], ctx->f[1]);
    // 0x2808dc: 0x46046801  sub.s       $f0, $f13, $f4
    ctx->pc = 0x2808dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x2808e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2808e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2808e4:
    // 0x2808e4: 0x46002500  add.s       $f20, $f4, $f0
    ctx->pc = 0x2808e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2808e8:
    // 0x2808e8: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x2808e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2808ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2808ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2808f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2808f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2808f4: 0xc09fcc4  jal         func_27F310
    ctx->pc = 0x2808F4u;
    SET_GPR_U32(ctx, 31, 0x2808FCu);
    ctx->pc = 0x2808F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2808F4u;
    // 0x2808f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F310u, 0x2808F4u, 0x2808FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808FCu;
label_2808fc:
    // 0x2808fc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2808fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_280900:
    // 0x280900: 0xe635001c  swc1        $f21, 0x1C($s1)
    ctx->pc = 0x280900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x280904: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280904u;
    {
        const bool branch_taken_0x280904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280904u;
        // 0x280908: 0xe6340020  swc1        $f20, 0x20($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280904) {
            ctx->pc = 0x28091Cu;
            goto label_28091c;
        }
    }
    ctx->pc = 0x28090Cu;
    // 0x28090c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x28090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x280910: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x280910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280914: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x280914u;
    {
        const bool branch_taken_0x280914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280914) {
            ctx->pc = 0x280918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280914u;
            // 0x280918: 0x8ee50230  lw          $a1, 0x230($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280948u;
            goto label_280948;
        }
    }
    ctx->pc = 0x28091Cu;
label_28091c:
    // 0x28091c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28091Cu;
    {
        const bool branch_taken_0x28091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28091Cu;
        // 0x280920: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28091c) {
            ctx->pc = 0x280944u;
            goto label_280944;
        }
    }
    ctx->pc = 0x280924u;
    // 0x280924: 0x0  nop
    ctx->pc = 0x280924u;
    // NOP
label_280928:
    // 0x280928: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280928u;
    {
        const bool branch_taken_0x280928 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x280928) {
            ctx->pc = 0x28092Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280928u;
            // 0x28092c: 0x8ee50230  lw          $a1, 0x230($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280948u;
            goto label_280948;
        }
    }
    ctx->pc = 0x280930u;
    // 0x280930: 0xc62d0020  lwc1        $f13, 0x20($s1)
    ctx->pc = 0x280930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280938: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x280938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28093c: 0xc09fcc4  jal         func_27F310
    ctx->pc = 0x28093Cu;
    SET_GPR_U32(ctx, 31, 0x280944u);
    ctx->pc = 0x280940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28093Cu;
    // 0x280940: 0x8fa40164  lw          $a0, 0x164($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F310u, 0x28093Cu, 0x280944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280944u;
label_280944:
    // 0x280944: 0x8ee50230  lw          $a1, 0x230($s7)
    ctx->pc = 0x280944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 560)));
label_280948:
    // 0x280948: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x280948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x28094c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x28094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x280950: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x280950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x280954: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x280954u;
    SET_GPR_U32(ctx, 31, 0x28095Cu);
    ctx->pc = 0x280958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280954u;
    // 0x280958: 0x8fb30150  lw          $s3, 0x150($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x280954u, 0x28095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28095Cu;
label_28095c:
    // 0x28095c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x280960: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x280960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x280964: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x280964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x280968: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x280968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28096c: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x28096Cu;
    SET_GPR_U32(ctx, 31, 0x280974u);
    ctx->pc = 0x280970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28096Cu;
    // 0x280970: 0x8fa50178  lw          $a1, 0x178($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x28096Cu, 0x280974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280974u;
label_280974:
    // 0x280974: 0x87d20012  lh          $s2, 0x12($fp)
    ctx->pc = 0x280974u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x280978: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x280978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x28097c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x28097cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280980: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x280980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x280984: 0x8f85ca88  lw          $a1, -0x3578($gp)
    ctx->pc = 0x280984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
    // 0x280988: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x280988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28098c: 0x24c439d0  addiu       $a0, $a2, 0x39D0
    ctx->pc = 0x28098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 14800));
    // 0x280990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280994: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x280994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x280998: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28099c: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28099cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2809a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2809a4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2809A4u;
    {
        const bool branch_taken_0x2809a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809A4u;
        // 0x2809a8: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809a4) {
            ctx->pc = 0x2809C4u;
            goto label_2809c4;
        }
    }
    ctx->pc = 0x2809ACu;
    // 0x2809ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2809acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2809b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2809b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2809b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2809b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2809b8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2809b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2809bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2809bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2809c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2809c4:
    // 0x2809c4: 0x54c000e6  bnel        $a2, $zero, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2809C4u;
    {
        const bool branch_taken_0x2809c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2809c4) {
            ctx->pc = 0x2809C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2809C4u;
            // 0x2809c8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D60u;
            goto label_280d60;
        }
    }
    ctx->pc = 0x2809CCu;
    // 0x2809cc: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2809ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2809d0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2809d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2809d4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2809d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2809d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2809d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809dc: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x2809dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2809e0: 0xc084784  jal         func_211E10
    ctx->pc = 0x2809E0u;
    SET_GPR_U32(ctx, 31, 0x2809E8u);
    ctx->pc = 0x2809E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809E0u;
    // 0x2809e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2809E0u, 0x2809E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809E8u;
label_2809e8:
    // 0x2809e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2809e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2809ec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2809ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2809f0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2809f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2809f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2809f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2809f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809fc: 0xc084974  jal         func_2125D0
    ctx->pc = 0x2809FCu;
    SET_GPR_U32(ctx, 31, 0x280A04u);
    ctx->pc = 0x280A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809FCu;
    // 0x280a00: 0xe7b400fc  swc1        $f20, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125D0u, 0x2809FCu, 0x280A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A04u;
label_280a04:
    // 0x280a04: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x280a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x280a08: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x280a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x280a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x280a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x280a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a14: 0xc08491e  jal         func_212478
    ctx->pc = 0x280A14u;
    SET_GPR_U32(ctx, 31, 0x280A1Cu);
    ctx->pc = 0x280A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A14u;
    // 0x280a18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x280A14u, 0x280A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A1Cu;
label_280a1c:
    // 0x280a1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x280a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x280a20: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x280A20u;
    {
        const bool branch_taken_0x280a20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x280A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A20u;
        // 0x280a24: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a20) {
            ctx->pc = 0x280AB0u;
            goto label_280ab0;
        }
    }
    ctx->pc = 0x280A28u;
    // 0x280a28: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280a2c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280A2Cu;
    SET_GPR_U32(ctx, 31, 0x280A34u);
    ctx->pc = 0x280A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A2Cu;
    // 0x280a30: 0xc7ad00a4  lwc1        $f13, 0xA4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280A2Cu, 0x280A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A34u;
label_280a34:
    // 0x280a34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x280a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x280a38: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x280a38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x280a3c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x280a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a40: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x280a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a44: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x280a44u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x280a48: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x280a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280a4c: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x280a4cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x280a50: 0x460d0344  c1          0xD0344
    ctx->pc = 0x280a50u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x280a54: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280a58: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x280a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280a5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x280a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280a60: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280A60u;
    SET_GPR_U32(ctx, 31, 0x280A68u);
    ctx->pc = 0x280A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A60u;
    // 0x280a64: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280A60u, 0x280A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A68u;
label_280a68:
    // 0x280a68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x280a68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x280a6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280a70: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280a74: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280A74u;
    {
        const bool branch_taken_0x280a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280a74) {
            ctx->pc = 0x280A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280A74u;
            // 0x280a78: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A7Cu;
            goto label_280a7c;
        }
    }
    ctx->pc = 0x280A7Cu;
label_280a7c:
    // 0x280a7c: 0xc7808f68  lwc1        $f0, -0x7098($gp)
    ctx->pc = 0x280a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a80: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x280a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280a84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x280A84u;
    {
        const bool branch_taken_0x280a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280a84) {
            ctx->pc = 0x280A98u;
            goto label_280a98;
        }
    }
    ctx->pc = 0x280A8Cu;
    // 0x280a8c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x280A8Cu;
    {
        const bool branch_taken_0x280a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A8Cu;
        // 0x280a90: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a8c) {
            ctx->pc = 0x280D34u;
            goto label_280d34;
        }
    }
    ctx->pc = 0x280A94u;
    // 0x280a94: 0x0  nop
    ctx->pc = 0x280a94u;
    // NOP
label_280a98:
    // 0x280a98: 0xc7808f6c  lwc1        $f0, -0x7094($gp)
    ctx->pc = 0x280a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280a9c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280aa0: 0x450300a4  bc1tl       . + 4 + (0xA4 << 2)
    ctx->pc = 0x280AA0u;
    {
        const bool branch_taken_0x280aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280aa0) {
            ctx->pc = 0x280AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280AA0u;
            // 0x280aa4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D34u;
            goto label_280d34;
        }
    }
    ctx->pc = 0x280AA8u;
    // 0x280aa8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x280AA8u;
    {
        const bool branch_taken_0x280aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AA8u;
        // 0x280aac: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280aa8) {
            ctx->pc = 0x280D38u;
            goto label_280d38;
        }
    }
    ctx->pc = 0x280AB0u;
label_280ab0:
    // 0x280ab0: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280ab4: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x280ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280ab8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280AB8u;
    SET_GPR_U32(ctx, 31, 0x280AC0u);
    ctx->pc = 0x280ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280AB8u;
    // 0x280abc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280AB8u, 0x280AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AC0u;
label_280ac0:
    // 0x280ac0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x280ac0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x280ac4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x280ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ac8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280AC8u;
    {
        const bool branch_taken_0x280ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280ac8) {
            ctx->pc = 0x280ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280AC8u;
            // 0x280acc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280AD0u;
            goto label_280ad0;
        }
    }
    ctx->pc = 0x280AD0u;
label_280ad0:
    // 0x280ad0: 0xc7808f70  lwc1        $f0, -0x7090($gp)
    ctx->pc = 0x280ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280ad4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x280ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ad8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280AD8u;
    {
        const bool branch_taken_0x280ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280ad8) {
            ctx->pc = 0x280AE8u;
            goto label_280ae8;
        }
    }
    ctx->pc = 0x280AE0u;
    // 0x280ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280AE0u;
    {
        const bool branch_taken_0x280ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AE0u;
        // 0x280ae4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ae0) {
            ctx->pc = 0x280AF8u;
            goto label_280af8;
        }
    }
    ctx->pc = 0x280AE8u;
label_280ae8:
    // 0x280ae8: 0xc7808f74  lwc1        $f0, -0x708C($gp)
    ctx->pc = 0x280ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280aec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280af0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280AF0u;
    {
        const bool branch_taken_0x280af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280af0) {
            ctx->pc = 0x280AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280AF0u;
            // 0x280af4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280AF8u;
            goto label_280af8;
        }
    }
    ctx->pc = 0x280AF8u;
label_280af8:
    // 0x280af8: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x280af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x280afc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x280AFCu;
    {
        const bool branch_taken_0x280afc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AFCu;
        // 0x280b00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280afc) {
            ctx->pc = 0x280B28u;
            goto label_280b28;
        }
    }
    ctx->pc = 0x280B04u;
    // 0x280b04: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x280b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280b08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x280b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280b0c: 0x46151002  mul.s       $f0, $f2, $f21
    ctx->pc = 0x280b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x280b10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280b14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x280B14u;
    {
        const bool branch_taken_0x280b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280b14) {
            ctx->pc = 0x280B28u;
            goto label_280b28;
        }
    }
    ctx->pc = 0x280B1Cu;
    // 0x280b1c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x280b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280b20: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x280b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x280b24: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x280b24u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_280b28:
    // 0x280b28: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x280B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B28u;
        // 0x280b2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280B3Cu;
            goto label_280b3c;
        }
    }
    ctx->pc = 0x280B30u;
    // 0x280b30: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x280b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x280b34: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280B34u;
    {
        const bool branch_taken_0x280b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280b34) {
            ctx->pc = 0x280B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280B34u;
            // 0x280b38: 0xc6350010  lwc1        $f21, 0x10($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280B54u;
            goto label_280b54;
        }
    }
    ctx->pc = 0x280B3Cu;
label_280b3c:
    // 0x280b3c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280B3Cu;
    {
        const bool branch_taken_0x280b3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x280B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B3Cu;
        // 0x280b40: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b3c) {
            ctx->pc = 0x280B68u;
            goto label_280b68;
        }
    }
    ctx->pc = 0x280B44u;
    // 0x280b44: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x280b48: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280B48u;
    {
        const bool branch_taken_0x280b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x280B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B48u;
        // 0x280b4c: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b48) {
            ctx->pc = 0x280B6Cu;
            goto label_280b6c;
        }
    }
    ctx->pc = 0x280B50u;
    // 0x280b50: 0xc6350010  lwc1        $f21, 0x10($s1)
    ctx->pc = 0x280b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_280b54:
    // 0x280b54: 0xc6340014  lwc1        $f20, 0x14($s1)
    ctx->pc = 0x280b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280b58: 0x4600a946  mov.s       $f5, $f21
    ctx->pc = 0x280b58u;
    ctx->f[5] = FPU_MOV_S(ctx->f[21]);
    // 0x280b5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x280B5Cu;
    {
        const bool branch_taken_0x280b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B5Cu;
        // 0x280b60: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b5c) {
            ctx->pc = 0x280B9Cu;
            goto label_280b9c;
        }
    }
    ctx->pc = 0x280B64u;
    // 0x280b64: 0x0  nop
    ctx->pc = 0x280b64u;
    // NOP
label_280b68:
    // 0x280b68: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x280b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b6c:
    // 0x280b6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x280b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b70: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x280b70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x280b74: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x280b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280b78: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x280b78u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x280b7c: 0x460d0344  c1          0xD0344
    ctx->pc = 0x280b7cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x280b80: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280b84: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x280b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280b88: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280B88u;
    SET_GPR_U32(ctx, 31, 0x280B90u);
    ctx->pc = 0x280B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B88u;
    // 0x280b8c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280B88u, 0x280B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B90u;
label_280b90:
    // 0x280b90: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x280b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x280b94: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x280b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x280b98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x280b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_280b9c:
    // 0x280b9c: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x280b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x280ba0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x280ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280ba4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280BA4u;
    {
        const bool branch_taken_0x280ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BA4u;
        // 0x280ba8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ba4) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280BACu;
    // 0x280bac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x280bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_280bb0:
    // 0x280bb0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280BB0u;
    {
        const bool branch_taken_0x280bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x280BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BB0u;
        // 0x280bb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bb0) {
            ctx->pc = 0x280BD0u;
            goto label_280bd0;
        }
    }
    ctx->pc = 0x280BB8u;
    // 0x280bb8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x280bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x280bbc: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280BBCu;
    {
        const bool branch_taken_0x280bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x280bbc) {
            ctx->pc = 0x280BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280BBCu;
            // 0x280bc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280BD0u;
            goto label_280bd0;
        }
    }
    ctx->pc = 0x280BC4u;
    // 0x280bc4: 0xc7958f78  lwc1        $f21, -0x7088($gp)
    ctx->pc = 0x280bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x280bc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x280BC8u;
    {
        const bool branch_taken_0x280bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280bc8) {
            ctx->pc = 0x280BE8u;
            goto label_280be8;
        }
    }
    ctx->pc = 0x280BD0u;
label_280bd0:
    // 0x280bd0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280BD0u;
    {
        const bool branch_taken_0x280bd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x280bd0) {
            ctx->pc = 0x280BE8u;
            goto label_280be8;
        }
    }
    ctx->pc = 0x280BD8u;
    // 0x280bd8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x280bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x280bdc: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280BDCu;
    {
        const bool branch_taken_0x280bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x280bdc) {
            ctx->pc = 0x280BE8u;
            goto label_280be8;
        }
    }
    ctx->pc = 0x280BE4u;
    // 0x280be4: 0xc7958f7c  lwc1        $f21, -0x7084($gp)
    ctx->pc = 0x280be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_280be8:
    // 0x280be8: 0xc7808f80  lwc1        $f0, -0x7080($gp)
    ctx->pc = 0x280be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280bec: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x280becu;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
    // 0x280bf0: 0xc7818f84  lwc1        $f1, -0x707C($gp)
    ctx->pc = 0x280bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280bf4: 0x4601ad69  min.s       $f21, $f21, $f1
    ctx->pc = 0x280bf4u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[1]);
    // 0x280bf8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x280bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x280bfc: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x280bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280c00: 0x46056081  sub.s       $f2, $f12, $f5
    ctx->pc = 0x280c00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x280c04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x280c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c08: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x280c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280c0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c10: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x280C10u;
    {
        const bool branch_taken_0x280c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c10) {
            ctx->pc = 0x280C48u;
            goto label_280c48;
        }
    }
    ctx->pc = 0x280C18u;
    // 0x280c18: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x280c18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x280c1c: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x280c1cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x280c20: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x280c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x280c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x280C28u;
    {
        const bool branch_taken_0x280c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c28) {
            ctx->pc = 0x280C48u;
            goto label_280c48;
        }
    }
    ctx->pc = 0x280C30u;
    // 0x280c30: 0x4616b000  add.s       $f0, $f22, $f22
    ctx->pc = 0x280c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x280c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280c38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c3c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x280c3cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x280c40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280C40u;
    {
        const bool branch_taken_0x280c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C40u;
        // 0x280c44: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c40) {
            ctx->pc = 0x280C5Cu;
            goto label_280c5c;
        }
    }
    ctx->pc = 0x280C48u;
label_280c48:
    // 0x280c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280c4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280c50: 0x4601b069  min.s       $f1, $f22, $f1
    ctx->pc = 0x280c50u;
    ctx->f[1] = std::min(ctx->f[22], ctx->f[1]);
    // 0x280c54: 0x46056001  sub.s       $f0, $f12, $f5
    ctx->pc = 0x280c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x280c58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x280c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_280c5c:
    // 0x280c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280c60: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x280C60u;
    {
        const bool branch_taken_0x280c60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x280C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C60u;
        // 0x280c64: 0x46002d40  add.s       $f21, $f5, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c60) {
            ctx->pc = 0x280CA8u;
            goto label_280ca8;
        }
    }
    ctx->pc = 0x280C68u;
    // 0x280c68: 0x8f82ca88  lw          $v0, -0x3578($gp)
    ctx->pc = 0x280c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
    // 0x280c6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280C6Cu;
    {
        const bool branch_taken_0x280c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280c6c) {
            ctx->pc = 0x280CA8u;
            goto label_280ca8;
        }
    }
    ctx->pc = 0x280C74u;
    // 0x280c74: 0x4605a801  sub.s       $f0, $f21, $f5
    ctx->pc = 0x280c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
    // 0x280c78: 0xc7818f88  lwc1        $f1, -0x7078($gp)
    ctx->pc = 0x280c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280c7c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x280c7cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x280c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c84: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x280C84u;
    {
        const bool branch_taken_0x280c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c84) {
            ctx->pc = 0x280C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280C84u;
            // 0x280c88: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D20u;
            goto label_280d20;
        }
    }
    ctx->pc = 0x280C8Cu;
    // 0x280c8c: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x280c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x280c90: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x280c90u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x280c94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280C98u;
    {
        const bool branch_taken_0x280c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280c98) {
            ctx->pc = 0x280CA8u;
            goto label_280ca8;
        }
    }
    ctx->pc = 0x280CA0u;
    // 0x280ca0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x280CA0u;
    {
        const bool branch_taken_0x280ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA0u;
        // 0x280ca4: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ca0) {
            ctx->pc = 0x280D20u;
            goto label_280d20;
        }
    }
    ctx->pc = 0x280CA8u;
label_280ca8:
    // 0x280ca8: 0xc7808f8c  lwc1        $f0, -0x7074($gp)
    ctx->pc = 0x280ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280cac: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x280cacu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x280cb0: 0xc7818f90  lwc1        $f1, -0x7070($gp)
    ctx->pc = 0x280cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280cb4: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x280cb4u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
    // 0x280cb8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x280cb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x280cbc: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x280cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x280cc0: 0x46046881  sub.s       $f2, $f13, $f4
    ctx->pc = 0x280cc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x280cc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x280cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280cc8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x280cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280ccc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280cd0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x280CD0u;
    {
        const bool branch_taken_0x280cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280cd0) {
            ctx->pc = 0x280D08u;
            goto label_280d08;
        }
    }
    ctx->pc = 0x280CD8u;
    // 0x280cd8: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x280cd8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x280cdc: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x280cdcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x280ce0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x280ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x280ce4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ce8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x280CE8u;
    {
        const bool branch_taken_0x280ce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280ce8) {
            ctx->pc = 0x280D08u;
            goto label_280d08;
        }
    }
    ctx->pc = 0x280CF0u;
    // 0x280cf0: 0x4616b000  add.s       $f0, $f22, $f22
    ctx->pc = 0x280cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x280cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280cf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280cfc: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x280cfcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x280d00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280D00u;
    {
        const bool branch_taken_0x280d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D00u;
        // 0x280d04: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d00) {
            ctx->pc = 0x280D1Cu;
            goto label_280d1c;
        }
    }
    ctx->pc = 0x280D08u;
label_280d08:
    // 0x280d08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280d0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280d10: 0x4601b069  min.s       $f1, $f22, $f1
    ctx->pc = 0x280d10u;
    ctx->f[1] = std::min(ctx->f[22], ctx->f[1]);
    // 0x280d14: 0x46046801  sub.s       $f0, $f13, $f4
    ctx->pc = 0x280d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[4]);
    // 0x280d18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x280d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_280d1c:
    // 0x280d1c: 0x46002500  add.s       $f20, $f4, $f0
    ctx->pc = 0x280d1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_280d20:
    // 0x280d20: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x280d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x280d24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d28: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x280d28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x280d2c: 0xc09fd3a  jal         func_27F4E8
    ctx->pc = 0x280D2Cu;
    SET_GPR_U32(ctx, 31, 0x280D34u);
    ctx->pc = 0x280D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D2Cu;
    // 0x280d30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4E8u, 0x280D2Cu, 0x280D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D34u;
label_280d34:
    // 0x280d34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x280d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_280d38:
    // 0x280d38: 0xe6350010  swc1        $f21, 0x10($s1)
    ctx->pc = 0x280d38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x280d3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280D3Cu;
    {
        const bool branch_taken_0x280d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D3Cu;
        // 0x280d40: 0xe6340014  swc1        $f20, 0x14($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d3c) {
            ctx->pc = 0x280D54u;
            goto label_280d54;
        }
    }
    ctx->pc = 0x280D44u;
    // 0x280d44: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x280d48: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x280d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280d4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x280D4Cu;
    {
        const bool branch_taken_0x280d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280d4c) {
            ctx->pc = 0x280D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280D4Cu;
            // 0x280d50: 0x8ee502c0  lw          $a1, 0x2C0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D80u;
            goto label_280d80;
        }
    }
    ctx->pc = 0x280D54u;
label_280d54:
    // 0x280d54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x280D54u;
    {
        const bool branch_taken_0x280d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D54u;
        // 0x280d58: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d54) {
            ctx->pc = 0x280D7Cu;
            goto label_280d7c;
        }
    }
    ctx->pc = 0x280D5Cu;
    // 0x280d5c: 0x0  nop
    ctx->pc = 0x280d5cu;
    // NOP
label_280d60:
    // 0x280d60: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280D60u;
    {
        const bool branch_taken_0x280d60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x280d60) {
            ctx->pc = 0x280D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280D60u;
            // 0x280d64: 0x8ee502c0  lw          $a1, 0x2C0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D80u;
            goto label_280d80;
        }
    }
    ctx->pc = 0x280D68u;
    // 0x280d68: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x280d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280d6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d70: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x280d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280d74: 0xc09fd3a  jal         func_27F4E8
    ctx->pc = 0x280D74u;
    SET_GPR_U32(ctx, 31, 0x280D7Cu);
    ctx->pc = 0x280D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D74u;
    // 0x280d78: 0x8fa40170  lw          $a0, 0x170($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4E8u, 0x280D74u, 0x280D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D7Cu;
label_280d7c:
    // 0x280d7c: 0x8ee502c0  lw          $a1, 0x2C0($s7)
    ctx->pc = 0x280d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 704)));
label_280d80:
    // 0x280d80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x280d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d84: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x280d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x280d88: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x280d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x280d8c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x280d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x280d90: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x280D90u;
    SET_GPR_U32(ctx, 31, 0x280D98u);
    ctx->pc = 0x280D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280D90u;
    // 0x280d94: 0x8fb40154  lw          $s4, 0x154($sp) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x280D90u, 0x280D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D98u;
label_280d98:
    // 0x280d98: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x280d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x280d9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x280d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280da0: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x280DA0u;
    SET_GPR_U32(ctx, 31, 0x280DA8u);
    ctx->pc = 0x280DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280DA0u;
    // 0x280da4: 0x8fa50174  lw          $a1, 0x174($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x280DA0u, 0x280DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280DA8u;
label_280da8:
    // 0x280da8: 0x87d20012  lh          $s2, 0x12($fp)
    ctx->pc = 0x280da8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x280dac: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x280dacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280db0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x280db4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x280db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x280db8: 0x87c70040  lh          $a3, 0x40($fp)
    ctx->pc = 0x280db8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x280dbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x280dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x280dc0: 0x24c539d0  addiu       $a1, $a2, 0x39D0
    ctx->pc = 0x280dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 14800));
    // 0x280dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280dc8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x280dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x280dcc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x280dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x280dd0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x280dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x280dd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280dd8: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x280dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x280ddc: 0x10e4000a  beq         $a3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x280DDCu;
    {
        const bool branch_taken_0x280ddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x280DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DDCu;
        // 0x280de0: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ddc) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280DE4u;
    // 0x280de4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x280de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x280de8: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280DE8u;
    {
        const bool branch_taken_0x280de8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x280DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DE8u;
        // 0x280dec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280de8) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280DF0u;
    // 0x280df0: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280DF0u;
    {
        const bool branch_taken_0x280df0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x280DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DF0u;
        // 0x280df4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280df0) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280DF8u;
    // 0x280df8: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280DF8u;
    {
        const bool branch_taken_0x280df8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x280DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DF8u;
        // 0x280dfc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280df8) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280E00u;
    // 0x280e00: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280E00u;
    {
        const bool branch_taken_0x280e00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x280E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E00u;
        // 0x280e04: 0x8f82ca88  lw          $v0, -0x3578($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e00) {
            ctx->pc = 0x280E10u;
            goto label_280e10;
        }
    }
    ctx->pc = 0x280E08u;
label_280e08:
    // 0x280e08: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x280e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280e0c: 0x8f82ca88  lw          $v0, -0x3578($gp)
    ctx->pc = 0x280e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
label_280e10:
    // 0x280e10: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x280e14: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x280e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x280e18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280E18u;
    {
        const bool branch_taken_0x280e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E18u;
        // 0x280e1c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e18) {
            ctx->pc = 0x280E34u;
            goto label_280e34;
        }
    }
    ctx->pc = 0x280E20u;
    // 0x280e20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280e24: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x280e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x280e28: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x280e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x280e2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x280e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e30: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x280e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280e34:
    // 0x280e34: 0x546000f8  bnel        $v1, $zero, . + 4 + (0xF8 << 2)
    ctx->pc = 0x280E34u;
    {
        const bool branch_taken_0x280e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280e34) {
            ctx->pc = 0x280E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280E34u;
            // 0x280e38: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281218u;
            goto label_281218;
        }
    }
    ctx->pc = 0x280E3Cu;
    // 0x280e3c: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x280e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x280e40: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x280e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280e44: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x280e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x280e48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e4c: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x280e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x280e50: 0xc084784  jal         func_211E10
    ctx->pc = 0x280E50u;
    SET_GPR_U32(ctx, 31, 0x280E58u);
    ctx->pc = 0x280E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E50u;
    // 0x280e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x280E50u, 0x280E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E58u;
label_280e58:
    // 0x280e58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x280e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x280e5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x280e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x280e60: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x280e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x280e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x280e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x280e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e6c: 0xc084974  jal         func_2125D0
    ctx->pc = 0x280E6Cu;
    SET_GPR_U32(ctx, 31, 0x280E74u);
    ctx->pc = 0x280E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E6Cu;
    // 0x280e70: 0xe7b400fc  swc1        $f20, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125D0u, 0x280E6Cu, 0x280E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E74u;
label_280e74:
    // 0x280e74: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x280e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x280e78: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x280e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x280e7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x280e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e84: 0xc08491e  jal         func_212478
    ctx->pc = 0x280E84u;
    SET_GPR_U32(ctx, 31, 0x280E8Cu);
    ctx->pc = 0x280E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E84u;
    // 0x280e88: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x280E84u, 0x280E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E8Cu;
label_280e8c:
    // 0x280e8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x280e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x280e90: 0x1c40002b  bgtz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x280E90u;
    {
        const bool branch_taken_0x280e90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x280E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E90u;
        // 0x280e94: 0xc7ac00a4  lwc1        $f12, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e90) {
            ctx->pc = 0x280F40u;
            goto label_280f40;
        }
    }
    ctx->pc = 0x280E98u;
    // 0x280e98: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280e9c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280E9Cu;
    SET_GPR_U32(ctx, 31, 0x280EA4u);
    ctx->pc = 0x280EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E9Cu;
    // 0x280ea0: 0xc7ad00a0  lwc1        $f13, 0xA0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280E9Cu, 0x280EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EA4u;
label_280ea4:
    // 0x280ea4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x280ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x280ea8: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x280ea8u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x280eac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x280eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280eb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x280eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280eb4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x280eb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x280eb8: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x280eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280ebc: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x280ebcu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x280ec0: 0x460d0344  c1          0xD0344
    ctx->pc = 0x280ec0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x280ec4: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280ec8: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x280ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280ecc: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280ECCu;
    SET_GPR_U32(ctx, 31, 0x280ED4u);
    ctx->pc = 0x280ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280ECCu;
    // 0x280ed0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280ECCu, 0x280ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280ED4u;
label_280ed4:
    // 0x280ed4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x280ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280ed8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x280ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280edc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x280EDCu;
    {
        const bool branch_taken_0x280edc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x280EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EDCu;
        // 0x280ee0: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280edc) {
            ctx->pc = 0x280EE8u;
            goto label_280ee8;
        }
    }
    ctx->pc = 0x280EE4u;
    // 0x280ee4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x280ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280ee8:
    // 0x280ee8: 0xc7808f94  lwc1        $f0, -0x706C($gp)
    ctx->pc = 0x280ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280eec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x280eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280ef0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280EF0u;
    {
        const bool branch_taken_0x280ef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280ef0) {
            ctx->pc = 0x280F00u;
            goto label_280f00;
        }
    }
    ctx->pc = 0x280EF8u;
    // 0x280ef8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280EF8u;
    {
        const bool branch_taken_0x280ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EF8u;
        // 0x280efc: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ef8) {
            ctx->pc = 0x280F10u;
            goto label_280f10;
        }
    }
    ctx->pc = 0x280F00u;
label_280f00:
    // 0x280f00: 0xc7808f98  lwc1        $f0, -0x7068($gp)
    ctx->pc = 0x280f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f04: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280f08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280F08u;
    {
        const bool branch_taken_0x280f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280f08) {
            ctx->pc = 0x280F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F08u;
            // 0x280f0c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F10u;
            goto label_280f10;
        }
    }
    ctx->pc = 0x280F10u;
label_280f10:
    // 0x280f10: 0xc7808f9c  lwc1        $f0, -0x7064($gp)
    ctx->pc = 0x280f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f14: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x280F14u;
    {
        const bool branch_taken_0x280f14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F14u;
        // 0x280f18: 0x4600a528  max.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f14) {
            ctx->pc = 0x280F30u;
            goto label_280f30;
        }
    }
    ctx->pc = 0x280F1Cu;
    // 0x280f1c: 0xc7808fa0  lwc1        $f0, -0x7060($gp)
    ctx->pc = 0x280f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f20: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x280f20u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x280f24: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x280F24u;
    {
        const bool branch_taken_0x280f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F24u;
        // 0x280f28: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f24) {
            ctx->pc = 0x2811F4u;
            goto label_2811f4;
        }
    }
    ctx->pc = 0x280F2Cu;
    // 0x280f2c: 0x0  nop
    ctx->pc = 0x280f2cu;
    // NOP
label_280f30:
    // 0x280f30: 0xc7808fa4  lwc1        $f0, -0x705C($gp)
    ctx->pc = 0x280f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f34: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x280f34u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x280f38: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x280F38u;
    {
        const bool branch_taken_0x280f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F38u;
        // 0x280f3c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f38) {
            ctx->pc = 0x2811F4u;
            goto label_2811f4;
        }
    }
    ctx->pc = 0x280F40u;
label_280f40:
    // 0x280f40: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x280f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x280f44: 0xc7ad00a0  lwc1        $f13, 0xA0($sp)
    ctx->pc = 0x280f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x280f48: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x280F48u;
    SET_GPR_U32(ctx, 31, 0x280F50u);
    ctx->pc = 0x280F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280F48u;
    // 0x280f4c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x280F48u, 0x280F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F50u;
label_280f50:
    // 0x280f50: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x280f50u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x280f54: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x280f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280f58: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280F58u;
    {
        const bool branch_taken_0x280f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280f58) {
            ctx->pc = 0x280F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F58u;
            // 0x280f5c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F60u;
            goto label_280f60;
        }
    }
    ctx->pc = 0x280F60u;
label_280f60:
    // 0x280f60: 0xc7808fa8  lwc1        $f0, -0x7058($gp)
    ctx->pc = 0x280f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f64: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x280f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280f68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x280F68u;
    {
        const bool branch_taken_0x280f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280f68) {
            ctx->pc = 0x280F78u;
            goto label_280f78;
        }
    }
    ctx->pc = 0x280F70u;
    // 0x280f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280F70u;
    {
        const bool branch_taken_0x280f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F70u;
        // 0x280f74: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f70) {
            ctx->pc = 0x280F88u;
            goto label_280f88;
        }
    }
    ctx->pc = 0x280F78u;
label_280f78:
    // 0x280f78: 0xc7808fac  lwc1        $f0, -0x7054($gp)
    ctx->pc = 0x280f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280f7c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x280f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280f80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280F80u;
    {
        const bool branch_taken_0x280f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280f80) {
            ctx->pc = 0x280F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F80u;
            // 0x280f84: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F88u;
            goto label_280f88;
        }
    }
    ctx->pc = 0x280F88u;
label_280f88:
    // 0x280f88: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x280f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x280f8c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x280F8Cu;
    {
        const bool branch_taken_0x280f8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F8Cu;
        // 0x280f90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f8c) {
            ctx->pc = 0x280FB8u;
            goto label_280fb8;
        }
    }
    ctx->pc = 0x280F94u;
    // 0x280f94: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x280f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280f98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x280f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280f9c: 0x46151002  mul.s       $f0, $f2, $f21
    ctx->pc = 0x280f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x280fa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280fa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x280FA4u;
    {
        const bool branch_taken_0x280fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280fa4) {
            ctx->pc = 0x280FB8u;
            goto label_280fb8;
        }
    }
    ctx->pc = 0x280FACu;
    // 0x280fac: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x280facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280fb0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x280fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x280fb4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x280fb4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_280fb8:
    // 0x280fb8: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280FB8u;
    {
        const bool branch_taken_0x280fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x280FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FB8u;
        // 0x280fbc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fb8) {
            ctx->pc = 0x280FCCu;
            goto label_280fcc;
        }
    }
    ctx->pc = 0x280FC0u;
    // 0x280fc0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x280fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x280fc4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280FC4u;
    {
        const bool branch_taken_0x280fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280fc4) {
            ctx->pc = 0x280FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280FC4u;
            // 0x280fc8: 0xc6350000  lwc1        $f21, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280FE4u;
            goto label_280fe4;
        }
    }
    ctx->pc = 0x280FCCu;
label_280fcc:
    // 0x280fcc: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280FCCu;
    {
        const bool branch_taken_0x280fcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x280FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FCCu;
        // 0x280fd0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fcc) {
            ctx->pc = 0x280FF8u;
            goto label_280ff8;
        }
    }
    ctx->pc = 0x280FD4u;
    // 0x280fd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x280fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x280fd8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280FD8u;
    {
        const bool branch_taken_0x280fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x280FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD8u;
        // 0x280fdc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fd8) {
            ctx->pc = 0x280FFCu;
            goto label_280ffc;
        }
    }
    ctx->pc = 0x280FE0u;
    // 0x280fe0: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x280fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_280fe4:
    // 0x280fe4: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x280fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280fe8: 0x4600a946  mov.s       $f5, $f21
    ctx->pc = 0x280fe8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[21]);
    // 0x280fec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x280FECu;
    {
        const bool branch_taken_0x280fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FECu;
        // 0x280ff0: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fec) {
            ctx->pc = 0x281028u;
            goto label_281028;
        }
    }
    ctx->pc = 0x280FF4u;
    // 0x280ff4: 0x0  nop
    ctx->pc = 0x280ff4u;
    // NOP
label_280ff8:
    // 0x280ff8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x280ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280ffc:
    // 0x280ffc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x280ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281000: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x281000u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x281004: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x281004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x281008: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x281008u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x28100c: 0x460d0344  c1          0xD0344
    ctx->pc = 0x28100cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x281010: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x281010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x281014: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x281014u;
    SET_GPR_U32(ctx, 31, 0x28101Cu);
    ctx->pc = 0x281018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281014u;
    // 0x281018: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x281014u, 0x28101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28101Cu;
label_28101c:
    // 0x28101c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x28101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x281020: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x281020u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x281024: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x281024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_281028:
    // 0x281028: 0x2602fffd  addiu       $v0, $s0, -0x3
    ctx->pc = 0x281028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x28102c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28102cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281030: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x281030u;
    {
        const bool branch_taken_0x281030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281030u;
        // 0x281034: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281030) {
            ctx->pc = 0x28103Cu;
            goto label_28103c;
        }
    }
    ctx->pc = 0x281038u;
    // 0x281038: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x281038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28103c:
    // 0x28103c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28103Cu;
    {
        const bool branch_taken_0x28103c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x281040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28103Cu;
        // 0x281040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28103c) {
            ctx->pc = 0x281060u;
            goto label_281060;
        }
    }
    ctx->pc = 0x281044u;
    // 0x281044: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x281044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x281048: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281048u;
    {
        const bool branch_taken_0x281048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x281048) {
            ctx->pc = 0x28104Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281048u;
            // 0x28104c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281060u;
            goto label_281060;
        }
    }
    ctx->pc = 0x281050u;
    // 0x281050: 0xc7958fb0  lwc1        $f21, -0x7050($gp)
    ctx->pc = 0x281050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281054u;
    {
        const bool branch_taken_0x281054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281054) {
            ctx->pc = 0x281078u;
            goto label_281078;
        }
    }
    ctx->pc = 0x28105Cu;
    // 0x28105c: 0x0  nop
    ctx->pc = 0x28105cu;
    // NOP
label_281060:
    // 0x281060: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281060u;
    {
        const bool branch_taken_0x281060 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x281060) {
            ctx->pc = 0x281078u;
            goto label_281078;
        }
    }
    ctx->pc = 0x281068u;
    // 0x281068: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x281068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28106c: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28106Cu;
    {
        const bool branch_taken_0x28106c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x28106c) {
            ctx->pc = 0x281078u;
            goto label_281078;
        }
    }
    ctx->pc = 0x281074u;
    // 0x281074: 0xc7958fb4  lwc1        $f21, -0x704C($gp)
    ctx->pc = 0x281074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_281078:
    // 0x281078: 0xc7808fb8  lwc1        $f0, -0x7048($gp)
    ctx->pc = 0x281078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28107c: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x28107cu;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
    // 0x281080: 0xc7818fbc  lwc1        $f1, -0x7044($gp)
    ctx->pc = 0x281080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281084: 0x4601ad69  min.s       $f21, $f21, $f1
    ctx->pc = 0x281084u;
    ctx->f[21] = std::min(ctx->f[21], ctx->f[1]);
    // 0x281088: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x281088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28108c: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x28108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281090: 0x46056081  sub.s       $f2, $f12, $f5
    ctx->pc = 0x281090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x281094: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x281094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281098: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x281098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28109c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28109cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2810a0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2810A0u;
    {
        const bool branch_taken_0x2810a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2810a0) {
            ctx->pc = 0x2810D8u;
            goto label_2810d8;
        }
    }
    ctx->pc = 0x2810A8u;
    // 0x2810a8: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x2810a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x2810ac: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x2810acu;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x2810b0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2810b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2810b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2810b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2810b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2810B8u;
    {
        const bool branch_taken_0x2810b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2810b8) {
            ctx->pc = 0x2810D8u;
            goto label_2810d8;
        }
    }
    ctx->pc = 0x2810C0u;
    // 0x2810c0: 0x4616b000  add.s       $f0, $f22, $f22
    ctx->pc = 0x2810c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x2810c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2810c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2810c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2810c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2810cc: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2810ccu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2810d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2810D0u;
    {
        const bool branch_taken_0x2810d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2810D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810D0u;
        // 0x2810d4: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810d0) {
            ctx->pc = 0x2810ECu;
            goto label_2810ec;
        }
    }
    ctx->pc = 0x2810D8u;
label_2810d8:
    // 0x2810d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2810d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2810dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2810dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2810e0: 0x4601b069  min.s       $f1, $f22, $f1
    ctx->pc = 0x2810e0u;
    ctx->f[1] = std::min(ctx->f[22], ctx->f[1]);
    // 0x2810e4: 0x46056001  sub.s       $f0, $f12, $f5
    ctx->pc = 0x2810e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x2810e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2810e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2810ec:
    // 0x2810ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2810ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2810f0: 0x16820011  bne         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2810F0u;
    {
        const bool branch_taken_0x2810f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2810F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810F0u;
        // 0x2810f4: 0x46002d40  add.s       $f21, $f5, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810f0) {
            ctx->pc = 0x281138u;
            goto label_281138;
        }
    }
    ctx->pc = 0x2810F8u;
    // 0x2810f8: 0x8f82ca88  lw          $v0, -0x3578($gp)
    ctx->pc = 0x2810f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953608)));
    // 0x2810fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2810FCu;
    {
        const bool branch_taken_0x2810fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2810fc) {
            ctx->pc = 0x281138u;
            goto label_281138;
        }
    }
    ctx->pc = 0x281104u;
    // 0x281104: 0x4605a801  sub.s       $f0, $f21, $f5
    ctx->pc = 0x281104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[5]);
    // 0x281108: 0xc7818fc0  lwc1        $f1, -0x7040($gp)
    ctx->pc = 0x281108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28110c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28110cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x281110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281114: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
    ctx->pc = 0x281114u;
    {
        const bool branch_taken_0x281114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281114) {
            ctx->pc = 0x281118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281114u;
            // 0x281118: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2811C0u;
            goto label_2811c0;
        }
    }
    ctx->pc = 0x28111Cu;
    // 0x28111c: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x28111cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x281120: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x281120u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x281124: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x281124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281128: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x281128u;
    {
        const bool branch_taken_0x281128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281128) {
            ctx->pc = 0x281138u;
            goto label_281138;
        }
    }
    ctx->pc = 0x281130u;
    // 0x281130: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x281130u;
    {
        const bool branch_taken_0x281130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281130u;
        // 0x281134: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281130) {
            ctx->pc = 0x2811C0u;
            goto label_2811c0;
        }
    }
    ctx->pc = 0x281138u;
label_281138:
    // 0x281138: 0xc7808fc4  lwc1        $f0, -0x703C($gp)
    ctx->pc = 0x281138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28113c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x28113Cu;
    {
        const bool branch_taken_0x28113c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x281140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28113Cu;
        // 0x281140: 0x4600a528  max.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28113c) {
            ctx->pc = 0x281150u;
            goto label_281150;
        }
    }
    ctx->pc = 0x281144u;
    // 0x281144: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x281144u;
    {
        const bool branch_taken_0x281144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281144u;
        // 0x281148: 0xc7808fc8  lwc1        $f0, -0x7038($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281144) {
            ctx->pc = 0x281154u;
            goto label_281154;
        }
    }
    ctx->pc = 0x28114Cu;
    // 0x28114c: 0x0  nop
    ctx->pc = 0x28114cu;
    // NOP
label_281150:
    // 0x281150: 0xc7808fcc  lwc1        $f0, -0x7034($gp)
    ctx->pc = 0x281150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281154:
    // 0x281154: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x281154u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x281158: 0x4604a081  sub.s       $f2, $f20, $f4
    ctx->pc = 0x281158u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x28115c: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x28115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281160: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x281160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281164: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x281164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281168: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x281168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28116c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x28116Cu;
    {
        const bool branch_taken_0x28116c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28116c) {
            ctx->pc = 0x2811A8u;
            goto label_2811a8;
        }
    }
    ctx->pc = 0x281174u;
    // 0x281174: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x281174u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x281178: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x281178u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x28117c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x28117cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x281180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x281180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281184: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x281184u;
    {
        const bool branch_taken_0x281184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281184) {
            ctx->pc = 0x2811A8u;
            goto label_2811a8;
        }
    }
    ctx->pc = 0x28118Cu;
    // 0x28118c: 0x4616b000  add.s       $f0, $f22, $f22
    ctx->pc = 0x28118cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x281190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x281194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x281194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281198: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x281198u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x28119c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28119Cu;
    {
        const bool branch_taken_0x28119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28119Cu;
        // 0x2811a0: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28119c) {
            ctx->pc = 0x2811BCu;
            goto label_2811bc;
        }
    }
    ctx->pc = 0x2811A4u;
    // 0x2811a4: 0x0  nop
    ctx->pc = 0x2811a4u;
    // NOP
label_2811a8:
    // 0x2811a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2811a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2811ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2811acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2811b0: 0x4601b069  min.s       $f1, $f22, $f1
    ctx->pc = 0x2811b0u;
    ctx->f[1] = std::min(ctx->f[22], ctx->f[1]);
    // 0x2811b4: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x2811b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x2811b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2811b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2811bc:
    // 0x2811bc: 0x46002500  add.s       $f20, $f4, $f0
    ctx->pc = 0x2811bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2811c0:
    // 0x2811c0: 0x26e43b10  addiu       $a0, $s7, 0x3B10
    ctx->pc = 0x2811c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 15120));
    // 0x2811c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2811c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2811c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2811cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2811ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2811d0: 0xc09fcf6  jal         func_27F3D8
    ctx->pc = 0x2811D0u;
    SET_GPR_U32(ctx, 31, 0x2811D8u);
    ctx->pc = 0x2811D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811D0u;
    // 0x2811d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D8u, 0x2811D0u, 0x2811D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811D8u;
label_2811d8:
    // 0x2811d8: 0x26e43600  addiu       $a0, $s7, 0x3600
    ctx->pc = 0x2811d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 13824));
    // 0x2811dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2811dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2811e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2811e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2811e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2811e8: 0xc09fcf6  jal         func_27F3D8
    ctx->pc = 0x2811E8u;
    SET_GPR_U32(ctx, 31, 0x2811F0u);
    ctx->pc = 0x2811ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811E8u;
    // 0x2811ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D8u, 0x2811E8u, 0x2811F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811F0u;
label_2811f0:
    // 0x2811f0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2811f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_2811f4:
    // 0x2811f4: 0xe6350000  swc1        $f21, 0x0($s1)
    ctx->pc = 0x2811f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2811f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2811F8u;
    {
        const bool branch_taken_0x2811f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2811FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811F8u;
        // 0x2811fc: 0xe6340004  swc1        $f20, 0x4($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811f8) {
            ctx->pc = 0x281210u;
            goto label_281210;
        }
    }
    ctx->pc = 0x281200u;
    // 0x281200: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x281200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x281204: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x281204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x281208: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x281208u;
    {
        const bool branch_taken_0x281208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281208) {
            ctx->pc = 0x28120Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281208u;
            // 0x28120c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281254u;
            goto label_281254;
        }
    }
    ctx->pc = 0x281210u;
label_281210:
    // 0x281210: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x281210u;
    {
        const bool branch_taken_0x281210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281210u;
        // 0x281214: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281210) {
            ctx->pc = 0x281250u;
            goto label_281250;
        }
    }
    ctx->pc = 0x281218u;
label_281218:
    // 0x281218: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x281218u;
    {
        const bool branch_taken_0x281218 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281218u;
        // 0x28121c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281218) {
            ctx->pc = 0x281254u;
            goto label_281254;
        }
    }
    ctx->pc = 0x281220u;
    // 0x281220: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x281220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281224: 0x26e43b10  addiu       $a0, $s7, 0x3B10
    ctx->pc = 0x281224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 15120));
    // 0x281228: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x281228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28122c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281230: 0xc09fcf6  jal         func_27F3D8
    ctx->pc = 0x281230u;
    SET_GPR_U32(ctx, 31, 0x281238u);
    ctx->pc = 0x281234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281230u;
    // 0x281234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D8u, 0x281230u, 0x281238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281238u;
label_281238:
    // 0x281238: 0x26e43600  addiu       $a0, $s7, 0x3600
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 13824));
    // 0x28123c: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x28123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x281240: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281244: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x281244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281248: 0xc09fcf6  jal         func_27F3D8
    ctx->pc = 0x281248u;
    SET_GPR_U32(ctx, 31, 0x281250u);
    ctx->pc = 0x28124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281248u;
    // 0x28124c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D8u, 0x281248u, 0x281250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281250u;
label_281250:
    // 0x281250: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x281250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_281254:
    // 0x281254: 0xdfb10188  ld          $s1, 0x188($sp)
    ctx->pc = 0x281254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x281258: 0xdfb20190  ld          $s2, 0x190($sp)
    ctx->pc = 0x281258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28125c: 0xdfb30198  ld          $s3, 0x198($sp)
    ctx->pc = 0x28125cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x281260: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x281260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x281264: 0xdfb501a8  ld          $s5, 0x1A8($sp)
    ctx->pc = 0x281264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x281268: 0xdfb601b0  ld          $s6, 0x1B0($sp)
    ctx->pc = 0x281268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x28126c: 0xdfb701b8  ld          $s7, 0x1B8($sp)
    ctx->pc = 0x28126cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x281270: 0xdfbe01c0  ld          $fp, 0x1C0($sp)
    ctx->pc = 0x281270u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x281274: 0xdfbf01c8  ld          $ra, 0x1C8($sp)
    ctx->pc = 0x281274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x281278: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x281278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28127c: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x28127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x281280: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x281280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281284: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x281284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x281288: 0xaf80ca88  sw          $zero, -0x3578($gp)
    ctx->pc = 0x281288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953608), GPR_U32(ctx, 0));
    // 0x28128c: 0x3e00008  jr          $ra
    ctx->pc = 0x28128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28128Cu;
        // 0x281290: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28128Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281294u;
    // 0x281294: 0x0  nop
    ctx->pc = 0x281294u;
    // NOP
    ctx->pc = 0x281298u;
}
