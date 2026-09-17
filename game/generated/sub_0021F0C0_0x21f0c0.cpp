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

// Function: sub_0021F0C0
// Address: 0x21f0c0 - 0x21f130
void sub_0021F0C0_0x21f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F0C0_0x21f0c0");
#endif

    switch (ctx->pc) {
        case 0x21f0f8u: goto label_21f0f8;
        case 0x21f118u: goto label_21f118;
        default: break;
    }

    ctx->pc = 0x21f0c0u;

    // 0x21f0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f0c4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x21f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f0cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0d0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F0D0u;
    {
        const bool branch_taken_0x21f0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0D0u;
        // 0x21f0d4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0d0) {
            ctx->pc = 0x21F0F0u;
            goto label_21f0f0;
        }
    }
    ctx->pc = 0x21F0D8u;
    // 0x21f0d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f0dc: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21F0DCu;
    {
        const bool branch_taken_0x21f0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0DCu;
        // 0x21f0e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0dc) {
            ctx->pc = 0x21F110u;
            goto label_21f110;
        }
    }
    ctx->pc = 0x21F0E4u;
    // 0x21f0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0E8u;
        // 0x21f0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F0F0u;
label_21f0f0:
    // 0x21f0f0: 0xc087ce8  jal         func_21F3A0
    ctx->pc = 0x21F0F0u;
    SET_GPR_U32(ctx, 31, 0x21F0F8u);
    ctx->pc = 0x21F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F3A0u, 0x21F0F0u, 0x21F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0F8u;
label_21f0f8:
    // 0x21f0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f104: 0x8087cf4  j           func_21F3D0
    ctx->pc = 0x21F104u;
    ctx->pc = 0x21F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F104u;
    // 0x21f108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F3D0u;
    sub_0021F3D0_0x21f3d0(rdram, ctx, runtime); return;
    ctx->pc = 0x21F10Cu;
    // 0x21f10c: 0x0  nop
    ctx->pc = 0x21f10cu;
    // NOP
label_21f110:
    // 0x21f110: 0xc087d30  jal         func_21F4C0
    ctx->pc = 0x21F110u;
    SET_GPR_U32(ctx, 31, 0x21F118u);
    ctx->pc = 0x21F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F4C0u, 0x21F110u, 0x21F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F118u;
label_21f118:
    // 0x21f118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f11c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f124: 0x8087d3c  j           func_21F4F0
    ctx->pc = 0x21F124u;
    ctx->pc = 0x21F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F124u;
    // 0x21f128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F4F0u;
    sub_0021F4F0_0x21f4f0(rdram, ctx, runtime); return;
    ctx->pc = 0x21F12Cu;
    // 0x21f12c: 0x0  nop
    ctx->pc = 0x21f12cu;
    // NOP
    ctx->pc = 0x21f130u;
}
