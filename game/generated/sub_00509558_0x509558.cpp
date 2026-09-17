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

// Function: sub_00509558
// Address: 0x509558 - 0x5095b8
void sub_00509558_0x509558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509558_0x509558");
#endif

    switch (ctx->pc) {
        case 0x509594u: goto label_509594;
        default: break;
    }

    ctx->pc = 0x509558u;

    // 0x509558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x509558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50955c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x509560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x509564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x509568: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x509568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x50956c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50956cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x509570: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x509570u;
    {
        const bool branch_taken_0x509570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x509574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509570u;
        // 0x509574: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509570) {
            ctx->pc = 0x509598u;
            goto label_509598;
        }
    }
    ctx->pc = 0x509578u;
    // 0x509578: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x509578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50957c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50957cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x509580: 0x8442f088  lh          $v0, -0xF78($v0)
    ctx->pc = 0x509580u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF088u));
    // 0x509584: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x509584u;
    {
        const bool branch_taken_0x509584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x509584) {
            ctx->pc = 0x509588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509584u;
            // 0x509588: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509598u;
            goto label_509598;
        }
    }
    ctx->pc = 0x50958Cu;
    // 0x50958c: 0xc144b9e  jal         func_512E78
    ctx->pc = 0x50958Cu;
    SET_GPR_U32(ctx, 31, 0x509594u);
    ctx->pc = 0x512E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512E78u, 0x50958Cu, 0x509594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509594u;
label_509594:
    // 0x509594: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x509594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_509598:
    // 0x509598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x509598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50959c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50959cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5095a0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x5095a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5095a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5095a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5095a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5095a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5095ac: 0x3e00008  jr          $ra
    ctx->pc = 0x5095ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5095B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5095ACu;
        // 0x5095b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5095ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5095B4u;
    // 0x5095b4: 0x0  nop
    ctx->pc = 0x5095b4u;
    // NOP
    ctx->pc = 0x5095b8u;
}
