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

// Function: sub_0033DE58
// Address: 0x33de58 - 0x33dee0
void sub_0033DE58_0x33de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DE58_0x33de58");
#endif

    switch (ctx->pc) {
        case 0x33de58u: goto label_33de58;
        case 0x33de5cu: goto label_33de5c;
        case 0x33de60u: goto label_33de60;
        case 0x33de64u: goto label_33de64;
        case 0x33de68u: goto label_33de68;
        case 0x33de6cu: goto label_33de6c;
        case 0x33de70u: goto label_33de70;
        case 0x33de74u: goto label_33de74;
        case 0x33de78u: goto label_33de78;
        case 0x33de7cu: goto label_33de7c;
        case 0x33de80u: goto label_33de80;
        case 0x33de84u: goto label_33de84;
        case 0x33de88u: goto label_33de88;
        case 0x33de8cu: goto label_33de8c;
        case 0x33de90u: goto label_33de90;
        case 0x33de94u: goto label_33de94;
        case 0x33de98u: goto label_33de98;
        case 0x33de9cu: goto label_33de9c;
        case 0x33dea0u: goto label_33dea0;
        case 0x33dea4u: goto label_33dea4;
        case 0x33dea8u: goto label_33dea8;
        case 0x33deacu: goto label_33deac;
        case 0x33deb0u: goto label_33deb0;
        case 0x33deb4u: goto label_33deb4;
        case 0x33deb8u: goto label_33deb8;
        case 0x33debcu: goto label_33debc;
        case 0x33dec0u: goto label_33dec0;
        case 0x33dec4u: goto label_33dec4;
        case 0x33dec8u: goto label_33dec8;
        case 0x33deccu: goto label_33decc;
        case 0x33ded0u: goto label_33ded0;
        case 0x33ded4u: goto label_33ded4;
        case 0x33ded8u: goto label_33ded8;
        case 0x33dedcu: goto label_33dedc;
        default: break;
    }

    ctx->pc = 0x33de58u;

label_33de58:
    // 0x33de58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33de58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33de5c:
    // 0x33de5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33de60:
    // 0x33de60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33de60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33de64:
    // 0x33de64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33de68:
    // 0x33de68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33de68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33de6c:
    // 0x33de6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33de70:
    // 0x33de70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33de74:
    // 0x33de74: 0xc0cf424  jal         func_33D090
label_33de78:
    if (ctx->pc == 0x33DE78u) {
        ctx->pc = 0x33DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE74u;
        // 0x33de78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DE7Cu;
        goto label_33de7c;
    }
    ctx->pc = 0x33DE74u;
    SET_GPR_U32(ctx, 31, 0x33DE7Cu);
    ctx->pc = 0x33DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DE74u;
    // 0x33de78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33DE74u, 0x33DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DE7Cu;
label_33de7c:
    // 0x33de7c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_33de80:
    if (ctx->pc == 0x33DE80u) {
        ctx->pc = 0x33DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE7Cu;
        // 0x33de80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DE84u;
        goto label_33de84;
    }
    ctx->pc = 0x33DE7Cu;
    {
        const bool branch_taken_0x33de7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de7c) {
            ctx->pc = 0x33DE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DE7Cu;
            // 0x33de80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DECCu;
            goto label_33decc;
        }
    }
    ctx->pc = 0x33DE84u;
label_33de84:
    // 0x33de84: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33de88:
    // 0x33de88: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x33de88u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_33de8c:
    // 0x33de8c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x33de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_33de90:
    // 0x33de90: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x33de90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_33de94:
    // 0x33de94: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33de94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33de98:
    // 0x33de98: 0x2463006  srlv        $a2, $a2, $s2
    ctx->pc = 0x33de98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
label_33de9c:
    // 0x33de9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33dea0:
    // 0x33dea0: 0x2452806  srlv        $a1, $a1, $s2
    ctx->pc = 0x33dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
label_33dea4:
    // 0x33dea4: 0x60f809  jalr        $v1
label_33dea8:
    if (ctx->pc == 0x33DEA8u) {
        ctx->pc = 0x33DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEA4u;
        // 0x33dea8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DEACu;
        goto label_33deac;
    }
    ctx->pc = 0x33DEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DEACu);
        ctx->pc = 0x33DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEA4u;
        // 0x33dea8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DEA4u, 0x33DEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DEACu;
label_33deac:
    // 0x33deac: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33deb0:
    // 0x33deb0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33deb4:
    // 0x33deb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33deb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33deb8:
    // 0x33deb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33debc:
    // 0x33debc: 0x60f809  jalr        $v1
label_33dec0:
    if (ctx->pc == 0x33DEC0u) {
        ctx->pc = 0x33DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEBCu;
        // 0x33dec0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DEC4u;
        goto label_33dec4;
    }
    ctx->pc = 0x33DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DEC4u);
        ctx->pc = 0x33DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEBCu;
        // 0x33dec0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DEBCu, 0x33DEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DEC4u;
label_33dec4:
    // 0x33dec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dec8:
    // 0x33dec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33dec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33decc:
    // 0x33decc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33deccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33ded0:
    // 0x33ded0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ded0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ded4:
    // 0x33ded4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33ded4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33ded8:
    // 0x33ded8: 0x3e00008  jr          $ra
label_33dedc:
    if (ctx->pc == 0x33DEDCu) {
        ctx->pc = 0x33DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DED8u;
        // 0x33dedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DEE0u;
        goto label_fallthrough_0x33ded8;
    }
    ctx->pc = 0x33DED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DED8u;
        // 0x33dedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33ded8:
    ctx->pc = 0x33DEE0u;
}
