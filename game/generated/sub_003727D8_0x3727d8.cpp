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

// Function: sub_003727D8
// Address: 0x3727d8 - 0x3728b8
void sub_003727D8_0x3727d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003727D8_0x3727d8");
#endif

    switch (ctx->pc) {
        case 0x3727fcu: goto label_3727fc;
        case 0x372814u: goto label_372814;
        default: break;
    }

    ctx->pc = 0x3727d8u;

    // 0x3727d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3727d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3727dc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3727dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3727e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3727e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3727e4: 0x24507620  addiu       $s0, $v0, 0x7620
    ctx->pc = 0x3727e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30240));
    // 0x3727e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3727e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7620u));
    // 0x3727ec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3727ECu;
    {
        const bool branch_taken_0x3727ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3727F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727ECu;
        // 0x3727f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727ec) {
            ctx->pc = 0x372814u;
            goto label_372814;
        }
    }
    ctx->pc = 0x3727F4u;
    // 0x3727f4: 0xc0dc59e  jal         func_371678
    ctx->pc = 0x3727F4u;
    SET_GPR_U32(ctx, 31, 0x3727FCu);
    ctx->pc = 0x371678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371678u, 0x3727F4u, 0x3727FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727FCu;
label_3727fc:
    // 0x3727fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3727fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372800: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372804: 0x24a51390  addiu       $a1, $a1, 0x1390
    ctx->pc = 0x372804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5008));
    // 0x372808: 0x24c67580  addiu       $a2, $a2, 0x7580
    ctx->pc = 0x372808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30080));
    // 0x37280c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x37280Cu;
    SET_GPR_U32(ctx, 31, 0x372814u);
    ctx->pc = 0x372810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37280Cu;
    // 0x372810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x37280Cu, 0x372814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372814u;
label_372814:
    // 0x372814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37281c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37281cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372820: 0x3e00008  jr          $ra
    ctx->pc = 0x372820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372820u;
        // 0x372824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372828u;
    // 0x372828: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x372828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x37282c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372830u;
    {
        const bool branch_taken_0x372830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372830u;
        // 0x372834: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372830) {
            ctx->pc = 0x372848u;
            goto label_372848;
        }
    }
    ctx->pc = 0x372838u;
    // 0x372838: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x372838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x37283c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x37283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372840: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372840u;
    {
        const bool branch_taken_0x372840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372840) {
            ctx->pc = 0x372854u;
            goto label_372854;
        }
    }
    ctx->pc = 0x372848u;
label_372848:
    // 0x372848: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x372848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37284c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372850: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x372850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_372854:
    // 0x372854: 0x3e00008  jr          $ra
    ctx->pc = 0x372854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372854u;
        // 0x372858: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37285Cu;
    // 0x37285c: 0x0  nop
    ctx->pc = 0x37285cu;
    // NOP
    // 0x372860: 0x3e00008  jr          $ra
    ctx->pc = 0x372860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372860u;
        // 0x372864: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372868u;
    // 0x372868: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37286c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37286cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x372870: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x372870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x372874: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x372874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x372878: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x372878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x37287c: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x37287cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x372880: 0x24c60ac0  addiu       $a2, $a2, 0xAC0
    ctx->pc = 0x372880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2752));
    // 0x372884: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x372884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372888: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x372888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37288c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x37288cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x372890: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x372890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x372894: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x372894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x372898: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x372898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x37289c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x37289cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x3728a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3728a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3728a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3728a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3728a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3728A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3728ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728A8u;
        // 0x3728ac: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3728A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3728B0u;
    // 0x3728b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3728B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3728B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728B0u;
        // 0x3728b4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3728B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3728B8u;
}
