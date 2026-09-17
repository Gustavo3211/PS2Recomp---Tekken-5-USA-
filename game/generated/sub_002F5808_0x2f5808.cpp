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

// Function: sub_002F5808
// Address: 0x2f5808 - 0x2f5880
void sub_002F5808_0x2f5808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5808_0x2f5808");
#endif

    ctx->pc = 0x2f5808u;

    // 0x2f5808: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5808u;
    {
        const bool branch_taken_0x2f5808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x2F580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5808u;
        // 0x2f580c: 0x8c880104  lw          $t0, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5808) {
            ctx->pc = 0x2F5820u;
            goto label_2f5820;
        }
    }
    ctx->pc = 0x2F5810u;
    // 0x2f5810: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x2f5814: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5814u;
    {
        const bool branch_taken_0x2f5814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5814u;
        // 0x2f5818: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5814) {
            ctx->pc = 0x2F582Cu;
            goto label_2f582c;
        }
    }
    ctx->pc = 0x2F581Cu;
    // 0x2f581c: 0x0  nop
    ctx->pc = 0x2f581cu;
    // NOP
label_2f5820:
    // 0x2f5820: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x2f5820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x2f5824: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f5824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f5828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f5828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f582c:
    // 0x2f582c: 0xad020080  sw          $v0, 0x80($t0)
    ctx->pc = 0x2f582cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 2));
    // 0x2f5830: 0x10a70005  beq         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5830u;
    {
        const bool branch_taken_0x2f5830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2F5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5830u;
        // 0x2f5834: 0x8c8600fc  lw          $a2, 0xFC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5830) {
            ctx->pc = 0x2F5848u;
            goto label_2f5848;
        }
    }
    ctx->pc = 0x2F5838u;
    // 0x2f5838: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2f5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2f583c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F583Cu;
    {
        const bool branch_taken_0x2f583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F583Cu;
        // 0x2f5840: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f583c) {
            ctx->pc = 0x2F5854u;
            goto label_2f5854;
        }
    }
    ctx->pc = 0x2F5844u;
    // 0x2f5844: 0x0  nop
    ctx->pc = 0x2f5844u;
    // NOP
label_2f5848:
    // 0x2f5848: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2f5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2f584c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f5850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f5850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f5854:
    // 0x2f5854: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2f5854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x2f5858: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x2f5858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2f585c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2f585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2f5860: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f5860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2f5864: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2f5864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2f5868: 0x8c8400f8  lw          $a0, 0xF8($a0)
    ctx->pc = 0x2f5868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x2f586c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f5870: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f5870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2f5874: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5874u;
        // 0x2f5878: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F587Cu;
    // 0x2f587c: 0x0  nop
    ctx->pc = 0x2f587cu;
    // NOP
    ctx->pc = 0x2f5880u;
}
