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

// Function: sub_0022BE88
// Address: 0x22be88 - 0x22bf28
void sub_0022BE88_0x22be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE88_0x22be88");
#endif

    switch (ctx->pc) {
        case 0x22bec0u: goto label_22bec0;
        case 0x22beccu: goto label_22becc;
        default: break;
    }

    ctx->pc = 0x22be88u;

    // 0x22be88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22be8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22be90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22be90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22be98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22be98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22bea0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22bea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22bea8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22bea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22beac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22beb0: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22BEB0u;
    {
        const bool branch_taken_0x22beb0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEB0u;
        // 0x22beb4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22beb0) {
            ctx->pc = 0x22BF04u;
            goto label_22bf04;
        }
    }
    ctx->pc = 0x22BEB8u;
    // 0x22beb8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x22beb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22bebc: 0x0  nop
    ctx->pc = 0x22bebcu;
    // NOP
label_22bec0:
    // 0x22bec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bec4: 0xc08af8e  jal         func_22BE38
    ctx->pc = 0x22BEC4u;
    SET_GPR_U32(ctx, 31, 0x22BECCu);
    ctx->pc = 0x22BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEC4u;
    // 0x22bec8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE38u, 0x22BEC4u, 0x22BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BECCu;
label_22becc:
    // 0x22becc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x22beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x22bed0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22BED0u;
    {
        const bool branch_taken_0x22bed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BED0u;
        // 0x22bed4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bed0) {
            ctx->pc = 0x22BEFCu;
            goto label_22befc;
        }
    }
    ctx->pc = 0x22BED8u;
    // 0x22bed8: 0x86020048  lh          $v0, 0x48($s0)
    ctx->pc = 0x22bed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x22bedc: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BEDCu;
    {
        const bool branch_taken_0x22bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x22bedc) {
            ctx->pc = 0x22BEFCu;
            goto label_22befc;
        }
    }
    ctx->pc = 0x22BEE4u;
    // 0x22bee4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bee8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x22beec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22beecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22bef0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bef4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22bef8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22befc:
    // 0x22befc: 0x1e20fff0  bgtz        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22BEFCu;
    {
        const bool branch_taken_0x22befc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEFCu;
        // 0x22bf00: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22befc) {
            ctx->pc = 0x22BEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bec0;
        }
    }
    ctx->pc = 0x22BF04u;
label_22bf04:
    // 0x22bf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bf08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22bf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bf0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bf0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bf10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22bf10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bf14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22bf14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bf18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22bf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22bf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF1Cu;
        // 0x22bf20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BF24u;
    // 0x22bf24: 0x0  nop
    ctx->pc = 0x22bf24u;
    // NOP
    ctx->pc = 0x22bf28u;
}
