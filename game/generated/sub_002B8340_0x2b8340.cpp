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

// Function: sub_002B8340
// Address: 0x2b8340 - 0x2b85b0
void sub_002B8340_0x2b8340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8340_0x2b8340");
#endif

    switch (ctx->pc) {
        case 0x2b8394u: goto label_2b8394;
        case 0x2b83d0u: goto label_2b83d0;
        case 0x2b8420u: goto label_2b8420;
        case 0x2b8464u: goto label_2b8464;
        case 0x2b8480u: goto label_2b8480;
        case 0x2b84e4u: goto label_2b84e4;
        case 0x2b84f8u: goto label_2b84f8;
        case 0x2b8508u: goto label_2b8508;
        case 0x2b8518u: goto label_2b8518;
        case 0x2b8558u: goto label_2b8558;
        default: break;
    }

    ctx->pc = 0x2b8340u;

    // 0x2b8340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b8344: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2b8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x2b8348: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2b8348u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b834c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2b834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2b8350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8354: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2b8354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x2b8358: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2b8358u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b835c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2b835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2b8360: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b8360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b8364: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2b8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2b8368: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b8368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b836c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2b836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2b8370: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b8374: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2b8374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2b8378: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2b8378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b837c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2b837cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b8380: 0x12e0007c  beqz        $s7, . + 4 + (0x7C << 2)
    ctx->pc = 0x2B8380u;
    {
        const bool branch_taken_0x2b8380 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8380u;
        // 0x2b8384: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8380) {
            ctx->pc = 0x2B8574u;
            goto label_2b8574;
        }
    }
    ctx->pc = 0x2B8388u;
    // 0x2b8388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b838c: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2B838Cu;
    SET_GPR_U32(ctx, 31, 0x2B8394u);
    ctx->pc = 0x2B8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B838Cu;
    // 0x2b8390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2B838Cu, 0x2B8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8394u;
label_2b8394:
    // 0x2b8394: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b8394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8398: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2b8398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b839c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b839cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83a0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2b83a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83a4: 0xae360030  sw          $s6, 0x30($s1)
    ctx->pc = 0x2b83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 22));
    // 0x2b83a8: 0xc41818  mult        $v1, $a2, $a0
    ctx->pc = 0x2b83a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b83ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b83acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b83b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b83b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b83bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b83c0: 0x18c0003a  blez        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B83C0u;
    {
        const bool branch_taken_0x2b83c0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83C0u;
        // 0x2b83c4: 0x2c29821  addu        $s3, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83c0) {
            ctx->pc = 0x2B84ACu;
            goto label_2b84ac;
        }
    }
    ctx->pc = 0x2B83C8u;
    // 0x2b83c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b83c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b83cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b83ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2b83d0:
    // 0x2b83d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b83d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b83d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b83d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b83d8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2b83d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b83dc: 0x44941800  mtc1        $s4, $f3
    ctx->pc = 0x2b83dcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b83e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b83e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b83e4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2b83e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b83e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b83e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b83ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83f0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2b83f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b83f4: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x2b83f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b83f8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2b83f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2b83fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b83fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b8400: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b8400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b8404: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2b8404u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8408: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b8408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b840c: 0x18800023  blez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B840Cu;
    {
        const bool branch_taken_0x2b840c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B840Cu;
        // 0x2b8410: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b840c) {
            ctx->pc = 0x2B849Cu;
            goto label_2b849c;
        }
    }
    ctx->pc = 0x2B8414u;
    // 0x2b8414: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b8414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8418: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b8418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b841c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2b841cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b8420:
    // 0x2b8420: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b8424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b8428: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x2b8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b842c: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x2b842cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8430: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b8430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b8434: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b8434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b8438: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2b8438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b843c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8440: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2b8440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b8444: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x2b8444u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b8448: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2b8448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2b844c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b844cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b8450: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b8450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b8454: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2b8454u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8458: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2b8458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b845c: 0xc0ae008  jal         func_2B8020
    ctx->pc = 0x2B845Cu;
    SET_GPR_U32(ctx, 31, 0x2B8464u);
    ctx->pc = 0x2B8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B845Cu;
    // 0x2b8460: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8020u, 0x2B845Cu, 0x2B8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8464u;
label_2b8464:
    // 0x2b8464: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b8464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b846c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b846cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8470: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2b8470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8474: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2b8474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8478: 0xc0ae018  jal         func_2B8060
    ctx->pc = 0x2B8478u;
    SET_GPR_U32(ctx, 31, 0x2B8480u);
    ctx->pc = 0x2B847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8478u;
    // 0x2b847c: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8060u, 0x2B8478u, 0x2B8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8480u;
label_2b8480:
    // 0x2b8480: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2b8480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b8484: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b8484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8488: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2b8488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2b848c: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2b848cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b8490: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2B8490u;
    {
        const bool branch_taken_0x2b8490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8490u;
        // 0x2b8494: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8490) {
            ctx->pc = 0x2B8420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8420;
        }
    }
    ctx->pc = 0x2B8498u;
    // 0x2b8498: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b8498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b849c:
    // 0x2b849c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b849cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b84a0: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x2b84a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b84a4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2B84A4u;
    {
        const bool branch_taken_0x2b84a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84A4u;
        // 0x2b84a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84a4) {
            ctx->pc = 0x2B83D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b83d0;
        }
    }
    ctx->pc = 0x2B84ACu;
label_2b84ac:
    // 0x2b84ac: 0x2769823  subu        $s3, $s3, $s6
    ctx->pc = 0x2b84acu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2b84b0: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x2b84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x2b84b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B84B4u;
    {
        const bool branch_taken_0x2b84b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84B4u;
        // 0x2b84b8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84b4) {
            ctx->pc = 0x2B84C8u;
            goto label_2b84c8;
        }
    }
    ctx->pc = 0x2B84BCu;
    // 0x2b84bc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2b84bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2b84c0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x2b84c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2b84c4: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x2b84c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2b84c8:
    // 0x2b84c8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2b84c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b84cc: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2b84ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2b84d0: 0x24e74328  addiu       $a3, $a3, 0x4328
    ctx->pc = 0x2b84d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17192));
    // 0x2b84d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b84d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b84d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b84dc: 0xc089248  jal         func_224920
    ctx->pc = 0x2B84DCu;
    SET_GPR_U32(ctx, 31, 0x2B84E4u);
    ctx->pc = 0x2B84E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B84DCu;
    // 0x2b84e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2B84DCu, 0x2B84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B84E4u;
label_2b84e4:
    // 0x2b84e4: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x2b84e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b84e8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b84e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b84ec: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B84ECu;
    {
        const bool branch_taken_0x2b84ec = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84ECu;
        // 0x2b84f0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84ec) {
            ctx->pc = 0x2B8544u;
            goto label_2b8544;
        }
    }
    ctx->pc = 0x2B84F4u;
    // 0x2b84f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2b84f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b84f8:
    // 0x2b84f8: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B84F8u;
    {
        const bool branch_taken_0x2b84f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84F8u;
        // 0x2b84fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84f8) {
            ctx->pc = 0x2B8534u;
            goto label_2b8534;
        }
    }
    ctx->pc = 0x2B8500u;
    // 0x2b8500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8504: 0x0  nop
    ctx->pc = 0x2b8504u;
    // NOP
label_2b8508:
    // 0x2b8508: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2b8508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2b850c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b850cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8510: 0xc0ae096  jal         func_2B8258
    ctx->pc = 0x2B8510u;
    SET_GPR_U32(ctx, 31, 0x2B8518u);
    ctx->pc = 0x2B8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8510u;
    // 0x2b8514: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8258u, 0x2B8510u, 0x2B8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8518u;
label_2b8518:
    // 0x2b8518: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b851c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b851cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b8520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8524: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x2b8524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b8528: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B8528u;
    {
        const bool branch_taken_0x2b8528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8528) {
            ctx->pc = 0x2B852Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8528u;
            // 0x2b852c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8508;
        }
    }
    ctx->pc = 0x2B8530u;
    // 0x2b8530: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b8530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8534:
    // 0x2b8534: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b8534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b8538: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x2b8538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b853c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B853Cu;
    {
        const bool branch_taken_0x2b853c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b853c) {
            ctx->pc = 0x2B84F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b84f8;
        }
    }
    ctx->pc = 0x2B8544u;
label_2b8544:
    // 0x2b8544: 0xae350030  sw          $s5, 0x30($s1)
    ctx->pc = 0x2b8544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 21));
    // 0x2b8548: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b8548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b854c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b854cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8550: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8550u;
    {
        const bool branch_taken_0x2b8550 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2B8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8550u;
        // 0x2b8554: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8550) {
            ctx->pc = 0x2B8574u;
            goto label_2b8574;
        }
    }
    ctx->pc = 0x2B8558u;
label_2b8558:
    // 0x2b8558: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2b8558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b855c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b8560: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b8560u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b8564: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2b8564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2b8568: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2b8568u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b856c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B856Cu;
    {
        const bool branch_taken_0x2b856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B856Cu;
        // 0x2b8570: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b856c) {
            ctx->pc = 0x2B8558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8558;
        }
    }
    ctx->pc = 0x2B8574u;
label_2b8574:
    // 0x2b8574: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b8574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8578: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2b8578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b857c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b857cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8580: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2b8580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b8584: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b8584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8588: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2b8588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b858c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b858cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8590: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2b8590u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2b8594: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2b8594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b8598: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2b8598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2b859c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2b859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b85a0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2b85a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b85a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B85A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85A4u;
        // 0x2b85a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B85A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B85ACu;
    // 0x2b85ac: 0x0  nop
    ctx->pc = 0x2b85acu;
    // NOP
    ctx->pc = 0x2b85b0u;
}
