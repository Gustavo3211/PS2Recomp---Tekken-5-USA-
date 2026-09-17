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

// Function: sub_002BC750
// Address: 0x2bc750 - 0x2bc868
void sub_002BC750_0x2bc750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC750_0x2bc750");
#endif

    switch (ctx->pc) {
        case 0x2bc788u: goto label_2bc788;
        case 0x2bc790u: goto label_2bc790;
        case 0x2bc7a8u: goto label_2bc7a8;
        case 0x2bc7c4u: goto label_2bc7c4;
        case 0x2bc7d8u: goto label_2bc7d8;
        case 0x2bc7ecu: goto label_2bc7ec;
        case 0x2bc800u: goto label_2bc800;
        case 0x2bc814u: goto label_2bc814;
        case 0x2bc828u: goto label_2bc828;
        case 0x2bc838u: goto label_2bc838;
        case 0x2bc848u: goto label_2bc848;
        default: break;
    }

    ctx->pc = 0x2bc750u;

    // 0x2bc750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bc758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bc75c: 0x2412001b  addiu       $s2, $zero, 0x1B
    ctx->pc = 0x2bc75cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2bc760: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2bc760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2bc764: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bc764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bc768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bc76c: 0x26640760  addiu       $a0, $s3, 0x760
    ctx->pc = 0x2bc76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1888));
    // 0x2bc770: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2bc770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2bc774: 0x26650720  addiu       $a1, $s3, 0x720
    ctx->pc = 0x2bc774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1824));
    // 0x2bc778: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2bc778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2bc77c: 0x8e740894  lw          $s4, 0x894($s3)
    ctx->pc = 0x2bc77cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2196)));
    // 0x2bc780: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BC780u;
    SET_GPR_U32(ctx, 31, 0x2BC788u);
    ctx->pc = 0x2BC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC780u;
    // 0x2bc784: 0x8e91001c  lw          $s1, 0x1C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BC780u, 0x2BC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC788u;
label_2bc788:
    // 0x2bc788: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2bc788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc78c: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2bc790:
    // 0x2bc790: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2bc790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2bc794: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc798: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2bc798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2bc79c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2bc79cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2bc7a0: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC7A0u;
    SET_GPR_U32(ctx, 31, 0x2BC7A8u);
    ctx->pc = 0x2BC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7A0u;
    // 0x2bc7a4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC7A0u, 0x2BC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7A8u;
label_2bc7a8:
    // 0x2bc7a8: 0x5e40fff9  bgtzl       $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BC7A8u;
    {
        const bool branch_taken_0x2bc7a8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x2bc7a8) {
            ctx->pc = 0x2BC7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC7A8u;
            // 0x2bc7ac: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc790;
        }
    }
    ctx->pc = 0x2BC7B0u;
    // 0x2bc7b0: 0x26262880  addiu       $a2, $s1, 0x2880
    ctx->pc = 0x2bc7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10368));
    // 0x2bc7b4: 0x262428c0  addiu       $a0, $s1, 0x28C0
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10432));
    // 0x2bc7b8: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x2bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2bc7bc: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC7BCu;
    SET_GPR_U32(ctx, 31, 0x2BC7C4u);
    ctx->pc = 0x2BC7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7BCu;
    // 0x2bc7c0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC7BCu, 0x2BC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7C4u;
label_2bc7c4:
    // 0x2bc7c4: 0x26262010  addiu       $a2, $s1, 0x2010
    ctx->pc = 0x2bc7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8208));
    // 0x2bc7c8: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x2bc7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2bc7cc: 0x26242050  addiu       $a0, $s1, 0x2050
    ctx->pc = 0x2bc7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8272));
    // 0x2bc7d0: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC7D0u;
    SET_GPR_U32(ctx, 31, 0x2BC7D8u);
    ctx->pc = 0x2BC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7D0u;
    // 0x2bc7d4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC7D0u, 0x2BC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7D8u;
label_2bc7d8:
    // 0x2bc7d8: 0x26262d90  addiu       $a2, $s1, 0x2D90
    ctx->pc = 0x2bc7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11664));
    // 0x2bc7dc: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x2bc7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2bc7e0: 0x26242dd0  addiu       $a0, $s1, 0x2DD0
    ctx->pc = 0x2bc7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11728));
    // 0x2bc7e4: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC7E4u;
    SET_GPR_U32(ctx, 31, 0x2BC7ECu);
    ctx->pc = 0x2BC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7E4u;
    // 0x2bc7e8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC7E4u, 0x2BC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7ECu;
label_2bc7ec:
    // 0x2bc7ec: 0x26263060  addiu       $a2, $s1, 0x3060
    ctx->pc = 0x2bc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12384));
    // 0x2bc7f0: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x2bc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2bc7f4: 0x262430a0  addiu       $a0, $s1, 0x30A0
    ctx->pc = 0x2bc7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12448));
    // 0x2bc7f8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC7F8u;
    SET_GPR_U32(ctx, 31, 0x2BC800u);
    ctx->pc = 0x2BC7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7F8u;
    // 0x2bc7fc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC7F8u, 0x2BC800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC800u;
label_2bc800:
    // 0x2bc800: 0x26263570  addiu       $a2, $s1, 0x3570
    ctx->pc = 0x2bc800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13680));
    // 0x2bc804: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x2bc804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2bc808: 0x262435b0  addiu       $a0, $s1, 0x35B0
    ctx->pc = 0x2bc808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13744));
    // 0x2bc80c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC80Cu;
    SET_GPR_U32(ctx, 31, 0x2BC814u);
    ctx->pc = 0x2BC810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC80Cu;
    // 0x2bc810: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC80Cu, 0x2BC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC814u;
label_2bc814:
    // 0x2bc814: 0x26263a80  addiu       $a2, $s1, 0x3A80
    ctx->pc = 0x2bc814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 14976));
    // 0x2bc818: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x2bc818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2bc81c: 0x26243ac0  addiu       $a0, $s1, 0x3AC0
    ctx->pc = 0x2bc81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15040));
    // 0x2bc820: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC820u;
    SET_GPR_U32(ctx, 31, 0x2BC828u);
    ctx->pc = 0x2BC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC820u;
    // 0x2bc824: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC820u, 0x2BC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC828u;
label_2bc828:
    // 0x2bc828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc82c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bc82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc830: 0xc0b0ada  jal         func_2C2B68
    ctx->pc = 0x2BC830u;
    SET_GPR_U32(ctx, 31, 0x2BC838u);
    ctx->pc = 0x2BC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC830u;
    // 0x2bc834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2B68u, 0x2BC830u, 0x2BC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC838u;
label_2bc838:
    // 0x2bc838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc83c: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x2bc83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2bc840: 0xc0b0ada  jal         func_2C2B68
    ctx->pc = 0x2BC840u;
    SET_GPR_U32(ctx, 31, 0x2BC848u);
    ctx->pc = 0x2BC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC840u;
    // 0x2bc844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2B68u, 0x2BC840u, 0x2BC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC848u;
label_2bc848:
    // 0x2bc848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bc84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bc850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2bc850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2bc854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc858: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2bc858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc85c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2bc85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2bc860: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC860u;
        // 0x2bc864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC868u;
}
