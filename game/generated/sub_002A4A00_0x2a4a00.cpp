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

// Function: sub_002A4A00
// Address: 0x2a4a00 - 0x2a4a68
void sub_002A4A00_0x2a4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4A00_0x2a4a00");
#endif

    switch (ctx->pc) {
        case 0x2a4a58u: goto label_2a4a58;
        default: break;
    }

    ctx->pc = 0x2a4a00u;

    // 0x2a4a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4a04: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2a4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a4a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4a0c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a4a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a10: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2a4a10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4a14: 0x2c480006  sltiu       $t0, $v0, 0x6
    ctx->pc = 0x2a4a14u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a4a18: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2a4a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4a1c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4A1Cu;
    {
        const bool branch_taken_0x2a4a1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A1Cu;
        // 0x2a4a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a1c) {
            ctx->pc = 0x2A4A34u;
            goto label_2a4a34;
        }
    }
    ctx->pc = 0x2A4A24u;
    // 0x2a4a24: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2a4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a4a28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4a2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4A2Cu;
    {
        const bool branch_taken_0x2a4a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4a2c) {
            ctx->pc = 0x2A4A40u;
            goto label_2a4a40;
        }
    }
    ctx->pc = 0x2A4A34u;
label_2a4a34:
    // 0x2a4a34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a4a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a4a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a3c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a4a40:
    // 0x2a4a40: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4A40u;
    {
        const bool branch_taken_0x2a4a40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A40u;
        // 0x2a4a44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a40) {
            ctx->pc = 0x2A4A5Cu;
            goto label_2a4a5c;
        }
    }
    ctx->pc = 0x2A4A48u;
    // 0x2a4a48: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2a4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2a4a4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a50: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2A4A50u;
    SET_GPR_U32(ctx, 31, 0x2A4A58u);
    ctx->pc = 0x2A4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A50u;
    // 0x2a4a54: 0x8c450068  lw          $a1, 0x68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2A4A50u, 0x2A4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A58u;
label_2a4a58:
    // 0x2a4a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4a5c:
    // 0x2a4a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A5Cu;
        // 0x2a4a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4A64u;
    // 0x2a4a64: 0x0  nop
    ctx->pc = 0x2a4a64u;
    // NOP
    ctx->pc = 0x2a4a68u;
}
