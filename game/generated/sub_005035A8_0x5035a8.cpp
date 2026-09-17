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

// Function: sub_005035A8
// Address: 0x5035a8 - 0x503688
void sub_005035A8_0x5035a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005035A8_0x5035a8");
#endif

    switch (ctx->pc) {
        case 0x503628u: goto label_503628;
        case 0x503638u: goto label_503638;
        default: break;
    }

    ctx->pc = 0x5035a8u;

    // 0x5035a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5035a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5035ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x5035acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x5035b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5035b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5035b4: 0x2447cfb0  addiu       $a3, $v0, -0x3050
    ctx->pc = 0x5035b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x5035b8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x5035b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFB0u));
    // 0x5035bc: 0x480002f  bltz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x5035BCu;
    {
        const bool branch_taken_0x5035bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x5035C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5035BCu;
        // 0x5035c0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5035bc) {
            ctx->pc = 0x50367Cu;
            goto label_50367c;
        }
    }
    ctx->pc = 0x5035C4u;
    // 0x5035c4: 0x2445cfb8  addiu       $a1, $v0, -0x3048
    ctx->pc = 0x5035c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954936));
    // 0x5035c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x5035c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5035cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x5035CCu;
    {
        const bool branch_taken_0x5035cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5035D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5035CCu;
        // 0x5035d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5035cc) {
            ctx->pc = 0x5035D8u;
            goto label_5035d8;
        }
    }
    ctx->pc = 0x5035D4u;
    // 0x5035d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x5035d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_5035d8:
    // 0x5035d8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x5035d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x5035dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5035dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5035e0: 0x2446d680  addiu       $a2, $v0, -0x2980
    ctx->pc = 0x5035e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x5035e4: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x5035e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x5035e8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x5035e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D688u));
    // 0x5035ec: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x5035ECu;
    {
        const bool branch_taken_0x5035ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5035F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5035ECu;
        // 0x5035f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5035ec) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x5035F4u;
    // 0x5035f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x5035f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5035f8: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x5035f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x5035fc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x5035FCu;
    {
        const bool branch_taken_0x5035fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x503600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5035FCu;
        // 0x503600: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5035fc) {
            ctx->pc = 0x503640u;
            goto label_503640;
        }
    }
    ctx->pc = 0x503604u;
    // 0x503604: 0x84c200b6  lh          $v0, 0xB6($a2)
    ctx->pc = 0x503604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 182)));
    // 0x503608: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x503608u;
    {
        const bool branch_taken_0x503608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x503608) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x503610u;
    // 0x503610: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x503610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x503614: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x503614u;
    {
        const bool branch_taken_0x503614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x503614) {
            ctx->pc = 0x503630u;
            goto label_503630;
        }
    }
    ctx->pc = 0x50361Cu;
    // 0x50361c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x50361cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x503620: 0xc124910  jal         func_492440
    ctx->pc = 0x503620u;
    SET_GPR_U32(ctx, 31, 0x503628u);
    ctx->pc = 0x503624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503620u;
    // 0x503624: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x503620u, 0x503628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503628u;
label_503628:
    // 0x503628: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x503628u;
    {
        const bool branch_taken_0x503628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503628u;
        // 0x50362c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503628) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x503630u;
label_503630:
    // 0x503630: 0xc124910  jal         func_492440
    ctx->pc = 0x503630u;
    SET_GPR_U32(ctx, 31, 0x503638u);
    ctx->pc = 0x503634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503630u;
    // 0x503634: 0x3c040042  lui         $a0, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x503630u, 0x503638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503638u;
label_503638:
    // 0x503638: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x503638u;
    {
        const bool branch_taken_0x503638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503638u;
        // 0x50363c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503638) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x503640u;
label_503640:
    // 0x503640: 0x286200a2  slti        $v0, $v1, 0xA2
    ctx->pc = 0x503640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)162) ? 1 : 0);
    // 0x503644: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x503644u;
    {
        const bool branch_taken_0x503644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x503648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503644u;
        // 0x503648: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503644) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x50364Cu;
    // 0x50364c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50364cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x503650: 0x9462d654  lhu         $v0, -0x29AC($v1)
    ctx->pc = 0x503650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D654u));
    // 0x503654: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x503654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x503658: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x503658u;
    {
        const bool branch_taken_0x503658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x503658) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x503660u;
    // 0x503660: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x503660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x503664: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x503664u;
    {
        const bool branch_taken_0x503664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x503668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503664u;
        // 0x503668: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503664) {
            ctx->pc = 0x503680u;
            goto label_503680;
        }
    }
    ctx->pc = 0x50366Cu;
    // 0x50366c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x503670: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x503670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x503674: 0xac43cfb4  sw          $v1, -0x304C($v0)
    ctx->pc = 0x503674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954932), GPR_U32(ctx, 3));
    // 0x503678: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x503678u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_50367c:
    // 0x50367c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_503680:
    // 0x503680: 0x3e00008  jr          $ra
    ctx->pc = 0x503680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503680u;
        // 0x503684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503688u;
}
