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

// Function: sub_002FD900
// Address: 0x2fd900 - 0x2fd988
void sub_002FD900_0x2fd900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD900_0x2fd900");
#endif

    switch (ctx->pc) {
        case 0x2fd938u: goto label_2fd938;
        case 0x2fd954u: goto label_2fd954;
        default: break;
    }

    ctx->pc = 0x2fd900u;

    // 0x2fd900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fd904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd90c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fd90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fd910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fd914: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2fd914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fd918: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FD918u;
    {
        const bool branch_taken_0x2fd918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd918) {
            ctx->pc = 0x2FD91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD918u;
            // 0x2fd91c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD968u;
            goto label_2fd968;
        }
    }
    ctx->pc = 0x2FD920u;
    // 0x2fd920: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2fd920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fd924: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FD924u;
    {
        const bool branch_taken_0x2fd924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FD928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD924u;
        // 0x2fd928: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd924) {
            ctx->pc = 0x2FD964u;
            goto label_2fd964;
        }
    }
    ctx->pc = 0x2FD92Cu;
    // 0x2fd92c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD92Cu;
    {
        const bool branch_taken_0x2fd92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD92Cu;
        // 0x2fd930: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd92c) {
            ctx->pc = 0x2FD940u;
            goto label_2fd940;
        }
    }
    ctx->pc = 0x2FD934u;
    // 0x2fd934: 0x0  nop
    ctx->pc = 0x2fd934u;
    // NOP
label_2fd938:
    // 0x2fd938: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2fd938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2fd93c: 0x0  nop
    ctx->pc = 0x2fd93cu;
    // NOP
label_2fd940:
    // 0x2fd940: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2fd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2fd944: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fd944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fd948: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fd948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fd94c: 0xc0bf472  jal         func_2FD1C8
    ctx->pc = 0x2FD94Cu;
    SET_GPR_U32(ctx, 31, 0x2FD954u);
    ctx->pc = 0x2FD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD94Cu;
    // 0x2fd950: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD1C8u, 0x2FD94Cu, 0x2FD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD954u;
label_2fd954:
    // 0x2fd954: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2fd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fd958: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fd958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd95c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2FD95Cu;
    {
        const bool branch_taken_0x2fd95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd95c) {
            ctx->pc = 0x2FD960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD95Cu;
            // 0x2fd960: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd938;
        }
    }
    ctx->pc = 0x2FD964u;
label_2fd964:
    // 0x2fd964: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2fd964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2fd968:
    // 0x2fd968: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2fd968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2fd96c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2fd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2fd970: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2fd970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2fd974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fd974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd97c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fd97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd980: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD980u;
        // 0x2fd984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD988u;
}
