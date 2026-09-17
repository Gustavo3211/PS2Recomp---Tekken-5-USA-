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

// Function: sub_00130630
// Address: 0x130630 - 0x130698
void sub_00130630_0x130630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130630_0x130630");
#endif

    switch (ctx->pc) {
        case 0x130660u: goto label_130660;
        default: break;
    }

    ctx->pc = 0x130630u;

    // 0x130630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130634: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13063c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13063cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130640: 0x24424d10  addiu       $v0, $v0, 0x4D10
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x130644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13064c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13064cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130650: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x130650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x130654: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x130654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x130658: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x130658u;
    SET_GPR_U32(ctx, 31, 0x130660u);
    ctx->pc = 0x13065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130658u;
    // 0x13065c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x130658u, 0x130660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130660u;
label_130660:
    // 0x130660: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130660u;
    {
        const bool branch_taken_0x130660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130660u;
        // 0x130664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130660) {
            ctx->pc = 0x130680u;
            goto label_130680;
        }
    }
    ctx->pc = 0x130668u;
    // 0x130668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13066c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13066cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130674: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130674u;
    ctx->pc = 0x130678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130674u;
    // 0x130678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x13067Cu;
    // 0x13067c: 0x0  nop
    ctx->pc = 0x13067cu;
    // NOP
label_130680:
    // 0x130680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13068c: 0x3e00008  jr          $ra
    ctx->pc = 0x13068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13068Cu;
        // 0x130690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130694u;
    // 0x130694: 0x0  nop
    ctx->pc = 0x130694u;
    // NOP
    ctx->pc = 0x130698u;
}
