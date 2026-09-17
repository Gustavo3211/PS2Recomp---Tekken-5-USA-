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

// Function: sub_0035E098
// Address: 0x35e098 - 0x35e108
void sub_0035E098_0x35e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E098_0x35e098");
#endif

    switch (ctx->pc) {
        case 0x35e0d8u: goto label_35e0d8;
        case 0x35e0f8u: goto label_35e0f8;
        default: break;
    }

    ctx->pc = 0x35e098u;

    // 0x35e098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e09c: 0x2786cc04  addiu       $a2, $gp, -0x33FC
    ctx->pc = 0x35e09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953988));
    // 0x35e0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e0a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35e0a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35e0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x35e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35e0b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35e0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0b4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x35e0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e0b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E0B8u;
    {
        const bool branch_taken_0x35e0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0B8u;
        // 0x35e0bc: 0x2c645010  sltiu       $a0, $v1, 0x5010 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20496) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e0b8) {
            ctx->pc = 0x35E0C8u;
            goto label_35e0c8;
        }
    }
    ctx->pc = 0x35E0C0u;
    // 0x35e0c0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E0C0u;
    {
        const bool branch_taken_0x35e0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e0c0) {
            ctx->pc = 0x35E0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E0C0u;
            // 0x35e0c4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E0E8u;
            goto label_35e0e8;
        }
    }
    ctx->pc = 0x35E0C8u;
label_35e0c8:
    // 0x35e0c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e0cc: 0x24065010  addiu       $a2, $zero, 0x5010
    ctx->pc = 0x35e0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x35e0d0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E0D0u;
    SET_GPR_U32(ctx, 31, 0x35E0D8u);
    ctx->pc = 0x35E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0D0u;
    // 0x35e0d4: 0x24845ea0  addiu       $a0, $a0, 0x5EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E0D0u, 0x35E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0D8u;
label_35e0d8:
    // 0x35e0d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e0dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35E0DCu;
    {
        const bool branch_taken_0x35e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0DCu;
        // 0x35e0e0: 0x3442003a  ori         $v0, $v0, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e0dc) {
            ctx->pc = 0x35E0FCu;
            goto label_35e0fc;
        }
    }
    ctx->pc = 0x35E0E4u;
    // 0x35e0e4: 0x0  nop
    ctx->pc = 0x35e0e4u;
    // NOP
label_35e0e8:
    // 0x35e0e8: 0xacc3fffc  sw          $v1, -0x4($a2)
    ctx->pc = 0x35e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 3));
    // 0x35e0ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35e0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0f0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E0F0u;
    SET_GPR_U32(ctx, 31, 0x35E0F8u);
    ctx->pc = 0x35E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0F0u;
    // 0x35e0f4: 0x24845f00  addiu       $a0, $a0, 0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E0F0u, 0x35E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0F8u;
label_35e0f8:
    // 0x35e0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e0fc:
    // 0x35e0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e100: 0x3e00008  jr          $ra
    ctx->pc = 0x35E100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E100u;
        // 0x35e104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E108u;
}
