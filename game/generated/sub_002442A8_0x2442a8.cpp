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

// Function: sub_002442A8
// Address: 0x2442a8 - 0x244318
void sub_002442A8_0x2442a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002442A8_0x2442a8");
#endif

    switch (ctx->pc) {
        case 0x2442e0u: goto label_2442e0;
        default: break;
    }

    ctx->pc = 0x2442a8u;

    // 0x2442a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2442a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2442ac: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2442acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2442b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2442b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2442b4: 0x24636690  addiu       $v1, $v1, 0x6690
    ctx->pc = 0x2442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26256));
    // 0x2442b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2442b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2442bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2442bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442c0: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2442c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2442c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2442c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x166690u));
    // 0x2442c8: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x2442c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2442cc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2442CCu;
    {
        const bool branch_taken_0x2442cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442CCu;
        // 0x2442d0: 0x8c700120  lw          $s0, 0x120($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442cc) {
            ctx->pc = 0x244304u;
            goto label_244304;
        }
    }
    ctx->pc = 0x2442D4u;
    // 0x2442d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2442d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442d8: 0xc091086  jal         func_244218
    ctx->pc = 0x2442D8u;
    SET_GPR_U32(ctx, 31, 0x2442E0u);
    ctx->pc = 0x2442DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442D8u;
    // 0x2442dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244218u, 0x2442D8u, 0x2442E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442E0u;
label_2442e0:
    // 0x2442e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2442e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442e4: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x2442e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2442e8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2442e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2442ec: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2442ECu;
    {
        const bool branch_taken_0x2442ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2442F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442ECu;
        // 0x2442f0: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442ec) {
            ctx->pc = 0x2442FCu;
            goto label_2442fc;
        }
    }
    ctx->pc = 0x2442F4u;
    // 0x2442f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2442F4u;
    {
        const bool branch_taken_0x2442f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2442F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F4u;
        // 0x2442f8: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442f4) {
            ctx->pc = 0x244304u;
            goto label_244304;
        }
    }
    ctx->pc = 0x2442FCu;
label_2442fc:
    // 0x2442fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2442fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244300: 0x24620005  addiu       $v0, $v1, 0x5
    ctx->pc = 0x244300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_244304:
    // 0x244304: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x244304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244308: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x244308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24430c: 0x3e00008  jr          $ra
    ctx->pc = 0x24430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24430Cu;
        // 0x244310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244314u;
    // 0x244314: 0x0  nop
    ctx->pc = 0x244314u;
    // NOP
    ctx->pc = 0x244318u;
}
