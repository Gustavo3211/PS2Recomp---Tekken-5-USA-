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

// Function: sub_00492328
// Address: 0x492328 - 0x4923a8
void sub_00492328_0x492328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492328_0x492328");
#endif

    ctx->pc = 0x492328u;

    // 0x492328: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x492328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x49232c: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x49232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x492330: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x492330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x492334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x492334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x492338: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x492338u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x49233c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x49233Cu;
    {
        const bool branch_taken_0x49233c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x492340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49233Cu;
        // 0x492340: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49233c) {
            ctx->pc = 0x492358u;
            goto label_492358;
        }
    }
    ctx->pc = 0x492344u;
    // 0x492344: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x492344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x492348: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x492348u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49234c: 0x8422e806  lh          $v0, -0x17FA($at)
    ctx->pc = 0x49234cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961158)));
    // 0x492350: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x492350u;
    {
        const bool branch_taken_0x492350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492350) {
            ctx->pc = 0x49239Cu;
            goto label_49239c;
        }
    }
    ctx->pc = 0x492358u;
label_492358:
    // 0x492358: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x492358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49235c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x49235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x492360: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x492360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x492364: 0x24a60058  addiu       $a2, $a1, 0x58
    ctx->pc = 0x492364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x492368: 0x24a5005c  addiu       $a1, $a1, 0x5C
    ctx->pc = 0x492368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x49236c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x49236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492370: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x492370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x492374: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x492374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x492378: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x492378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49237c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x49237cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x492380: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x492380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x492384: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x492384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x492388: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x492388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49238c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49238cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x492390: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x492390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492394: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x492394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x492398: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x492398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_49239c:
    // 0x49239c: 0x3e00008  jr          $ra
    ctx->pc = 0x49239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49239Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4923A4u;
    // 0x4923a4: 0x0  nop
    ctx->pc = 0x4923a4u;
    // NOP
    ctx->pc = 0x4923a8u;
}
