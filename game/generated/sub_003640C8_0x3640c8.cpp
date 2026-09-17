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

// Function: sub_003640C8
// Address: 0x3640c8 - 0x364148
void sub_003640C8_0x3640c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003640C8_0x3640c8");
#endif

    switch (ctx->pc) {
        case 0x3640f8u: goto label_3640f8;
        case 0x364104u: goto label_364104;
        default: break;
    }

    ctx->pc = 0x3640c8u;

    // 0x3640c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3640c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3640cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3640ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3640d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3640d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3640d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3640d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3640d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3640dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3640e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3640e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3640e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3640e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3640e8: 0x8e221600  lw          $v0, 0x1600($s1)
    ctx->pc = 0x3640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5632)));
    // 0x3640ec: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3640ECu;
    {
        const bool branch_taken_0x3640ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3640F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640ECu;
        // 0x3640f0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3640ec) {
            ctx->pc = 0x364128u;
            goto label_364128;
        }
    }
    ctx->pc = 0x3640F4u;
    // 0x3640f4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3640f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3640f8:
    // 0x3640f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3640f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640fc: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x3640FCu;
    SET_GPR_U32(ctx, 31, 0x364104u);
    ctx->pc = 0x364100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3640FCu;
    // 0x364100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x3640FCu, 0x364104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364104u;
label_364104:
    // 0x364104: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x364104u;
    {
        const bool branch_taken_0x364104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364104) {
            ctx->pc = 0x364108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364104u;
            // 0x364108: 0x8e221600  lw          $v0, 0x1600($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364118u;
            goto label_364118;
        }
    }
    ctx->pc = 0x36410Cu;
    // 0x36410c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36410Cu;
    {
        const bool branch_taken_0x36410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36410Cu;
        // 0x364110: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36410c) {
            ctx->pc = 0x36412Cu;
            goto label_36412c;
        }
    }
    ctx->pc = 0x364114u;
    // 0x364114: 0x0  nop
    ctx->pc = 0x364114u;
    // NOP
label_364118:
    // 0x364118: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x364118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36411c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x36411cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x364120: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x364120u;
    {
        const bool branch_taken_0x364120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364120u;
        // 0x364124: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364120) {
            ctx->pc = 0x3640F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3640f8;
        }
    }
    ctx->pc = 0x364128u;
label_364128:
    // 0x364128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36412c:
    // 0x36412c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36412cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x364130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x364134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364138: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x364138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36413c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36413cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364140: 0x3e00008  jr          $ra
    ctx->pc = 0x364140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364140u;
        // 0x364144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364148u;
}
