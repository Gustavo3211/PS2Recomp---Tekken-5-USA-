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

// Function: sub_003048A8
// Address: 0x3048a8 - 0x304950
void sub_003048A8_0x3048a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003048A8_0x3048a8");
#endif

    switch (ctx->pc) {
        case 0x3048d4u: goto label_3048d4;
        case 0x30490cu: goto label_30490c;
        case 0x304924u: goto label_304924;
        case 0x304930u: goto label_304930;
        default: break;
    }

    ctx->pc = 0x3048a8u;

    // 0x3048a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3048a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3048ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3048acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3048b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3048b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3048b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3048b8: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x3048b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3048bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3048bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3048c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3048c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3048c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3048c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3048c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048cc: 0xc0bfc94  jal         func_2FF250
    ctx->pc = 0x3048CCu;
    SET_GPR_U32(ctx, 31, 0x3048D4u);
    ctx->pc = 0x3048D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048CCu;
    // 0x3048d0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF250u, 0x3048CCu, 0x3048D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048D4u;
label_3048d4:
    // 0x3048d4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x3048d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x3048d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3048d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3048dc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3048DCu;
    {
        const bool branch_taken_0x3048dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3048E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048DCu;
        // 0x3048e0: 0x24654d78  addiu       $a1, $v1, 0x4D78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 19832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048dc) {
            ctx->pc = 0x3048F0u;
            goto label_3048f0;
        }
    }
    ctx->pc = 0x3048E4u;
    // 0x3048e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3048E4u;
    {
        const bool branch_taken_0x3048e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048E4u;
        // 0x3048e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048e4) {
            ctx->pc = 0x304934u;
            goto label_304934;
        }
    }
    ctx->pc = 0x3048ECu;
    // 0x3048ec: 0x0  nop
    ctx->pc = 0x3048ecu;
    // NOP
label_3048f0:
    // 0x3048f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3048f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3048f4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3048f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3048f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3048FCu;
    {
        const bool branch_taken_0x3048fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048FCu;
        // 0x304900: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048fc) {
            ctx->pc = 0x30490Cu;
            goto label_30490c;
        }
    }
    ctx->pc = 0x304904u;
    // 0x304904: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x304904u;
    SET_GPR_U32(ctx, 31, 0x30490Cu);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x304904u, 0x30490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30490Cu;
label_30490c:
    // 0x30490c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30490Cu;
    {
        const bool branch_taken_0x30490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30490Cu;
        // 0x304910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30490c) {
            ctx->pc = 0x304924u;
            goto label_304924;
        }
    }
    ctx->pc = 0x304914u;
    // 0x304914: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x304914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304918: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x304918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30491c: 0xc0bfcb8  jal         func_2FF2E0
    ctx->pc = 0x30491Cu;
    SET_GPR_U32(ctx, 31, 0x304924u);
    ctx->pc = 0x304920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30491Cu;
    // 0x304920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF2E0u, 0x30491Cu, 0x304924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304924u;
label_304924:
    // 0x304924: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x304924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304928: 0xc0bfd60  jal         func_2FF580
    ctx->pc = 0x304928u;
    SET_GPR_U32(ctx, 31, 0x304930u);
    ctx->pc = 0x30492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304928u;
    // 0x30492c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF580u, 0x304928u, 0x304930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304930u;
label_304930:
    // 0x304930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304934:
    // 0x304934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30493c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30493cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304940: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x304940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304944: 0x3e00008  jr          $ra
    ctx->pc = 0x304944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304944u;
        // 0x304948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30494Cu;
    // 0x30494c: 0x0  nop
    ctx->pc = 0x30494cu;
    // NOP
    ctx->pc = 0x304950u;
}
