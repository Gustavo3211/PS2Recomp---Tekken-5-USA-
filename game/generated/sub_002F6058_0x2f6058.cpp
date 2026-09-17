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

// Function: sub_002F6058
// Address: 0x2f6058 - 0x2f60c8
void sub_002F6058_0x2f6058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6058_0x2f6058");
#endif

    switch (ctx->pc) {
        case 0x2f60a4u: goto label_2f60a4;
        default: break;
    }

    ctx->pc = 0x2f6058u;

    // 0x2f6058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f605c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6064: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f6068: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x2f6068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2f606c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6070: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6070u;
    {
        const bool branch_taken_0x2f6070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6070) {
            ctx->pc = 0x2F6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6070u;
            // 0x2f6074: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F608Cu;
            goto label_2f608c;
        }
    }
    ctx->pc = 0x2F6078u;
    // 0x2f6078: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f607c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f6080: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6080u;
    {
        const bool branch_taken_0x2f6080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6080) {
            ctx->pc = 0x2F6084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6080u;
            // 0x2f6084: 0x8e060104  lw          $a2, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F6088u;
    // 0x2f6088: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f6088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f608c:
    // 0x2f608c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6090: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f6094: 0x8e060104  lw          $a2, 0x104($s0)
    ctx->pc = 0x2f6094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f6098:
    // 0x2f6098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f609c: 0xc0bd4a8  jal         func_2F52A0
    ctx->pc = 0x2F609Cu;
    SET_GPR_U32(ctx, 31, 0x2F60A4u);
    ctx->pc = 0x2F60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F609Cu;
    // 0x2f60a0: 0x8e07004c  lw          $a3, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F52A0u, 0x2F609Cu, 0x2F60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60A4u;
label_2f60a4:
    // 0x2f60a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F60A4u;
    {
        const bool branch_taken_0x2f60a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60A4u;
        // 0x2f60a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60a4) {
            ctx->pc = 0x2F60B4u;
            goto label_2f60b4;
        }
    }
    ctx->pc = 0x2F60ACu;
    // 0x2f60ac: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f60acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f60b0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2f60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
label_2f60b4:
    // 0x2f60b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f60b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f60b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f60b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f60bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F60BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60BCu;
        // 0x2f60c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F60BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F60C4u;
    // 0x2f60c4: 0x0  nop
    ctx->pc = 0x2f60c4u;
    // NOP
    ctx->pc = 0x2f60c8u;
}
