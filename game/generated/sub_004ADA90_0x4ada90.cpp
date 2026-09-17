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

// Function: sub_004ADA90
// Address: 0x4ada90 - 0x4adaf0
void sub_004ADA90_0x4ada90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADA90_0x4ada90");
#endif

    switch (ctx->pc) {
        case 0x4adaa4u: goto label_4adaa4;
        default: break;
    }

    ctx->pc = 0x4ada90u;

    // 0x4ada90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ada90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ada94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ada94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ada98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ada98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ada9c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4ADA9Cu;
    SET_GPR_U32(ctx, 31, 0x4ADAA4u);
    ctx->pc = 0x4ADAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADA9Cu;
    // 0x4adaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4ADA9Cu, 0x4ADAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADAA4u;
label_4adaa4:
    // 0x4adaa4: 0x84460052  lh          $a2, 0x52($v0)
    ctx->pc = 0x4adaa4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x4adaa8: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x4adaa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4adaac: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x4adaacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4adab0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4adab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4adab4: 0x8605001a  lh          $a1, 0x1A($s0)
    ctx->pc = 0x4adab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4adab8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4adab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4adabc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4adabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4adac0: 0xa6030130  sh          $v1, 0x130($s0)
    ctx->pc = 0x4adac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4adac4: 0x84430056  lh          $v1, 0x56($v0)
    ctx->pc = 0x4adac4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x4adac8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4adac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4adacc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x4adaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4adad0: 0xa6030132  sh          $v1, 0x132($s0)
    ctx->pc = 0x4adad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x4adad4: 0x8443005a  lh          $v1, 0x5A($v0)
    ctx->pc = 0x4adad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 90)));
    // 0x4adad8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x4adad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4adadc: 0xa6050134  sh          $a1, 0x134($s0)
    ctx->pc = 0x4adadcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 5));
    // 0x4adae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adae4: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADAE4u;
        // 0x4adae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADAECu;
    // 0x4adaec: 0x0  nop
    ctx->pc = 0x4adaecu;
    // NOP
    ctx->pc = 0x4adaf0u;
}
