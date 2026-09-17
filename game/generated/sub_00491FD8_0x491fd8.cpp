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

// Function: sub_00491FD8
// Address: 0x491fd8 - 0x492050
void sub_00491FD8_0x491fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491FD8_0x491fd8");
#endif

    ctx->pc = 0x491fd8u;

    // 0x491fd8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x491fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x491fdc: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x491fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x491fe0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x491fe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x491fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491fe8: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x491fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD04u));
    // 0x491fec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x491FECu;
    {
        const bool branch_taken_0x491fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491FECu;
        // 0x491ff0: 0x3c040073  lui         $a0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491fec) {
            ctx->pc = 0x492008u;
            goto label_492008;
        }
    }
    ctx->pc = 0x491FF4u;
    // 0x491ff4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x491ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x491ff8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x491ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x491ffc: 0x8422e806  lh          $v0, -0x17FA($at)
    ctx->pc = 0x491ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294961158)));
    // 0x492000: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x492000u;
    {
        const bool branch_taken_0x492000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492000) {
            ctx->pc = 0x492044u;
            goto label_492044;
        }
    }
    ctx->pc = 0x492008u;
label_492008:
    // 0x492008: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x492008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x49200c: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x49200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x492010: 0x2485005c  addiu       $a1, $a0, 0x5C
    ctx->pc = 0x492010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x492014: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x492014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x492018: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x492018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49201c: 0x24840082  addiu       $a0, $a0, 0x82
    ctx->pc = 0x49201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 130));
    // 0x492020: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x492020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x492024: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x492024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x492028: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x492028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49202c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49202cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x492030: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x492030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x492034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x492038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x492038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49203c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x49203cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x492040: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x492040u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_492044:
    // 0x492044: 0x3e00008  jr          $ra
    ctx->pc = 0x492044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49204Cu;
    // 0x49204c: 0x0  nop
    ctx->pc = 0x49204cu;
    // NOP
    ctx->pc = 0x492050u;
}
