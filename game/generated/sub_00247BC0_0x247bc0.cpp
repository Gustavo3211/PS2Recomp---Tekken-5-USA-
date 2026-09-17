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

// Function: sub_00247BC0
// Address: 0x247bc0 - 0x247c18
void sub_00247BC0_0x247bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247BC0_0x247bc0");
#endif

    switch (ctx->pc) {
        case 0x247becu: goto label_247bec;
        case 0x247c00u: goto label_247c00;
        default: break;
    }

    ctx->pc = 0x247bc0u;

    // 0x247bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247bd0: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x247bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x247bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247bd8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x247bdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x247BDCu;
    {
        const bool branch_taken_0x247bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247BDCu;
        // 0x247be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247bdc) {
            ctx->pc = 0x247C04u;
            goto label_247c04;
        }
    }
    ctx->pc = 0x247BE4u;
    // 0x247be4: 0xc092906  jal         func_24A418
    ctx->pc = 0x247BE4u;
    SET_GPR_U32(ctx, 31, 0x247BECu);
    ctx->pc = 0x24A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A418u, 0x247BE4u, 0x247BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BECu;
label_247bec:
    // 0x247bec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x247BECu;
    {
        const bool branch_taken_0x247bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247bec) {
            ctx->pc = 0x247BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247BECu;
            // 0x247bf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247C08u;
            goto label_247c08;
        }
    }
    ctx->pc = 0x247BF4u;
    // 0x247bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247bf8: 0xc0928fa  jal         func_24A3E8
    ctx->pc = 0x247BF8u;
    SET_GPR_U32(ctx, 31, 0x247C00u);
    ctx->pc = 0x247BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247BF8u;
    // 0x247bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3E8u, 0x247BF8u, 0x247C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C00u;
label_247c00:
    // 0x247c00: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x247c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_247c04:
    // 0x247c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247c08:
    // 0x247c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c10: 0x3e00008  jr          $ra
    ctx->pc = 0x247C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C10u;
        // 0x247c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247C18u;
}
