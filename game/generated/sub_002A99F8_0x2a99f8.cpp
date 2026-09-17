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

// Function: sub_002A99F8
// Address: 0x2a99f8 - 0x2a9aa8
void sub_002A99F8_0x2a99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A99F8_0x2a99f8");
#endif

    switch (ctx->pc) {
        case 0x2a9a5cu: goto label_2a9a5c;
        case 0x2a9a80u: goto label_2a9a80;
        case 0x2a9a88u: goto label_2a9a88;
        case 0x2a9a94u: goto label_2a9a94;
        default: break;
    }

    ctx->pc = 0x2a99f8u;

    // 0x2a99f8: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x2a99f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2a99fc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a99fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a9a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a04: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2a9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a9a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9a0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a9a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9a10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a9a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a9a14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a9a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a9a18: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a9a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a9a1c: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x2a9a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2a9a20: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a9a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a9a24: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2a9a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a28: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a9a2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a9a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a9a34: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2a9a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a9a38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a9a3c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2a9a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a9a40: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x2a9a40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a9a44: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2a9a44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a9a48: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x2a9a48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9a4c: 0xe7ae0024  swc1        $f14, 0x24($sp)
    ctx->pc = 0x2a9a4cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a9a50: 0xe7af0028  swc1        $f15, 0x28($sp)
    ctx->pc = 0x2a9a50u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a9a54: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2A9A54u;
    SET_GPR_U32(ctx, 31, 0x2A9A5Cu);
    ctx->pc = 0x2A9A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A54u;
    // 0x2a9a58: 0xe7b0002c  swc1        $f16, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2A9A54u, 0x2A9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A5Cu;
label_2a9a5c:
    // 0x2a9a5c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a9a60: 0x2442ce10  addiu       $v0, $v0, -0x31F0
    ctx->pc = 0x2a9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954512));
    // 0x2a9a64: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x2a9a64u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(FAST_READ128(0x3BCE10u));
    // 0x2a9a68: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x2a9a68u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3BCE20u));
    // 0x2a9a6c: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x2a9a6cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(FAST_READ128(0x3BCE30u));
    // 0x2a9a70: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x2a9a70u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x3BCE40u));
    // 0x2a9a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a9a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a78: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2A9A78u;
    SET_GPR_U32(ctx, 31, 0x2A9A80u);
    ctx->pc = 0x2A9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A78u;
    // 0x2a9a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2A9A78u, 0x2A9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A80u;
label_2a9a80:
    // 0x2a9a80: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2A9A80u;
    SET_GPR_U32(ctx, 31, 0x2A9A88u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2A9A80u, 0x2A9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A88u;
label_2a9a88:
    // 0x2a9a88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9a8c: 0xc0cb9d8  jal         func_32E760
    ctx->pc = 0x2A9A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A9A94u);
    ctx->pc = 0x2A9A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9A8Cu;
    // 0x2a9a90: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E760u, 0x2A9A8Cu, 0x2A9A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A94u;
label_2a9a94:
    // 0x2a9a94: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a9a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9a98: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a9a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9a9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a9a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AA0u;
        // 0x2a9aa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9AA8u;
}
