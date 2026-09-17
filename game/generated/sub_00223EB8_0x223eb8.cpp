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

// Function: sub_00223EB8
// Address: 0x223eb8 - 0x2244a0
void sub_00223EB8_0x223eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223EB8_0x223eb8");
#endif

    switch (ctx->pc) {
        case 0x223f4cu: goto label_223f4c;
        case 0x223f5cu: goto label_223f5c;
        case 0x223f70u: goto label_223f70;
        case 0x223f98u: goto label_223f98;
        case 0x223fbcu: goto label_223fbc;
        case 0x223fccu: goto label_223fcc;
        case 0x223fdcu: goto label_223fdc;
        case 0x223fecu: goto label_223fec;
        case 0x223ffcu: goto label_223ffc;
        case 0x224250u: goto label_224250;
        case 0x224290u: goto label_224290;
        case 0x2242e0u: goto label_2242e0;
        case 0x224338u: goto label_224338;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243d8u: goto label_2243d8;
        case 0x224454u: goto label_224454;
        default: break;
    }

    ctx->pc = 0x223eb8u;

    // 0x223eb8: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x223eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x223ebc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223ec4: 0xffb20200  sd          $s2, 0x200($sp)
    ctx->pc = 0x223ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 18));
    // 0x223ec8: 0xffb30208  sd          $s3, 0x208($sp)
    ctx->pc = 0x223ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 19));
    // 0x223ecc: 0xffb40210  sd          $s4, 0x210($sp)
    ctx->pc = 0x223eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 20));
    // 0x223ed0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x223ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ed4: 0xffb50218  sd          $s5, 0x218($sp)
    ctx->pc = 0x223ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 21));
    // 0x223ed8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x223ed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223edc: 0xffb60220  sd          $s6, 0x220($sp)
    ctx->pc = 0x223edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 22));
    // 0x223ee0: 0xffb70228  sd          $s7, 0x228($sp)
    ctx->pc = 0x223ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 23));
    // 0x223ee4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x223ee4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ee8: 0xe7b90268  swc1        $f25, 0x268($sp)
    ctx->pc = 0x223ee8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x223eec: 0xe7b80260  swc1        $f24, 0x260($sp)
    ctx->pc = 0x223eecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x223ef0: 0xe7b70258  swc1        $f23, 0x258($sp)
    ctx->pc = 0x223ef0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x223ef4: 0xe7b60250  swc1        $f22, 0x250($sp)
    ctx->pc = 0x223ef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x223ef8: 0xe7b50248  swc1        $f21, 0x248($sp)
    ctx->pc = 0x223ef8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x223efc: 0xffb001f0  sd          $s0, 0x1F0($sp)
    ctx->pc = 0x223efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 16));
    // 0x223f00: 0xffb101f8  sd          $s1, 0x1F8($sp)
    ctx->pc = 0x223f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 17));
    // 0x223f04: 0xffbe0230  sd          $fp, 0x230($sp)
    ctx->pc = 0x223f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 30));
    // 0x223f08: 0xffbf0238  sd          $ra, 0x238($sp)
    ctx->pc = 0x223f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
    // 0x223f0c: 0xe7b40240  swc1        $f20, 0x240($sp)
    ctx->pc = 0x223f0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x223f10: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x223f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x223f14: 0xc6f40008  lwc1        $f20, 0x8($s7)
    ctx->pc = 0x223f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223f18: 0x8efe0000  lw          $fp, 0x0($s7)
    ctx->pc = 0x223f18u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x223f1c: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x223f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x223f20: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x223f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x223f24: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x223f24u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x223f28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x223f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x223f2c: 0x449eb000  mtc1        $fp, $f22
    ctx->pc = 0x223f2cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x223f30: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x223f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x223f34: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x223f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x223f38: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x223f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x223f3c: 0x4615b002  mul.s       $f0, $f22, $f21
    ctx->pc = 0x223f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x223f40: 0x46000e47  neg.s       $f25, $f1
    ctx->pc = 0x223f40u;
    ctx->f[25] = FPU_NEG_S(ctx->f[1]);
    // 0x223f44: 0xc088a7c  jal         func_2229F0
    ctx->pc = 0x223F44u;
    SET_GPR_U32(ctx, 31, 0x223F4Cu);
    ctx->pc = 0x223F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F44u;
    // 0x223f48: 0x46000607  neg.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2229F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2229F0u, 0x223F44u, 0x223F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F4Cu;
label_223f4c:
    // 0x223f4c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x223f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x223f50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x223f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f54: 0xc084986  jal         func_212618
    ctx->pc = 0x223F54u;
    SET_GPR_U32(ctx, 31, 0x223F5Cu);
    ctx->pc = 0x223F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F54u;
    // 0x223f58: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x223F54u, 0x223F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F5Cu;
label_223f5c:
    // 0x223f5c: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x223f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x223f60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x223f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x223f64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x223f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f68: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x223F68u;
    SET_GPR_U32(ctx, 31, 0x223F70u);
    ctx->pc = 0x223F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F68u;
    // 0x223f6c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x223F68u, 0x223F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F70u;
label_223f70:
    // 0x223f70: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x223f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x223f74: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x223f74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f78: 0x8c930050  lw          $s3, 0x50($a0)
    ctx->pc = 0x223f78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x223f7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x223f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x223f80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x223f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x223f84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x223f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x223f88: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x223F88u;
    {
        const bool branch_taken_0x223f88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x223F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F88u;
        // 0x223f8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f88) {
            ctx->pc = 0x224010u;
            goto label_224010;
        }
    }
    ctx->pc = 0x223F90u;
    // 0x223f90: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x223f90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x223f94: 0x0  nop
    ctx->pc = 0x223f94u;
    // NOP
label_223f98:
    // 0x223f98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f9c: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x223f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x223fa0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x223fa4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x223fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x223fa8: 0x2d08821  addu        $s1, $s6, $s0
    ctx->pc = 0x223fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x223fac: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x223facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x223fb0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x223fb4: 0xc08491e  jal         func_212478
    ctx->pc = 0x223FB4u;
    SET_GPR_U32(ctx, 31, 0x223FBCu);
    ctx->pc = 0x223FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FB4u;
    // 0x223fb8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x223FB4u, 0x223FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FBCu;
label_223fbc:
    // 0x223fbc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x223fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x223fc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fc4: 0xc08491e  jal         func_212478
    ctx->pc = 0x223FC4u;
    SET_GPR_U32(ctx, 31, 0x223FCCu);
    ctx->pc = 0x223FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FC4u;
    // 0x223fc8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x223FC4u, 0x223FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FCCu;
label_223fcc:
    // 0x223fcc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x223fd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fd4: 0xc08491e  jal         func_212478
    ctx->pc = 0x223FD4u;
    SET_GPR_U32(ctx, 31, 0x223FDCu);
    ctx->pc = 0x223FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FD4u;
    // 0x223fd8: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x223FD4u, 0x223FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FDCu;
label_223fdc:
    // 0x223fdc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x223fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x223fe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fe4: 0xc08491e  jal         func_212478
    ctx->pc = 0x223FE4u;
    SET_GPR_U32(ctx, 31, 0x223FECu);
    ctx->pc = 0x223FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FE4u;
    // 0x223fe8: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x223FE4u, 0x223FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FECu;
label_223fec:
    // 0x223fec: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x223fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x223ff0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x223ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x223ff4: 0xc08491e  jal         func_212478
    ctx->pc = 0x223FF4u;
    SET_GPR_U32(ctx, 31, 0x223FFCu);
    ctx->pc = 0x223FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FF4u;
    // 0x223ff8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x223FF4u, 0x223FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FFCu;
label_223ffc:
    // 0x223ffc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x224000: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x224000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x224004: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x224004u;
    {
        const bool branch_taken_0x224004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224004u;
        // 0x224008: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224004) {
            ctx->pc = 0x223F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223f98;
        }
    }
    ctx->pc = 0x22400Cu;
    // 0x22400c: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x22400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_224010:
    // 0x224010: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x224010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x224014: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x224014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x224018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22401c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22401cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224020: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x224020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224024: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x224024u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x224028: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x224028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x22402c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22402cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224030: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x224030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x224034: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x224034u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224038: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x224038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22403c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x22403cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x224040: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x224040u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x224044: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x224044u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x224048: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x224048u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x22404c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x22404cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x224050: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x224050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x224054: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x224054u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x224058: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x224058u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22405c: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x224060: 0x27a90170  addiu       $t1, $sp, 0x170
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x224064: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x224064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224068: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x224068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x22406c: 0xc483004c  lwc1        $f3, 0x4C($a0)
    ctx->pc = 0x22406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224070: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x224070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x224074: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x224074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x224078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22407c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x22407cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x224080: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x224080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x224084: 0xe7a40154  swc1        $f4, 0x154($sp)
    ctx->pc = 0x224084u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x224088: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x224088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22408c: 0xe7a5015c  swc1        $f5, 0x15C($sp)
    ctx->pc = 0x22408cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x224090: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x224090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x224094: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x224094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x224098: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x224098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x22409c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x22409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2240a0: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2240a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2240a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2240a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2240a8: 0xe7a5016c  swc1        $f5, 0x16C($sp)
    ctx->pc = 0x2240a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2240ac: 0xe7a40164  swc1        $f4, 0x164($sp)
    ctx->pc = 0x2240acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2240b0: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x2240b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2240b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2240b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2240b8: 0x46180041  sub.s       $f1, $f0, $f24
    ctx->pc = 0x2240b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2240bc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2240bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2240c0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2240C0u;
    {
        const bool branch_taken_0x2240c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240C0u;
        // 0x2240c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240c0) {
            ctx->pc = 0x2240ECu;
            goto label_2240ec;
        }
    }
    ctx->pc = 0x2240C8u;
    // 0x2240c8: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x2240c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2240cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2240ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2240d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2240D0u;
    {
        const bool branch_taken_0x2240d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2240D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240D0u;
        // 0x2240d4: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240d0) {
            ctx->pc = 0x2240ECu;
            goto label_2240ec;
        }
    }
    ctx->pc = 0x2240D8u;
    // 0x2240d8: 0x0  nop
    ctx->pc = 0x2240d8u;
    // NOP
    // 0x2240dc: 0x0  nop
    ctx->pc = 0x2240dcu;
    // NOP
    // 0x2240e0: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x2240e0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[20];
    // 0x2240e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2240e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2240e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2240e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2240ec:
    // 0x2240ec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2240ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2240f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2240f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2240f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2240f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2240f8: 0x46190081  sub.s       $f2, $f0, $f25
    ctx->pc = 0x2240f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x2240fc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2240fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224100: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x224100u;
    {
        const bool branch_taken_0x224100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224100u;
        // 0x224104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224100) {
            ctx->pc = 0x224130u;
            goto label_224130;
        }
    }
    ctx->pc = 0x224108u;
    // 0x224108: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x224108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x22410c: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x22410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x224110: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x224110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224114: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x224114u;
    {
        const bool branch_taken_0x224114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224114u;
        // 0x224118: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224114) {
            ctx->pc = 0x224130u;
            goto label_224130;
        }
    }
    ctx->pc = 0x22411Cu;
    // 0x22411c: 0x0  nop
    ctx->pc = 0x22411cu;
    // NOP
    // 0x224120: 0x0  nop
    ctx->pc = 0x224120u;
    // NOP
    // 0x224124: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x224124u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x224128: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22412c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22412cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_224130:
    // 0x224130: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x224130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x224134: 0x27b60160  addiu       $s6, $sp, 0x160
    ctx->pc = 0x224134u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x224138: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x224138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22413c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x22413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224140: 0x46180081  sub.s       $f2, $f0, $f24
    ctx->pc = 0x224140u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x224144: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x224144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224148: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x224148u;
    {
        const bool branch_taken_0x224148 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224148u;
        // 0x22414c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224148) {
            ctx->pc = 0x224174u;
            goto label_224174;
        }
    }
    ctx->pc = 0x224150u;
    // 0x224150: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x224150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x224154: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x224154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224158: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x224158u;
    {
        const bool branch_taken_0x224158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224158u;
        // 0x22415c: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224158) {
            ctx->pc = 0x224174u;
            goto label_224174;
        }
    }
    ctx->pc = 0x224160u;
    // 0x224160: 0x0  nop
    ctx->pc = 0x224160u;
    // NOP
    // 0x224164: 0x0  nop
    ctx->pc = 0x224164u;
    // NOP
    // 0x224168: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x224168u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x22416c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22416cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x224170: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x224170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_224174:
    // 0x224174: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x224174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x224178: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x224178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22417c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x22417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224180: 0x46190081  sub.s       $f2, $f0, $f25
    ctx->pc = 0x224180u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x224184: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x224184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224188: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x224188u;
    {
        const bool branch_taken_0x224188 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224188u;
        // 0x22418c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224188) {
            ctx->pc = 0x2241B8u;
            goto label_2241b8;
        }
    }
    ctx->pc = 0x224190u;
    // 0x224190: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x224190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x224194: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x224194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x224198: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x224198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22419c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22419Cu;
    {
        const bool branch_taken_0x22419c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2241A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22419Cu;
        // 0x2241a0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22419c) {
            ctx->pc = 0x2241B8u;
            goto label_2241b8;
        }
    }
    ctx->pc = 0x2241A4u;
    // 0x2241a4: 0x0  nop
    ctx->pc = 0x2241a4u;
    // NOP
    // 0x2241a8: 0x0  nop
    ctx->pc = 0x2241a8u;
    // NOP
    // 0x2241ac: 0x46141003  div.s       $f0, $f2, $f20
    ctx->pc = 0x2241acu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x2241b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2241b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2241b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2241b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2241b8:
    // 0x2241b8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2241b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2241bc: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2241bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2241c0: 0x4615c5c0  add.s       $f23, $f24, $f21
    ctx->pc = 0x2241c0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x2241c4: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x2241c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x2241c8: 0x4615c880  add.s       $f2, $f25, $f21
    ctx->pc = 0x2241c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
    // 0x2241cc: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2241ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2241d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2241d4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x2241d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x2241d8: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x2241d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x2241dc: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x2241dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x2241e0: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x2241e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2241e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2241e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2241e8: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x2241e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x2241ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2241f0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2241f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2241f4: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2241f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x2241f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2241f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2241fc: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2241fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x224200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224204: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x224204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x224208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22420c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22420cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224210: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x224210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224214: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x224214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
    // 0x224218: 0x93202a  slt         $a0, $a0, $s3
    ctx->pc = 0x224218u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22421c: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x22421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x224220: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x224220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x224224: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x224224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x224228: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x224228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x22422c: 0xafa501d4  sw          $a1, 0x1D4($sp)
    ctx->pc = 0x22422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 5));
    // 0x224230: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x224230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x224234: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x224234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x224238: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x224238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x22423c: 0x14800086  bnez        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x22423Cu;
    {
        const bool branch_taken_0x22423c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22423Cu;
        // 0x224240: 0xe7a20158  swc1        $f2, 0x158($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22423c) {
            ctx->pc = 0x224458u;
            goto label_224458;
        }
    }
    ctx->pc = 0x224244u;
    // 0x224244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x224244u;
    {
        const bool branch_taken_0x224244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224244) {
            ctx->pc = 0x224258u;
            goto label_224258;
        }
    }
    ctx->pc = 0x22424Cu;
    // 0x22424c: 0x0  nop
    ctx->pc = 0x22424cu;
    // NOP
label_224250:
    // 0x224250: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x224254: 0x0  nop
    ctx->pc = 0x224254u;
    // NOP
label_224258:
    // 0x224258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22425c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22425cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224260: 0x8fb201dc  lw          $s2, 0x1DC($sp)
    ctx->pc = 0x224260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x224264: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x224264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x224268: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x224268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22426c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22426cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x224270: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x224270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x224274: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x224274u;
    {
        const bool branch_taken_0x224274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224274u;
        // 0x224278: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224274) {
            ctx->pc = 0x224424u;
            goto label_224424;
        }
    }
    ctx->pc = 0x22427Cu;
    // 0x22427c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x22427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x224280: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224284: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x224284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x224288: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x224288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22428c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x22428cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224290:
    // 0x224290: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x224290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224294: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x224294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224298: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x224298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22429c: 0x461508c0  add.s       $f3, $f1, $f21
    ctx->pc = 0x22429cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2242a0: 0xe7b6018c  swc1        $f22, 0x18C($sp)
    ctx->pc = 0x2242a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x2242a4: 0x46150080  add.s       $f2, $f0, $f21
    ctx->pc = 0x2242a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2242a8: 0xe7b6019c  swc1        $f22, 0x19C($sp)
    ctx->pc = 0x2242a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x2242ac: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x2242acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x2242b0: 0xe7b601ac  swc1        $f22, 0x1AC($sp)
    ctx->pc = 0x2242b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x2242b4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2242b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2242b8: 0xe7b601bc  swc1        $f22, 0x1BC($sp)
    ctx->pc = 0x2242b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2242bc: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x2242bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2242c0: 0xe7a201b8  swc1        $f2, 0x1B8($sp)
    ctx->pc = 0x2242c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2242c4: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x2242c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2242c8: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2242c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2242cc: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x2242ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2242d0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2242d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2242d4: 0xe7a30190  swc1        $f3, 0x190($sp)
    ctx->pc = 0x2242d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2242d8: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x2242d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2242dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2242dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2242e0:
    // 0x2242e0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2242e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2242e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2242e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2242e8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2242e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2242ec: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2242ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2242f0: 0xda850010  lqc2        $vf5, 0x10($s4)
    ctx->pc = 0x2242f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2242f4: 0xda860020  lqc2        $vf6, 0x20($s4)
    ctx->pc = 0x2242f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2242f8: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x2242f8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2242fc: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2242fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x224300: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x224300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x224304: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x224304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x224308: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x224308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22430c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x22430cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x224310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x224310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224314: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x224314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x224318: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x224318u;
    {
        const bool branch_taken_0x224318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224318u;
        // 0x22431c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224318) {
            ctx->pc = 0x2242E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2242e0;
        }
    }
    ctx->pc = 0x224320u;
    // 0x224320: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x224320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x224324: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x224324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22432c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22432cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224330: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x224330u;
    SET_GPR_U32(ctx, 31, 0x224338u);
    ctx->pc = 0x224334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224330u;
    // 0x224334: 0x7fa901e0  sq          $t1, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x224330u, 0x224338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224338u;
label_224338:
    // 0x224338: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x224338u;
    {
        const bool branch_taken_0x224338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224338u;
        // 0x22433c: 0x7ba901e0  lq          $t1, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224338) {
            ctx->pc = 0x224408u;
            goto label_224408;
        }
    }
    ctx->pc = 0x224340u;
    // 0x224340: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x224340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x224344: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x224344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x224348: 0x7aa40020  lq          $a0, 0x20($s5)
    ctx->pc = 0x224348u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x22434c: 0x7aa50030  lq          $a1, 0x30($s5)
    ctx->pc = 0x22434cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x224350: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x224350u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x224354: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x224354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x224358: 0x7fa400f0  sq          $a0, 0xF0($sp)
    ctx->pc = 0x224358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 4));
    // 0x22435c: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x22435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x224360: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x224360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x224364: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x224368: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x224368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x22436c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x22436cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224370: 0x246402a  slt         $t0, $s2, $a2
    ctx->pc = 0x224370u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x224374: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x224374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x224378: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x224378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22437c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x22437cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x224380: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x224380u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x224384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x224384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224388: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x224388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22438c: 0xe8200a  movz        $a0, $a3, $t0
    ctx->pc = 0x22438cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x224390: 0x27b101c0  addiu       $s1, $sp, 0x1C0
    ctx->pc = 0x224390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x224394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x224398: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x224398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22439c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22439cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2243a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2243a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2243a4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2243a8: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2243a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2243ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2243acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2243b0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2243b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2243b4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2243b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2243b8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2243b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2243bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2243bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2243c0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2243c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2243c4: 0x0  nop
    ctx->pc = 0x2243c4u;
    // NOP
label_2243c8:
    // 0x2243c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2243c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2243cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2243d0: 0xc089146  jal         func_224518
    ctx->pc = 0x2243D0u;
    SET_GPR_U32(ctx, 31, 0x2243D8u);
    ctx->pc = 0x2243D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243D0u;
    // 0x2243d4: 0x7fa901e0  sq          $t1, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224518u, 0x2243D0u, 0x2243D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243D8u;
label_2243d8:
    // 0x2243d8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2243d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2243dc: 0x7ba901e0  lq          $t1, 0x1E0($sp)
    ctx->pc = 0x2243dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2243e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2243e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2243e4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2243e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2243e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2243e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2243ec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2243ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2243f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2243f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2243f4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2243f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2243f8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2243f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2243fc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x224400: 0x1450fff1  bne         $v0, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x224400u;
    {
        const bool branch_taken_0x224400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x224404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224400u;
        // 0x224404: 0x27a300d0  addiu       $v1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224400) {
            ctx->pc = 0x2243C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2243c8;
        }
    }
    ctx->pc = 0x224408u;
label_224408:
    // 0x224408: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x224408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22440c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22440cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x224410: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x224414: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x224414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x224418: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x224418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22441c: 0x1040ff9c  beqz        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x22441Cu;
    {
        const bool branch_taken_0x22441c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22441Cu;
        // 0x224420: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22441c) {
            ctx->pc = 0x224290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224290;
        }
    }
    ctx->pc = 0x224424u;
label_224424:
    // 0x224424: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x224424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224428: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x224428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22442c: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x22442cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x224430: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x224430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x224434: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x224434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x224438: 0x1040ff85  beqz        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x224438u;
    {
        const bool branch_taken_0x224438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224438u;
        // 0x22443c: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224438) {
            ctx->pc = 0x224250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224250;
        }
    }
    ctx->pc = 0x224440u;
    // 0x224440: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x224440u;
    {
        const bool branch_taken_0x224440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224440u;
        // 0x224444: 0xdfb001f0  ld          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224440) {
            ctx->pc = 0x22445Cu;
            goto label_22445c;
        }
    }
    ctx->pc = 0x224448u;
    // 0x224448: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x224448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x22444c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x22444Cu;
    SET_GPR_U32(ctx, 31, 0x224454u);
    ctx->pc = 0x224450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22444Cu;
    // 0x224450: 0x2484fc08  addiu       $a0, $a0, -0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x22444Cu, 0x224454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224454u;
label_224454:
    // 0x224454: 0x0  nop
    ctx->pc = 0x224454u;
    // NOP
label_224458:
    // 0x224458: 0xdfb001f0  ld          $s0, 0x1F0($sp)
    ctx->pc = 0x224458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_22445c:
    // 0x22445c: 0xdfb101f8  ld          $s1, 0x1F8($sp)
    ctx->pc = 0x22445cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x224460: 0xdfb20200  ld          $s2, 0x200($sp)
    ctx->pc = 0x224460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x224464: 0xdfb30208  ld          $s3, 0x208($sp)
    ctx->pc = 0x224464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x224468: 0xdfb40210  ld          $s4, 0x210($sp)
    ctx->pc = 0x224468u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x22446c: 0xdfb50218  ld          $s5, 0x218($sp)
    ctx->pc = 0x22446cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x224470: 0xdfb60220  ld          $s6, 0x220($sp)
    ctx->pc = 0x224470u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x224474: 0xdfb70228  ld          $s7, 0x228($sp)
    ctx->pc = 0x224474u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x224478: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x224478u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x22447c: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x22447cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x224480: 0xc7b90268  lwc1        $f25, 0x268($sp)
    ctx->pc = 0x224480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x224484: 0xc7b80260  lwc1        $f24, 0x260($sp)
    ctx->pc = 0x224484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x224488: 0xc7b70258  lwc1        $f23, 0x258($sp)
    ctx->pc = 0x224488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x22448c: 0xc7b60250  lwc1        $f22, 0x250($sp)
    ctx->pc = 0x22448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x224490: 0xc7b50248  lwc1        $f21, 0x248($sp)
    ctx->pc = 0x224490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x224494: 0xc7b40240  lwc1        $f20, 0x240($sp)
    ctx->pc = 0x224494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224498: 0x3e00008  jr          $ra
    ctx->pc = 0x224498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224498u;
        // 0x22449c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2244A0u;
}
