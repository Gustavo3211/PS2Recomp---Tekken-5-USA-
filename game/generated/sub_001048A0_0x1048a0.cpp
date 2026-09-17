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

// Function: sub_001048A0
// Address: 0x1048a0 - 0x104970
void sub_001048A0_0x1048a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001048A0_0x1048a0");
#endif

    switch (ctx->pc) {
        case 0x1048dcu: goto label_1048dc;
        case 0x10493cu: goto label_10493c;
        case 0x104944u: goto label_104944;
        default: break;
    }

    ctx->pc = 0x1048a0u;

    // 0x1048a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1048a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1048a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1048a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1048a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1048a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1048ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1048acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1048b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1048b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1048b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1048b8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1048b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1048bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1048BCu;
    {
        const bool branch_taken_0x1048bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1048C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048BCu;
        // 0x1048c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048bc) {
            ctx->pc = 0x1048E8u;
            goto label_1048e8;
        }
    }
    ctx->pc = 0x1048C4u;
    // 0x1048c4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1048c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1048c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1048C8u;
    {
        const bool branch_taken_0x1048c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048C8u;
        // 0x1048cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048c8) {
            ctx->pc = 0x1048E8u;
            goto label_1048e8;
        }
    }
    ctx->pc = 0x1048D0u;
    // 0x1048d0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1048d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1048d4: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x1048D4u;
    SET_GPR_U32(ctx, 31, 0x1048DCu);
    ctx->pc = 0x1048D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048D4u;
    // 0x1048d8: 0x24a5d888  addiu       $a1, $a1, -0x2778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x1048D4u, 0x1048DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048DCu;
label_1048dc:
    // 0x1048dc: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x1048dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x1048e0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1048e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1048e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1048e8:
    // 0x1048e8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1048E8u;
    {
        const bool branch_taken_0x1048e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1048ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048E8u;
        // 0x1048ec: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048e8) {
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x1048F0u;
    // 0x1048f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1048F0u;
    {
        const bool branch_taken_0x1048f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048F0u;
        // 0x1048f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048f0) {
            ctx->pc = 0x104908u;
            goto label_104908;
        }
    }
    ctx->pc = 0x1048F8u;
    // 0x1048f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1048F8u;
    {
        const bool branch_taken_0x1048f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1048FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048F8u;
        // 0x1048fc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048f8) {
            ctx->pc = 0x10491Cu;
            goto label_10491c;
        }
    }
    ctx->pc = 0x104900u;
    // 0x104900: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104900u;
    {
        const bool branch_taken_0x104900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104900u;
        // 0x104904: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104900) {
            ctx->pc = 0x104930u;
            goto label_104930;
        }
    }
    ctx->pc = 0x104908u;
label_104908:
    // 0x104908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x104908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10490c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10490Cu;
    {
        const bool branch_taken_0x10490c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10490Cu;
        // 0x104910: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10490c) {
            ctx->pc = 0x10492Cu;
            goto label_10492c;
        }
    }
    ctx->pc = 0x104914u;
    // 0x104914: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x104914u;
    {
        const bool branch_taken_0x104914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104914u;
        // 0x104918: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104914) {
            ctx->pc = 0x10493Cu;
            goto label_10493c;
        }
    }
    ctx->pc = 0x10491Cu;
label_10491c:
    // 0x10491c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10491Cu;
    {
        const bool branch_taken_0x10491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10491Cu;
        // 0x104920: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10491c) {
            ctx->pc = 0x10493Cu;
            goto label_10493c;
        }
    }
    ctx->pc = 0x104924u;
label_104924:
    // 0x104924: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104924u;
    {
        const bool branch_taken_0x104924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104924u;
        // 0x104928: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104924) {
            ctx->pc = 0x10493Cu;
            goto label_10493c;
        }
    }
    ctx->pc = 0x10492Cu;
label_10492c:
    // 0x10492c: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x10492cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_104930:
    // 0x104930: 0x24a5d8a8  addiu       $a1, $a1, -0x2758
    ctx->pc = 0x104930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957224));
    // 0x104934: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x104934u;
    SET_GPR_U32(ctx, 31, 0x10493Cu);
    ctx->pc = 0x104938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104934u;
    // 0x104938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x104934u, 0x10493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10493Cu;
label_10493c:
    // 0x10493c: 0xc041c66  jal         func_107198
    ctx->pc = 0x10493Cu;
    SET_GPR_U32(ctx, 31, 0x104944u);
    ctx->pc = 0x104940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10493Cu;
    // 0x104940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107198u, 0x10493Cu, 0x104944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104944u;
label_104944:
    // 0x104944: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104948: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x104948u;
    {
        const bool branch_taken_0x104948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104948u;
        // 0x10494c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104948) {
            ctx->pc = 0x104954u;
            goto label_104954;
        }
    }
    ctx->pc = 0x104950u;
    // 0x104950: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x104950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_104954:
    // 0x104954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104958: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x104958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10495c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10495cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104964: 0x3e00008  jr          $ra
    ctx->pc = 0x104964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104964u;
        // 0x104968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10496Cu;
    // 0x10496c: 0x0  nop
    ctx->pc = 0x10496cu;
    // NOP
    ctx->pc = 0x104970u;
}
