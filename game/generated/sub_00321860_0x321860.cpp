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

// Function: sub_00321860
// Address: 0x321860 - 0x3218e8
void sub_00321860_0x321860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321860_0x321860");
#endif

    switch (ctx->pc) {
        case 0x321860u: goto label_321860;
        case 0x321864u: goto label_321864;
        case 0x321868u: goto label_321868;
        case 0x32186cu: goto label_32186c;
        case 0x321870u: goto label_321870;
        case 0x321874u: goto label_321874;
        case 0x321878u: goto label_321878;
        case 0x32187cu: goto label_32187c;
        case 0x321880u: goto label_321880;
        case 0x321884u: goto label_321884;
        case 0x321888u: goto label_321888;
        case 0x32188cu: goto label_32188c;
        case 0x321890u: goto label_321890;
        case 0x321894u: goto label_321894;
        case 0x321898u: goto label_321898;
        case 0x32189cu: goto label_32189c;
        case 0x3218a0u: goto label_3218a0;
        case 0x3218a4u: goto label_3218a4;
        case 0x3218a8u: goto label_3218a8;
        case 0x3218acu: goto label_3218ac;
        case 0x3218b0u: goto label_3218b0;
        case 0x3218b4u: goto label_3218b4;
        case 0x3218b8u: goto label_3218b8;
        case 0x3218bcu: goto label_3218bc;
        case 0x3218c0u: goto label_3218c0;
        case 0x3218c4u: goto label_3218c4;
        case 0x3218c8u: goto label_3218c8;
        case 0x3218ccu: goto label_3218cc;
        case 0x3218d0u: goto label_3218d0;
        case 0x3218d4u: goto label_3218d4;
        case 0x3218d8u: goto label_3218d8;
        case 0x3218dcu: goto label_3218dc;
        case 0x3218e0u: goto label_3218e0;
        case 0x3218e4u: goto label_3218e4;
        default: break;
    }

    ctx->pc = 0x321860u;

label_321860:
    // 0x321860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_321864:
    // 0x321864: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_321868:
    // 0x321868: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x321868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32186c:
    // 0x32186c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32186cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_321870:
    // 0x321870: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x321870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_321874:
    // 0x321874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_321878:
    // 0x321878: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x321878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32187c:
    // 0x32187c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321880:
    // 0x321880: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x321880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_321884:
    // 0x321884: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x321884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_321888:
    // 0x321888: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x321888u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32188c:
    // 0x32188c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321890:
    // 0x321890: 0x40f809  jalr        $v0
label_321894:
    if (ctx->pc == 0x321894u) {
        ctx->pc = 0x321894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321890u;
        // 0x321894: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321898u;
        goto label_321898;
    }
    ctx->pc = 0x321890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321898u);
        ctx->pc = 0x321894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321890u;
        // 0x321894: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321890u, 0x321898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321898u;
label_321898:
    // 0x321898: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_32189c:
    if (ctx->pc == 0x32189Cu) {
        ctx->pc = 0x3218A0u;
        goto label_3218a0;
    }
    ctx->pc = 0x321898u;
    {
        const bool branch_taken_0x321898 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x321898) {
            ctx->pc = 0x3218B0u;
            goto label_3218b0;
        }
    }
    ctx->pc = 0x3218A0u;
label_3218a0:
    // 0x3218a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3218a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3218a4:
    // 0x3218a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3218a8:
    if (ctx->pc == 0x3218A8u) {
        ctx->pc = 0x3218A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218A4u;
        // 0x3218a8: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3218ACu;
        goto label_3218ac;
    }
    ctx->pc = 0x3218A4u;
    {
        const bool branch_taken_0x3218a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218A4u;
        // 0x3218a8: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218a4) {
            ctx->pc = 0x3218D4u;
            goto label_3218d4;
        }
    }
    ctx->pc = 0x3218ACu;
label_3218ac:
    // 0x3218ac: 0x0  nop
    ctx->pc = 0x3218acu;
    // NOP
label_3218b0:
    // 0x3218b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3218b4:
    if (ctx->pc == 0x3218B4u) {
        ctx->pc = 0x3218B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218B0u;
        // 0x3218b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3218B8u;
        goto label_3218b8;
    }
    ctx->pc = 0x3218B0u;
    {
        const bool branch_taken_0x3218b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218B0u;
        // 0x3218b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218b0) {
            ctx->pc = 0x3218C0u;
            goto label_3218c0;
        }
    }
    ctx->pc = 0x3218B8u;
label_3218b8:
    // 0x3218b8: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x3218b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_3218bc:
    // 0x3218bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3218bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3218c0:
    // 0x3218c0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_3218c4:
    if (ctx->pc == 0x3218C4u) {
        ctx->pc = 0x3218C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218C0u;
        // 0x3218c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3218C8u;
        goto label_3218c8;
    }
    ctx->pc = 0x3218C0u;
    {
        const bool branch_taken_0x3218c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218C0u;
        // 0x3218c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218c0) {
            ctx->pc = 0x3218D0u;
            goto label_3218d0;
        }
    }
    ctx->pc = 0x3218C8u;
label_3218c8:
    // 0x3218c8: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x3218c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_3218cc:
    // 0x3218cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3218d0:
    // 0x3218d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3218d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3218d4:
    // 0x3218d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3218d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3218d8:
    // 0x3218d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3218d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3218dc:
    // 0x3218dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3218dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3218e0:
    // 0x3218e0: 0x3e00008  jr          $ra
label_3218e4:
    if (ctx->pc == 0x3218E4u) {
        ctx->pc = 0x3218E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218E0u;
        // 0x3218e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3218E8u;
        goto label_fallthrough_0x3218e0;
    }
    ctx->pc = 0x3218E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3218E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218E0u;
        // 0x3218e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3218E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3218e0:
    ctx->pc = 0x3218E8u;
}
