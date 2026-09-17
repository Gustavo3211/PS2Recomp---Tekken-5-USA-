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

// Function: sub_00207A50
// Address: 0x207a50 - 0x207bf8
void sub_00207A50_0x207a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A50_0x207a50");
#endif

    switch (ctx->pc) {
        case 0x207b04u: goto label_207b04;
        case 0x207b18u: goto label_207b18;
        case 0x207b28u: goto label_207b28;
        case 0x207b3cu: goto label_207b3c;
        case 0x207b4cu: goto label_207b4c;
        case 0x207b70u: goto label_207b70;
        case 0x207b80u: goto label_207b80;
        case 0x207b8cu: goto label_207b8c;
        case 0x207bb0u: goto label_207bb0;
        case 0x207bc0u: goto label_207bc0;
        default: break;
    }

    ctx->pc = 0x207a50u;

    // 0x207a50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x207a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x207a54: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x207a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x207a58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x207a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x207a5c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x207a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x207a60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x207a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a64: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x207a68: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x207a6c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x207a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x207a70: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x207a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x207a74: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x207a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x207a78: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x207a7c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x207a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x207a80: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x207a84: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x207a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x207a88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x207a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a8c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x207a8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x207a90: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x207a90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x207a94: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x207a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x207a98: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x207a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x207a9c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x207a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x207aa0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x207aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x207aa4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x207aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x207aa8: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x207aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x207aac: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x207aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x207ab0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x207ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ab8: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x207ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x207abc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x207abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x207ac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x207ac4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x207ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x207ac8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x207ac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ad0: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x207ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x207ad4: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x207ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x207ad8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x207ad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x207adc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x207adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207ae0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x207ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207ae4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x207ae4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x207ae8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x207ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x207aec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x207aecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x207af0: 0xe7b60044  swc1        $f22, 0x44($sp)
    ctx->pc = 0x207af0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x207af4: 0xe7b5004c  swc1        $f21, 0x4C($sp)
    ctx->pc = 0x207af4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x207af8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x207af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x207afc: 0xc0847da  jal         func_211F68
    ctx->pc = 0x207AFCu;
    SET_GPR_U32(ctx, 31, 0x207B04u);
    ctx->pc = 0x207B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AFCu;
    // 0x207b00: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x207AFCu, 0x207B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B04u;
label_207b04:
    // 0x207b04: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207b08: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207b0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x207b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b10: 0xc084784  jal         func_211E10
    ctx->pc = 0x207B10u;
    SET_GPR_U32(ctx, 31, 0x207B18u);
    ctx->pc = 0x207B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B10u;
    // 0x207b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x207B10u, 0x207B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B18u;
label_207b18:
    // 0x207b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b20: 0xc084814  jal         func_212050
    ctx->pc = 0x207B20u;
    SET_GPR_U32(ctx, 31, 0x207B28u);
    ctx->pc = 0x207B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B20u;
    // 0x207b24: 0xe7b60034  swc1        $f22, 0x34($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x207B20u, 0x207B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B28u;
label_207b28:
    // 0x207b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b2c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x207b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207b30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x207b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b34: 0xc084784  jal         func_211E10
    ctx->pc = 0x207B34u;
    SET_GPR_U32(ctx, 31, 0x207B3Cu);
    ctx->pc = 0x207B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B34u;
    // 0x207b38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x207B34u, 0x207B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B3Cu;
label_207b3c:
    // 0x207b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b44: 0xc084814  jal         func_212050
    ctx->pc = 0x207B44u;
    SET_GPR_U32(ctx, 31, 0x207B4Cu);
    ctx->pc = 0x207B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B44u;
    // 0x207b48: 0xe7b60034  swc1        $f22, 0x34($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x207B44u, 0x207B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B4Cu;
label_207b4c:
    // 0x207b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x207b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b50: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x207b50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x207b54: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x207b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x207b58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x207b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b5c: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x207b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207b60: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x207B60u;
    {
        const bool branch_taken_0x207b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B60u;
        // 0x207b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b60) {
            ctx->pc = 0x207BC4u;
            goto label_207bc4;
        }
    }
    ctx->pc = 0x207B68u;
    // 0x207b68: 0xc084784  jal         func_211E10
    ctx->pc = 0x207B68u;
    SET_GPR_U32(ctx, 31, 0x207B70u);
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x207B68u, 0x207B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B70u;
label_207b70:
    // 0x207b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b78: 0xc0847da  jal         func_211F68
    ctx->pc = 0x207B78u;
    SET_GPR_U32(ctx, 31, 0x207B80u);
    ctx->pc = 0x207B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B78u;
    // 0x207b7c: 0xe7b5006c  swc1        $f21, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x207B78u, 0x207B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B80u;
label_207b80:
    // 0x207b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b84: 0xc084814  jal         func_212050
    ctx->pc = 0x207B84u;
    SET_GPR_U32(ctx, 31, 0x207B8Cu);
    ctx->pc = 0x207B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207B84u;
    // 0x207b88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x207B84u, 0x207B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B8Cu;
label_207b8c:
    // 0x207b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b90: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x207b90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207b94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x207b98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x207b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b9c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x207b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ba0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x207BA0u;
    {
        const bool branch_taken_0x207ba0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba0) {
            ctx->pc = 0x207BC4u;
            goto label_207bc4;
        }
    }
    ctx->pc = 0x207BA8u;
    // 0x207ba8: 0xc0816e6  jal         func_205B98
    ctx->pc = 0x207BA8u;
    SET_GPR_U32(ctx, 31, 0x207BB0u);
    ctx->pc = 0x207BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BA8u;
    // 0x207bac: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B98u, 0x207BA8u, 0x207BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BB0u;
label_207bb0:
    // 0x207bb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bb8: 0xc081676  jal         func_2059D8
    ctx->pc = 0x207BB8u;
    SET_GPR_U32(ctx, 31, 0x207BC0u);
    ctx->pc = 0x207BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BB8u;
    // 0x207bbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2059D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2059D8u, 0x207BB8u, 0x207BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BC0u;
label_207bc0:
    // 0x207bc0: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x207bc0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_207bc4:
    // 0x207bc4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x207bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bc8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x207bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x207bcc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x207bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x207bd0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207bd4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x207bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207bd8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x207bd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207bdc: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x207bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207be0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x207be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x207be4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x207be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x207be8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x207be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207bec: 0x3e00008  jr          $ra
    ctx->pc = 0x207BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BECu;
        // 0x207bf0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207BF4u;
    // 0x207bf4: 0x0  nop
    ctx->pc = 0x207bf4u;
    // NOP
    ctx->pc = 0x207bf8u;
}
