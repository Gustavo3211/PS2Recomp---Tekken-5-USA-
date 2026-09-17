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

// Function: sub_002F6CC8
// Address: 0x2f6cc8 - 0x2f6d58
void sub_002F6CC8_0x2f6cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6CC8_0x2f6cc8");
#endif

    ctx->pc = 0x2f6cc8u;

    // 0x2f6cc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2f6cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f6ccc: 0x2487015c  addiu       $a3, $a0, 0x15C
    ctx->pc = 0x2f6cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x2f6cd0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2f6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f6cd4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6CD4u;
    {
        const bool branch_taken_0x2f6cd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CD4u;
        // 0x2f6cd8: 0x8c840050  lw          $a0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cd4) {
            ctx->pc = 0x2F6CE8u;
            goto label_2f6ce8;
        }
    }
    ctx->pc = 0x2F6CDCu;
    // 0x2f6cdc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6CE0u;
    {
        const bool branch_taken_0x2f6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CE0u;
        // 0x2f6ce4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ce0) {
            ctx->pc = 0x2F6CF4u;
            goto label_2f6cf4;
        }
    }
    ctx->pc = 0x2F6CE8u;
label_2f6ce8:
    // 0x2f6ce8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6cec: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f6cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f6cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f6cf4:
    // 0x2f6cf4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f6cf8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f6cfc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6CFCu;
    {
        const bool branch_taken_0x2f6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cfc) {
            ctx->pc = 0x2F6D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6CFCu;
            // 0x2f6d00: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D1Cu;
            goto label_2f6d1c;
        }
    }
    ctx->pc = 0x2F6D04u;
    // 0x2f6d04: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f6d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d0c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2f6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2f6d10: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6D10u;
    {
        const bool branch_taken_0x2f6d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D10u;
        // 0x2f6d14: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d10) {
            ctx->pc = 0x2F6D28u;
            goto label_2f6d28;
        }
    }
    ctx->pc = 0x2F6D18u;
    // 0x2f6d18: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2f6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_2f6d1c:
    // 0x2f6d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d20: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2f6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2f6d24: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2f6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2f6d28:
    // 0x2f6d28: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6D28u;
    {
        const bool branch_taken_0x2f6d28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D28u;
        // 0x2f6d2c: 0x8c440094  lw          $a0, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d28) {
            ctx->pc = 0x2F6D40u;
            goto label_2f6d40;
        }
    }
    ctx->pc = 0x2F6D30u;
    // 0x2f6d30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6d34: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f6d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2f6d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D38u;
        // 0x2f6d3c: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D40u;
label_2f6d40:
    // 0x2f6d40: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6d44: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f6d48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f6d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f6d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D4Cu;
        // 0x2f6d50: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D54u;
    // 0x2f6d54: 0x0  nop
    ctx->pc = 0x2f6d54u;
    // NOP
    ctx->pc = 0x2f6d58u;
}
