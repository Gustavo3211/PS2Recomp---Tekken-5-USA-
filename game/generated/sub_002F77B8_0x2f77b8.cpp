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

// Function: sub_002F77B8
// Address: 0x2f77b8 - 0x2f7888
void sub_002F77B8_0x2f77b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F77B8_0x2f77b8");
#endif

    switch (ctx->pc) {
        case 0x2f77fcu: goto label_2f77fc;
        case 0x2f7818u: goto label_2f7818;
        case 0x2f7830u: goto label_2f7830;
        case 0x2f7864u: goto label_2f7864;
        default: break;
    }

    ctx->pc = 0x2f77b8u;

    // 0x2f77b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f77b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f77bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f77bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f77c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f77c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f77c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f77c8: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2f77cc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F77CCu;
    {
        const bool branch_taken_0x2f77cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77CCu;
        // 0x2f77d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77cc) {
            ctx->pc = 0x2F7874u;
            goto label_2f7874;
        }
    }
    ctx->pc = 0x2F77D4u;
    // 0x2f77d4: 0x51b03  sra         $v1, $a1, 12
    ctx->pc = 0x2f77d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 12));
    // 0x2f77d8: 0x51383  sra         $v0, $a1, 14
    ctx->pc = 0x2f77d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 14));
    // 0x2f77dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f77e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f77e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f77e4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x2f77e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2f77e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f77ec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F77ECu;
    {
        const bool branch_taken_0x2f77ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77ECu;
        // 0x2f77f0: 0xae0500f0  sw          $a1, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77ec) {
            ctx->pc = 0x2F7808u;
            goto label_2f7808;
        }
    }
    ctx->pc = 0x2F77F4u;
    // 0x2f77f4: 0xc0bddc0  jal         func_2F7700
    ctx->pc = 0x2F77F4u;
    SET_GPR_U32(ctx, 31, 0x2F77FCu);
    ctx->pc = 0x2F7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7700u, 0x2F77F4u, 0x2F77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77FCu;
label_2f77fc:
    // 0x2f77fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F77FCu;
    {
        const bool branch_taken_0x2f77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77FCu;
        // 0x2f7800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77fc) {
            ctx->pc = 0x2F781Cu;
            goto label_2f781c;
        }
    }
    ctx->pc = 0x2F7804u;
    // 0x2f7804: 0x0  nop
    ctx->pc = 0x2f7804u;
    // NOP
label_2f7808:
    // 0x2f7808: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7808u;
    {
        const bool branch_taken_0x2f7808 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f7808) {
            ctx->pc = 0x2F780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7808u;
            // 0x2f780c: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7820u;
            goto label_2f7820;
        }
    }
    ctx->pc = 0x2F7810u;
    // 0x2f7810: 0xc0bddd6  jal         func_2F7758
    ctx->pc = 0x2F7810u;
    SET_GPR_U32(ctx, 31, 0x2F7818u);
    ctx->pc = 0x2F7758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7758u, 0x2F7810u, 0x2F7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7818u;
label_2f7818:
    // 0x2f7818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f781c:
    // 0x2f781c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2f781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2f7820:
    // 0x2f7820: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7820u;
    {
        const bool branch_taken_0x2f7820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7820u;
        // 0x2f7824: 0xae0500ec  sw          $a1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7820) {
            ctx->pc = 0x2F7868u;
            goto label_2f7868;
        }
    }
    ctx->pc = 0x2F7828u;
    // 0x2f7828: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F7828u;
    SET_GPR_U32(ctx, 31, 0x2F7830u);
    ctx->pc = 0x2F782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7828u;
    // 0x2f782c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F7828u, 0x2F7830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7830u;
label_2f7830:
    // 0x2f7830: 0x26050164  addiu       $a1, $s0, 0x164
    ctx->pc = 0x2f7830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2f7834: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f7834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7838: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7838u;
    {
        const bool branch_taken_0x2f7838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7838) {
            ctx->pc = 0x2F783Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7838u;
            // 0x2f783c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7854u;
            goto label_2f7854;
        }
    }
    ctx->pc = 0x2F7840u;
    // 0x2f7840: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f7844: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f7844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f7848: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7848u;
    {
        const bool branch_taken_0x2f7848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7848) {
            ctx->pc = 0x2F785Cu;
            goto label_2f785c;
        }
    }
    ctx->pc = 0x2F7850u;
    // 0x2f7850: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f7850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f7854:
    // 0x2f7854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f7854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7858: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f7858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f785c:
    // 0x2f785c: 0xc0be05e  jal         func_2F8178
    ctx->pc = 0x2F785Cu;
    SET_GPR_U32(ctx, 31, 0x2F7864u);
    ctx->pc = 0x2F8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8178u, 0x2F785Cu, 0x2F7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7864u;
label_2f7864:
    // 0x2f7864: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2f7864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2f7868:
    // 0x2f7868: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x2f7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x2f786c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2f786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2f7870: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f7870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f7874:
    // 0x2f7874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f7878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f787c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F787Cu;
        // 0x2f7880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F787Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7884u;
    // 0x2f7884: 0x0  nop
    ctx->pc = 0x2f7884u;
    // NOP
    ctx->pc = 0x2f7888u;
}
