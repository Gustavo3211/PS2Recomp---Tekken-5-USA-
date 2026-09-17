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

// Function: sub_00298A10
// Address: 0x298a10 - 0x298a88
void sub_00298A10_0x298a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298A10_0x298a10");
#endif

    switch (ctx->pc) {
        case 0x298a38u: goto label_298a38;
        case 0x298a4cu: goto label_298a4c;
        default: break;
    }

    ctx->pc = 0x298a10u;

    // 0x298a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298a14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x298a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x298a18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x298a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x298a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x298a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x298a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x298a28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x298a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x298a30: 0x2452c5d0  addiu       $s2, $v0, -0x3A30
    ctx->pc = 0x298a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952400));
    // 0x298a34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x298a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_298a38:
    // 0x298a38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x298a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x298a3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x298a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x298a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a44: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x298A44u;
    SET_GPR_U32(ctx, 31, 0x298A4Cu);
    ctx->pc = 0x298A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A44u;
    // 0x298a48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x298A44u, 0x298A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A4Cu;
label_298a4c:
    // 0x298a4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298A4Cu;
    {
        const bool branch_taken_0x298a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A4Cu;
        // 0x298a50: 0x2a030011  slti        $v1, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a4c) {
            ctx->pc = 0x298A60u;
            goto label_298a60;
        }
    }
    ctx->pc = 0x298A54u;
    // 0x298a54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298A54u;
    {
        const bool branch_taken_0x298a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A54u;
        // 0x298a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a54) {
            ctx->pc = 0x298A6Cu;
            goto label_298a6c;
        }
    }
    ctx->pc = 0x298A5Cu;
    // 0x298a5c: 0x0  nop
    ctx->pc = 0x298a5cu;
    // NOP
label_298a60:
    // 0x298a60: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x298A60u;
    {
        const bool branch_taken_0x298a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A60u;
        // 0x298a64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a60) {
            ctx->pc = 0x298A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298a38;
        }
    }
    ctx->pc = 0x298A68u;
    // 0x298a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298a6c:
    // 0x298a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x298a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298a78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x298a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x298A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A7Cu;
        // 0x298a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298A84u;
    // 0x298a84: 0x0  nop
    ctx->pc = 0x298a84u;
    // NOP
    ctx->pc = 0x298a88u;
}
