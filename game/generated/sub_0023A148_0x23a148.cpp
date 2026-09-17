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

// Function: sub_0023A148
// Address: 0x23a148 - 0x23a238
void sub_0023A148_0x23a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A148_0x23a148");
#endif

    switch (ctx->pc) {
        case 0x23a180u: goto label_23a180;
        case 0x23a1a4u: goto label_23a1a4;
        case 0x23a1b0u: goto label_23a1b0;
        case 0x23a1d0u: goto label_23a1d0;
        case 0x23a1e4u: goto label_23a1e4;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a204u: goto label_23a204;
        case 0x23a210u: goto label_23a210;
        default: break;
    }

    ctx->pc = 0x23a148u;

    // 0x23a148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a14c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23a150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a158: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23a15c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a160: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23a160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a164: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23a168: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23a168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a16c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23a170: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a174: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23a174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23a178: 0x2455aab8  addiu       $s5, $v0, -0x5548
    ctx->pc = 0x23a178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945464));
    // 0x23a17c: 0x0  nop
    ctx->pc = 0x23a17cu;
    // NOP
label_23a180:
    // 0x23a180: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a184: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23A184u;
    {
        const bool branch_taken_0x23a184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A184u;
        // 0x23a188: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a184) {
            ctx->pc = 0x23A1B4u;
            goto label_23a1b4;
        }
    }
    ctx->pc = 0x23A18Cu;
    // 0x23a18c: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x23a18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x23a190: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x23a190u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x23a194: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x23a194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x23a198: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23a198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23a19c: 0xc08e800  jal         func_23A000
    ctx->pc = 0x23A19Cu;
    SET_GPR_U32(ctx, 31, 0x23A1A4u);
    ctx->pc = 0x23A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A19Cu;
    // 0x23a1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A000u, 0x23A19Cu, 0x23A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1A4u;
label_23a1a4:
    // 0x23a1a4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x23a1a8: 0xc08e800  jal         func_23A000
    ctx->pc = 0x23A1A8u;
    SET_GPR_U32(ctx, 31, 0x23A1B0u);
    ctx->pc = 0x23A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1A8u;
    // 0x23a1ac: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A000u, 0x23A1A8u, 0x23A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1B0u;
label_23a1b0:
    // 0x23a1b0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x23a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_23a1b4:
    // 0x23a1b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23a1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23a1b8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x23a1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23a1bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23A1BCu;
    {
        const bool branch_taken_0x23a1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1BCu;
        // 0x23a1c0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1bc) {
            ctx->pc = 0x23A180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a180;
        }
    }
    ctx->pc = 0x23A1C4u;
    // 0x23a1c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23a1c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1c8: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x23a1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x23a1cc: 0x0  nop
    ctx->pc = 0x23a1ccu;
    // NOP
label_23a1d0:
    // 0x23a1d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23a1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23a1d4: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x23a1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x23a1d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1dc: 0xc08e808  jal         func_23A020
    ctx->pc = 0x23A1DCu;
    SET_GPR_U32(ctx, 31, 0x23A1E4u);
    ctx->pc = 0x23A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1DCu;
    // 0x23a1e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A020u, 0x23A1DCu, 0x23A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1E4u;
label_23a1e4:
    // 0x23a1e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a1e8: 0xc08e808  jal         func_23A020
    ctx->pc = 0x23A1E8u;
    SET_GPR_U32(ctx, 31, 0x23A1F0u);
    ctx->pc = 0x23A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1E8u;
    // 0x23a1ec: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A020u, 0x23A1E8u, 0x23A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1F0u;
label_23a1f0:
    // 0x23a1f0: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x23a1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23a1f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23A1F4u;
    {
        const bool branch_taken_0x23a1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1F4u;
        // 0x23a1f8: 0x1380c0  sll         $s0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1f4) {
            ctx->pc = 0x23A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a1d0;
        }
    }
    ctx->pc = 0x23A1FCu;
    // 0x23a1fc: 0xc08e832  jal         func_23A0C8
    ctx->pc = 0x23A1FCu;
    SET_GPR_U32(ctx, 31, 0x23A204u);
    ctx->pc = 0x23A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1FCu;
    // 0x23a200: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A0C8u, 0x23A1FCu, 0x23A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A204u;
label_23a204:
    // 0x23a204: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x23a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x23a208: 0xc08e832  jal         func_23A0C8
    ctx->pc = 0x23A208u;
    SET_GPR_U32(ctx, 31, 0x23A210u);
    ctx->pc = 0x23A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A208u;
    // 0x23a20c: 0xae820040  sw          $v0, 0x40($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A0C8u, 0x23A208u, 0x23A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A210u;
label_23a210:
    // 0x23a210: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x23a210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x23a214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a21c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a224: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23a224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a228: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23a228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a22c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23a22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a230: 0x3e00008  jr          $ra
    ctx->pc = 0x23A230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A238u;
}
