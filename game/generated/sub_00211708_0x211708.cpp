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

// Function: sub_00211708
// Address: 0x211708 - 0x211760
void sub_00211708_0x211708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211708_0x211708");
#endif

    ctx->pc = 0x211708u;

    // 0x211708: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x211708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21170c: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x21170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x211710: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x211710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x211714: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x211714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x211718: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x211718u;
    {
        const bool branch_taken_0x211718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211718) {
            ctx->pc = 0x21171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211718u;
            // 0x21171c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211720u;
            goto label_211720;
        }
    }
    ctx->pc = 0x211720u;
label_211720:
    // 0x211720: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x211720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x211724: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x211724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x211728: 0x2444b6c8  addiu       $a0, $v0, -0x4938
    ctx->pc = 0x211728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948552));
    // 0x21172c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21172cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AB6C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AB6C8u, _value); } while (0);
    // 0x211730: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x211730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x211734: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211734u;
    {
        const bool branch_taken_0x211734 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x211738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211734u;
        // 0x211738: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211734) {
            ctx->pc = 0x211750u;
            goto label_211750;
        }
    }
    ctx->pc = 0x21173Cu;
    // 0x21173c: 0x8c620228  lw          $v0, 0x228($v1)
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x211740: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x211740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211744u;
    {
        const bool branch_taken_0x211744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211744u;
        // 0x211748: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211744) {
            ctx->pc = 0x211754u;
            goto label_211754;
        }
    }
    ctx->pc = 0x21174Cu;
    // 0x21174c: 0x0  nop
    ctx->pc = 0x21174cu;
    // NOP
label_211750:
    // 0x211750: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x211750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_211754:
    // 0x211754: 0x3e00008  jr          $ra
    ctx->pc = 0x211754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211754u;
        // 0x211758: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21175Cu;
    // 0x21175c: 0x0  nop
    ctx->pc = 0x21175cu;
    // NOP
    ctx->pc = 0x211760u;
}
