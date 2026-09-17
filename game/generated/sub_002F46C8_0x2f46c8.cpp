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

// Function: sub_002F46C8
// Address: 0x2f46c8 - 0x2f4748
void sub_002F46C8_0x2f46c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F46C8_0x2f46c8");
#endif

    switch (ctx->pc) {
        case 0x2f46c8u: goto label_2f46c8;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46d0u: goto label_2f46d0;
        case 0x2f46d4u: goto label_2f46d4;
        case 0x2f46d8u: goto label_2f46d8;
        case 0x2f46dcu: goto label_2f46dc;
        case 0x2f46e0u: goto label_2f46e0;
        case 0x2f46e4u: goto label_2f46e4;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f0u: goto label_2f46f0;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f46f8u: goto label_2f46f8;
        case 0x2f46fcu: goto label_2f46fc;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4704u: goto label_2f4704;
        case 0x2f4708u: goto label_2f4708;
        case 0x2f470cu: goto label_2f470c;
        case 0x2f4710u: goto label_2f4710;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f471cu: goto label_2f471c;
        case 0x2f4720u: goto label_2f4720;
        case 0x2f4724u: goto label_2f4724;
        case 0x2f4728u: goto label_2f4728;
        case 0x2f472cu: goto label_2f472c;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4734u: goto label_2f4734;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f473cu: goto label_2f473c;
        case 0x2f4740u: goto label_2f4740;
        case 0x2f4744u: goto label_2f4744;
        default: break;
    }

    ctx->pc = 0x2f46c8u;

label_2f46c8:
    // 0x2f46c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f46c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f46cc:
    // 0x2f46cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f46ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f46d0:
    // 0x2f46d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f46d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f46d4:
    // 0x2f46d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2f46d8:
    // 0x2f46d8: 0x260500e8  addiu       $a1, $s0, 0xE8
    ctx->pc = 0x2f46d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_2f46dc:
    // 0x2f46dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f46e0:
    // 0x2f46e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f46e4:
    if (ctx->pc == 0x2F46E4u) {
        ctx->pc = 0x2F46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46E0u;
        // 0x2f46e4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46E8u;
        goto label_2f46e8;
    }
    ctx->pc = 0x2F46E0u;
    {
        const bool branch_taken_0x2f46e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f46e0) {
            ctx->pc = 0x2F46E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46E0u;
            // 0x2f46e4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F46FCu;
            goto label_2f46fc;
        }
    }
    ctx->pc = 0x2F46E8u;
label_2f46e8:
    // 0x2f46e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f46ec:
    // 0x2f46ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f46f0:
    // 0x2f46f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f46f4:
    if (ctx->pc == 0x2F46F4u) {
        ctx->pc = 0x2F46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46F0u;
        // 0x2f46f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46F8u;
        goto label_2f46f8;
    }
    ctx->pc = 0x2F46F0u;
    {
        const bool branch_taken_0x2f46f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46F0u;
        // 0x2f46f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46f0) {
            ctx->pc = 0x2F4704u;
            goto label_2f4704;
        }
    }
    ctx->pc = 0x2F46F8u;
label_2f46f8:
    // 0x2f46f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f46fc:
    // 0x2f46fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f46fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4700:
    // 0x2f4700: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f4700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f4704:
    // 0x2f4704: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f4708:
    // 0x2f4708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f470c:
    // 0x2f470c: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2f470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2f4710:
    // 0x2f4710: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f4710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4714:
    // 0x2f4714: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f4718:
    // 0x2f4718: 0x60f809  jalr        $v1
label_2f471c:
    if (ctx->pc == 0x2F471Cu) {
        ctx->pc = 0x2F471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4718u;
        // 0x2f471c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4720u;
        goto label_2f4720;
    }
    ctx->pc = 0x2F4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4720u);
        ctx->pc = 0x2F471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4718u;
        // 0x2f471c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4718u, 0x2F4720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4720u;
label_2f4720:
    // 0x2f4720: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f4724:
    // 0x2f4724: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2f4724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2f4728:
    // 0x2f4728: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f4728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f472c:
    // 0x2f472c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f4730:
    // 0x2f4730: 0x60f809  jalr        $v1
label_2f4734:
    if (ctx->pc == 0x2F4734u) {
        ctx->pc = 0x2F4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4730u;
        // 0x2f4734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4738u;
        goto label_2f4738;
    }
    ctx->pc = 0x2F4730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4738u);
        ctx->pc = 0x2F4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4730u;
        // 0x2f4734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4730u, 0x2F4738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4738u;
label_2f4738:
    // 0x2f4738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f473c:
    // 0x2f473c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f473cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f4740:
    // 0x2f4740: 0x3e00008  jr          $ra
label_2f4744:
    if (ctx->pc == 0x2F4744u) {
        ctx->pc = 0x2F4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4740u;
        // 0x2f4744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4748u;
        goto label_fallthrough_0x2f4740;
    }
    ctx->pc = 0x2F4740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4740u;
        // 0x2f4744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f4740:
    ctx->pc = 0x2F4748u;
}
