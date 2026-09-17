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

// Function: sub_001224D0
// Address: 0x1224d0 - 0x122548
void sub_001224D0_0x1224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001224D0_0x1224d0");
#endif

    switch (ctx->pc) {
        case 0x1224d0u: goto label_1224d0;
        case 0x1224d4u: goto label_1224d4;
        case 0x1224d8u: goto label_1224d8;
        case 0x1224dcu: goto label_1224dc;
        case 0x1224e0u: goto label_1224e0;
        case 0x1224e4u: goto label_1224e4;
        case 0x1224e8u: goto label_1224e8;
        case 0x1224ecu: goto label_1224ec;
        case 0x1224f0u: goto label_1224f0;
        case 0x1224f4u: goto label_1224f4;
        case 0x1224f8u: goto label_1224f8;
        case 0x1224fcu: goto label_1224fc;
        case 0x122500u: goto label_122500;
        case 0x122504u: goto label_122504;
        case 0x122508u: goto label_122508;
        case 0x12250cu: goto label_12250c;
        case 0x122510u: goto label_122510;
        case 0x122514u: goto label_122514;
        case 0x122518u: goto label_122518;
        case 0x12251cu: goto label_12251c;
        case 0x122520u: goto label_122520;
        case 0x122524u: goto label_122524;
        case 0x122528u: goto label_122528;
        case 0x12252cu: goto label_12252c;
        case 0x122530u: goto label_122530;
        case 0x122534u: goto label_122534;
        case 0x122538u: goto label_122538;
        case 0x12253cu: goto label_12253c;
        case 0x122540u: goto label_122540;
        case 0x122544u: goto label_122544;
        default: break;
    }

    ctx->pc = 0x1224d0u;

label_1224d0:
    // 0x1224d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1224d4:
    // 0x1224d4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1224d8:
    if (ctx->pc == 0x1224D8u) {
        ctx->pc = 0x1224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224D4u;
        // 0x1224d8: 0x8fa30640  lw          $v1, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224DCu;
        goto label_1224dc;
    }
    ctx->pc = 0x1224D4u;
    {
        const bool branch_taken_0x1224d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224D4u;
        // 0x1224d8: 0x8fa30640  lw          $v1, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224d4) {
            ctx->pc = 0x122530u;
            goto label_122530;
        }
    }
    ctx->pc = 0x1224DCu;
label_1224dc:
    // 0x1224dc: 0xac7d0000  sw          $sp, 0x0($v1)
    ctx->pc = 0x1224dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 29));
label_1224e0:
    // 0x1224e0: 0x8fa40644  lw          $a0, 0x644($sp)
    ctx->pc = 0x1224e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1224e4:
    // 0x1224e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1224e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1224e8:
    // 0x1224e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1224ec:
    if (ctx->pc == 0x1224ECu) {
        ctx->pc = 0x1224ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224E8u;
        // 0x1224ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1224F0u;
        goto label_1224f0;
    }
    ctx->pc = 0x1224E8u;
    {
        const bool branch_taken_0x1224e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224E8u;
        // 0x1224ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224e8) {
            ctx->pc = 0x122520u;
            goto label_122520;
        }
    }
    ctx->pc = 0x1224F0u;
label_1224f0:
    // 0x1224f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1224f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1224f4:
    // 0x1224f4: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x1224f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1224f8:
    // 0x1224f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1224f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1224fc:
    // 0x1224fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1224fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_122500:
    // 0x122500: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x122500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_122504:
    // 0x122504: 0x60f809  jalr        $v1
label_122508:
    if (ctx->pc == 0x122508u) {
        ctx->pc = 0x122508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122504u;
        // 0x122508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12250Cu;
        goto label_12250c;
    }
    ctx->pc = 0x122504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12250Cu);
        ctx->pc = 0x122508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122504u;
        // 0x122508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122504u, 0x12250Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12250Cu;
label_12250c:
    // 0x12250c: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x12250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_122510:
    // 0x122510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_122514:
    // 0x122514: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_122518:
    if (ctx->pc == 0x122518u) {
        ctx->pc = 0x122518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122514u;
        // 0x122518: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12251Cu;
        goto label_12251c;
    }
    ctx->pc = 0x122514u;
    {
        const bool branch_taken_0x122514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122514u;
        // 0x122518: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122514) {
            ctx->pc = 0x1224F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1224f0;
        }
    }
    ctx->pc = 0x12251Cu;
label_12251c:
    // 0x12251c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_122520:
    // 0x122520: 0x8fa40640  lw          $a0, 0x640($sp)
    ctx->pc = 0x122520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_122524:
    // 0x122524: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x122524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122528:
    // 0x122528: 0x10000003  b           . + 4 + (0x3 << 2)
label_12252c:
    if (ctx->pc == 0x12252Cu) {
        ctx->pc = 0x12252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122528u;
        // 0x12252c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122530u;
        goto label_122530;
    }
    ctx->pc = 0x122528u;
    {
        const bool branch_taken_0x122528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122528u;
        // 0x12252c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122528) {
            ctx->pc = 0x122538u;
            goto label_122538;
        }
    }
    ctx->pc = 0x122530u;
label_122530:
    // 0x122530: 0xc048724  jal         func_121C90
label_122534:
    if (ctx->pc == 0x122534u) {
        ctx->pc = 0x122538u;
        goto label_122538;
    }
    ctx->pc = 0x122530u;
    SET_GPR_U32(ctx, 31, 0x122538u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122530u, 0x122538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122538u;
label_122538:
    // 0x122538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12253c:
    // 0x12253c: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x12253cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_122540:
    // 0x122540: 0xc0488b0  jal         func_1222C0
label_122544:
    if (ctx->pc == 0x122544u) {
        ctx->pc = 0x122544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122540u;
        // 0x122544: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122548u;
        goto label_fallthrough_0x122540;
    }
    ctx->pc = 0x122540u;
    SET_GPR_U32(ctx, 31, 0x122548u);
    ctx->pc = 0x122544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122540u;
    // 0x122544: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222C0u, 0x122540u, 0x122548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x122540:
    ctx->pc = 0x122548u;
}
