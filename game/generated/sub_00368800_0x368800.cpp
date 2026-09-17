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

// Function: sub_00368800
// Address: 0x368800 - 0x368980
void sub_00368800_0x368800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368800_0x368800");
#endif

    switch (ctx->pc) {
        case 0x36882cu: goto label_36882c;
        case 0x36883cu: goto label_36883c;
        case 0x368888u: goto label_368888;
        case 0x368898u: goto label_368898;
        default: break;
    }

    ctx->pc = 0x368800u;

    // 0x368800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368804: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x368804u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x368808: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x368808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36880c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x36880cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x368810: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x368810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x368814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368818: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x368818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36881c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x36881Cu;
    {
        const bool branch_taken_0x36881c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x368820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36881Cu;
        // 0x368820: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36881c) {
            ctx->pc = 0x368850u;
            goto label_368850;
        }
    }
    ctx->pc = 0x368824u;
    // 0x368824: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368824u;
    SET_GPR_U32(ctx, 31, 0x36882Cu);
    ctx->pc = 0x368828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368824u;
    // 0x368828: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368824u, 0x36882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36882Cu;
label_36882c:
    // 0x36882c: 0x26107d68  addiu       $s0, $s0, 0x7D68
    ctx->pc = 0x36882cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32104));
    // 0x368830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x368830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368834: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368834u;
    SET_GPR_U32(ctx, 31, 0x36883Cu);
    ctx->pc = 0x368838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368834u;
    // 0x368838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368834u, 0x36883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36883Cu;
label_36883c:
    // 0x36883c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36883cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x368840: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x368840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x368844: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x368844u;
    {
        const bool branch_taken_0x368844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368844u;
        // 0x368848: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368844) {
            ctx->pc = 0x368968u;
            goto label_368968;
        }
    }
    ctx->pc = 0x36884Cu;
    // 0x36884c: 0x0  nop
    ctx->pc = 0x36884cu;
    // NOP
label_368850:
    // 0x368850: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x368850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368854: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x368854u;
    {
        const bool branch_taken_0x368854 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x368858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368854u;
        // 0x368858: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368854) {
            ctx->pc = 0x368964u;
            goto label_368964;
        }
    }
    ctx->pc = 0x36885Cu;
    // 0x36885c: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x36885cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368860: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x368860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x368864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x368864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x368868: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x368868u;
    {
        const bool branch_taken_0x368868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368868u;
        // 0x36886c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368868) {
            ctx->pc = 0x368968u;
            goto label_368968;
        }
    }
    ctx->pc = 0x368870u;
    // 0x368870: 0x46146836  c.le.s      $f13, $f20
    ctx->pc = 0x368870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368874: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x368874u;
    {
        const bool branch_taken_0x368874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x368878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368874u;
        // 0x368878: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368874) {
            ctx->pc = 0x3688A0u;
            goto label_3688a0;
        }
    }
    ctx->pc = 0x36887Cu;
    // 0x36887c: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x36887cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x368880: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x368880u;
    SET_GPR_U32(ctx, 31, 0x368888u);
    ctx->pc = 0x368884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368880u;
    // 0x368884: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x368880u, 0x368888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368888u;
label_368888:
    // 0x368888: 0x26107da0  addiu       $s0, $s0, 0x7DA0
    ctx->pc = 0x368888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32160));
    // 0x36888c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368890: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368890u;
    SET_GPR_U32(ctx, 31, 0x368898u);
    ctx->pc = 0x368894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368890u;
    // 0x368894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368890u, 0x368898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368898u;
label_368898:
    // 0x368898: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x368898u;
    {
        const bool branch_taken_0x368898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368898) {
            ctx->pc = 0x368960u;
            goto label_368960;
        }
    }
    ctx->pc = 0x3688A0u;
label_3688a0:
    // 0x3688a0: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3688A0u;
    {
        const bool branch_taken_0x3688a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3688a0) {
            ctx->pc = 0x368910u;
            goto label_368910;
        }
    }
    ctx->pc = 0x3688A8u;
    // 0x3688a8: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x3688a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3688ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3688ACu;
    {
        const bool branch_taken_0x3688ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3688ac) {
            ctx->pc = 0x3688C8u;
            goto label_3688c8;
        }
    }
    ctx->pc = 0x3688B4u;
    // 0x3688b4: 0x0  nop
    ctx->pc = 0x3688b4u;
    // NOP
    // 0x3688b8: 0x0  nop
    ctx->pc = 0x3688b8u;
    // NOP
    // 0x3688bc: 0x460d7303  div.s       $f12, $f14, $f13
    ctx->pc = 0x3688bcu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[12] = ctx->f[14] / ctx->f[13];
    // 0x3688c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3688C0u;
    {
        const bool branch_taken_0x3688c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3688C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3688C0u;
        // 0x3688c4: 0x460c6002  mul.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3688c0) {
            ctx->pc = 0x3688D8u;
            goto label_3688d8;
        }
    }
    ctx->pc = 0x3688C8u;
label_3688c8:
    // 0x3688c8: 0x0  nop
    ctx->pc = 0x3688c8u;
    // NOP
    // 0x3688cc: 0x0  nop
    ctx->pc = 0x3688ccu;
    // NOP
    // 0x3688d0: 0x460d0303  div.s       $f12, $f0, $f13
    ctx->pc = 0x3688d0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[13];
    // 0x3688d4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x3688d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_3688d8:
    // 0x3688d8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3688d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3688dc: 0xc4416430  lwc1        $f1, 0x6430($v0)
    ctx->pc = 0x3688dcu;
    { uint32_t bits = FAST_READ32(0x1D6430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3688e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3688e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3688e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3688e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3688e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3688e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3688ec: 0x0  nop
    ctx->pc = 0x3688ecu;
    // NOP
    // 0x3688f0: 0x0  nop
    ctx->pc = 0x3688f0u;
    // NOP
    // 0x3688f4: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x3688f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x3688f8: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x3688f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3688fc: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x3688FCu;
    {
        const bool branch_taken_0x3688fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3688fc) {
            ctx->pc = 0x368900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3688FCu;
            // 0x368900: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x368964u;
            goto label_368964;
        }
    }
    ctx->pc = 0x368904u;
    // 0x368904: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x368904u;
    {
        const bool branch_taken_0x368904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368904u;
        // 0x368908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368904) {
            ctx->pc = 0x368968u;
            goto label_368968;
        }
    }
    ctx->pc = 0x36890Cu;
    // 0x36890c: 0x0  nop
    ctx->pc = 0x36890cu;
    // NOP
label_368910:
    // 0x368910: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x368910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368914: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x368914u;
    {
        const bool branch_taken_0x368914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x368914) {
            ctx->pc = 0x368918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368914u;
            // 0x368918: 0x460d7381  sub.s       $f14, $f14, $f13 (Delay Slot)
            ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x368928u;
            goto label_368928;
        }
    }
    ctx->pc = 0x36891Cu;
    // 0x36891c: 0x460d7301  sub.s       $f12, $f14, $f13
    ctx->pc = 0x36891cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x368920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368920u;
    {
        const bool branch_taken_0x368920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368920u;
        // 0x368924: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368920) {
            ctx->pc = 0x36892Cu;
            goto label_36892c;
        }
    }
    ctx->pc = 0x368928u;
label_368928:
    // 0x368928: 0x460d0301  sub.s       $f12, $f0, $f13
    ctx->pc = 0x368928u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
label_36892c:
    // 0x36892c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x36892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x368930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x368930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x368934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x368938: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x368938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36893c: 0x0  nop
    ctx->pc = 0x36893cu;
    // NOP
    // 0x368940: 0x0  nop
    ctx->pc = 0x368940u;
    // NOP
    // 0x368944: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x368944u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    // 0x368948: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x368948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36894c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x36894cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x368950: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x368950u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x368954: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x368954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368958: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x368958u;
    {
        const bool branch_taken_0x368958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368958u;
        // 0x36895c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368958) {
            ctx->pc = 0x368968u;
            goto label_368968;
        }
    }
    ctx->pc = 0x368960u;
label_368960:
    // 0x368960: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x368960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_368964:
    // 0x368964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368968:
    // 0x368968: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x368968u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x36896c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368970: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x368970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368974: 0x3e00008  jr          $ra
    ctx->pc = 0x368974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368974u;
        // 0x368978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36897Cu;
    // 0x36897c: 0x0  nop
    ctx->pc = 0x36897cu;
    // NOP
    ctx->pc = 0x368980u;
}
