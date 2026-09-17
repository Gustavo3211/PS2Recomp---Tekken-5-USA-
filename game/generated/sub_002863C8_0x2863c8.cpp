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

// Function: sub_002863C8
// Address: 0x2863c8 - 0x2864b8
void sub_002863C8_0x2863c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002863C8_0x2863c8");
#endif

    switch (ctx->pc) {
        case 0x286418u: goto label_286418;
        case 0x286430u: goto label_286430;
        case 0x28645cu: goto label_28645c;
        case 0x286470u: goto label_286470;
        case 0x286488u: goto label_286488;
        default: break;
    }

    ctx->pc = 0x2863c8u;

    // 0x2863c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2863c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2863cc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2863ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2863d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2863d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2863d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2863d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2863dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2863dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2863e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2863e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2863e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2863e8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2863E8u;
    {
        const bool branch_taken_0x2863e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2863ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863E8u;
        // 0x2863ec: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863e8) {
            ctx->pc = 0x286438u;
            goto label_286438;
        }
    }
    ctx->pc = 0x2863F0u;
    // 0x2863f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2863f4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2863f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2863f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2863f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2863fc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2863fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x286400: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x286400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x286404: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286408: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x286408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x28640c: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x28640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x286410: 0xc0d4662  jal         func_351988
    ctx->pc = 0x286410u;
    SET_GPR_U32(ctx, 31, 0x286418u);
    ctx->pc = 0x286414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286410u;
    // 0x286414: 0x24a55ee0  addiu       $a1, $a1, 0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351988u, 0x286410u, 0x286418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286418u;
label_286418:
    // 0x286418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28641c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286420: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x286420u;
    {
        const bool branch_taken_0x286420 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286420u;
        // 0x286424: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286420) {
            ctx->pc = 0x2864A4u;
            goto label_2864a4;
        }
    }
    ctx->pc = 0x286428u;
    // 0x286428: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286428u;
    SET_GPR_U32(ctx, 31, 0x286430u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286428u, 0x286430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286430u;
label_286430:
    // 0x286430: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x286430u;
    {
        const bool branch_taken_0x286430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286430u;
        // 0x286434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286430) {
            ctx->pc = 0x2864A8u;
            goto label_2864a8;
        }
    }
    ctx->pc = 0x286438u;
label_286438:
    // 0x286438: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28643c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x28643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x286440: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286444: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x286444u;
    {
        const bool branch_taken_0x286444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286444) {
            ctx->pc = 0x286448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286444u;
            // 0x286448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2864A8u;
            goto label_2864a8;
        }
    }
    ctx->pc = 0x28644Cu;
    // 0x28644c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28644Cu;
    {
        const bool branch_taken_0x28644c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28644c) {
            ctx->pc = 0x286468u;
            goto label_286468;
        }
    }
    ctx->pc = 0x286454u;
    // 0x286454: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286454u;
    SET_GPR_U32(ctx, 31, 0x28645Cu);
    ctx->pc = 0x286458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286454u;
    // 0x286458: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286454u, 0x28645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28645Cu;
label_28645c:
    // 0x28645c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28645Cu;
    {
        const bool branch_taken_0x28645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28645Cu;
        // 0x286460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28645c) {
            ctx->pc = 0x2864A8u;
            goto label_2864a8;
        }
    }
    ctx->pc = 0x286464u;
    // 0x286464: 0x0  nop
    ctx->pc = 0x286464u;
    // NOP
label_286468:
    // 0x286468: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286468u;
    SET_GPR_U32(ctx, 31, 0x286470u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286468u, 0x286470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286470u;
label_286470:
    // 0x286470: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x286470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x286474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286478: 0x5c2021  addu        $a0, $v0, $gp
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x28647c: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x28647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x286480: 0xc0d5049  jal         func_354124
    ctx->pc = 0x286480u;
    SET_GPR_U32(ctx, 31, 0x286488u);
    ctx->pc = 0x354124u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354124u, 0x286480u, 0x286488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286488u;
label_286488:
    // 0x286488: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x286488u;
    {
        const bool branch_taken_0x286488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286488) {
            ctx->pc = 0x28648Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286488u;
            // 0x28648c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2864A8u;
            goto label_2864a8;
        }
    }
    ctx->pc = 0x286490u;
    // 0x286490: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x286494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28649c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x28649cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2864a0: 0xac23b300  sw          $v1, -0x4D00($at)
    ctx->pc = 0x2864a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947584), GPR_U32(ctx, 3));
label_2864a4:
    // 0x2864a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2864a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2864a8:
    // 0x2864a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2864a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2864ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2864acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2864b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2864B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2864B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864B0u;
        // 0x2864b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2864B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2864B8u;
}
