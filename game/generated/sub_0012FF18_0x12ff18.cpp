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

// Function: sub_0012FF18
// Address: 0x12ff18 - 0x12ff78
void sub_0012FF18_0x12ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF18_0x12ff18");
#endif

    switch (ctx->pc) {
        case 0x12ff44u: goto label_12ff44;
        default: break;
    }

    ctx->pc = 0x12ff18u;

    // 0x12ff18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ff1c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12ff20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ff24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ff2c: 0x24515578  addiu       $s1, $v0, 0x5578
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21880));
    // 0x12ff30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12ff34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ff3c: 0xc043ed6  jal         func_10FB58
    ctx->pc = 0x12FF3Cu;
    SET_GPR_U32(ctx, 31, 0x12FF44u);
    ctx->pc = 0x12FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF3Cu;
    // 0x12ff40: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB58u, 0x12FF3Cu, 0x12FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF44u;
label_12ff44:
    // 0x12ff44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12ff44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ff4c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FF4Cu;
    {
        const bool branch_taken_0x12ff4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12ff4c) {
            ctx->pc = 0x12FF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FF4Cu;
            // 0x12ff50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF64u;
            goto label_12ff64;
        }
    }
    ctx->pc = 0x12FF54u;
    // 0x12ff54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ff58: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FF58u;
    {
        const bool branch_taken_0x12ff58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ff58) {
            ctx->pc = 0x12FF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FF58u;
            // 0x12ff5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF60u;
            goto label_12ff60;
        }
    }
    ctx->pc = 0x12FF60u;
label_12ff60:
    // 0x12ff60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ff60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ff64:
    // 0x12ff64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ff64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ff68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ff6c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF6Cu;
        // 0x12ff70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FF74u;
    // 0x12ff74: 0x0  nop
    ctx->pc = 0x12ff74u;
    // NOP
    ctx->pc = 0x12ff78u;
}
