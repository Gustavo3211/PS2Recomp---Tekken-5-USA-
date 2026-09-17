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

// Function: sub_0031E678
// Address: 0x31e678 - 0x31e700
void sub_0031E678_0x31e678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E678_0x31e678");
#endif

    switch (ctx->pc) {
        case 0x31e678u: goto label_31e678;
        case 0x31e67cu: goto label_31e67c;
        case 0x31e680u: goto label_31e680;
        case 0x31e684u: goto label_31e684;
        case 0x31e688u: goto label_31e688;
        case 0x31e68cu: goto label_31e68c;
        case 0x31e690u: goto label_31e690;
        case 0x31e694u: goto label_31e694;
        case 0x31e698u: goto label_31e698;
        case 0x31e69cu: goto label_31e69c;
        case 0x31e6a0u: goto label_31e6a0;
        case 0x31e6a4u: goto label_31e6a4;
        case 0x31e6a8u: goto label_31e6a8;
        case 0x31e6acu: goto label_31e6ac;
        case 0x31e6b0u: goto label_31e6b0;
        case 0x31e6b4u: goto label_31e6b4;
        case 0x31e6b8u: goto label_31e6b8;
        case 0x31e6bcu: goto label_31e6bc;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e6c4u: goto label_31e6c4;
        case 0x31e6c8u: goto label_31e6c8;
        case 0x31e6ccu: goto label_31e6cc;
        case 0x31e6d0u: goto label_31e6d0;
        case 0x31e6d4u: goto label_31e6d4;
        case 0x31e6d8u: goto label_31e6d8;
        case 0x31e6dcu: goto label_31e6dc;
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        default: break;
    }

    ctx->pc = 0x31e678u;

label_31e678:
    // 0x31e678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31e67c:
    // 0x31e67c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e680:
    // 0x31e680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e684:
    // 0x31e684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e688:
    // 0x31e688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31e68c:
    // 0x31e68c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31e68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e690:
    // 0x31e690: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31e694:
    // 0x31e694: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x31e694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_31e698:
    // 0x31e698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_31e69c:
    // 0x31e69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e6a0:
    // 0x31e6a0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x31e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_31e6a4:
    // 0x31e6a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31e6a8:
    // 0x31e6a8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e6ac:
    // 0x31e6ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e6b0:
    // 0x31e6b0: 0x40f809  jalr        $v0
label_31e6b4:
    if (ctx->pc == 0x31E6B4u) {
        ctx->pc = 0x31E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6B0u;
        // 0x31e6b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6B8u;
        goto label_31e6b8;
    }
    ctx->pc = 0x31E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E6B8u);
        ctx->pc = 0x31E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6B0u;
        // 0x31e6b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6B0u, 0x31E6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E6B8u;
label_31e6b8:
    // 0x31e6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e6bc:
    // 0x31e6bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31e6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e6c0:
    // 0x31e6c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_31e6c4:
    if (ctx->pc == 0x31E6C4u) {
        ctx->pc = 0x31E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6C0u;
        // 0x31e6c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6C8u;
        goto label_31e6c8;
    }
    ctx->pc = 0x31E6C0u;
    {
        const bool branch_taken_0x31e6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6C0u;
        // 0x31e6c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6c0) {
            ctx->pc = 0x31E6E4u;
            goto label_31e6e4;
        }
    }
    ctx->pc = 0x31E6C8u;
label_31e6c8:
    // 0x31e6c8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x31e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_31e6cc:
    // 0x31e6cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x31e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_31e6d0:
    // 0x31e6d0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e6d4:
    // 0x31e6d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e6d8:
    // 0x31e6d8: 0x40f809  jalr        $v0
label_31e6dc:
    if (ctx->pc == 0x31E6DCu) {
        ctx->pc = 0x31E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6D8u;
        // 0x31e6dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6E0u;
        goto label_31e6e0;
    }
    ctx->pc = 0x31E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E6E0u);
        ctx->pc = 0x31E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6D8u;
        // 0x31e6dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6D8u, 0x31E6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e6e4:
    // 0x31e6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e6e8:
    // 0x31e6e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e6ec:
    // 0x31e6ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31e6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e6f0:
    // 0x31e6f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31e6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31e6f4:
    // 0x31e6f4: 0x3e00008  jr          $ra
label_31e6f8:
    if (ctx->pc == 0x31E6F8u) {
        ctx->pc = 0x31E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F4u;
        // 0x31e6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6FCu;
        goto label_31e6fc;
    }
    ctx->pc = 0x31E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F4u;
        // 0x31e6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6FCu;
label_31e6fc:
    // 0x31e6fc: 0x0  nop
    ctx->pc = 0x31e6fcu;
    // NOP
    ctx->pc = 0x31e700u;
}
