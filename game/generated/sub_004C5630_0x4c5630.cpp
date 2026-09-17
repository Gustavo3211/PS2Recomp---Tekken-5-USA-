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

// Function: sub_004C5630
// Address: 0x4c5630 - 0x4c56f8
void sub_004C5630_0x4c5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5630_0x4c5630");
#endif

    switch (ctx->pc) {
        case 0x4c5634u: goto label_4c5634;
        case 0x4c5664u: goto label_4c5664;
        case 0x4c566cu: goto label_4c566c;
        case 0x4c5674u: goto label_4c5674;
        case 0x4c5684u: goto label_4c5684;
        case 0x4c56d8u: goto label_4c56d8;
        case 0x4c56e0u: goto label_4c56e0;
        default: break;
    }

    ctx->pc = 0x4c5630u;

    // 0x4c5630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c5630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5634:
    // 0x4c5634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5638: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c563c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c563cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5640: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c5640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c5644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5648: 0x8131594  j           func_4C5650
    ctx->pc = 0x4C5648u;
    ctx->pc = 0x4C564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5648u;
    // 0x4c564c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5650u;
    goto label_4c5650;
    ctx->pc = 0x4C5650u;
label_4c5650:
    // 0x4c5650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c5654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c5654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c5658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c565c: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C565Cu;
    SET_GPR_U32(ctx, 31, 0x4C5664u);
    ctx->pc = 0x4C5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C565Cu;
    // 0x4c5660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C565Cu, 0x4C5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5664u;
label_4c5664:
    // 0x4c5664: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4C5664u;
    SET_GPR_U32(ctx, 31, 0x4C566Cu);
    ctx->pc = 0x4C5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5664u;
    // 0x4c5668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4C5664u, 0x4C566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C566Cu;
label_4c566c:
    // 0x4c566c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C566Cu;
    SET_GPR_U32(ctx, 31, 0x4C5674u);
    ctx->pc = 0x4C5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C566Cu;
    // 0x4c5670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C566Cu, 0x4C5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5674u;
label_4c5674:
    // 0x4c5674: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c5674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c5678: 0x8c450efc  lw          $a1, 0xEFC($v0)
    ctx->pc = 0x4c5678u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EFCu));
    // 0x4c567c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C567Cu;
    SET_GPR_U32(ctx, 31, 0x4C5684u);
    ctx->pc = 0x4C5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C567Cu;
    // 0x4c5680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C567Cu, 0x4C5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5684u;
label_4c5684:
    // 0x4c5684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c5684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c5688: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5688u;
    {
        const bool branch_taken_0x4c5688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5688u;
        // 0x4c568c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5688) {
            ctx->pc = 0x4C56A0u;
            goto label_4c56a0;
        }
    }
    ctx->pc = 0x4C5690u;
    // 0x4c5690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5694: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c5694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5698: 0x81315ac  j           func_4C56B0
    ctx->pc = 0x4C5698u;
    ctx->pc = 0x4C569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5698u;
    // 0x4c569c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C56B0u;
    goto label_4c56b0;
    ctx->pc = 0x4C56A0u;
label_4c56a0:
    // 0x4c56a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c56a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c56a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c56a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c56a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C56A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C56A8u;
        // 0x4c56ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C56A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C56B0u;
label_4c56b0:
    // 0x4c56b0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c56b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c56b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c56b8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4c56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4c56bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c56c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c56c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c56c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c56c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c56c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c56cc: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4c56ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4c56d0: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C56D0u;
    SET_GPR_U32(ctx, 31, 0x4C56D8u);
    ctx->pc = 0x4C56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C56D0u;
    // 0x4c56d4: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C56D0u, 0x4C56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C56D8u;
label_4c56d8:
    // 0x4c56d8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C56D8u;
    SET_GPR_U32(ctx, 31, 0x4C56E0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C56D8u, 0x4C56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C56E0u;
label_4c56e0:
    // 0x4c56e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c56e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c56e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c56e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c56e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c56ec: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C56ECu;
    ctx->pc = 0x4C56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C56ECu;
    // 0x4c56f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C56F4u;
    // 0x4c56f4: 0x0  nop
    ctx->pc = 0x4c56f4u;
    // NOP
    ctx->pc = 0x4c56f8u;
}
