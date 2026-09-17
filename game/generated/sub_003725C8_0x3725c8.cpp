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

// Function: sub_003725C8
// Address: 0x3725c8 - 0x372718
void sub_003725C8_0x3725c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003725C8_0x3725c8");
#endif

    switch (ctx->pc) {
        case 0x3725ecu: goto label_3725ec;
        case 0x372604u: goto label_372604;
        default: break;
    }

    ctx->pc = 0x3725c8u;

    // 0x3725c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3725c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3725cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3725ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3725d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3725d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3725d4: 0x24507660  addiu       $s0, $v0, 0x7660
    ctx->pc = 0x3725d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30304));
    // 0x3725d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3725d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7660u));
    // 0x3725dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3725DCu;
    {
        const bool branch_taken_0x3725dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3725E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3725DCu;
        // 0x3725e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3725dc) {
            ctx->pc = 0x372604u;
            goto label_372604;
        }
    }
    ctx->pc = 0x3725E4u;
    // 0x3725e4: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x3725E4u;
    SET_GPR_U32(ctx, 31, 0x3725ECu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x3725E4u, 0x3725ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725ECu;
label_3725ec:
    // 0x3725ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3725ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3725f0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3725f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3725f4: 0x24a51348  addiu       $a1, $a1, 0x1348
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4936));
    // 0x3725f8: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x3725f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x3725fc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3725FCu;
    SET_GPR_U32(ctx, 31, 0x372604u);
    ctx->pc = 0x372600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3725FCu;
    // 0x372600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3725FCu, 0x372604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372604u;
label_372604:
    // 0x372604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37260c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37260cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372610: 0x3e00008  jr          $ra
    ctx->pc = 0x372610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372610u;
        // 0x372614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372618u;
    // 0x372618: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x372618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x37261c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x37261cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x372620: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x372620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x372624: 0x3e00008  jr          $ra
    ctx->pc = 0x372624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372624u;
        // 0x372628: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37262Cu;
    // 0x37262c: 0x0  nop
    ctx->pc = 0x37262cu;
    // NOP
    // 0x372630: 0x24840118  addiu       $a0, $a0, 0x118
    ctx->pc = 0x372630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x372634: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x372634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x372638: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x372638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x37263c: 0x3e00008  jr          $ra
    ctx->pc = 0x37263Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37263Cu;
        // 0x372640: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37263Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372644u;
    // 0x372644: 0x0  nop
    ctx->pc = 0x372644u;
    // NOP
    // 0x372648: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x372648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x37264c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372650u;
    {
        const bool branch_taken_0x372650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372650u;
        // 0x372654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372650) {
            ctx->pc = 0x372668u;
            goto label_372668;
        }
    }
    ctx->pc = 0x372658u;
    // 0x372658: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x372658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x37265c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x37265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372660: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372660u;
    {
        const bool branch_taken_0x372660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372660) {
            ctx->pc = 0x372674u;
            goto label_372674;
        }
    }
    ctx->pc = 0x372668u;
label_372668:
    // 0x372668: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x372668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37266c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372670: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x372670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_372674:
    // 0x372674: 0x3e00008  jr          $ra
    ctx->pc = 0x372674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372674u;
        // 0x372678: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37267Cu;
    // 0x37267c: 0x0  nop
    ctx->pc = 0x37267cu;
    // NOP
    // 0x372680: 0x24840118  addiu       $a0, $a0, 0x118
    ctx->pc = 0x372680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x372684: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x372684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372688u;
    {
        const bool branch_taken_0x372688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372688u;
        // 0x37268c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372688) {
            ctx->pc = 0x3726A0u;
            goto label_3726a0;
        }
    }
    ctx->pc = 0x372690u;
    // 0x372690: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x372690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x372694: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x372694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372698: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372698u;
    {
        const bool branch_taken_0x372698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372698) {
            ctx->pc = 0x3726ACu;
            goto label_3726ac;
        }
    }
    ctx->pc = 0x3726A0u;
label_3726a0:
    // 0x3726a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3726a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3726a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3726a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3726a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3726a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3726ac:
    // 0x3726ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3726ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3726B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726ACu;
        // 0x3726b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3726ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3726B4u;
    // 0x3726b4: 0x0  nop
    ctx->pc = 0x3726b4u;
    // NOP
    // 0x3726b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3726b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3726bc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3726bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3726c0: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x3726c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x3726c4: 0x248a0118  addiu       $t2, $a0, 0x118
    ctx->pc = 0x3726c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x3726c8: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x3726c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x3726cc: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x3726ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x3726d0: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x3726d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3726d4: 0x24890110  addiu       $t1, $a0, 0x110
    ctx->pc = 0x3726d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x3726d8: 0x24c60c58  addiu       $a2, $a2, 0xC58
    ctx->pc = 0x3726d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3160));
    // 0x3726dc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3726dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3726e0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3726e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3726e4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3726e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3726e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3726e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3726ec: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3726ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3726f0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3726f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3726f4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3726f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x3726f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3726f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3726fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3726fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x372700: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x372700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x372704: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x372704u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x372708: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x372708u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x37270c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x37270cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x372710: 0x3e00008  jr          $ra
    ctx->pc = 0x372710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372710u;
        // 0x372714: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372718u;
}
