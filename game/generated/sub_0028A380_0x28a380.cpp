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

// Function: sub_0028A380
// Address: 0x28a380 - 0x28a400
void sub_0028A380_0x28a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A380_0x28a380");
#endif

    switch (ctx->pc) {
        case 0x28a3b4u: goto label_28a3b4;
        case 0x28a3c8u: goto label_28a3c8;
        case 0x28a3ecu: goto label_28a3ec;
        default: break;
    }

    ctx->pc = 0x28a380u;

    // 0x28a380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a38c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a390: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x28a394: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28A394u;
    {
        const bool branch_taken_0x28a394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A394u;
        // 0x28a398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a394) {
            ctx->pc = 0x28A3ECu;
            goto label_28a3ec;
        }
    }
    ctx->pc = 0x28A39Cu;
    // 0x28a39c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x28a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x28a3a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A3A0u;
    {
        const bool branch_taken_0x28a3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3A0u;
        // 0x28a3a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3a0) {
            ctx->pc = 0x28A3C0u;
            goto label_28a3c0;
        }
    }
    ctx->pc = 0x28A3A8u;
    // 0x28a3a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3ac: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x28A3ACu;
    SET_GPR_U32(ctx, 31, 0x28A3B4u);
    ctx->pc = 0x28A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3ACu;
    // 0x28a3b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x28A3ACu, 0x28A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3B4u;
label_28a3b4:
    // 0x28a3b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28A3B4u;
    {
        const bool branch_taken_0x28a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3B4u;
        // 0x28a3b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3b4) {
            ctx->pc = 0x28A3CCu;
            goto label_28a3cc;
        }
    }
    ctx->pc = 0x28A3BCu;
    // 0x28a3bc: 0x0  nop
    ctx->pc = 0x28a3bcu;
    // NOP
label_28a3c0:
    // 0x28a3c0: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x28A3C0u;
    SET_GPR_U32(ctx, 31, 0x28A3C8u);
    ctx->pc = 0x28A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3C0u;
    // 0x28a3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x28A3C0u, 0x28A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3C8u;
label_28a3c8:
    // 0x28a3c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a3cc:
    // 0x28a3cc: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x28a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a3d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28a3d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28a3d8: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x28a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x28a3dc: 0x2421b308  addiu       $at, $at, -0x4CF8
    ctx->pc = 0x28a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947592));
    // 0x28a3e0: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x28a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x28a3e4: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x28A3E4u;
    SET_GPR_U32(ctx, 31, 0x28A3ECu);
    ctx->pc = 0x28A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3E4u;
    // 0x28a3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x28A3E4u, 0x28A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3ECu;
label_28a3ec:
    // 0x28a3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a3f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x28A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3F4u;
        // 0x28a3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A3FCu;
    // 0x28a3fc: 0x0  nop
    ctx->pc = 0x28a3fcu;
    // NOP
    ctx->pc = 0x28a400u;
}
