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

// Function: sub_003634F0
// Address: 0x3634f0 - 0x363868
void sub_003634F0_0x3634f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003634F0_0x3634f0");
#endif

    switch (ctx->pc) {
        case 0x36355cu: goto label_36355c;
        case 0x36357cu: goto label_36357c;
        case 0x363590u: goto label_363590;
        case 0x3635c8u: goto label_3635c8;
        case 0x363614u: goto label_363614;
        case 0x363630u: goto label_363630;
        case 0x363654u: goto label_363654;
        case 0x363668u: goto label_363668;
        case 0x36367cu: goto label_36367c;
        case 0x363690u: goto label_363690;
        case 0x36369cu: goto label_36369c;
        case 0x3636a4u: goto label_3636a4;
        case 0x3636c0u: goto label_3636c0;
        case 0x363700u: goto label_363700;
        case 0x363728u: goto label_363728;
        case 0x363750u: goto label_363750;
        case 0x363778u: goto label_363778;
        case 0x3637a0u: goto label_3637a0;
        case 0x3637d4u: goto label_3637d4;
        case 0x363850u: goto label_363850;
        default: break;
    }

    ctx->pc = 0x3634f0u;

    // 0x3634f0: 0x8f83c814  lw          $v1, -0x37EC($gp)
    ctx->pc = 0x3634f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952980)));
    // 0x3634f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3634f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3634f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3634f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3634fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3634fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x363500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x363504: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x363504u;
    {
        const bool branch_taken_0x363504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x363508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363504u;
        // 0x363508: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363504) {
            ctx->pc = 0x363588u;
            goto label_363588;
        }
    }
    ctx->pc = 0x36350Cu;
    // 0x36350c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x36350cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x363510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x363510u;
    {
        const bool branch_taken_0x363510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363510u;
        // 0x363514: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363510) {
            ctx->pc = 0x363528u;
            goto label_363528;
        }
    }
    ctx->pc = 0x363518u;
    // 0x363518: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x363518u;
    {
        const bool branch_taken_0x363518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363518u;
        // 0x36351c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363518) {
            ctx->pc = 0x363538u;
            goto label_363538;
        }
    }
    ctx->pc = 0x363520u;
    // 0x363520: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x363520u;
    {
        const bool branch_taken_0x363520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363520u;
        // 0x363524: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363520) {
            ctx->pc = 0x3635B8u;
            goto label_3635b8;
        }
    }
    ctx->pc = 0x363528u;
label_363528:
    // 0x363528: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x363528u;
    {
        const bool branch_taken_0x363528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363528u;
        // 0x36352c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363528) {
            ctx->pc = 0x3635A8u;
            goto label_3635a8;
        }
    }
    ctx->pc = 0x363530u;
    // 0x363530: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x363530u;
    {
        const bool branch_taken_0x363530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363530u;
        // 0x363534: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363530) {
            ctx->pc = 0x3635B8u;
            goto label_3635b8;
        }
    }
    ctx->pc = 0x363538u;
label_363538:
    // 0x363538: 0x8f83c800  lw          $v1, -0x3800($gp)
    ctx->pc = 0x363538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952960)));
    // 0x36353c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x36353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x363540: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x363540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363544: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x363544u;
    {
        const bool branch_taken_0x363544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363544) {
            ctx->pc = 0x363548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363544u;
            // 0x363548: 0xaf83cc44  sw          $v1, -0x33BC($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294954052), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363554u;
            goto label_363554;
        }
    }
    ctx->pc = 0x36354Cu;
    // 0x36354c: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x36354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x363550: 0xaf82cc44  sw          $v0, -0x33BC($gp)
    ctx->pc = 0x363550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954052), GPR_U32(ctx, 2));
label_363554:
    // 0x363554: 0xc0d8c16  jal         func_363058
    ctx->pc = 0x363554u;
    SET_GPR_U32(ctx, 31, 0x36355Cu);
    ctx->pc = 0x363558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363554u;
    // 0x363558: 0x8f86cc44  lw          $a2, -0x33BC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363058u, 0x363554u, 0x36355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36355Cu;
label_36355c:
    // 0x36355c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36355Cu;
    {
        const bool branch_taken_0x36355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36355Cu;
        // 0x363560: 0xaf82cc48  sw          $v0, -0x33B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36355c) {
            ctx->pc = 0x363570u;
            goto label_363570;
        }
    }
    ctx->pc = 0x363564u;
    // 0x363564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x363564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363568: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x363568u;
    {
        const bool branch_taken_0x363568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363568u;
        // 0x36356c: 0xaf82c814  sw          $v0, -0x37EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363568) {
            ctx->pc = 0x3635B0u;
            goto label_3635b0;
        }
    }
    ctx->pc = 0x363570u;
label_363570:
    // 0x363570: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363574: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363574u;
    SET_GPR_U32(ctx, 31, 0x36357Cu);
    ctx->pc = 0x363578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363574u;
    // 0x363578: 0x24847798  addiu       $a0, $a0, 0x7798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363574u, 0x36357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36357Cu;
label_36357c:
    // 0x36357c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x36357Cu;
    {
        const bool branch_taken_0x36357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36357Cu;
        // 0x363580: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36357c) {
            ctx->pc = 0x3635B4u;
            goto label_3635b4;
        }
    }
    ctx->pc = 0x363584u;
    // 0x363584: 0x0  nop
    ctx->pc = 0x363584u;
    // NOP
label_363588:
    // 0x363588: 0xc0d8c1c  jal         func_363070
    ctx->pc = 0x363588u;
    SET_GPR_U32(ctx, 31, 0x363590u);
    ctx->pc = 0x36358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363588u;
    // 0x36358c: 0x8f84cc48  lw          $a0, -0x33B8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363070u, 0x363588u, 0x363590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363590u;
label_363590:
    // 0x363590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363594: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x363594u;
    {
        const bool branch_taken_0x363594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x363598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363594u;
        // 0x363598: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363594) {
            ctx->pc = 0x3635B4u;
            goto label_3635b4;
        }
    }
    ctx->pc = 0x36359Cu;
    // 0x36359c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3635a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3635A0u;
    {
        const bool branch_taken_0x3635a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3635A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635A0u;
        // 0x3635a4: 0xaf82c814  sw          $v0, -0x37EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635a0) {
            ctx->pc = 0x3635B0u;
            goto label_3635b0;
        }
    }
    ctx->pc = 0x3635A8u;
label_3635a8:
    // 0x3635a8: 0xaf80c814  sw          $zero, -0x37EC($gp)
    ctx->pc = 0x3635a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952980), GPR_U32(ctx, 0));
    // 0x3635ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3635acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3635b0:
    // 0x3635b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3635b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3635b4:
    // 0x3635b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3635b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3635b8:
    // 0x3635b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3635b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3635bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3635BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3635C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635BCu;
        // 0x3635c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3635BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3635C4u;
    // 0x3635c4: 0x0  nop
    ctx->pc = 0x3635c4u;
    // NOP
label_3635c8:
    // 0x3635c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3635c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3635cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3635ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3635d0: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x3635d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3635d4: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x3635d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3635d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3635d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3635dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3635dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3635e0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3635e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3635e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3635e8: 0x30d4ffff  andi        $s4, $a2, 0xFFFF
    ctx->pc = 0x3635e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3635ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3635ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3635f0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3635f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3635f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3635f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3635f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3635FCu;
    {
        const bool branch_taken_0x3635fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635FCu;
        // 0x363600: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635fc) {
            ctx->pc = 0x363620u;
            goto label_363620;
        }
    }
    ctx->pc = 0x363604u;
    // 0x363604: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x363608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36360c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36360Cu;
    SET_GPR_U32(ctx, 31, 0x363614u);
    ctx->pc = 0x363610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36360Cu;
    // 0x363610: 0x248477c8  addiu       $a0, $a0, 0x77C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36360Cu, 0x363614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363614u;
label_363614:
    // 0x363614: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x363614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x363618: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x363618u;
    {
        const bool branch_taken_0x363618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363618u;
        // 0x36361c: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363618) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x363620u;
label_363620:
    // 0x363620: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x363620u;
    {
        const bool branch_taken_0x363620 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x363624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363620u;
        // 0x363624: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363620) {
            ctx->pc = 0x363640u;
            goto label_363640;
        }
    }
    ctx->pc = 0x363628u;
    // 0x363628: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363628u;
    SET_GPR_U32(ctx, 31, 0x363630u);
    ctx->pc = 0x36362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363628u;
    // 0x36362c: 0x24847808  addiu       $a0, $a0, 0x7808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363628u, 0x363630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363630u;
label_363630:
    // 0x363630: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x363630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x363634: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x363634u;
    {
        const bool branch_taken_0x363634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363634u;
        // 0x363638: 0x34420027  ori         $v0, $v0, 0x27 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363634) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x36363Cu;
    // 0x36363c: 0x0  nop
    ctx->pc = 0x36363cu;
    // NOP
label_363640:
    // 0x363640: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x363640u;
    {
        const bool branch_taken_0x363640 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x363640) {
            ctx->pc = 0x363660u;
            goto label_363660;
        }
    }
    ctx->pc = 0x363648u;
    // 0x363648: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36364c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36364Cu;
    SET_GPR_U32(ctx, 31, 0x363654u);
    ctx->pc = 0x363650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36364Cu;
    // 0x363650: 0x24847840  addiu       $a0, $a0, 0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36364Cu, 0x363654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363654u;
label_363654:
    // 0x363654: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x363654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x363658: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x363658u;
    {
        const bool branch_taken_0x363658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363658u;
        // 0x36365c: 0x34420037  ori         $v0, $v0, 0x37 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363658) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x363660u;
label_363660:
    // 0x363660: 0xc0d7bc2  jal         func_35EF08
    ctx->pc = 0x363660u;
    SET_GPR_U32(ctx, 31, 0x363668u);
    ctx->pc = 0x363664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363660u;
    // 0x363664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF08u, 0x363660u, 0x363668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363668u;
label_363668:
    // 0x363668: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363668u;
    {
        const bool branch_taken_0x363668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x36366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363668u;
        // 0x36366c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363668) {
            ctx->pc = 0x363688u;
            goto label_363688;
        }
    }
    ctx->pc = 0x363670u;
    // 0x363670: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363674: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363674u;
    SET_GPR_U32(ctx, 31, 0x36367Cu);
    ctx->pc = 0x363678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363674u;
    // 0x363678: 0x24847880  addiu       $a0, $a0, 0x7880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363674u, 0x36367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36367Cu;
label_36367c:
    // 0x36367c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x363680: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x363680u;
    {
        const bool branch_taken_0x363680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363680u;
        // 0x363684: 0x3442001d  ori         $v0, $v0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363680) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x363688u;
label_363688:
    // 0x363688: 0xc0d7dde  jal         func_35F778
    ctx->pc = 0x363688u;
    SET_GPR_U32(ctx, 31, 0x363690u);
    ctx->pc = 0x36368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363688u;
    // 0x36368c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F778u, 0x363688u, 0x363690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363690u;
label_363690:
    // 0x363690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x363690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363694: 0xc0d7bd8  jal         func_35EF60
    ctx->pc = 0x363694u;
    SET_GPR_U32(ctx, 31, 0x36369Cu);
    ctx->pc = 0x363698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363694u;
    // 0x363698: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF60u, 0x363694u, 0x36369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36369Cu;
label_36369c:
    // 0x36369c: 0xc0d7c1c  jal         func_35F070
    ctx->pc = 0x36369Cu;
    SET_GPR_U32(ctx, 31, 0x3636A4u);
    ctx->pc = 0x3636A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36369Cu;
    // 0x3636a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F070u, 0x36369Cu, 0x3636A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3636A4u;
label_3636a4:
    // 0x3636a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3636a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3636a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3636acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3636b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636b4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3636b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636b8: 0xc0d8b5e  jal         func_362D78
    ctx->pc = 0x3636B8u;
    SET_GPR_U32(ctx, 31, 0x3636C0u);
    ctx->pc = 0x3636BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3636B8u;
    // 0x3636bc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D78u, 0x3636B8u, 0x3636C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3636C0u;
label_3636c0:
    // 0x3636c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3636c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3636c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3636c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3636C8u;
    {
        const bool branch_taken_0x3636c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3636CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636C8u;
        // 0x3636cc: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3636c8) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x3636D0u;
    // 0x3636d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3636d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3636d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3636d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3636d8:
    // 0x3636d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3636d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3636dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3636dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3636e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3636e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3636e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3636e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3636e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3636e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3636ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3636ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3636f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3636f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3636f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3636F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3636F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636F4u;
        // 0x3636f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3636F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3636FCu;
    // 0x3636fc: 0x0  nop
    ctx->pc = 0x3636fcu;
    // NOP
label_363700:
    // 0x363700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363704: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x363704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36370c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x36370cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363714: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x363714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36371c: 0x80d8d72  j           func_3635C8
    ctx->pc = 0x36371Cu;
    ctx->pc = 0x363720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36371Cu;
    // 0x363720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3635C8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3635c8;
    ctx->pc = 0x363724u;
    // 0x363724: 0x0  nop
    ctx->pc = 0x363724u;
    // NOP
label_363728:
    // 0x363728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36372c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x36372cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363734: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36373c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36373cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363744: 0x80d8d72  j           func_3635C8
    ctx->pc = 0x363744u;
    ctx->pc = 0x363748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363744u;
    // 0x363748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3635C8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3635c8;
    ctx->pc = 0x36374Cu;
    // 0x36374c: 0x0  nop
    ctx->pc = 0x36374cu;
    // NOP
label_363750:
    // 0x363750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363754: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x363754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36375c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x36375cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x363760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363764: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x363764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36376c: 0x80d8d72  j           func_3635C8
    ctx->pc = 0x36376Cu;
    ctx->pc = 0x363770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36376Cu;
    // 0x363770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3635C8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3635c8;
    ctx->pc = 0x363774u;
    // 0x363774: 0x0  nop
    ctx->pc = 0x363774u;
    // NOP
label_363778:
    // 0x363778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36377c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x36377cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363784: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x363788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36378c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36378cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363794: 0x80d8d72  j           func_3635C8
    ctx->pc = 0x363794u;
    ctx->pc = 0x363798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363794u;
    // 0x363798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3635C8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3635c8;
    ctx->pc = 0x36379Cu;
    // 0x36379c: 0x0  nop
    ctx->pc = 0x36379cu;
    // NOP
label_3637a0:
    // 0x3637a0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3637a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3637a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3637a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3637a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3637acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3637b0: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x3637b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3637b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3637b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3637b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3637bc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3637bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3637c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637c4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3637c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3637c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3637cc: 0xc0d8b5e  jal         func_362D78
    ctx->pc = 0x3637CCu;
    SET_GPR_U32(ctx, 31, 0x3637D4u);
    ctx->pc = 0x3637D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3637CCu;
    // 0x3637d0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D78u, 0x3637CCu, 0x3637D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3637D4u;
label_3637d4:
    // 0x3637d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3637d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3637d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3637d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3637dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3637DCu;
    {
        const bool branch_taken_0x3637dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3637E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637DCu;
        // 0x3637e0: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3637dc) {
            ctx->pc = 0x3637ECu;
            goto label_3637ec;
        }
    }
    ctx->pc = 0x3637E4u;
    // 0x3637e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3637e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3637e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3637e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3637ec:
    // 0x3637ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3637ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3637f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3637f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3637f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3637F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3637F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637F4u;
        // 0x3637f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3637F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3637FCu;
    // 0x3637fc: 0x0  nop
    ctx->pc = 0x3637fcu;
    // NOP
    // 0x363800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363804: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x363804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36380c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36380cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363814: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x363814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36381c: 0x80d8de8  j           func_3637A0
    ctx->pc = 0x36381Cu;
    ctx->pc = 0x363820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36381Cu;
    // 0x363820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3637A0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3637a0;
    ctx->pc = 0x363824u;
    // 0x363824: 0x0  nop
    ctx->pc = 0x363824u;
    // NOP
    // 0x363828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36382c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x36382cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363834: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x363834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x363838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36383c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36383cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363844: 0x80d8de8  j           func_3637A0
    ctx->pc = 0x363844u;
    ctx->pc = 0x363848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363844u;
    // 0x363848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3637A0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3637a0;
    ctx->pc = 0x36384Cu;
    // 0x36384c: 0x0  nop
    ctx->pc = 0x36384cu;
    // NOP
label_363850:
    // 0x363850: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x363850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x363854: 0x8c625d20  lw          $v0, 0x5D20($v1)
    ctx->pc = 0x363854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1D5D20u));
    // 0x363858: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x363858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36385c: 0x3e00008  jr          $ra
    ctx->pc = 0x36385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36385Cu;
        // 0x363860: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363864u;
    // 0x363864: 0x0  nop
    ctx->pc = 0x363864u;
    // NOP
    ctx->pc = 0x363868u;
}
