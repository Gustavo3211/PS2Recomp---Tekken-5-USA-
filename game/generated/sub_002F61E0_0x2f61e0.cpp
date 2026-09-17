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

// Function: sub_002F61E0
// Address: 0x2f61e0 - 0x2f6250
void sub_002F61E0_0x2f61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F61E0_0x2f61e0");
#endif

    switch (ctx->pc) {
        case 0x2f622cu: goto label_2f622c;
        default: break;
    }

    ctx->pc = 0x2f61e0u;

    // 0x2f61e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f61e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f61e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f61e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f61e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f61ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f61f0: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x2f61f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2f61f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f61f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F61F8u;
    {
        const bool branch_taken_0x2f61f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f61f8) {
            ctx->pc = 0x2F61FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F61F8u;
            // 0x2f61fc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6214u;
            goto label_2f6214;
        }
    }
    ctx->pc = 0x2F6200u;
    // 0x2f6200: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6204: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f6208: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6208u;
    {
        const bool branch_taken_0x2f6208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6208) {
            ctx->pc = 0x2F620Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6208u;
            // 0x2f620c: 0x8e060104  lw          $a2, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6220u;
            goto label_2f6220;
        }
    }
    ctx->pc = 0x2F6210u;
    // 0x2f6210: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f6210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f6214:
    // 0x2f6214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6218: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f621c: 0x8e060104  lw          $a2, 0x104($s0)
    ctx->pc = 0x2f621cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f6220:
    // 0x2f6220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6224: 0xc0bd50a  jal         func_2F5428
    ctx->pc = 0x2F6224u;
    SET_GPR_U32(ctx, 31, 0x2F622Cu);
    ctx->pc = 0x2F6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6224u;
    // 0x2f6228: 0x8e07004c  lw          $a3, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5428u, 0x2F6224u, 0x2F622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F622Cu;
label_2f622c:
    // 0x2f622c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F622Cu;
    {
        const bool branch_taken_0x2f622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F622Cu;
        // 0x2f6230: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f622c) {
            ctx->pc = 0x2F623Cu;
            goto label_2f623c;
        }
    }
    ctx->pc = 0x2F6234u;
    // 0x2f6234: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f6234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f6238: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2f6238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
label_2f623c:
    // 0x2f623c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f623cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6240: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f6240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6244: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6244u;
        // 0x2f6248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F624Cu;
    // 0x2f624c: 0x0  nop
    ctx->pc = 0x2f624cu;
    // NOP
    ctx->pc = 0x2f6250u;
}
