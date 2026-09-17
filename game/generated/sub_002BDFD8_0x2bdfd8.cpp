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

// Function: sub_002BDFD8
// Address: 0x2bdfd8 - 0x2be048
void sub_002BDFD8_0x2bdfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDFD8_0x2bdfd8");
#endif

    switch (ctx->pc) {
        case 0x2be000u: goto label_2be000;
        case 0x2be01cu: goto label_2be01c;
        default: break;
    }

    ctx->pc = 0x2bdfd8u;

    // 0x2bdfd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdfdc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bdfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bdfe0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2bdfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2bdfe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bdfe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bdfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdfec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bdfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bdff0: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x2bdff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bdff4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bdff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bdff8: 0x245288d0  addiu       $s2, $v0, -0x7730
    ctx->pc = 0x2bdff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2bdffc: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2bdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
label_2be000:
    // 0x2be000: 0x2111804  sllv        $v1, $s1, $s0
    ctx->pc = 0x2be000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x2be004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2be004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2be008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE008u;
    {
        const bool branch_taken_0x2be008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE008u;
        // 0x2be00c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be008) {
            ctx->pc = 0x2BE01Cu;
            goto label_2be01c;
        }
    }
    ctx->pc = 0x2BE010u;
    // 0x2be010: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2be010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2be014: 0xc0af7d4  jal         func_2BDF50
    ctx->pc = 0x2BE014u;
    SET_GPR_U32(ctx, 31, 0x2BE01Cu);
    ctx->pc = 0x2BE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE014u;
    // 0x2be018: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDF50u, 0x2BE014u, 0x2BE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE01Cu;
label_2be01c:
    // 0x2be01c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2be01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2be020: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2be020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2be024: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BE024u;
    {
        const bool branch_taken_0x2be024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be024) {
            ctx->pc = 0x2BE028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE024u;
            // 0x2be028: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be000;
        }
    }
    ctx->pc = 0x2BE02Cu;
    // 0x2be02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2be02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2be030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2be034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2be038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be03c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE03Cu;
        // 0x2be040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE044u;
    // 0x2be044: 0x0  nop
    ctx->pc = 0x2be044u;
    // NOP
    ctx->pc = 0x2be048u;
}
